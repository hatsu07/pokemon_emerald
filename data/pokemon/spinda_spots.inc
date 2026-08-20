@ Spinda spot masks. Each entry is x, y, a 16x16 1bpp mask, then 2 bytes padding.

	.globl gSpindaSpotGraphics
gSpindaSpotGraphics: @ 0x082EEC78
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 16, 7 @ spot 0: x, y
	.globl gPokemonBinaryAsset_Rom_2EEC7A
gPokemonBinaryAsset_Rom_2EEC7A:
	.incbin "build/graphics/pokemon/spinda/spots/spot_0.1bpp"
	@ ANALYSIS: ROM_POINTER_FIELD size=0x4 addr=0x082EEC9A parent=gPokemonBinaryAsset_Rom_2EEC7A offset=0x20 value=0x08280000
	.2byte 0x0000

	.byte 40, 8 @ spot 1: x, y
	.incbin "build/graphics/pokemon/spinda/spots/spot_1.1bpp"
	@ ANALYSIS: STRUCTURED_SPINDA_SPOT_DATA size=0x4 addr=0x082EECBE parent=gPokemonBinaryAsset_Rom_2EEC7A encoding=TYPED_FIELDS pointerCells=0
	@ ANALYSIS: SOURCE_RANGE addr=0x082EECBE size=0x4
	.2byte 0x0000, 0x1916 @ +0x0
	.incbin "build/graphics/pokemon/spinda/spots/spot_2.1bpp"
	@ ANALYSIS: STRUCTURED_SPINDA_SPOT_DATA size=0x4 addr=0x082EECE2 parent=gPokemonBinaryAsset_Rom_2EEC7A encoding=TYPED_FIELDS pointerCells=0
	@ ANALYSIS: SOURCE_RANGE addr=0x082EECE2 size=0x4
	.2byte 0x0000, 0x1A22 @ +0x0
	.incbin "build/graphics/pokemon/spinda/spots/spot_3.1bpp"
	@ ANALYSIS: ZERO_PADDING size=0x2
	.space 0x2, 0
