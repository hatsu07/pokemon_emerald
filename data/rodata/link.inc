	.globl sWirelessLinkDisplayPal
sWirelessLinkDisplayPal: @ 0x082BF4B8
	.incbin "baserom.gba", 0x2BF4B8, 0x20

	.globl sWirelessLinkDisplayGfx
sWirelessLinkDisplayGfx: @ 0x082BF4D8
	.incbin "baserom.gba", 0x2BF4D8, 0x4A8

	.globl sWirelessLinkDisplayTilemap
sWirelessLinkDisplayTilemap: @ 0x082BF980
	.incbin "baserom.gba", 0x2BF980, 0x1EC

	.globl sLinkTestDigitsPal
sLinkTestDigitsPal: @ 0x082BFB6C
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0x7FE00000

	.globl sLinkTestDigitsGfx
sLinkTestDigitsGfx: @ 0x082BFB8C
	.incbin "baserom.gba", 0x2BFB8C, 0x233
