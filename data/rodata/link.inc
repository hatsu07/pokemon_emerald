	.globl sWirelessLinkDisplayPal
sWirelessLinkDisplayPal: @ 0x082BF4B8
	.incbin "build/graphics/link/wireless_display.gbapal"

	.globl sWirelessLinkDisplayGfx
sWirelessLinkDisplayGfx: @ 0x082BF4D8
	.incbin "build/graphics/link/wireless_display.4bpp.lz"

	.globl sWirelessLinkDisplayTilemap
sWirelessLinkDisplayTilemap: @ 0x082BF980
	.incbin "build/graphics/link/wireless_display.bin.lz"

	.globl sLinkTestDigitsPal
sLinkTestDigitsPal: @ 0x082BFB6C
	.incbin "build/graphics/link/test_digits.gbapal"

	.globl sLinkTestDigitsGfx
sLinkTestDigitsGfx: @ 0x082BFB8C
	.incbin "build/graphics/link/test_digits.4bpp"

	.globl sText_Connecting
sText_Connecting: @ 0x082BFDAC
	.string "せつぞく ちゅうです$"
	.balign 4, 0

	.globl sText_UnableToConnectPrefix
sText_UnableToConnectPrefix: @ 0x082BFDB8
	.string "せつぞく でき" @ Continues at gText_Rom_2BFDBF.
