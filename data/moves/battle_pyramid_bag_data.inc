	@ pret/pokeemerald-jp direct xref for 0x08D9B13C: battle_pyramid_bag.s: sub_081C4A40
.globl gBattlePyramidBagInterface_Pal
gBattlePyramidBagInterface_Pal: @ 0x08D9B13C
	@ confirmed GBA LZ77 stream: compressed=0x28, decompressed=0x20
	@ analyzed canonical ROM range 0x08D9B13C-0x08D9B1B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_pyramid/bag_interface_palette_rom_exact.gbapal.lz"
	.globl gLz77Asset_08D9B164
gLz77Asset_08D9B164: @ 0x08D9B164
	.incbin "build/assets/lz77_raw/08D9B164.bin.lz"
	.globl gLz77Asset_08D9B1A4
gLz77Asset_08D9B1A4: @ 0x08D9B1A4
	.incbin "build/assets/lz77_raw/08D9B1A4.bin.lz"
	.byte 0x00
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gShopMenu_Gfx
gShopMenu_Gfx: @ 0x08D9B1B4
	@ exact GBA LZ77 slot: compressed=0x10C, decompressed=0x3A0
	.incbin "build/graphics/shop/menu.4bpp.lz"
	.if (. - gShopMenu_Gfx) != 0x10C
	.error "gShopMenu_Gfx compressed size mismatch"
	.endif
