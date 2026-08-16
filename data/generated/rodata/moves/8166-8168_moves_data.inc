	@ pret/pokeemerald-jp direct xref for 0x08D91D6C: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_08D91D6C
gBerryBlenderData_08D91D6C:
	.globl sLz77Block_08D91D6C
	@ confirmed GBA LZ77 stream: compressed=0xA33, decompressed=0x2000
sLz77Block_08D91D6C:
	@ analyzed canonical ROM range 0x08D91D6C-0x08D9279F
	.incbin "build/graphics/analyzed/gunknown_8d91d6c_08d91d6c.4bpp.lz"
	.if (. - sLz77Block_08D91D6C) != 0xA34
	.error "sLz77Block_08D91D6C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D927A0: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderData_08D927A0
gBerryBlenderData_08D927A0: @ 0x08D927A0
	@ confirmed GBA LZ77 stream: compressed=0x311, decompressed=0x800
sLz77Block_08D927A0:
	@ analyzed canonical ROM range 0x08D927A0-0x08D93293
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 6 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D927A0.bin.lz"
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
	.globl gIceData_08D93294
gIceData_08D93294: @ 0x08D93294
	@ confirmed GBA LZ77 stream: compressed=0x176, decompressed=0x800
sLz77Block_08D93294:
	@ analyzed canonical ROM range 0x08D93294-0x08D9354B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D93294.bin.lz"
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
	.globl gBattleAnimEffects2Data_08D93914
gBattleAnimEffects2Data_08D93914: @ 0x08D93914
	@ confirmed GBA LZ77 stream: compressed=0x1E2, decompressed=0x800
sLz77Block_08D93914:
	@ analyzed canonical ROM range 0x08D93914-0x08D94A6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 20 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D93914.bin.lz"
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
	.globl gWaterData_08D96358
gWaterData_08D96358: @ 0x08D96358
	@ confirmed GBA LZ77 stream: compressed=0x2F2, decompressed=0x1000
sLz77Block_08D96358:
	@ analyzed canonical ROM range 0x08D96358-0x08D9679F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 4 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D96358.bin.lz"
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
	@ pret/pokeemerald-jp direct xref for 0x08D967A0: party_menu.s: AllocPartyMiscGfx
	.globl gPartyMenuData_08D967A0
gPartyMenuData_08D967A0:
	.globl sLz77Block_08D967A0
	@ confirmed GBA LZ77 stream: compressed=0x2C5, decompressed=0x7C0
sLz77Block_08D967A0:
	@ analyzed canonical ROM range 0x08D967A0-0x08D96A67
	.incbin "build/graphics/analyzed/gunknown_8d967a0_08d967a0.4bpp.lz"
	.if (. - sLz77Block_08D967A0) != 0x2C8
	.error "sLz77Block_08D967A0 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D96A68: party_menu.s: AllocPartyMiscGfx
	.globl gPartyMenuData_08D96A68
gPartyMenuData_08D96A68:
	.globl sLz77Block_08D96A68
	@ confirmed GBA LZ77 stream: compressed=0xEC, decompressed=0x160
sLz77Block_08D96A68:
	@ analyzed canonical ROM range 0x08D96A68-0x08D96B53
	.incbin "build/graphics/analyzed/gunknown_8d96a68_08d96a68.4bpp.lz"
	.if (. - sLz77Block_08D96A68) != 0xEC
	.error "sLz77Block_08D96A68 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D96B54: party_menu.s: AllocPartyMiscGfx
	.globl gPartyMenuData_08D96B54
gPartyMenuData_08D96B54: @ 0x08D96B54
	@ confirmed GBA LZ77 stream: compressed=0x138, decompressed=0x800
sLz77Block_08D96B54:
	@ analyzed canonical ROM range 0x08D96B54-0x08D97C53
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D96B54.bin.lz"
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
	.globl gPokemonSummaryScreenData_08D97C54
gPokemonSummaryScreenData_08D97C54: @ 0x08D97C54
	@ confirmed GBA LZ77 stream: compressed=0x67, decompressed=0x60
sLz77Block_08D97C54:
	@ analyzed canonical ROM range 0x08D97C54-0x08D97DCF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D97C54.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D97CBC
gLz77Asset_08D97CBC: @ 0x08D97CBC
	.incbin "build/assets/lz77_raw/08D97CBC.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D97DB8
gLz77Asset_08D97DB8: @ 0x08D97DB8
	.incbin "build/assets/lz77_raw/08D97DB8.bin.lz"
	@ pret/pokeemerald-jp direct xref for 0x08D97DD0: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_08D97DD0
gPokemonSummaryScreenData_08D97DD0:
	.globl sLz77Block_08D97DD0
	@ confirmed GBA LZ77 stream: compressed=0x9CA, decompressed=0x1B20
sLz77Block_08D97DD0:
	@ analyzed canonical ROM range 0x08D97DD0-0x08D9879B
	.incbin "build/graphics/analyzed/gunknown_8d97dd0_08d97dd0.4bpp.lz"
	.if (. - sLz77Block_08D97DD0) != 0x9CC
	.error "sLz77Block_08D97DD0 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9879C: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_08D9879C
gPokemonSummaryScreenData_08D9879C:
	.globl sLz77Block_08D9879C
	@ confirmed GBA LZ77 stream: compressed=0xEF, decompressed=0x100
sLz77Block_08D9879C:
	@ analyzed canonical ROM range 0x08D9879C-0x08D9888B
	.incbin "build/graphics/analyzed/gunknown_8d9879c_08d9879c.4bpp.lz"
	.if (. - sLz77Block_08D9879C) != 0xF0
	.error "sLz77Block_08D9879C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9888C: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_08D9888C
gPokemonSummaryScreenData_08D9888C:
	.globl sLz77Block_08D9888C
	@ confirmed GBA LZ77 stream: compressed=0x1B8, decompressed=0x800
sLz77Block_08D9888C:
	@ analyzed canonical ROM range 0x08D9888C-0x08D98A43
	.incbin "build/graphics/analyzed/gunknown_8d9888c_08d9888c.4bpp.lz"
	.if (. - sLz77Block_08D9888C) != 0x1B8
	.error "sLz77Block_08D9888C compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D98A44: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_08D98A44
gPokemonSummaryScreenData_08D98A44:
	.globl sLz77Block_08D98A44
	@ confirmed GBA LZ77 stream: compressed=0x163, decompressed=0x800
sLz77Block_08D98A44:
	@ analyzed canonical ROM range 0x08D98A44-0x08D98BA7
	.incbin "build/graphics/analyzed/gunknown_8d98a44_08d98a44.4bpp.lz"
	.if (. - sLz77Block_08D98A44) != 0x164
	.error "sLz77Block_08D98A44 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D98BA8: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_08D98BA8
gPokemonSummaryScreenData_08D98BA8:
	.globl sLz77Block_08D98BA8
	@ confirmed GBA LZ77 stream: compressed=0x16B, decompressed=0x800
sLz77Block_08D98BA8:
	@ analyzed canonical ROM range 0x08D98BA8-0x08D98D13
	.incbin "build/graphics/analyzed/gunknown_8d98ba8_08d98ba8.4bpp.lz"
	.if (. - sLz77Block_08D98BA8) != 0x16C
	.error "sLz77Block_08D98BA8 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D98D14: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_08D98D14
gPokemonSummaryScreenData_08D98D14:
	.globl sLz77Block_08D98D14
	@ confirmed GBA LZ77 stream: compressed=0x175, decompressed=0x800
sLz77Block_08D98D14:
	@ analyzed canonical ROM range 0x08D98D14-0x08D98E8B
	.incbin "build/graphics/analyzed/gunknown_8d98d14_08d98d14.4bpp.lz"
	.if (. - sLz77Block_08D98D14) != 0x178
	.error "sLz77Block_08D98D14 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D98E8C: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_08D98E8C
gPokemonSummaryScreenData_08D98E8C: @ 0x08D98E8C
	@ confirmed GBA LZ77 stream: compressed=0x1A3, decompressed=0x800
sLz77Block_08D98E8C:
	@ analyzed canonical ROM range 0x08D98E8C-0x08D9A733
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 4 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D98E8C.bin.lz"
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
	@ pret/pokeemerald-jp direct xref for 0x08D9A734: item_menu.s: LoadBagMenu_Graphics
	.globl gItemMenuData_08D9A734
gItemMenuData_08D9A734:
	.globl sLz77Block_08D9A734
	@ confirmed GBA LZ77 stream: compressed=0x4A, decompressed=0x40
sLz77Block_08D9A734:
	@ analyzed canonical ROM range 0x08D9A734-0x08D9A77F
	.incbin "build/graphics/analyzed/gunknown_8d9a734_08d9a734.4bpp.lz"
	.if (. - sLz77Block_08D9A734) != 0x4C
	.error "sLz77Block_08D9A734 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9A780: item_menu.s: LoadBagMenu_Graphics
	.globl gItemMenuData_08D9A780
gItemMenuData_08D9A780:
	.globl sLz77Block_08D9A780
	@ confirmed GBA LZ77 stream: compressed=0x4A, decompressed=0x40
sLz77Block_08D9A780:
	@ analyzed canonical ROM range 0x08D9A780-0x08D9A7CB
	.incbin "build/graphics/analyzed/gunknown_8d9a780_08d9a780.4bpp.lz"
	.if (. - sLz77Block_08D9A780) != 0x4C
	.error "sLz77Block_08D9A780 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9A7CC: battle_pyramid_bag.s: sub_081C4A40; item_menu.s: LoadBagMenu_Graphics
	.globl sLz77Block_08D9A7CC
	@ confirmed GBA LZ77 stream: compressed=0x2B7, decompressed=0x6A0
sLz77Block_08D9A7CC:
	@ analyzed canonical ROM range 0x08D9A7CC-0x08D9AA83
	.incbin "build/graphics/analyzed/gunknown_8d9a7cc_08d9a7cc.4bpp.lz"
	.if (. - sLz77Block_08D9A7CC) != 0x2B8
	.error "sLz77Block_08D9A7CC compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9AA84: item_menu.s: LoadBagMenu_Graphics
	.globl gItemMenuData_08D9AA84
gItemMenuData_08D9AA84: @ 0x08D9AA84
	@ confirmed GBA LZ77 stream: compressed=0x15D, decompressed=0x800
sLz77Block_08D9AA84:
	@ analyzed canonical ROM range 0x08D9AA84-0x08D9AFC7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D9AA84.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D9ABE4
gLz77Asset_08D9ABE4: @ 0x08D9ABE4
	.incbin "build/assets/lz77_raw/08D9ABE4.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D9AFC8: battle_pyramid_bag.s: sub_081C6658
	.globl gBattlePyramidBagData_08D9AFC8
gBattlePyramidBagData_08D9AFC8:
	.globl sLz77Block_08D9AFC8
	@ confirmed GBA LZ77 stream: compressed=0x33, decompressed=0x40
sLz77Block_08D9AFC8:
	@ analyzed canonical ROM range 0x08D9AFC8-0x08D9AFFB
	.incbin "build/graphics/analyzed/gunknown_8d9afc8_08d9afc8.4bpp.lz"
	.if (. - sLz77Block_08D9AFC8) != 0x34
	.error "sLz77Block_08D9AFC8 compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9AFFC: battle_pyramid_bag.s: sub_081C4A40
	.globl gBattlePyramidBagData_08D9AFFC
gBattlePyramidBagData_08D9AFFC:
	.globl sLz77Block_08D9AFFC
	@ confirmed GBA LZ77 stream: compressed=0x13E, decompressed=0x800
sLz77Block_08D9AFFC:
	@ analyzed canonical ROM range 0x08D9AFFC-0x08D9B13B
	.incbin "build/graphics/analyzed/gunknown_8d9affc_08d9affc.4bpp.lz"
	.if (. - sLz77Block_08D9AFFC) != 0x140
	.error "sLz77Block_08D9AFFC compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D9B13C: battle_pyramid_bag.s: sub_081C4A40
	.globl gBattlePyramidBagData_08D9B13C
gBattlePyramidBagData_08D9B13C: @ 0x08D9B13C
	@ confirmed GBA LZ77 stream: compressed=0x28, decompressed=0x20
sLz77Block_08D9B13C:
	@ analyzed canonical ROM range 0x08D9B13C-0x08D9B1B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D9B13C.bin.lz"
	.globl gLz77Asset_08D9B164
gLz77Asset_08D9B164: @ 0x08D9B164
	.incbin "build/assets/lz77_raw/08D9B164.bin.lz"
	.globl gLz77Asset_08D9B1A4
gLz77Asset_08D9B1A4: @ 0x08D9B1A4
	.incbin "build/assets/lz77_raw/08D9B1A4.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D9B1B4: shop.s: BuyMenuDecompressBgGraphics
	.globl gShopData_08D9B1B4
gShopData_08D9B1B4:
	.globl sLz77Block_08D9B1B4
	@ confirmed GBA LZ77 stream: compressed=0x109, decompressed=0x3A0
sLz77Block_08D9B1B4:
	@ analyzed canonical ROM range 0x08D9B1B4-0x08D9B2BF
	.incbin "build/graphics/analyzed/gunknown_8d9b1b4_08d9b1b4.4bpp.lz"
	.if (. - sLz77Block_08D9B1B4) != 0x10C
	.error "sLz77Block_08D9B1B4 compressed size mismatch"
	.endif
