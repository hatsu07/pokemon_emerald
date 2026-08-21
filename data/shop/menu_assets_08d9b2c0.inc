	@ pret/pokeemerald-jp direct xref for 0x08D9B2C0: shop.s: BuyMenuDecompressBgGraphics
	.globl gShopMenu_Pal
gShopMenu_Pal: @ 0x08D9B2C0
	@ Semantic exact-LZ Shop menu palette.
	.incbin "build/graphics/shop_jp/menu.gbapal.lz"
	.if (. - gShopMenu_Pal) != 0x28
	.error "gShopMenu_Pal compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9B2E8: shop.s: BuyMenuDecompressBgGraphics
.globl gShopMenu_Tilemap
gShopMenu_Tilemap: @ 0x08D9B2E8
	@ confirmed GBA LZ77 stream: compressed=0x13E, decompressed=0x800
	@ analyzed canonical ROM range 0x08D9B2E8-0x08D9B4B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/shop/menu_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gShopMenuMoney_Gfx
gShopMenuMoney_Gfx: @ 0x08D9B428
	@ Compatibility alias retained for the existing generic asset symbol.
	.globl gLz77Asset_08D9B428
gLz77Asset_08D9B428:
	.incbin "build/assets/lz77_raw/08D9B428.bin.lz"
	@ pret/pokeemerald-jp direct xref for 0x08D9B4B4: pokeblock.spokeblock.s: sub_08135C88
