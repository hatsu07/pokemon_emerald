	
	.globl gBattleInterface_Textbox_Pal
	@ confirmed GBA LZ77 stream: compressed=0x43, decompressed=0x40
gBattleInterface_Textbox_Pal: @ 0x08C004EC
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_interface/textbox_palette_rom_exact.gbapal.lz"
	.byte 0x00

	.globl sLz77Block_08C00530
	@ confirmed GBA LZ77 stream: compressed=0x227, decompressed=0x1000
sLz77Block_08C00530:
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08C00530.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08C00758
gLz77Asset_08C00758: @ 0x08C00758
	.incbin "build/graphics/pokemon/none/back_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
