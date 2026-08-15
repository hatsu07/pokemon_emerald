@ Ruby/Sapphire-era PokéNav graphics retained in Pokémon Emerald JP.
@ Exact correspondence is proven against pret/pokeruby for the tile/gfx
@ objects; JP-specific palette differences are preserved from this ROM.
@ No direct Emerald JP consumer was found, so A/B remain structural names.
@ Exact ROM range: 0x085BF628-0x085BF87F.

	.globl gLegacyPokenavPaletteA
gLegacyPokenavPaletteA: @ 0x085BF628
	.incbin "build/graphics/pokenav/legacy/screen_a.gbapal"
	.if (. - gLegacyPokenavPaletteA) != 0x20
	.error "gLegacyPokenavPaletteA size mismatch"
	.endif

	.globl gLegacyPokenavTilesA
gLegacyPokenavTilesA: @ 0x085BF648
	.incbin "build/graphics/pokenav/legacy/screen_a.4bpp"
	.if (. - gLegacyPokenavTilesA) != 0xA0
	.error "gLegacyPokenavTilesA size mismatch"
	.endif

	.globl gLegacyPokenavTilemapA
gLegacyPokenavTilemapA: @ 0x085BF6E8
	.incbin "build/graphics/pokenav/legacy/screen_a.bin.lz"
	.if (. - gLegacyPokenavTilemapA) != 0xB0
	.error "gLegacyPokenavTilemapA size mismatch"
	.endif

	.globl gLegacyPokenavPaletteB
gLegacyPokenavPaletteB: @ 0x085BF798
	.incbin "build/graphics/pokenav/legacy/screen_b.gbapal"
	.if (. - gLegacyPokenavPaletteB) != 0x20
	.error "gLegacyPokenavPaletteB size mismatch"
	.endif

	.globl gLegacyPokenavTilesB
gLegacyPokenavTilesB: @ 0x085BF7B8
	.incbin "build/graphics/pokenav/legacy/screen_b.4bpp"
	.if (. - gLegacyPokenavTilesB) != 0x20
	.error "gLegacyPokenavTilesB size mismatch"
	.endif

	.globl gLegacyPokenavTilemapB
gLegacyPokenavTilemapB: @ 0x085BF7D8
	.incbin "build/graphics/pokenav/legacy/screen_b.bin.lz"
	.if (. - gLegacyPokenavTilemapB) != 0xA8
	.error "gLegacyPokenavTilemapB size mismatch"
	.endif

	.if (. - gLegacyPokenavPaletteA) != 0x258
	.error "legacy PokéNav A/B asset block size mismatch"
	.endif
