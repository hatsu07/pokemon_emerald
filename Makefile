AS      := tools/binutils/bin/arm-none-eabi-as
LD      := tools/binutils/bin/arm-none-eabi-ld
OBJCOPY := tools/binutils/bin/arm-none-eabi-objcopy
SHA1SUM := sha1sum -c
GBAFIX  := tools/gbafix/gbafix
PREPROC := tools/preproc/preproc

BUILD_DIR         := build
ASM_BUILD_DIR     := $(BUILD_DIR)/asm
DATA_BUILD_DIR    := $(BUILD_DIR)/data
CHARMAP_BUILD_DIR := $(BUILD_DIR)/charmap

LD_SCRIPT_SOURCE := ld_script_jp.txt
LD_SCRIPT        := $(BUILD_DIR)/ld_script_jp.ld

include make_tools/graphics.mk

ASFLAGS := -mcpu=arm7tdmi

ASM_SOURCES  := $(wildcard asm/*.s)
DATA_SOURCES := $(wildcard data/*.s)

ASM_OBJECTS  := $(patsubst asm/%.s,$(ASM_BUILD_DIR)/%.o,$(ASM_SOURCES))
DATA_OBJECTS := $(patsubst data/%.s,$(DATA_BUILD_DIR)/%.o,$(DATA_SOURCES))
OBJFILE      := $(ASM_OBJECTS) $(DATA_OBJECTS)

NAME     := pokeemerald_jp
ROM      := $(BUILD_DIR)/$(NAME).gba
ELF      := $(BUILD_DIR)/$(NAME).elf
MAP      := $(BUILD_DIR)/$(NAME).map
TITLE    := POKEMON EMER
GAMECODE := BPEJ

# data/*.s は .string を含むため、結合charmapをpreprocへ渡す。
CHARMAP_PARTS := \
	data/charmap/charmap.txt \
	data/charmap/charmap_extra.txt

CHARMAP := $(CHARMAP_BUILD_DIR)/charmap_combined.txt

TEXT_SOURCES := $(wildcard data/text/*.inc data/text/generated/*.inc)

.PHONY: all compare clean distclean

all: $(ROM)

compare: $(ROM)
	cd $(BUILD_DIR) && $(SHA1SUM) ../rom_jp.sha1

# オブジェクト・最終成果物・一時リンカスクリプトを削除する。
# 画像変換結果は再生成コストが高いため残す。
clean:
	rm -rf $(ASM_BUILD_DIR) $(DATA_BUILD_DIR) $(CHARMAP_BUILD_DIR)
	rm -f $(ROM) $(ELF) $(MAP) $(LD_SCRIPT)

# 画像を含む全生成物を削除する。
distclean:
	rm -rf $(BUILD_DIR)

$(ROM): $(ELF)
	@mkdir -p $(dir $@)
	$(OBJCOPY) -O binary $< $@

$(ELF): $(OBJFILE) $(LD_SCRIPT)
	@mkdir -p $(dir $@)
	$(LD) -T $(LD_SCRIPT) -Map $(MAP) -o $@ $(OBJFILE) \
		-L tools/agbcc/lib -lgcc -lc
	$(GBAFIX) -t"$(TITLE)" -c$(GAMECODE) -m01 --silent $@

# 元のリンカスクリプトの配置順は維持し、
# 入力オブジェクトのパスだけbuild/配下へ変換する。
$(LD_SCRIPT): $(LD_SCRIPT_SOURCE)
	@mkdir -p $(dir $@)
	sed \
		-e 's#asm/#$(ASM_BUILD_DIR)/#g' \
		-e 's#data/event_scripts\.o#$(DATA_BUILD_DIR)/event_scripts.o#g' \
		-e 's#data/data\.o#$(DATA_BUILD_DIR)/data.o#g' \
		$< > $@

$(CHARMAP): $(CHARMAP_PARTS)
	@mkdir -p $(dir $@)
	cat $^ > $@

$(DATA_BUILD_DIR)/%.o: data/%.s $(CHARMAP)
	@mkdir -p $(dir $@)
	$(PREPROC) $< $(CHARMAP) | $(AS) $(ASFLAGS) -o $@ -

$(DATA_BUILD_DIR)/event_scripts.o $(DATA_BUILD_DIR)/data.o: $(TEXT_SOURCES)

$(DATA_BUILD_DIR)/data.o: \
	$(MON_PIC_BINS) \
	$(MON_RAW_PIC_BINS) \
	$(MON_PALETTE_BINS) \
	$(MON_RAW_PALETTE_BINS) \
	$(UNKNOWN_PIC_BINS) \
	$(UNKNOWN_PALETTE_BINS) \
	$(BALL_PIC_BINS) \
	$(BALL_PALETTE_BINS) \
	$(FONT_BUILD_DIR)/font_tiles.4bpp.lz

$(ASM_BUILD_DIR)/crt0.o: $(GBA_NINTENDO_LOGO_BIN)

$(ASM_BUILD_DIR)/%.o: asm/%.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<
