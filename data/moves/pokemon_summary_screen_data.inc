	@ pret/pokeemerald-jp direct xref for 0x08D97C54: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
.globl gMoveTypes_Pal
gMoveTypes_Pal: @ 0x08D97C54
	@ confirmed GBA LZ77 stream: compressed=0x67, decompressed=0x60
	@ analyzed canonical ROM range 0x08D97C54-0x08D97DCF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/summary_screen/move_types_palette_rom_exact.gbapal.lz"
	.byte 0x00
	.globl gLz77Asset_08D97CBC
gLz77Asset_08D97CBC: @ 0x08D97CBC
	.incbin "build/assets/lz77_raw/08D97CBC.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D97DB8
gLz77Asset_08D97DB8: @ 0x08D97DB8
	.incbin "build/assets/lz77_raw/08D97DB8.bin.lz"
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gSummaryScreen_Gfx
gSummaryScreen_Gfx: @ 0x08D97DD0
	@ exact GBA LZ77 slot: compressed=0x9CC, decompressed=0x1B20
	.incbin "build/graphics/summary_screen/tiles.4bpp.lz"
	.if (. - gSummaryScreen_Gfx) != 0x9CC
	.error "gSummaryScreen_Gfx compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gSummaryScreen_Pal
gSummaryScreen_Pal: @ 0x08D9879C
	@ exact GBA LZ77 slot: compressed=0xF0, decompressed=0x100
	.incbin "build/graphics/summary_screen/tiles.gbapal.lz"
	.if (. - gSummaryScreen_Pal) != 0xF0
	.error "gSummaryScreen_Pal compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gSummaryPage_Info_Tilemap
gSummaryPage_Info_Tilemap: @ 0x08D9888C
	@ exact GBA LZ77 slot: compressed=0x1B8, decompressed=0x800
	.incbin "build/graphics/summary_screen/page_info.bin.lz"
	.if (. - gSummaryPage_Info_Tilemap) != 0x1B8
	.error "gSummaryPage_Info_Tilemap compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gSummaryPage_Skills_Tilemap
gSummaryPage_Skills_Tilemap: @ 0x08D98A44
	@ exact GBA LZ77 slot: compressed=0x164, decompressed=0x800
	.incbin "build/graphics/summary_screen/page_skills.bin.lz"
	.if (. - gSummaryPage_Skills_Tilemap) != 0x164
	.error "gSummaryPage_Skills_Tilemap compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gSummaryPage_BattleMoves_Tilemap
gSummaryPage_BattleMoves_Tilemap: @ 0x08D98BA8
	@ exact GBA LZ77 slot: compressed=0x16C, decompressed=0x800
	.incbin "build/graphics/summary_screen/page_battle_moves.bin.lz"
	.if (. - gSummaryPage_BattleMoves_Tilemap) != 0x16C
	.error "gSummaryPage_BattleMoves_Tilemap compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gSummaryPage_ContestMoves_Tilemap
gSummaryPage_ContestMoves_Tilemap: @ 0x08D98D14
	@ exact GBA LZ77 slot: compressed=0x178, decompressed=0x800
	.incbin "build/graphics/summary_screen/page_contest_moves.bin.lz"
	.if (. - gSummaryPage_ContestMoves_Tilemap) != 0x178
	.error "gSummaryPage_ContestMoves_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D98E8C: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
.globl gSummaryPage_InfoEgg_Tilemap
gSummaryPage_InfoEgg_Tilemap: @ 0x08D98E8C
	@ confirmed GBA LZ77 stream: compressed=0x1A3, decompressed=0x800
	@ analyzed canonical ROM range 0x08D98E8C-0x08D9A733
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 4 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/summary_screen/page_info_egg_rom_exact.tilemap.lz"
	.byte 0x00
	.globl gLz77Asset_08D99030
gLz77Asset_08D99030: @ 0x08D99030
	.incbin "build/assets/lz77_raw/08D99030.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D99BAC
gLz77Asset_08D99BAC: @ 0x08D99BAC
	.incbin "build/assets/lz77_raw/08D99BAC.bin.lz"
	.globl gLz77Asset_08D9A70C
gLz77Asset_08D9A70C: @ 0x08D9A70C
	.incbin "build/assets/lz77_raw/08D9A70C.bin.lz"
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBagScreenMale_Pal
gBagScreenMale_Pal: @ 0x08D9A734
	@ exact GBA LZ77 slot: compressed=0x4C, decompressed=0x40
	.incbin "build/graphics/bag/menu_male.gbapal.lz"
	.if (. - gBagScreenMale_Pal) != 0x4C
	.error "gBagScreenMale_Pal compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBagScreenFemale_Pal
gBagScreenFemale_Pal: @ 0x08D9A780
	@ exact GBA LZ77 slot: compressed=0x4C, decompressed=0x40
	.incbin "build/graphics/bag/menu_female.gbapal.lz"
	.if (. - gBagScreenFemale_Pal) != 0x4C
	.error "gBagScreenFemale_Pal compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBagScreen_Gfx
gBagScreen_Gfx: @ 0x08D9A7CC
	@ exact GBA LZ77 slot: compressed=0x2B8, decompressed=0x6A0
	.incbin "build/graphics/bag/menu.4bpp.lz"
	.if (. - gBagScreen_Gfx) != 0x2B8
	.error "gBagScreen_Gfx compressed size mismatch"
	.endif
