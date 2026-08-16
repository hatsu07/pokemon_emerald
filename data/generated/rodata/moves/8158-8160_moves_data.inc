	@ pret/pokeemerald-jp direct xref for 0x08D7A7C4: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7A7C4
gBattleBgData_08D7A7C4:
	.globl sLz77Block_08D7A7C4
	@ confirmed GBA LZ77 stream: compressed=0x2AF, decompressed=0x1000
sLz77Block_08D7A7C4:
	@ analyzed canonical ROM range 0x08D7A7C4-0x08D7BBB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7A7C4.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7AA74
gLz77Asset_08D7AA74: @ 0x08D7AA74
	.incbin "build/assets/lz77_raw/08D7AA74.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7B01C
gLz77Asset_08D7B01C: @ 0x08D7B01C
	.incbin "build/assets/lz77_raw/08D7B01C.bin.lz"
	.globl gLz77Asset_08D7B05C
gLz77Asset_08D7B05C: @ 0x08D7B05C
	.incbin "build/assets/lz77_raw/08D7B05C.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7B30C
gLz77Asset_08D7B30C: @ 0x08D7B30C
	.incbin "build/assets/lz77_raw/08D7B30C.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7B8CC
gLz77Asset_08D7B8CC: @ 0x08D7B8CC
	.incbin "build/assets/lz77_raw/08D7B8CC.bin.lz"
	.globl gLz77Asset_08D7B908
gLz77Asset_08D7B908: @ 0x08D7B908
	.incbin "build/assets/lz77_raw/08D7B908.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D7BBB8: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7BBB8
gBattleBgData_08D7BBB8:
	.globl sLz77Block_08D7BBB8
	@ confirmed GBA LZ77 stream: compressed=0x5F7, decompressed=0x2000
sLz77Block_08D7BBB8:
	@ analyzed canonical ROM range 0x08D7BBB8-0x08D7C1F7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7BBB8.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7C1B0
gLz77Asset_08D7C1B0: @ 0x08D7C1B0
	.incbin "build/assets/lz77_raw/08D7C1B0.bin.lz"
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D7C1F8: battle_bg.s: DrawMainBattleBackground, LoadChosenBattleElement
	.globl gBattleBgData_08D7C1F8
gBattleBgData_08D7C1F8:
	.globl sLz77Block_08D7C1F8
	@ confirmed GBA LZ77 stream: compressed=0x2AF, decompressed=0x1000
sLz77Block_08D7C1F8:
	@ analyzed canonical ROM range 0x08D7C1F8-0x08D7C4E3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7C1F8.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D7C4A8
gLz77Asset_08D7C4A8: @ 0x08D7C4A8
	.incbin "build/assets/lz77_raw/08D7C4A8.bin.lz"
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentTiles_Building
gBattleEnvironmentTiles_Building: @ 0x08D7C4E4
	@ exact GBA LZ77 slot: compressed=0x5AC, decompressed=0x2000
	.incbin "build/graphics/battle_environment/building/tiles.4bpp.lz"
	.if (. - gBattleEnvironmentTiles_Building) != 0x5AC
	.error "gBattleEnvironmentTiles_Building compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_Frontier
gBattleEnvironmentPalette_Frontier: @ 0x08D7CA90
	@ exact GBA LZ77 slot: compressed=0x3C, decompressed=0x60
	.incbin "build/graphics/battle_environment/stadium/battle_frontier.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_Frontier) != 0x3C
	.error "gBattleEnvironmentPalette_Frontier compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentTilemap_Building
gBattleEnvironmentTilemap_Building: @ 0x08D7CACC
	@ exact GBA LZ77 slot: compressed=0x2B0, decompressed=0x1000
	.incbin "build/graphics/battle_environment/building/map.bin.lz"
	.if (. - gBattleEnvironmentTilemap_Building) != 0x2B0
	.error "gBattleEnvironmentTilemap_Building compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentTiles_Stadium
gBattleEnvironmentTiles_Stadium: @ 0x08D7CD7C
	@ exact GBA LZ77 slot: compressed=0x608, decompressed=0x2000
	.incbin "build/graphics/battle_environment/stadium/tiles.4bpp.lz"
	.if (. - gBattleEnvironmentTiles_Stadium) != 0x608
	.error "gBattleEnvironmentTiles_Stadium compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentTilemap_Stadium
gBattleEnvironmentTilemap_Stadium: @ 0x08D7D384
	@ exact GBA LZ77 slot: compressed=0x2B0, decompressed=0x1000
	.incbin "build/graphics/battle_environment/stadium/map.bin.lz"
	.if (. - gBattleEnvironmentTilemap_Stadium) != 0x2B0
	.error "gBattleEnvironmentTilemap_Stadium compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentTiles_Rayquaza
gBattleEnvironmentTiles_Rayquaza: @ 0x08D7D634
	@ exact GBA LZ77 slot: compressed=0x674, decompressed=0x2000
	.incbin "build/graphics/battle_environment/sky/tiles.4bpp.lz"
	.if (. - gBattleEnvironmentTiles_Rayquaza) != 0x674
	.error "gBattleEnvironmentTiles_Rayquaza compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7DCA8: battle_bg.s: DrawMainBattleBackground
	.globl gBattleBgData_08D7DCA8
gBattleBgData_08D7DCA8: @ 0x08D7DCA8
	@ confirmed GBA LZ77 stream: compressed=0x2AE, decompressed=0x1000
sLz77Block_08D7DCA8:
	@ analyzed canonical ROM range 0x08D7DCA8-0x08D7DF97
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7DCA8.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D7DF58
gLz77Asset_08D7DF58: @ 0x08D7DF58
	.incbin "build/assets/lz77_raw/08D7DF58.bin.lz"
	.byte 0x00, 0x00
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_Kyogre
gBattleEnvironmentPalette_Kyogre: @ 0x08D7DF98
	@ exact GBA LZ77 slot: compressed=0x3C, decompressed=0x60
	.incbin "build/graphics/battle_environment/water/kyogre.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_Kyogre) != 0x3C
	.error "gBattleEnvironmentPalette_Kyogre compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_Groudon
gBattleEnvironmentPalette_Groudon: @ 0x08D7DFD4
	@ exact GBA LZ77 slot: compressed=0x58, decompressed=0x60
	.incbin "build/graphics/battle_environment/cave/groudon.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_Groudon) != 0x58
	.error "gBattleEnvironmentPalette_Groudon compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_BuildingGym
gBattleEnvironmentPalette_BuildingGym: @ 0x08D7E02C
	@ exact GBA LZ77 slot: compressed=0x3C, decompressed=0x60
	.incbin "build/graphics/battle_environment/building/gym.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_BuildingGym) != 0x3C
	.error "gBattleEnvironmentPalette_BuildingGym compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_BuildingLeader
gBattleEnvironmentPalette_BuildingLeader: @ 0x08D7E068
	@ exact GBA LZ77 slot: compressed=0x3C, decompressed=0x60
	.incbin "build/graphics/battle_environment/building/leader.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_BuildingLeader) != 0x3C
	.error "gBattleEnvironmentPalette_BuildingLeader compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_StadiumAqua
gBattleEnvironmentPalette_StadiumAqua: @ 0x08D7E0A4
	@ exact GBA LZ77 slot: compressed=0x60, decompressed=0x60
	.incbin "build/graphics/battle_environment/stadium/aqua.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_StadiumAqua) != 0x60
	.error "gBattleEnvironmentPalette_StadiumAqua compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_StadiumMagma
gBattleEnvironmentPalette_StadiumMagma: @ 0x08D7E104
	@ exact GBA LZ77 slot: compressed=0x6C, decompressed=0x60
	.incbin "build/graphics/battle_environment/stadium/magma.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_StadiumMagma) != 0x6C
	.error "gBattleEnvironmentPalette_StadiumMagma compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_StadiumSidney
gBattleEnvironmentPalette_StadiumSidney: @ 0x08D7E170
	@ exact GBA LZ77 slot: compressed=0x50, decompressed=0x60
	.incbin "build/graphics/battle_environment/stadium/sidney.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_StadiumSidney) != 0x50
	.error "gBattleEnvironmentPalette_StadiumSidney compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_StadiumPhoebe
gBattleEnvironmentPalette_StadiumPhoebe: @ 0x08D7E1C0
	@ exact GBA LZ77 slot: compressed=0x48, decompressed=0x60
	.incbin "build/graphics/battle_environment/stadium/phoebe.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_StadiumPhoebe) != 0x48
	.error "gBattleEnvironmentPalette_StadiumPhoebe compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_StadiumGlacia
gBattleEnvironmentPalette_StadiumGlacia: @ 0x08D7E208
	@ exact GBA LZ77 slot: compressed=0x44, decompressed=0x60
	.incbin "build/graphics/battle_environment/stadium/glacia.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_StadiumGlacia) != 0x44
	.error "gBattleEnvironmentPalette_StadiumGlacia compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_StadiumDrake
gBattleEnvironmentPalette_StadiumDrake: @ 0x08D7E24C
	@ exact GBA LZ77 slot: compressed=0x50, decompressed=0x60
	.incbin "build/graphics/battle_environment/stadium/drake.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_StadiumDrake) != 0x50
	.error "gBattleEnvironmentPalette_StadiumDrake compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentPalette_StadiumWallace
gBattleEnvironmentPalette_StadiumWallace: @ 0x08D7E29C
	@ exact GBA LZ77 slot: compressed=0x3C, decompressed=0x60
	.incbin "build/graphics/battle_environment/stadium/wallace.gbapal.lz"
	.if (. - gBattleEnvironmentPalette_StadiumWallace) != 0x3C
	.error "gBattleEnvironmentPalette_StadiumWallace compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7E2D8: battle_bg.s: DrawMainBattleBackground
	.globl gBattleBgData_08D7E2D8
gBattleBgData_08D7E2D8: @ 0x08D7E2D8
	@ confirmed GBA LZ77 stream: compressed=0x49, decompressed=0x60
sLz77Block_08D7E2D8:
	@ analyzed canonical ROM range 0x08D7E2D8-0x08D7FA9B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7E2D8.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7E324
gLz77Asset_08D7E324: @ 0x08D7E324
	.incbin "build/assets/lz77_raw/08D7E324.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7E8AC
gLz77Asset_08D7E8AC: @ 0x08D7E8AC
	.incbin "build/assets/lz77_raw/08D7E8AC.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7EA68
gLz77Asset_08D7EA68: @ 0x08D7EA68
	.incbin "build/assets/lz77_raw/08D7EA68.bin.lz"
	.globl gLz77Asset_08D7F178
gLz77Asset_08D7F178: @ 0x08D7F178
	.incbin "build/assets/lz77_raw/08D7F178.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D7F3B0
gLz77Asset_08D7F3B0: @ 0x08D7F3B0
	.incbin "build/assets/lz77_raw/08D7F3B0.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D7F8F4
gLz77Asset_08D7F8F4: @ 0x08D7F8F4
	.incbin "build/assets/lz77_raw/08D7F8F4.bin.lz"
	.byte 0x00, 0x00
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentAnimTiles_Underwater
gBattleEnvironmentAnimTiles_Underwater: @ 0x08D7FA9C
	@ exact GBA LZ77 slot: compressed=0x4CC, decompressed=0x2000
	.incbin "build/graphics/battle_environment/underwater/anim_tiles.4bpp.lz"
	.if (. - gBattleEnvironmentAnimTiles_Underwater) != 0x4CC
	.error "gBattleEnvironmentAnimTiles_Underwater compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D7FF68: battle_bg.s: DrawBattleEntryBackground
	.globl gBattleBgData_08D7FF68
gBattleBgData_08D7FF68:
	.globl sLz77Block_08D7FF68
	@ confirmed GBA LZ77 stream: compressed=0x18D, decompressed=0x800
sLz77Block_08D7FF68:
	@ analyzed canonical ROM range 0x08D7FF68-0x08D816B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 7 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/08D7FF68.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D800F8
gLz77Asset_08D800F8: @ 0x08D800F8
	.incbin "build/assets/lz77_raw/08D800F8.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_08D80704
gLz77Asset_08D80704: @ 0x08D80704
	.incbin "build/assets/lz77_raw/08D80704.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D808A8
gLz77Asset_08D808A8: @ 0x08D808A8
	.incbin "build/assets/lz77_raw/08D808A8.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D80DF4
gLz77Asset_08D80DF4: @ 0x08D80DF4
	.incbin "build/assets/lz77_raw/08D80DF4.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_08D80F40
gLz77Asset_08D80F40: @ 0x08D80F40
	.incbin "build/assets/lz77_raw/08D80F40.bin.lz"
	.byte 0x00
	.globl gLz77Asset_08D81520
gLz77Asset_08D81520: @ 0x08D81520
	.incbin "build/assets/lz77_raw/08D81520.bin.lz"
	.byte 0x00
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentAnimTiles_Cave
gBattleEnvironmentAnimTiles_Cave: @ 0x08D816B4
	@ exact GBA LZ77 slot: compressed=0x81C, decompressed=0x2000
	.incbin "build/graphics/battle_environment/cave/anim_tiles.4bpp.lz"
	.if (. - gBattleEnvironmentAnimTiles_Cave) != 0x81C
	.error "gBattleEnvironmentAnimTiles_Cave compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentAnimTilemap_Cave
gBattleEnvironmentAnimTilemap_Cave: @ 0x08D81ED0
	@ exact GBA LZ77 slot: compressed=0x2A8, decompressed=0x800
	.incbin "build/graphics/battle_environment/cave/anim_map.bin.lz"
	.if (. - gBattleEnvironmentAnimTilemap_Cave) != 0x2A8
	.error "gBattleEnvironmentAnimTilemap_Cave compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentAnimTiles_Building
gBattleEnvironmentAnimTiles_Building: @ 0x08D82178
	@ exact GBA LZ77 slot: compressed=0x410, decompressed=0x2000
	.incbin "build/graphics/battle_environment/building/anim_tiles.4bpp.lz"
	.if (. - gBattleEnvironmentAnimTiles_Building) != 0x410
	.error "gBattleEnvironmentAnimTiles_Building compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentAnimTilemap_Building
gBattleEnvironmentAnimTilemap_Building: @ 0x08D82588
	@ exact GBA LZ77 slot: compressed=0x124, decompressed=0x800
	.incbin "build/graphics/battle_environment/building/anim_map.bin.lz"
	.if (. - gBattleEnvironmentAnimTilemap_Building) != 0x124
	.error "gBattleEnvironmentAnimTilemap_Building compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentAnimTiles_Rayquaza
gBattleEnvironmentAnimTiles_Rayquaza: @ 0x08D826AC
	@ exact GBA LZ77 slot: compressed=0x668, decompressed=0x2000
	.incbin "build/graphics/battle_environment/sky/anim_tiles.4bpp.lz"
	.if (. - gBattleEnvironmentAnimTiles_Rayquaza) != 0x668
	.error "gBattleEnvironmentAnimTiles_Rayquaza compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gBattleEnvironmentAnimTilemap_Rayquaza
gBattleEnvironmentAnimTilemap_Rayquaza: @ 0x08D82D14
	@ exact GBA LZ77 slot: compressed=0x2A0, decompressed=0x800
	.incbin "build/graphics/battle_environment/sky/anim_map.bin.lz"
	.if (. - gBattleEnvironmentAnimTilemap_Rayquaza) != 0x2A0
	.error "gBattleEnvironmentAnimTilemap_Rayquaza compressed size mismatch"
	.endif
	@ semantic mapping proven by pret/pokeemerald-jp @ 6806c3e507da87a883b437f048969a45b38250c8
	@ semantic name/source reference: pret/pokeemerald @ 9a83a2bbe8e097e62c00f1dbd56849766775d7b6
	.globl gDomeTourneyTree_Gfx
gDomeTourneyTree_Gfx: @ 0x08D82FB4
	@ exact GBA LZ77 slot: compressed=0x5EC, decompressed=0x2000
	.incbin "build/graphics/battle_frontier/tourney_tree.4bpp.lz"
	.if (. - gDomeTourneyTree_Gfx) != 0x5EC
	.error "gDomeTourneyTree_Gfx compressed size mismatch"
	.endif
