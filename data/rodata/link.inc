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
	.string "せつぞく できません$"
	@ Decoded text from ROM range: offset=0x2BFDC3, size=0x20
	.string "　かくにん　ちゅうです$"
	.string "　かくにん　できました$"
	.string "　かくにん　できません$"
	@ Decoded text from ROM range: offset=0x2BFDE7, size=0x19
	.string "　かくにん　を　かくにん$"
	.string "かくにん　は　しっぱい$"

	.globl gText_Rom_2BFE00
gText_Rom_2BFE00: @ 0x082BFE00
	@ Decoded text from ROM range: offset=0x2BFE00, size=0x50
	.string "　　つうしん　エラーが　はっせいしました\n　　　しゅうへんきき　との　せつぞくを\n　　　　きちんと　かくにん　してから\n　　　でんげんを　いれなおしてください$"
	.globl gText_Rom_2BFE50
gText_Rom_2BFE50: @ 0x082BFE50
	@ Decoded text from ROM range: offset=0x2BFE50, size=0x12
	.string "つうしんエラーが　はっせいしました$"
	.globl gText_Rom_2BFE62
gText_Rom_2BFE62: @ 0x082BFE62
	@ Decoded text from ROM range: offset=0x2BFE62, size=0x2B
	.string "　つうしんあいてと　ちかづいて　ください\nしょうがいぶつが　ないように　してください$"
	.globl gText_Rom_2BFE8D
gText_Rom_2BFE8D: @ 0x082BFE8D
	@ Decoded text from ROM range: offset=0x2BFE8D, size=0x12
	.string "Aボタンで　うけつけに　もどります$"
	.globl gText_Rom_2BFE9F
gText_Rom_2BFE9F: @ 0x082BFE9F
	@ Decoded text and trailing text-control bytes from ROM range: offset=0x2BFE9F, size=0x15
	.string "Aボタンで　タイトルに　もどります$"
	.string "{HIGHLIGHT}{TRANSPARENT}"
