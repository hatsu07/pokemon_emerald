AS      := tools/binutils/bin/arm-none-eabi-as
LD      := tools/binutils/bin/arm-none-eabi-ld
OBJCOPY := tools/binutils/bin/arm-none-eabi-objcopy
SHA1SUM := sha1sum -c
GBAFIX := tools/gbafix/gbafix
PREPROC := tools/preproc/preproc

GBAGFX := tools/gbagfx/gbagfx

MON_PICS_INCS := \
	data/pokemon/mon_front_pics.inc \
	data/pokemon/mon_back_pics.inc
MON_GRAPHICS_BUILD_DIR := build/graphics/pokemon
FONT_GRAPHICS_DIR := graphics/fonts
FONT_BUILD_DIR := build/graphics/fonts
UNKNOWN_GFX_DIR := graphics/unknown
UNKNOWN_GFX_BUILD_DIR := build/graphics/unknown


# 各incファイルが実際に参照する圧縮画像だけを依存関係として取得する。
# 同一データを共有するラベルは重複生成しない。
MON_PIC_BINS := $(sort $(shell sed -n \
	's@^[[:space:]]*\.incbin "\(build/graphics/pokemon/[^"]*\.4bpp\.lz\)".*@\1@p' \
	$(MON_PICS_INCS)))


# asm/data配下の.incbinが参照する圧縮パレットを自動収集する。
# 例: build/graphics/pokemon/bulbasaur/normal.gbapal.lz
MON_PALETTE_BINS := $(sort $(shell grep -Rho \
	--include='*.s' --include='*.inc' \
	'build/graphics/[^"]*\.gbapal\.lz' \
	asm data 2>/dev/null))

# asm/data配下の.incbinが参照するunknown圧縮画像を自動収集する。
# 例: build/graphics/unknown/00_32x24.4bpp.lz
UNKNOWN_PIC_BINS := $(sort $(shell grep -Rho \
	--include='*.s' --include='*.inc' \
	'build/graphics/unknown/[^"]*\.4bpp\.lz' \
	asm data 2>/dev/null))

# asm/data配下の.incbinが参照するunknown圧縮パレットを自動収集する。
# 例: build/graphics/unknown/01_palette.gbapal.lz
UNKNOWN_PALETTE_BINS := $(sort $(shell grep -Rho \
	--include='*.s' --include='*.inc' \
	'build/graphics/unknown/[^"]*\.gbapal\.lz' \
	asm data 2>/dev/null))

ASFLAGS := -mcpu=arm7tdmi

ASFILE := $(wildcard asm/*.s data/*.s)
OBJFILE := $(ASFILE:.s=.o)
NAME := pokeemerald_jp
ROM := $(NAME).gba
ELF := $(NAME).elf
TITLE := POKEMON EMER
GAMECODE := BPEJ

GBA_NINTENDO_LOGO_PNG := graphics/gba_nintendo_logo.png
GBA_NINTENDO_LOGO_BIN := graphics/gba_nintendo_logo.bin

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

$(GBA_NINTENDO_LOGO_BIN): \
		$(GBA_NINTENDO_LOGO_PNG) \
		tools/gba_logo_converter.py
	python3 tools/gba_logo_converter.py encode \
		$(GBA_NINTENDO_LOGO_PNG) \
		$@
	@test "$$(wc -c < $@)" -eq 156

# data/*.s は .string / data/charmap/charmap.txt を preproc 経由でアセンブル
CHARMAP_PARTS := \
	data/charmap/charmap.txt \
	data/charmap/charmap_extra.txt

CHARMAP := data/charmap/charmap_combined.txt

$(CHARMAP): $(CHARMAP_PARTS)
	cat $^ > $@


build/graphics/pokemon/%.4bpp.lz: \
		graphics/pokemon/%.png \
		tools/png_to_4bpp.py \
		tools/gba_graphics.py \
		$(GBAGFX)
	@mkdir -p $(dir $@)
	python3 tools/png_to_4bpp.py \
		--gbagfx $(GBAGFX) \
		$< $@

# ポケモン別パレットPNGを圧縮GBAパレットへ変換する。
# 例:
#   graphics/pokemon/bulbasaur/normal_palette.png
#   -> build/graphics/pokemon/bulbasaur/normal_palette.gbapal.lz
build/graphics/pokemon/%.gbapal.lz: \
		graphics/pokemon/%.png \
		tools/png_to_palette.py \
		tools/gba_graphics.py
	@mkdir -p $(dir $@)
	python3 tools/png_to_palette.py \
		$< $@ --lz

$(FONT_BUILD_DIR)/%.4bpp.lz: \
		$(FONT_GRAPHICS_DIR)/%.png \
		tools/png_to_4bpp.py \
		tools/gba_graphics.py \
		$(GBAGFX)
	@mkdir -p $(dir $@)
	python3 tools/png_to_4bpp.py \
		--gbagfx $(GBAGFX) \
		--no-pad \
		$< $@

# unknown画像PNGを圧縮4bppへ変換する。
# 例:
#   graphics/unknown/00_32x24.png
#   -> build/graphics/unknown/00_32x24.4bpp.lz
$(UNKNOWN_GFX_BUILD_DIR)/%.4bpp.lz: \
		$(UNKNOWN_GFX_DIR)/%.png \
		tools/png_to_4bpp.py \
		tools/gba_graphics.py \
		$(GBAGFX)
	@mkdir -p $(dir $@)
	python3 tools/png_to_4bpp.py \
		--gbagfx $(GBAGFX) \
		--no-pad \
		$< $@

# unknownパレットPNGを圧縮GBAパレットへ変換する。
# 例:
#   graphics/unknown/01_palette.png
#   -> build/graphics/unknown/01_palette.gbapal.lz
$(UNKNOWN_GFX_BUILD_DIR)/%.gbapal.lz: \
		$(UNKNOWN_GFX_DIR)/%.png \
		tools/png_to_palette.py \
		tools/gba_graphics.py
	@mkdir -p $(dir $@)
	python3 tools/png_to_palette.py \
		$< $@ --lz

data/%.o: data/%.s $(CHARMAP)
	$(PREPROC) $< $(CHARMAP) | $(AS) $(ASFLAGS) -o $@ -

TEXT_SOURCES := $(wildcard data/text/*.inc data/text/generated/*.inc)

data/event_scripts.o data/data.o: $(TEXT_SOURCES)
data/data.o: \
	$(MON_PIC_BINS) \
	$(MON_PALETTE_BINS) \
	$(UNKNOWN_PIC_BINS) \
	$(UNKNOWN_PALETTE_BINS) \
	build/graphics/fonts/font_tiles.4bpp.lz

asm/crt0.o: $(GBA_NINTENDO_LOGO_BIN)

asm/%.o: asm/%.s
	$(AS) $(ASFLAGS) -o $@ $<
