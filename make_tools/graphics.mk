# PNG・画像バイナリ変換設定

GBAGFX := tools/gbagfx/gbagfx

MON_PICS_INCS := \
	data/pokemon/mon_front_pics.inc \
	data/pokemon/mon_back_pics.inc

MON_GRAPHICS_BUILD_DIR := build/graphics/pokemon

FONT_GRAPHICS_DIR := graphics/fonts
FONT_BUILD_DIR := build/graphics/fonts

UNKNOWN_GFX_DIR := graphics/unknown
UNKNOWN_GFX_BUILD_DIR := build/graphics/unknown

GBA_NINTENDO_LOGO_PNG := graphics/gba_nintendo_logo.png
GBA_NINTENDO_LOGO_BIN := graphics/gba_nintendo_logo.bin


# 各incファイルが参照する圧縮ポケモン画像を取得する。
MON_PIC_BINS := $(sort $(shell sed -n \
	's@^[[:space:]]*\.incbin "\(build/graphics/pokemon/[^"]*\.4bpp\.lz\)".*@\1@p' \
	$(MON_PICS_INCS)))

# 各incファイルが参照する非圧縮ポケモン画像を取得する。
MON_RAW_PIC_BINS := $(sort $(shell sed -n \
	's@^[[:space:]]*\.incbin "\(build/graphics/pokemon/[^"]*\.4bpp\)".*@\1@p' \
	$(MON_PICS_INCS) | grep -v '\.lz$$'))

# asm/data配下の.incbinが参照する圧縮ポケモンパレットを取得する。
MON_PALETTE_BINS := $(sort $(shell grep -Rho \
	--include='*.s' --include='*.inc' \
	'build/graphics/pokemon/[^"]*\.gbapal\.lz' \
	asm data 2>/dev/null))

# asm/data配下の.incbinが参照する非圧縮ポケモンパレットを取得する。
MON_RAW_PALETTE_BINS := $(sort $(shell grep -Rho \
	--include='*.s' --include='*.inc' \
	'build/graphics/pokemon/[^"]*\.gbapal' \
	asm data 2>/dev/null | grep -v '\.lz$$'))

# asm/data配下の.incbinが参照するunknown圧縮画像を取得する。
UNKNOWN_PIC_BINS := $(sort $(shell grep -Rho \
	--include='*.s' --include='*.inc' \
	'build/graphics/unknown/[^"]*\.4bpp\.lz' \
	asm data 2>/dev/null))

# asm/data配下の.incbinが参照するunknown圧縮パレットを取得する。
UNKNOWN_PALETTE_BINS := $(sort $(shell grep -Rho \
	--include='*.s' --include='*.inc' \
	'build/graphics/unknown/[^"]*\.gbapal\.lz' \
	asm data 2>/dev/null))


# GBA Nintendoロゴ
$(GBA_NINTENDO_LOGO_BIN): \
		$(GBA_NINTENDO_LOGO_PNG) \
		tools/gba_logo_converter.py
	python3 tools/gba_logo_converter.py encode \
		$(GBA_NINTENDO_LOGO_PNG) \
		$@
	@test "$$(wc -c < $@)" -eq 156


# ポケモン画像PNGを圧縮4bppへ変換する。
#
# graphics/pokemon/bulbasaur/front.png
# -> build/graphics/pokemon/bulbasaur/front.4bpp.lz
build/graphics/pokemon/%.4bpp.lz: \
		graphics/pokemon/%.png \
		tools/png_to_4bpp.py \
		tools/gba_graphics.py \
		$(GBAGFX)
	@mkdir -p $(dir $@)
	python3 tools/png_to_4bpp.py \
		--gbagfx $(GBAGFX) \
		$< $@


# ポケモン画像PNGを非圧縮4bppへ変換する。
#
# graphics/pokemon/bulbasaur/icon.png
# -> build/graphics/pokemon/bulbasaur/icon.4bpp
build/graphics/pokemon/%.4bpp: \
		graphics/pokemon/%.png \
		tools/png_to_4bpp_raw.py \
		$(GBAGFX)
	@mkdir -p $(dir $@)
	python3 tools/png_to_4bpp_raw.py \
		--gbagfx $(GBAGFX) \
		$< $@


# ポケモン別パレットPNGを圧縮GBAパレットへ変換する。
#
# graphics/pokemon/bulbasaur/normal_palette.png
# -> build/graphics/pokemon/bulbasaur/normal_palette.gbapal.lz
build/graphics/pokemon/%.gbapal.lz: \
		graphics/pokemon/%.png \
		tools/png_to_palette.py \
		tools/gba_graphics.py
	@mkdir -p $(dir $@)
	python3 tools/png_to_palette.py \
		$< $@ --lz


# ポケモンアイコン等のパレットPNGを非圧縮パレットへ変換する。
#
# graphics/pokemon/icon/icon_palette_0.png
# -> build/graphics/pokemon/icon/icon_palette_0.gbapal
build/graphics/pokemon/%.gbapal: \
		graphics/pokemon/%.png \
		tools/png_to_palette.py \
		tools/gba_graphics.py
	@mkdir -p $(dir $@)
	python3 tools/png_to_palette.py \
		$< $@


# フォントPNGを圧縮4bppへ変換する。
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
#
# graphics/unknown/00_32x24.png
# -> build/graphics/unknown/00_32x24.4bpp.lz
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
#
# graphics/unknown/01_palette.png
# -> build/graphics/unknown/01_palette.gbapal.lz
$(UNKNOWN_GFX_BUILD_DIR)/%.gbapal.lz: \
		$(UNKNOWN_GFX_DIR)/%.png \
		tools/png_to_palette.py \
		tools/gba_graphics.py
	@mkdir -p $(dir $@)
	python3 tools/png_to_palette.py \
		$< $@ --lz
