	@ pret/pokeemerald-jp direct xref for 0x08D9B2C0: shop.s: BuyMenuDecompressBgGraphics
	.globl gShopMenu_Pal
gShopMenu_Pal: @ 0x08D9B2C0
	@ Compatibility alias retained for the existing shop.s consumer.
	.globl gShopData_08D9B2C0
gShopData_08D9B2C0:
	.globl sLz77Block_08D9B2C0
	@ confirmed GBA LZ77 stream: compressed=0x28, decompressed=0x20
sLz77Block_08D9B2C0:
	@ analyzed canonical ROM range 0x08D9B2C0-0x08D9B2E7
	.incbin "build/graphics/analyzed/gunknown_8d9b2c0_08d9b2c0.4bpp.lz"
	.if (. - sLz77Block_08D9B2C0) != 0x28
	.error "sLz77Block_08D9B2C0 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9B2E8: shop.s: BuyMenuDecompressBgGraphics
	.globl gShopData_08D9B2E8
gShopData_08D9B2E8: @ 0x08D9B2E8
	@ confirmed GBA LZ77 stream: compressed=0x13E, decompressed=0x800
sLz77Block_08D9B2E8:
	@ analyzed canonical ROM range 0x08D9B2E8-0x08D9B4B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D9B2E8.bin.lz"
	.byte 0x00, 0x00
	.globl gShopMenuMoney_Gfx
gShopMenuMoney_Gfx: @ 0x08D9B428
	@ Compatibility alias retained for the existing generic asset symbol.
	.globl gLz77Asset_08D9B428
gLz77Asset_08D9B428:
	.incbin "build/assets/lz77_raw/08D9B428.bin.lz"
	@ pret/pokeemerald-jp direct xref for 0x08D9B4B4: pokeblock.spokeblock.s: sub_08135C88
	.globl gPokeblockSpokeblockData_08D9B4B4
gPokeblockSpokeblockData_08D9B4B4:
	.globl sLz77Block_08D9B4B4
	@ confirmed GBA LZ77 stream: compressed=0x207, decompressed=0x500
sLz77Block_08D9B4B4:
	@ analyzed canonical ROM range 0x08D9B4B4-0x08D9B6BB
	.incbin "build/graphics/analyzed/gunknown_8d9b4b4_08d9b4b4.4bpp.lz"
	.if (. - sLz77Block_08D9B4B4) != 0x208
	.error "sLz77Block_08D9B4B4 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9B6BC: pokeblock.spokeblock.s: sub_08135C88
	.globl gPokeblockSpokeblockData_08D9B6BC
gPokeblockSpokeblockData_08D9B6BC: @ 0x08D9B6BC
	@ confirmed GBA LZ77 stream: compressed=0x6E, decompressed=0xC0
sLz77Block_08D9B6BC:
	@ analyzed canonical ROM range 0x08D9B6BC-0x08D9BA13
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D9B6BC.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D9B72C
gLz77Asset_08D9B72C: @ 0x08D9B72C
	.incbin "build/assets/lz77_raw/08D9B72C.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D9B9EC
gLz77Asset_08D9B9EC: @ 0x08D9B9EC
	.incbin "build/assets/lz77_raw/08D9B9EC.bin.lz"
	@ pret/pokeemerald-jp direct xref for 0x08D9BA14: pokeblock.spokeblock.s: sub_08135C88
	.globl gPokeblockSpokeblockData_08D9BA14
gPokeblockSpokeblockData_08D9BA14:
	.globl sLz77Block_08D9BA14
	@ confirmed GBA LZ77 stream: compressed=0x148, decompressed=0x800
sLz77Block_08D9BA14:
	@ analyzed canonical ROM range 0x08D9BA14-0x08D9BB5B
	.incbin "build/graphics/analyzed/gunknown_8d9ba14_08d9ba14.4bpp.lz"
	.if (. - sLz77Block_08D9BA14) != 0x148
	.error "sLz77Block_08D9BA14 compressed size mismatch"
	.endif

	.globl gThrownPokeblock_Gfx
gThrownPokeblock_Gfx: @ 0x08D9BB5C
	.incbin "build/graphics/pokeblock_feed/pokeblock.4bpp.lz"

	.globl gPokeblockPalette_Red
gPokeblockPalette_Red: @ 0x08D9BB78
	.incbin "build/graphics/pokeblock_feed/palettes/red.gbapal.lz"
	.globl gPokeblockPalette_Blue
gPokeblockPalette_Blue: @ 0x08D9BB8C
	.incbin "build/graphics/pokeblock_feed/palettes/blue.gbapal.lz"
	.globl gPokeblockPalette_Pink
gPokeblockPalette_Pink: @ 0x08D9BBA0
	.incbin "build/graphics/pokeblock_feed/palettes/pink.gbapal.lz"
	.globl gPokeblockPalette_Green
gPokeblockPalette_Green: @ 0x08D9BBB4
	.incbin "build/graphics/pokeblock_feed/palettes/green.gbapal.lz"
	.globl gPokeblockPalette_Yellow
gPokeblockPalette_Yellow: @ 0x08D9BBC8
	.incbin "build/graphics/pokeblock_feed/palettes/yellow.gbapal.lz"
	.globl gPokeblockPalette_Purple
gPokeblockPalette_Purple: @ 0x08D9BBDC
	.incbin "build/graphics/pokeblock_feed/palettes/purple.gbapal.lz"
	.globl gPokeblockPalette_Indigo
gPokeblockPalette_Indigo: @ 0x08D9BBF0
	.incbin "build/graphics/pokeblock_feed/palettes/indigo.gbapal.lz"
	.globl gPokeblockPalette_Brown
gPokeblockPalette_Brown: @ 0x08D9BC04
	.incbin "build/graphics/pokeblock_feed/palettes/brown.gbapal.lz"
	.globl gPokeblockPalette_LiteBlue
gPokeblockPalette_LiteBlue: @ 0x08D9BC18
	.incbin "build/graphics/pokeblock_feed/palettes/lite_blue.gbapal.lz"
	.globl gPokeblockPalette_Olive
gPokeblockPalette_Olive: @ 0x08D9BC2C
	.incbin "build/graphics/pokeblock_feed/palettes/olive.gbapal.lz"
	.globl gPokeblockPalette_Gray
gPokeblockPalette_Gray: @ 0x08D9BC40
	.incbin "build/graphics/pokeblock_feed/palettes/gray.gbapal.lz"
	.globl gPokeblockPalette_Black
gPokeblockPalette_Black: @ 0x08D9BC54
	.incbin "build/graphics/pokeblock_feed/palettes/black.gbapal.lz"
	.globl gPokeblockPalette_White
gPokeblockPalette_White: @ 0x08D9BC68
	.incbin "build/graphics/pokeblock_feed/palettes/white.gbapal.lz"
	.globl gPokeblockPalette_Gold
gPokeblockPalette_Gold: @ 0x08D9BC7C
	.incbin "build/graphics/pokeblock_feed/palettes/gold.gbapal.lz"
	.if (. - gPokeblockPalette_Red) != 14 * 0x14
	.error "Pokeblock palettes must contain fourteen 0x14-byte LZ77 streams"
	.endif

	@ pret/pokeemerald-jp direct xref for 0x08D9BC90: pokeblock_feed.s: LoadMonAndSceneGfx
	.globl gPokeblockFeedData_08D9BC90
gPokeblockFeedData_08D9BC90:
	.globl sLz77Block_08D9BC90
	@ confirmed GBA LZ77 stream: compressed=0x100, decompressed=0x800
sLz77Block_08D9BC90:
	@ analyzed canonical ROM range 0x08D9BC90-0x08D9BD8F
	.incbin "build/graphics/analyzed/gunknown_8d9bc90_08d9bc90.4bpp.lz"
	.if (. - sLz77Block_08D9BC90) != 0x100
	.error "sLz77Block_08D9BC90 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9BD90: berry_tag_screen.s: LoadBerryTagGfx
	.globl gBerryCheck_Gfx
gBerryCheck_Gfx: @ 0x08D9BD90
	@ Semantic exact-LZ Berry Tag screen asset.
	.incbin "build/graphics/bag/check_berry.4bpp.lz"
	.if (. - gBerryCheck_Gfx) != 0x41C
	.error "gBerryCheck_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9C1AC: berry_tag_screen.s: LoadBerryTagGfx
	.globl gBerryCheck_Pal
gBerryCheck_Pal: @ 0x08D9C1AC
	@ Semantic exact-LZ Berry Tag screen asset.
	.incbin "build/graphics/bag/check_berry.gbapal.lz"
	.if (. - gBerryCheck_Pal) != 0xA8
	.error "gBerryCheck_Pal compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9C254: berry_tag_screen.s: LoadBerryTagGfx
	.globl gBerryTag_Gfx
gBerryTag_Gfx: @ 0x08D9C254
	@ Semantic exact-LZ Berry Tag screen asset.
	.incbin "build/graphics/bag/berry_tag.bin.lz"
	.if (. - gBerryTag_Gfx) != 0x190
	.error "gBerryTag_Gfx compressed size mismatch"
	.endif
