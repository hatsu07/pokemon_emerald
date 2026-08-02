	.globl gFontSmallJapaneseGlyphs
gFontSmallJapaneseGlyphs: @ 0x0829CF14
	.incbin "baserom.gba", 0x29CF14, 0x4000

	.globl gFontNormalJapaneseGlyphs
gFontNormalJapaneseGlyphs: @ 0x082A0F14
	.incbin "baserom.gba", 0x2A0F14, 0x4000

	.globl gFontSmallLatinGlyphs
gFontSmallLatinGlyphs: @ 0x082A4F14
	.incbin "baserom.gba", 0x2A4F14, 0x8000

	.globl gFontSmallLatinGlyphWidths
gFontSmallLatinGlyphWidths: @ 0x082ACF14
	.incbin "baserom.gba", 0x2ACF14, 0x118

	.globl gFontNarrowLatinGlyphs
gFontNarrowLatinGlyphs: @ 0x082AD02C
	.incbin "baserom.gba", 0x2AD02C, 0x8000

	.globl gFontNarrowLatinGlyphWidths
gFontNarrowLatinGlyphWidths: @ 0x082B502C
	.incbin "baserom.gba", 0x2B502C, 0x118

	.globl gFontSmallNarrowLatinGlyphs
gFontSmallNarrowLatinGlyphs: @ 0x082B5144
	.incbin "baserom.gba", 0x2B5144, 0x8000

	.globl gFontSmallNarrowLatinGlyphWidths
gFontSmallNarrowLatinGlyphWidths: @ 0x082BD144
	.incbin "baserom.gba", 0x2BD144, 0x118

	.globl sFontBoldJapaneseGlyphs
sFontBoldJapaneseGlyphs: @ 0x082BD25C
	.incbin "baserom.gba", 0x2BD25C, 0x203D

