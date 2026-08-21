	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBerryBlenderOuter_Gfx
gBerryBlenderOuter_Gfx: @ 0x08D91D6C
	@ exact GBA LZ77 slot: compressed=0xA34, decompressed=0x2000
	.incbin "build/graphics/berry_blender/outer.4bpp.lz"
	.if (. - gBerryBlenderOuter_Gfx) != 0xA34
	.error "gBerryBlenderOuter_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D927A0: berry_blender.s: LoadBerryBlenderGfx
.globl gBerryBlenderOuter_Tilemap
gBerryBlenderOuter_Tilemap: @ 0x08D927A0
	@ confirmed GBA LZ77 stream: compressed=0x311, decompressed=0x800
	@ analyzed canonical ROM range 0x08D927A0-0x08D93293
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 6 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/berry_blender/outer_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D92AB4
gLz77Asset_08D92AB4: @ 0x08D92AB4
	.incbin "build/assets/lz77_raw/08D92AB4.bin.lz"
	.globl gLz77Asset_08D92ADC
gLz77Asset_08D92ADC: @ 0x08D92ADC
	.incbin "build/assets/lz77_raw/08D92ADC.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D92D3C
gLz77Asset_08D92D3C: @ 0x08D92D3C
	.incbin "build/assets/lz77_raw/08D92D3C.bin.lz"
	.globl gLz77Asset_08D92E78
gLz77Asset_08D92E78: @ 0x08D92E78
	.incbin "build/assets/lz77_raw/08D92E78.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D92EA0
gLz77Asset_08D92EA0: @ 0x08D92EA0
	.incbin "build/assets/lz77_raw/08D92EA0.bin.lz"
	@ pret/pokeemerald-jp direct xref for 0x08D93294: ice.s: AnimTask_Haze1, AnimTask_LoadMistTiles
.globl gBattleAnimFogTilemap
gBattleAnimFogTilemap: @ 0x08D93294
	@ confirmed GBA LZ77 stream: compressed=0x176, decompressed=0x800
	@ analyzed canonical ROM range 0x08D93294-0x08D9354B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/fog_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D9340C
gLz77Asset_08D9340C: @ 0x08D9340C
	.incbin "build/assets/lz77_raw/08D9340C.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D93428
gLz77Asset_08D93428: @ 0x08D93428
	.incbin "build/assets/lz77_raw/08D93428.bin.lz"
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/scary_face_player.bin
	.globl gBattleAnimBgTilemap_ScaryFacePlayer
gBattleAnimBgTilemap_ScaryFacePlayer: @ 0x08D9354C
	@ exact GBA LZ77 slot: compressed=0x1E4, decompressed=0x800
	.incbin "build/graphics/battle_anims/backgrounds/scary_face_player.bin.lz"
	.if (. - gBattleAnimBgTilemap_ScaryFacePlayer) != 0x1E4
	.error "gBattleAnimBgTilemap_ScaryFacePlayer compressed size mismatch"
	.endif
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/scary_face_opponent.bin
	.globl gBattleAnimBgTilemap_ScaryFaceOpponent
gBattleAnimBgTilemap_ScaryFaceOpponent: @ 0x08D93730
	@ exact GBA LZ77 slot: compressed=0x1E4, decompressed=0x800
	.incbin "build/graphics/battle_anims/backgrounds/scary_face_opponent.bin.lz"
	.if (. - gBattleAnimBgTilemap_ScaryFaceOpponent) != 0x1E4
	.error "gBattleAnimBgTilemap_ScaryFaceOpponent compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D93914: battle_anim_effects_2.s: sub_08106D48
.globl gBattleAnimBgTilemap_ScaryFaceContest
gBattleAnimBgTilemap_ScaryFaceContest: @ 0x08D93914
	@ confirmed GBA LZ77 stream: compressed=0x1E2, decompressed=0x800
	@ analyzed canonical ROM range 0x08D93914-0x08D94A6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 20 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/scary_face_contest_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D93AF8
gLz77Asset_08D93AF8: @ 0x08D93AF8
	.incbin "build/assets/lz77_raw/08D93AF8.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D93B38
gLz77Asset_08D93B38: @ 0x08D93B38
	.incbin "build/assets/lz77_raw/08D93B38.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D93B50
gLz77Asset_08D93B50: @ 0x08D93B50
	.incbin "build/assets/lz77_raw/08D93B50.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D93B90
gLz77Asset_08D93B90: @ 0x08D93B90
	.incbin "build/assets/lz77_raw/08D93B90.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D93BA8
gLz77Asset_08D93BA8: @ 0x08D93BA8
	.incbin "build/assets/lz77_raw/08D93BA8.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D93BC0
gLz77Asset_08D93BC0: @ 0x08D93BC0
	.incbin "build/assets/lz77_raw/08D93BC0.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D93BD8
gLz77Asset_08D93BD8: @ 0x08D93BD8
	.incbin "build/assets/lz77_raw/08D93BD8.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D93DE4
gLz77Asset_08D93DE4: @ 0x08D93DE4
	.incbin "build/assets/lz77_raw/08D93DE4.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D93E00
gLz77Asset_08D93E00: @ 0x08D93E00
	.incbin "build/assets/lz77_raw/08D93E00.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D93E4C
gLz77Asset_08D93E4C: @ 0x08D93E4C
	.incbin "build/assets/lz77_raw/08D93E4C.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D93E68
gLz77Asset_08D93E68: @ 0x08D93E68
	.incbin "build/assets/lz77_raw/08D93E68.bin.lz"
	.globl gLz77Asset_08D93FF0
gLz77Asset_08D93FF0: @ 0x08D93FF0
	.incbin "build/assets/lz77_raw/08D93FF0.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D94010
gLz77Asset_08D94010: @ 0x08D94010
	.incbin "build/assets/lz77_raw/08D94010.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D94304
gLz77Asset_08D94304: @ 0x08D94304
	.incbin "build/assets/lz77_raw/08D94304.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D94320
gLz77Asset_08D94320: @ 0x08D94320
	.incbin "build/assets/lz77_raw/08D94320.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D9460C
gLz77Asset_08D9460C: @ 0x08D9460C
	.incbin "build/assets/lz77_raw/08D9460C.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D94988
gLz77Asset_08D94988: @ 0x08D94988
	.incbin "build/assets/lz77_raw/08D94988.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D949A4
gLz77Asset_08D949A4: @ 0x08D949A4
	.incbin "build/assets/lz77_raw/08D949A4.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D94A44
gLz77Asset_08D94A44: @ 0x08D94A44
	.incbin "build/assets/lz77_raw/08D94A44.bin.lz"
	.byte 0x00, 0x00
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/water.png
	.globl gBattleAnimBgImage_Surf
gBattleAnimBgImage_Surf: @ 0x08D94A6C
	@ exact GBA LZ77 slot: compressed=0x1320, decompressed=0x2000
	.incbin "build/graphics/battle_anims/backgrounds/water.4bpp.lz"
	.if (. - gBattleAnimBgImage_Surf) != 0x1320
	.error "gBattleAnimBgImage_Surf compressed size mismatch"
	.endif
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/water.png
	.globl gBattleAnimBgPalette_Surf
gBattleAnimBgPalette_Surf: @ 0x08D95D8C
	@ exact GBA LZ77 slot: compressed=0x28, decompressed=0x20
	.incbin "build/graphics/battle_anims/backgrounds/water.gbapal.lz"
	.if (. - gBattleAnimBgPalette_Surf) != 0x28
	.error "gBattleAnimBgPalette_Surf compressed size mismatch"
	.endif
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/water_opponent.bin
	.globl gBattleAnimBgTilemap_SurfOpponent
gBattleAnimBgTilemap_SurfOpponent: @ 0x08D95DB4
	@ exact GBA LZ77 slot: compressed=0x2D0, decompressed=0x1000
	.incbin "build/graphics/battle_anims/backgrounds/water_opponent.bin.lz"
	.if (. - gBattleAnimBgTilemap_SurfOpponent) != 0x2D0
	.error "gBattleAnimBgTilemap_SurfOpponent compressed size mismatch"
	.endif
	@ canonical pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6: graphics/battle_anims/backgrounds/water_player.bin
	.globl gBattleAnimBgTilemap_SurfPlayer
gBattleAnimBgTilemap_SurfPlayer: @ 0x08D96084
	@ exact GBA LZ77 slot: compressed=0x2D4, decompressed=0x1000
	.incbin "build/graphics/battle_anims/backgrounds/water_player.bin.lz"
	.if (. - gBattleAnimBgTilemap_SurfPlayer) != 0x2D4
	.error "gBattleAnimBgTilemap_SurfPlayer compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D96358: water.s: AnimTask_CreateSurfWave
.globl gBattleAnimBgTilemap_SurfContest
gBattleAnimBgTilemap_SurfContest: @ 0x08D96358
	@ confirmed GBA LZ77 stream: compressed=0x2F2, decompressed=0x1000
	@ analyzed canonical ROM range 0x08D96358-0x08D9679F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 4 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/battle_anims/backgrounds/surf_contest_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D9664C
gLz77Asset_08D9664C: @ 0x08D9664C
	.incbin "build/assets/lz77_raw/08D9664C.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D96674
gLz77Asset_08D96674: @ 0x08D96674
	.incbin "build/assets/lz77_raw/08D96674.bin.lz"
	.globl gLz77Asset_08D96788
gLz77Asset_08D96788: @ 0x08D96788
	.incbin "build/assets/lz77_raw/08D96788.bin.lz"
	.byte 0x00, 0x00
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gPartyMenuBg_Gfx
gPartyMenuBg_Gfx: @ 0x08D967A0
	@ exact GBA LZ77 slot: compressed=0x2C8, decompressed=0x7C0
	.incbin "build/graphics/party_menu/bg.4bpp.lz"
	.if (. - gPartyMenuBg_Gfx) != 0x2C8
	.error "gPartyMenuBg_Gfx compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gPartyMenuBg_Pal
gPartyMenuBg_Pal: @ 0x08D96A68
	@ exact GBA LZ77 slot: compressed=0xEC, decompressed=0x160
	.incbin "build/graphics/party_menu/bg.gbapal.lz"
	.if (. - gPartyMenuBg_Pal) != 0xEC
	.error "gPartyMenuBg_Pal compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D96B54: party_menu.s: AllocPartyMiscGfx
.globl gPartyMenuBg_Tilemap
gPartyMenuBg_Tilemap: @ 0x08D96B54
	@ confirmed GBA LZ77 stream: compressed=0x138, decompressed=0x800
	@ analyzed canonical ROM range 0x08D96B54-0x08D97C53
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/party_menu/bg_rom_exact.tilemap.lz"
	.globl gLz77Asset_08D96C8C
gLz77Asset_08D96C8C: @ 0x08D96C8C
	.incbin "build/assets/lz77_raw/08D96C8C.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D96E0C
gLz77Asset_08D96E0C: @ 0x08D96E0C
	.incbin "build/assets/lz77_raw/08D96E0C.bin.lz"
	.globl gLz77Asset_08D96F20
gLz77Asset_08D96F20: @ 0x08D96F20
	.incbin "build/assets/lz77_raw/08D96F20.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D96F44
gLz77Asset_08D96F44: @ 0x08D96F44
	.incbin "build/assets/lz77_raw/08D96F44.bin.lz"
	.globl gLz77Asset_08D971A4
gLz77Asset_08D971A4: @ 0x08D971A4
	.incbin "build/assets/lz77_raw/08D971A4.bin.lz"
	.globl gLz77Asset_08D971CC
gLz77Asset_08D971CC: @ 0x08D971CC
	.incbin "build/assets/lz77_raw/08D971CC.bin.lz"
	.byte 0x00, 0x00, 0x00
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
