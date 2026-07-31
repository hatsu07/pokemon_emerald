AS      := tools/binutils/bin/arm-none-eabi-as
LD      := tools/binutils/bin/arm-none-eabi-ld
OBJCOPY := tools/binutils/bin/arm-none-eabi-objcopy
SHA1SUM := sha1sum -c
GBAFIX := tools/gbafix/gbafix
PREPROC := tools/preproc/preproc

include make_tools/graphics.mk

ASFLAGS := -mcpu=arm7tdmi

ASFILE := $(wildcard asm/*.s data/*.s)
OBJFILE := $(ASFILE:.s=.o)
NAME := pokeemerald_jp
ROM := $(NAME).gba
ELF := $(NAME).elf
TITLE := POKEMON EMER
GAMECODE := BPEJ

.PHONY: all compare clean distclean

all: $(ROM)

compare: $(ROM)
	$(SHA1SUM) rom_jp.sha1

clean:
	rm -f $(ROM) $(ELF) $(OBJFILE)
	rm -f $(GBA_NINTENDO_LOGO_BIN)

distclean: clean
	rm -rf $(MON_GRAPHICS_BUILD_DIR)
	rm -rf $(FONT_BUILD_DIR)
	rm -rf $(UNKNOWN_GFX_BUILD_DIR)

$(ROM): $(ELF)
	$(OBJCOPY) -O binary $< $@

$(ELF): %.elf: $(OBJFILE) ld_script_jp.txt
	$(LD) -T ld_script_jp.txt -Map $*.map -o $@ $(OBJFILE) -L tools/agbcc/lib -lgcc -lc
	$(GBAFIX) -t"$(TITLE)" -c$(GAMECODE) -m01 --silent $@

# data/*.s は .string / data/charmap/charmap.txt を preproc 経由でアセンブル
CHARMAP_PARTS := \
	data/charmap/charmap.txt \
	data/charmap/charmap_extra.txt

CHARMAP := data/charmap/charmap_combined.txt

$(CHARMAP): $(CHARMAP_PARTS)
	cat $^ > $@

data/%.o: data/%.s $(CHARMAP)
	$(PREPROC) $< $(CHARMAP) | $(AS) $(ASFLAGS) -o $@ -

TEXT_SOURCES := $(wildcard data/text/*.inc data/text/generated/*.inc)

data/event_scripts.o data/data.o: $(TEXT_SOURCES)
data/data.o: \
	$(MON_PIC_BINS) \
	$(MON_RAW_PIC_BINS) \
	$(MON_PALETTE_BINS) \
	$(MON_RAW_PALETTE_BINS) \
	$(UNKNOWN_PIC_BINS) \
	$(UNKNOWN_PALETTE_BINS) \
	$(BALL_PIC_BINS) \
	$(BALL_PALETTE_BINS) \
	build/graphics/fonts/font_tiles.4bpp.lz

asm/crt0.o: $(GBA_NINTENDO_LOGO_BIN)

asm/%.o: asm/%.s
	$(AS) $(ASFLAGS) -o $@ $<
