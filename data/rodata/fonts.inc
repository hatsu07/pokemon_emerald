	.globl gFontSmallJapaneseGlyphs
gFontSmallJapaneseGlyphs: @ 0x0829CF14
	.incbin "build/graphics/fonts/font0_japanese.hwjpnfont"

	.globl gFontNormalJapaneseGlyphs
gFontNormalJapaneseGlyphs: @ 0x082A0F14
	.incbin "build/graphics/fonts/font1_japanese.hwjpnfont"

	.globl gFontSmallLatinGlyphs
gFontSmallLatinGlyphs: @ 0x082A4F14
	.incbin "build/graphics/fonts/font0_latin.latfont"

	.globl gFontSmallLatinGlyphWidths
gFontSmallLatinGlyphWidths: @ 0x082ACF14
	.include "graphics/fonts/font0_latin_widths.inc"

	.globl gFontNarrowLatinGlyphs
gFontNarrowLatinGlyphs: @ 0x082AD02C
	.incbin "build/graphics/fonts/font7_latin.latfont"

	.globl gFontNarrowLatinGlyphWidths
gFontNarrowLatinGlyphWidths: @ 0x082B502C
	.include "graphics/fonts/font7_latin_widths.inc"

	.globl gFontSmallNarrowLatinGlyphs
gFontSmallNarrowLatinGlyphs: @ 0x082B5144
	.incbin "build/graphics/fonts/font8_latin.latfont"

	.globl gFontSmallNarrowLatinGlyphWidths
gFontSmallNarrowLatinGlyphWidths: @ 0x082BD144
	.include "graphics/fonts/font8_latin_widths.inc"

	.globl sFontBoldJapaneseGlyphs
sFontBoldJapaneseGlyphs: @ 0x082BD25C
	.incbin "build/graphics/fonts/font9_japanese.hwjpnfont"

sDmaRequestTableOverflowText: @ 0x082BF25C
	.string "DMA OVER\nDMAてんそう\nリクエストテーブルが\nオーバーしました$"
