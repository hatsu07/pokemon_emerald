@ Spinda spot masks. Each entry is x, y, a 16x16 1bpp mask, then 2 bytes padding.

	.globl gSpindaSpotGraphics
	.globl gUnknown_82EEC78
gSpindaSpotGraphics: @ 0x082EEC78
gUnknown_82EEC78:
	@ ANALYSIS: RAW_BLOCK size=0x2
	.byte 16, 7 @ spot 0: x, y
	.globl gUnknown_82EEC7A
gUnknown_82EEC7A:
	.incbin "build/graphics/pokemon/spinda/spots/spot_0.1bpp"
	@ ANALYSIS: RAW_BLOCK size=0x4
	.2byte 0x0000

	.byte 40, 8 @ spot 1: x, y
	.incbin "build/graphics/pokemon/spinda/spots/spot_1.1bpp"
	@ ANALYSIS: RAW_BLOCK size=0x4
	.2byte 0x0000

	.byte 22, 25 @ spot 2: x, y
	.incbin "build/graphics/pokemon/spinda/spots/spot_2.1bpp"
	@ ANALYSIS: RAW_BLOCK size=0x4
	.2byte 0x0000

	.byte 34, 26 @ spot 3: x, y
	.incbin "build/graphics/pokemon/spinda/spots/spot_3.1bpp"
	@ ANALYSIS: RAW_BLOCK size=0x2
	.2byte 0x0000

