@ JP Use Pokeblock menu graphics/data, 0x085BF880-0x085C052B.
@ Only consumer-proven objects are named; intervening residual bytes stay literal.

	.globl sMonFrame_Pal
sMonFrame_Pal: @ 0x085BF880
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Exact BGR555 expressions; bit15 cannot be represented losslessly by RGB PNG.
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (16 & 31) | ((19 & 31) << 5) | ((31 & 31) << 10) | ((0 & 1) << 15)
	.2byte (12 & 31) | ((12 & 31) << 5) | ((14 & 31) << 10) | ((0 & 1) << 15)
	.2byte (31 & 31) | ((31 & 31) << 5) | ((31 & 31) << 10) | ((1 & 1) << 15)
	.2byte (23 & 31) | ((27 & 31) << 5) | ((30 & 31) << 10) | ((0 & 1) << 15)
	.2byte (23 & 31) | ((27 & 31) << 5) | ((30 & 31) << 10) | ((0 & 1) << 15)
	.2byte (27 & 31) | ((29 & 31) << 5) | ((31 & 31) << 10) | ((0 & 1) << 15)
	.2byte (16 & 31) | ((16 & 31) << 5) | ((18 & 31) << 10) | ((0 & 1) << 15)
	.2byte (23 & 31) | ((22 & 31) << 5) | ((24 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (30 & 31) | ((9 & 31) << 5) | ((9 & 31) << 10) | ((0 & 1) << 15)
	.2byte (14 & 31) | ((12 & 31) << 5) | ((12 & 31) << 10) | ((0 & 1) << 15)
	.2byte (31 & 31) | ((31 & 31) << 5) | ((31 & 31) << 10) | ((1 & 1) << 15)
	.2byte (30 & 31) | ((30 & 31) << 5) | ((30 & 31) << 10) | ((0 & 1) << 15)
	.2byte (30 & 31) | ((23 & 31) << 5) | ((23 & 31) << 10) | ((0 & 1) << 15)
	.2byte (30 & 31) | ((26 & 31) << 5) | ((26 & 31) << 10) | ((1 & 1) << 15)
	.2byte (17 & 31) | ((15 & 31) << 5) | ((15 & 31) << 10) | ((1 & 1) << 15)
	.2byte (23 & 31) | ((22 & 31) << 5) | ((22 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)
	.2byte (0 & 31) | ((0 & 31) << 5) | ((0 & 31) << 10) | ((0 & 1) << 15)

	@ 0x085BF8A0-0x085BF8BF: unresolved residual after sMonFrame_Pal

	.globl sMonFrame_Gfx
sMonFrame_Gfx: @ 0x085BF8C0
	.incbin "build/graphics/pokeblock/use_screen/mon_frame.4bpp"

	.globl sMonFrame_Tilemap
sMonFrame_Tilemap: @ 0x085BF9A0
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.incbin "build/graphics/pokeblock/use_screen/mon_frame.bin.lz"

	@ 0x085BFA49-0x085BFA4B: alignment after sMonFrame_Tilemap
	.byte 0x00, 0x00, 0x00

	.globl gUsePokeblockGraph_Pal
gUsePokeblockGraph_Pal: @ 0x085BFA4C
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.2byte 0x0000, 0x398C, 0x4A10, 0x7E70, 0x62D7, 0x3B8E, 0x7FBB, 0x327F
	.2byte 0x7FFE, 0x5B5F, 0x1FDF, 0x5BFF, 0x5FFA, 0x7F7F, 0x6ABF, 0x7B77

	@ 0x085BFA6C-0x085BFAAB: unresolved residual after graph palette
	.byte 0x00, 0x00, 0x28, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x20, 0x5E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x7B
	.byte 0x00, 0x00, 0x7F, 0x4A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x77, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x7B

	.globl gUsePokeblockGraph_Gfx
gUsePokeblockGraph_Gfx: @ 0x085BFAAC
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/pokeblock/use_screen/graph.4bpp.lz"

	@ 0x085C022D-0x085C022F: alignment after graph gfx
	.byte 0x00, 0x00, 0x00

	.globl gUsePokeblockGraph_Tilemap
gUsePokeblockGraph_Tilemap: @ 0x085C0230
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.incbin "build/graphics/pokeblock/use_screen/graph.bin.lz"

	@ 0x085C03BF-0x085C040F: unresolved residual after graph tilemap stream
	.byte 0x00, 0xF3, 0x22, 0xF4, 0x22, 0xF7, 0x22, 0xF8, 0x22, 0xF5, 0x22, 0xF6, 0x22, 0xF6, 0x22, 0xF6
	.byte 0x22, 0xF6, 0x22, 0xF6, 0x22, 0xF6, 0x22, 0xF6, 0x22, 0xF5, 0x26, 0xF9, 0x22, 0x85, 0x22, 0x85
	.byte 0x22, 0x85, 0x22, 0x85, 0x22, 0x85, 0x22, 0x85, 0x22, 0x85, 0x22, 0xFA, 0x22, 0xF9, 0x22, 0x85
	.byte 0x22, 0x85, 0x22, 0x85, 0x22, 0x85, 0x22, 0x85, 0x22, 0x85, 0x22, 0x85, 0x22, 0xFA, 0x22, 0xFB
	.byte 0x22, 0xFC, 0x22, 0xFC, 0x22, 0xFC, 0x22, 0xFC, 0x22, 0xFC, 0x22, 0xFC, 0x22, 0xFC, 0x22, 0xFB
	.byte 0x26

	.globl sNatureWindowTilemap
sNatureWindowTilemap: @ 0x085C0410
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.2byte 0x22F6, 0x22F6, 0x22F6, 0x22F6, 0x22F6, 0x22F6, 0x22F6, 0x22F6
	.2byte 0x22F6, 0x22F6, 0x26F5, 0x2285, 0x2285, 0x2285, 0x2285, 0x2285
	.2byte 0x2285, 0x2285, 0x2285, 0x2285, 0x2285, 0x22FA, 0x2285, 0x2285
	.2byte 0x2285, 0x2285, 0x2285, 0x2285, 0x2285, 0x2285, 0x2285, 0x2285
	.2byte 0x22FA, 0x22FC, 0x22FC, 0x22FC, 0x22FC, 0x22FC, 0x22FC, 0x22FC
	.2byte 0x22FC, 0x22FC, 0x22FC, 0x26FB, 0x03E0, 0x03E0, 0x03E0, 0x03E0

	@ 0x085C0470-0x085C0487: unresolved residual after 12x4 nature window tilemap
	.byte 0xE0, 0x03, 0xE0, 0x03, 0xE0, 0x03, 0xE0, 0x03, 0xE0, 0x03, 0xE0, 0x03, 0xE0, 0x03, 0xE0, 0x03
	.byte 0xE0, 0x03, 0xE0, 0x03, 0xE0, 0x03, 0xE0, 0x03

	.globl sGraphData_Tilemap
sGraphData_Tilemap: @ 0x085C0488
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.incbin "build/graphics/pokeblock/use_screen/graph_data.bin.lz"

	@ 0x085C052A-0x085C052B: alignment/residual before legacy PokéNav outline
	.byte 0x00, 0x00

	.if (. - sMonFrame_Pal) != 0xCAC
	.error "Use Pokeblock semantic asset block size mismatch"
	.endif
