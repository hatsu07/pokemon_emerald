	@ pret/pokeemerald-jp direct xref for 0x08D8A918: intro.s: Task_IntroLoadKyogreScene
	.globl gIntroData_08D8A918
gIntroData_08D8A918:
	.globl gIntroKyogreBg_Tilemap
	@ exact GBA LZ77 from editable graphics/intro/scene_3/kyogre_bg.tilemap.u16: compressed=0x11E, decompressed=0x800
gIntroKyogreBg_Tilemap:
	@ canonical ROM range 0x08D8A918-0x08D8AA37
	.incbin "build/graphics/intro/scene_3/kyogre_bg.bin.lz"
	.if (. - gIntroKyogreBg_Tilemap) != 0x120
	.error "gIntroKyogreBg_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8AA38: intro.s: Task_IntroLoadClouds1
	.globl gIntroData_08D8AA38
gIntroData_08D8AA38:
	.globl gIntroClouds_Gfx
	@ exact GBA LZ77 from editable graphics/intro/scene_3/clouds.png: compressed=0x729, decompressed=0x2000
gIntroClouds_Gfx:
	@ canonical ROM range 0x08D8AA38-0x08D8B163
	.incbin "build/graphics/intro/scene_3/clouds.4bpp.lz"
	.if (. - gIntroClouds_Gfx) != 0x72C
	.error "gIntroClouds_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8B164: intro.s: Task_IntroLoadClouds2
	.globl gIntroData_08D8B164
gIntroData_08D8B164:
	.globl gIntroCloudsLeft_Tilemap
	@ exact GBA LZ77 from editable graphics/intro/scene_3/clouds_left.tilemap.u16: compressed=0x2BE, decompressed=0x1000
gIntroCloudsLeft_Tilemap:
	@ canonical ROM range 0x08D8B164-0x08D8B423
	.incbin "build/graphics/intro/scene_3/clouds_left.bin.lz"
	.if (. - gIntroCloudsLeft_Tilemap) != 0x2C0
	.error "gIntroCloudsLeft_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8B424: intro.s: Task_IntroLoadClouds2
	.globl gIntroData_08D8B424
gIntroData_08D8B424:
	.globl gIntroCloudsRight_Tilemap
	@ exact GBA LZ77 from editable graphics/intro/scene_3/clouds_right.tilemap.u16: compressed=0x2A6, decompressed=0x1000
gIntroCloudsRight_Tilemap:
	@ canonical ROM range 0x08D8B424-0x08D8B6CB
	.incbin "build/graphics/intro/scene_3/clouds_right.bin.lz"
	.if (. - gIntroCloudsRight_Tilemap) != 0x2A8
	.error "gIntroCloudsRight_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8B6CC: intro.s: Task_IntroLoadClouds1
.globl gIntroCloudsSun_Tilemap
gIntroCloudsSun_Tilemap: @ 0x08D8B6CC
	@ confirmed GBA LZ77 stream: compressed=0x124, decompressed=0x800
	@ analyzed canonical ROM range 0x08D8B6CC-0x08D8BA57
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 2 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/intro/scene_3/clouds_sun_rom_exact.tilemap.lz"
	.globl gIntroLightning_Gfx
gIntroLightning_Gfx: @ 0x08D8B7F0
	.incbin "build/graphics/intro/scene_static/lightning_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0xE9, 0x56, 0xFF, 0x4B, 0x5F, 0x03, 0xF9, 0x1A, 0xFF, 0x7F, 0x2A, 0x25, 0xAE, 0x29
	.byte 0x32, 0x32, 0xD6, 0x3A, 0x5A, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8BA58: intro.s: Task_IntroLoadRayquazaLightningScene
	.globl gIntroData_08D8BA58
gIntroData_08D8BA58:
	.globl gIntroRayquaza_Gfx
	@ exact GBA LZ77 from editable graphics/intro/scene_3/rayquaza.png: compressed=0x6F6, decompressed=0x2000
gIntroRayquaza_Gfx:
	@ canonical ROM range 0x08D8BA58-0x08D8C14F
	.incbin "build/graphics/intro/scene_3/rayquaza.4bpp.lz"
	.if (. - gIntroRayquaza_Gfx) != 0x6F8
	.error "gIntroRayquaza_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8C150: intro.s: Task_IntroLoadRayquazaLightningScene
.globl gIntroRayquaza_Tilemap
gIntroRayquaza_Tilemap: @ 0x08D8C150
	@ confirmed GBA LZ77 stream: compressed=0x208, decompressed=0x800
	@ analyzed canonical ROM range 0x08D8C150-0x08D8C81B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/intro/scene_3/rayquaza_rom_exact.tilemap.lz"
	.globl gLz77Asset_08D8C358
gLz77Asset_08D8C358: @ 0x08D8C358
	.incbin "build/assets/lz77_raw/08D8C358.bin.lz"
	.globl gLz77Asset_08D8C5A8
gLz77Asset_08D8C5A8: @ 0x08D8C5A8
	.incbin "build/assets/lz77_raw/08D8C5A8.bin.lz"
	.byte 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8C81C: intro.s: Task_IntroLoadRayquazaLightningScene
	.globl gIntroData_08D8C81C
gIntroData_08D8C81C:
	.globl gIntroRayquazaClouds_Gfx
	@ exact GBA LZ77 from editable graphics/intro/scene_3/rayquaza_clouds.png: compressed=0x48F, decompressed=0x2000
gIntroRayquazaClouds_Gfx:
	@ canonical ROM range 0x08D8C81C-0x08D8CCAB
	.incbin "build/graphics/intro/scene_3/rayquaza_clouds.4bpp.lz"
	.if (. - gIntroRayquazaClouds_Gfx) != 0x490
	.error "gIntroRayquazaClouds_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8CCAC: intro.s: Task_IntroLoadRayquazaLightningScene
.globl gIntroRayquazaClouds_Tilemap
gIntroRayquazaClouds_Tilemap: @ 0x08D8CCAC
	@ confirmed GBA LZ77 stream: compressed=0x27A, decompressed=0x800
	@ analyzed canonical ROM range 0x08D8CCAC-0x08D8D3F3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 5 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/intro/scene_3/rayquaza_clouds_rom_exact.tilemap.lz"
	.byte 0x00, 0x00
	.globl gIntroBubbles_Gfx
gIntroBubbles_Gfx: @ 0x08D8CF28
	.incbin "build/graphics/intro/scene_static/bubbles_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x4D, 0x32, 0xA0, 0x28, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xB1, 0x7E, 0x4D, 0x6E, 0xEA, 0x5D, 0x86, 0x4D, 0x23, 0x3D, 0xC0, 0x30
	.byte 0x16, 0x00
	.globl gIntroFlygonSilhouette_Gfx
gIntroFlygonSilhouette_Gfx: @ 0x08D8D114
	.incbin "build/graphics/intro/scene_static/flygon_silhouette_rom_exact.4bpp.lz"
	.byte 0x00
	.globl gIntroSparkle_Gfx
gIntroSparkle_Gfx: @ 0x08D8D1EC
	.incbin "build/graphics/intro/scene_static/sparkle_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	.globl gBattleAnimSpriteGfx_FlyingDirt
gBattleAnimSpriteGfx_FlyingDirt: @ 0x08D8D288
	.incbin "build/graphics/battle_anims/sprites/flying_dirt_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08D8D3F4: rock.s: AnimTask_LoadSandstormBackground
	.globl gRockData_08D8D3F4
gRockData_08D8D3F4:
	.globl gBattleAnimBgTilemap_Sandstorm
	@ exact GBA LZ77 from editable graphics/battle_anims/backgrounds/sandstorm_brew.tilemap.u16: compressed=0x17C, decompressed=0x800
gBattleAnimBgTilemap_Sandstorm:
	@ canonical ROM range 0x08D8D3F4-0x08D8D56F
	.incbin "build/graphics/battle_anims/backgrounds/sandstorm_brew.bin.lz"
	.if (. - gBattleAnimBgTilemap_Sandstorm) != 0x17C
	.error "gBattleAnimBgTilemap_Sandstorm compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D8D570: rock.s: AnimTask_LoadSandstormBackground
	.globl gRockData_08D8D570
gRockData_08D8D570:
	.globl gBattleAnimBgImage_Sandstorm
	@ exact GBA LZ77 from editable graphics/battle_anims/backgrounds/sandstorm_brew.png: compressed=0x52C, decompressed=0x800
gBattleAnimBgImage_Sandstorm:
	@ canonical ROM range 0x08D8D570-0x08D8DA9B
	.incbin "build/graphics/battle_anims/backgrounds/sandstorm_brew.4bpp.lz"
	.if (. - gBattleAnimBgImage_Sandstorm) != 0x52C
	.error "gBattleAnimBgImage_Sandstorm compressed size mismatch"
	.endif
