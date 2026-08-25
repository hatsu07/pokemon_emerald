	@ pret/pokeemerald-jp direct xref for 0x08D9AA84: item_menu.s: LoadBagMenu_Graphics
.globl gBagScreen_GfxTileMap
gBagScreen_GfxTileMap: @ 0x08D9AA84
	@ confirmed GBA LZ77 stream: compressed=0x15D, decompressed=0x800
	@ analyzed canonical ROM range 0x08D9AA84-0x08D9AFC7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/bag/menu_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D9ABE4
gLz77Asset_08D9ABE4: @ 0x08D9ABE4
	.incbin "build/assets/lz77_raw/08D9ABE4.bin.lz"
	.byte 0x00
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattlePyramidBag_Pal
gBattlePyramidBag_Pal: @ 0x08D9AFC8
	@ exact GBA LZ77 slot: compressed=0x34, decompressed=0x40
	.incbin "build/graphics/bag/bag_pyramid.gbapal.lz"
	.if (. - gBattlePyramidBag_Pal) != 0x34
	.error "gBattlePyramidBag_Pal compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattlePyramidBagTilemap
gBattlePyramidBagTilemap: @ 0x08D9AFFC
	@ exact GBA LZ77 slot: compressed=0x140, decompressed=0x800
	.incbin "build/graphics/bag/menu_pyramid.bin.lz"
	.if (. - gBattlePyramidBagTilemap) != 0x140
	.error "gBattlePyramidBagTilemap compressed size mismatch"
	.endif
