	
	.globl gBattleInterface_Textbox_Pal
	@ confirmed GBA LZ77 stream: compressed=0x43, decompressed=0x40
gBattleInterface_Textbox_Pal: @ 0x08C004EC
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_interface/textbox_palette_rom_exact.gbapal.lz"
	.byte 0x00

	.globl gBattleInterface_Textbox_Tilemap
	@ confirmed GBA LZ77 stream: compressed=0x227, decompressed=0x1000
gBattleInterface_Textbox_Tilemap: @ 0x08C00530
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_interface/textbox_tilemap_rom_exact.tilemap.lz"
	.byte 0x00
	.globl gLz77Asset_08C00758
gLz77Asset_08C00758: @ 0x08C00758
	.globl gMonStillFrontPic_CircledQuestionMark
	.set gMonStillFrontPic_CircledQuestionMark, gLz77Asset_08C00758
	@ Semantic alias for compressed still-front sprite at 0x08C00758.
	.incbin "build/graphics/pokemon/none/back_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
