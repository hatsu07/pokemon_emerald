	.globl gPokeblockFeedBg_Tilemap
gPokeblockFeedBg_Tilemap: @ 0x08D9BC90
	@ Semantic exact-LZ Pokeblock asset.
	.incbin "build/graphics/pokeblock_jp_remaining/feeding_bg.bin.lz"
	.if (. - gPokeblockFeedBg_Tilemap) != 0x100
	.error "gPokeblockFeedBg_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9BD90: berry_tag_screen.s: LoadBerryTagGfx
