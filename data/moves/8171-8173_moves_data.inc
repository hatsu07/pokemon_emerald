	@ BEGIN RAYQUAZA SCENE 1 CLOUDS EXACT ASSETS
	@ Complete Scene 1 clouds/rain BG asset set.
	@ Editable sources -> exact original LZ77 build artifacts.
	.globl gRayquazaSceneData_08DA3668
gRayquazaSceneData_08DA3668:
sLz77Block_08DA3668:
	.globl gRaySceneDuoFight_Clouds_Gfx
gRaySceneDuoFight_Clouds_Gfx: @ 0x08DA3668
	.incbin "build/graphics/rayquaza_scene/scene_1/clouds.4bpp.lz"
	.globl gRayquazaSceneData_08DA3A90
gRayquazaSceneData_08DA3A90:
sLz77Block_08DA3A90:
	.globl gRaySceneDuoFight_Clouds_Pal
gRaySceneDuoFight_Clouds_Pal: @ 0x08DA3A90
	.incbin "build/graphics/rayquaza_scene/scene_1/clouds.gbapal.lz"
	.globl gRayquazaSceneData_08DA3ACC
gRayquazaSceneData_08DA3ACC:
sLz77Block_08DA3ACC:
	.globl gRaySceneDuoFight_Clouds1_Tilemap
gRaySceneDuoFight_Clouds1_Tilemap: @ 0x08DA3ACC
	.incbin "build/graphics/rayquaza_scene/scene_1/clouds1.bin.lz"
	.globl gRayquazaSceneData_08DA3C30
gRayquazaSceneData_08DA3C30:
sLz77Block_08DA3C30:
	.globl gRaySceneDuoFight_Clouds2_Tilemap
gRaySceneDuoFight_Clouds2_Tilemap: @ 0x08DA3C30
	.incbin "build/graphics/rayquaza_scene/scene_1/clouds2.bin.lz"
	.globl gRayquazaSceneData_08DA3D30
gRayquazaSceneData_08DA3D30:
sLz77Block_08DA3D30:
	.globl gRaySceneDuoFight_Clouds3_Tilemap
gRaySceneDuoFight_Clouds3_Tilemap: @ 0x08DA3D30
	.incbin "build/graphics/rayquaza_scene/scene_1/clouds3.bin.lz"
	@ END RAYQUAZA SCENE 1 CLOUDS EXACT ASSETS

	@ BEGIN RAYQUAZA SCENE 2 EXACT ASSETS
	@ Takes Flight: smoke, Rayquaza, BG, palettes, tilemaps.
	@ Editable sources -> exact original LZ77 artifacts.
	.globl gRayquazaSceneData_08DA3E68
gRayquazaSceneData_08DA3E68:
sLz77Block_08DA3E68:
	.globl gRaySceneTakesFlight_Smoke_Gfx
gRaySceneTakesFlight_Smoke_Gfx: @ 0x08DA3E68
	.incbin "build/graphics/rayquaza_scene/scene_2/smoke.4bpp.lz"
	.globl gRayquazaSceneData_08DA3F24
gRayquazaSceneData_08DA3F24:
sLz77Block_08DA3F24:
	.globl gRaySceneTakesFlight_Smoke_Pal
gRaySceneTakesFlight_Smoke_Pal: @ 0x08DA3F24
	.incbin "build/graphics/rayquaza_scene/scene_2/smoke.gbapal.lz"
	.globl gRayquazaSceneData_08DA3F3C
gRayquazaSceneData_08DA3F3C:
sLz77Block_08DA3F3C:
	.globl gRaySceneTakesFlight_Rayquaza_Gfx
gRaySceneTakesFlight_Rayquaza_Gfx: @ 0x08DA3F3C
	.incbin "build/graphics/rayquaza_scene/scene_2/rayquaza.8bpp.lz"
	.globl gRayquazaSceneData_08DA5050
gRayquazaSceneData_08DA5050:
sLz77Block_08DA5050:
	.globl gRaySceneTakesFlight_Rayquaza_Pal
gRaySceneTakesFlight_Rayquaza_Pal: @ 0x08DA5050
	.incbin "build/graphics/rayquaza_scene/scene_2/rayquaza.gbapal.lz"
	.globl gRayquazaSceneData_08DA5094
gRayquazaSceneData_08DA5094:
sLz77Block_08DA5094:
	.globl gRaySceneTakesFlight_Rayquaza_Tilemap
gRaySceneTakesFlight_Rayquaza_Tilemap: @ 0x08DA5094
	.incbin "build/graphics/rayquaza_scene/scene_2/rayquaza.bin.lz"
	.globl gRayquazaSceneData_08DA5218
gRayquazaSceneData_08DA5218:
sLz77Block_08DA5218:
	.globl gRaySceneTakesFlight_Bg_Gfx
gRaySceneTakesFlight_Bg_Gfx: @ 0x08DA5218
	.incbin "build/graphics/rayquaza_scene/scene_2/bg.4bpp.lz"
	.globl gRayquazaSceneData_08DA6360
gRayquazaSceneData_08DA6360:
sLz77Block_08DA6360:
	.globl gRaySceneTakesFlight_Bg_Tilemap
gRaySceneTakesFlight_Bg_Tilemap: @ 0x08DA6360
	.incbin "build/graphics/rayquaza_scene/scene_2/bg.bin.lz"
	@ END RAYQUAZA SCENE 2 EXACT ASSETS

	@ BEGIN RAYQUAZA SCENE 3 EXACT ASSETS
	@ Descends: Rayquaza, tail, BG, light, palette, tilemaps.
	@ Rayquaza uses first 124 tiles; tail appends the original 12 zero bytes before LZ77.
	@ Editable sources -> exact original LZ77 artifacts.
	.globl gRayquazaSceneData_08DA66E8
gRayquazaSceneData_08DA66E8:
sLz77Block_08DA66E8:
	.globl gRaySceneDescends_Rayquaza_Gfx
gRaySceneDescends_Rayquaza_Gfx: @ 0x08DA66E8
	.incbin "build/graphics/rayquaza_scene/scene_3/rayquaza.4bpp.lz"
	.globl gRayquazaSceneData_08DA6B54
gRayquazaSceneData_08DA6B54:
sLz77Block_08DA6B54:
	.globl gRaySceneDescends_RayquazaTail_Gfx
gRaySceneDescends_RayquazaTail_Gfx: @ 0x08DA6B54
	.incbin "build/graphics/rayquaza_scene/scene_3/rayquaza_tail.4bpp.lz"
	.globl gRayquazaSceneData_08DA6C64
gRayquazaSceneData_08DA6C64:
sLz77Block_08DA6C64:
	.globl gRaySceneDescends_Bg_Gfx
gRaySceneDescends_Bg_Gfx: @ 0x08DA6C64
	.incbin "build/graphics/rayquaza_scene/scene_3/bg.4bpp.lz"
	.globl gRayquazaSceneData_08DA77D0
gRayquazaSceneData_08DA77D0:
sLz77Block_08DA77D0:
	.globl gRaySceneDescends_Light_Gfx
gRaySceneDescends_Light_Gfx: @ 0x08DA77D0
	.incbin "build/graphics/rayquaza_scene/scene_3/light.4bpp.lz"
	.globl gRayquazaSceneData_08DA79EC
gRayquazaSceneData_08DA79EC:
sLz77Block_08DA79EC:
	.globl gRaySceneDescends_Bg_Pal
gRaySceneDescends_Bg_Pal: @ 0x08DA79EC
	.incbin "build/graphics/rayquaza_scene/scene_3/bg.gbapal.lz"
	.globl gRayquazaSceneData_08DA7A2C
gRayquazaSceneData_08DA7A2C:
sLz77Block_08DA7A2C:
	.globl gRaySceneDescends_Bg_Tilemap
gRaySceneDescends_Bg_Tilemap: @ 0x08DA7A2C
	.incbin "build/graphics/rayquaza_scene/scene_3/bg.bin.lz"
	.globl gRayquazaSceneData_08DA7D54
gRayquazaSceneData_08DA7D54:
sLz77Block_08DA7D54:
	.globl gRaySceneDescends_Light_Tilemap
gRaySceneDescends_Light_Tilemap: @ 0x08DA7D54
	.incbin "build/graphics/rayquaza_scene/scene_3/light.bin.lz"
	@ END RAYQUAZA SCENE 3 EXACT ASSETS

	@ BEGIN RAYQUAZA SCENE 4 EXACT ASSETS
	@ Charges: BG, streaks, Rayquaza, orbs, palette, tilemaps.
	@ Streaks use first 19 tiles; Rayquaza uses first 155 tiles.
	@ Editable sources -> exact original LZ77 artifacts.
	.globl gRayquazaSceneData_08DA7ED8
gRayquazaSceneData_08DA7ED8:
sLz77Block_08DA7ED8:
	.globl gRaySceneCharges_Bg_Gfx
gRaySceneCharges_Bg_Gfx: @ 0x08DA7ED8
	.incbin "build/graphics/rayquaza_scene/scene_4/bg.4bpp.lz"
	.globl gRayquazaSceneData_08DA8014
gRayquazaSceneData_08DA8014:
sLz77Block_08DA8014:
	.globl gRaySceneCharges_Bg_Tilemap
gRaySceneCharges_Bg_Tilemap: @ 0x08DA8014
	.incbin "build/graphics/rayquaza_scene/scene_4/bg.bin.lz"
	.globl gRayquazaSceneData_08DA8154
gRayquazaSceneData_08DA8154:
sLz77Block_08DA8154:
	.globl gRaySceneCharges_Streaks_Gfx
gRaySceneCharges_Streaks_Gfx: @ 0x08DA8154
	.incbin "build/graphics/rayquaza_scene/scene_4/streaks.4bpp.lz"
	.globl gRayquazaSceneData_08DA825C
gRayquazaSceneData_08DA825C:
sLz77Block_08DA825C:
	.globl gRaySceneCharges_Streaks_Tilemap
gRaySceneCharges_Streaks_Tilemap: @ 0x08DA825C
	.incbin "build/graphics/rayquaza_scene/scene_4/streaks.bin.lz"
	.globl gRayquazaSceneData_08DA8364
gRayquazaSceneData_08DA8364:
sLz77Block_08DA8364:
	.globl gRaySceneCharges_Rayquaza_Gfx
gRaySceneCharges_Rayquaza_Gfx: @ 0x08DA8364
	.incbin "build/graphics/rayquaza_scene/scene_4/rayquaza.4bpp.lz"
	.globl gRayquazaSceneData_08DA8DE8
gRayquazaSceneData_08DA8DE8:
sLz77Block_08DA8DE8:
	.globl gRaySceneCharges_Rayquaza_Tilemap
gRaySceneCharges_Rayquaza_Tilemap: @ 0x08DA8DE8
	.incbin "build/graphics/rayquaza_scene/scene_4/rayquaza.bin.lz"
	.globl gRayquazaSceneData_08DA9014
gRayquazaSceneData_08DA9014:
sLz77Block_08DA9014:
	.globl gRaySceneCharges_Orbs_Tilemap
gRaySceneCharges_Orbs_Tilemap: @ 0x08DA9014
	.incbin "build/graphics/rayquaza_scene/scene_4/orbs.bin.lz"
	.globl gRayquazaSceneData_08DA912C
gRayquazaSceneData_08DA912C:
sLz77Block_08DA912C:
	.globl gRaySceneCharges_Bg_Pal
gRaySceneCharges_Bg_Pal: @ 0x08DA912C
	.incbin "build/graphics/rayquaza_scene/scene_4/bg.gbapal.lz"
	@ END RAYQUAZA SCENE 4 EXACT ASSETS

	@ BEGIN RAYQUAZA SCENE 5 EXACT ASSETS
	@ Chases Away: sprites, effects, palettes and tilemaps.
	@ Editable sources -> exact original LZ77 artifacts.
	.globl gRayquazaSceneData_08DA9180
gRayquazaSceneData_08DA9180:
sLz77Block_08DA9180:
	.globl gRaySceneChasesAway_Groudon_Gfx
gRaySceneChasesAway_Groudon_Gfx: @ 0x08DA9180
	.incbin "build/graphics/rayquaza_scene/scene_5/groudon.4bpp.lz"
	.globl gRayquazaSceneData_08DA9918
gRayquazaSceneData_08DA9918:
sLz77Block_08DA9918:
	.globl gRaySceneChasesAway_GroudonTail_Gfx
gRaySceneChasesAway_GroudonTail_Gfx: @ 0x08DA9918
	.incbin "build/graphics/rayquaza_scene/scene_5/groudon_tail.4bpp.lz"
	.globl gRayquazaSceneData_08DA995C
gRayquazaSceneData_08DA995C:
sLz77Block_08DA995C:
	.globl gRaySceneChasesAway_Kyogre_Gfx
gRaySceneChasesAway_Kyogre_Gfx: @ 0x08DA995C
	.incbin "build/graphics/rayquaza_scene/scene_5/kyogre.4bpp.lz"
	.globl gRayquazaSceneData_08DA9BA4
gRayquazaSceneData_08DA9BA4:
sLz77Block_08DA9BA4:
	.globl gRaySceneChasesAway_Rayquaza_Gfx
gRaySceneChasesAway_Rayquaza_Gfx: @ 0x08DA9BA4
	.incbin "build/graphics/rayquaza_scene/scene_5/rayquaza.4bpp.lz"
	.globl gRayquazaSceneData_08DAA84C
gRayquazaSceneData_08DAA84C:
sLz77Block_08DAA84C:
	.globl gRaySceneChasesAway_RayquazaTail_Gfx
gRaySceneChasesAway_RayquazaTail_Gfx: @ 0x08DAA84C
	.incbin "build/graphics/rayquaza_scene/scene_5/rayquaza_tail.4bpp.lz"
	.globl gRayquazaSceneData_08DAAA3C
gRayquazaSceneData_08DAAA3C:
sLz77Block_08DAAA3C:
	.globl gRaySceneChasesAway_KyogreSplash_Gfx
gRaySceneChasesAway_KyogreSplash_Gfx: @ 0x08DAAA3C
	.incbin "build/graphics/rayquaza_scene/scene_5/kyogre_splash.4bpp.lz"
	.globl gRayquazaSceneData_08DAAAD4
gRayquazaSceneData_08DAAAD4:
sLz77Block_08DAAAD4:
	.globl gRaySceneChasesAway_Groudon_Pal
gRaySceneChasesAway_Groudon_Pal: @ 0x08DAAAD4
	.incbin "build/graphics/rayquaza_scene/scene_5/groudon.gbapal.lz"
	.globl gRayquazaSceneData_08DAAAFC
gRayquazaSceneData_08DAAAFC:
sLz77Block_08DAAAFC:
	.globl gRaySceneChasesAway_Kyogre_Pal
gRaySceneChasesAway_Kyogre_Pal: @ 0x08DAAAFC
	.incbin "build/graphics/rayquaza_scene/scene_5/kyogre.gbapal.lz"
	.globl gRayquazaSceneData_08DAAB24
gRayquazaSceneData_08DAAB24:
sLz77Block_08DAAB24:
	.globl gRaySceneChasesAway_Rayquaza_Pal
gRaySceneChasesAway_Rayquaza_Pal: @ 0x08DAAB24
	.incbin "build/graphics/rayquaza_scene/scene_5/rayquaza.gbapal.lz"
	.globl gRayquazaSceneData_08DAAB4C
gRayquazaSceneData_08DAAB4C:
sLz77Block_08DAAB4C:
	.globl gRaySceneChasesAway_KyogreSplash_Pal
gRaySceneChasesAway_KyogreSplash_Pal: @ 0x08DAAB4C
	.incbin "build/graphics/rayquaza_scene/scene_5/kyogre_splash.gbapal.lz"
	.globl gRayquazaSceneData_08DAAB5C
gRayquazaSceneData_08DAAB5C:
sLz77Block_08DAAB5C:
	.globl gRaySceneChasesAway_Light_Gfx
gRaySceneChasesAway_Light_Gfx: @ 0x08DAAB5C
	.incbin "build/graphics/rayquaza_scene/scene_5/light.4bpp.lz"
	.globl gRayquazaSceneData_08DAADCC
gRayquazaSceneData_08DAADCC:
sLz77Block_08DAADCC:
	.globl gRaySceneChasesAway_Ring_Gfx
gRaySceneChasesAway_Ring_Gfx: @ 0x08DAADCC
	.incbin "build/graphics/rayquaza_scene/scene_5/ring.8bpp.lz"
	.globl gRayquazaSceneData_08DAAEC4
gRayquazaSceneData_08DAAEC4:
sLz77Block_08DAAEC4:
	.globl gRaySceneChasesAway_Light_Tilemap
gRaySceneChasesAway_Light_Tilemap: @ 0x08DAAEC4
	.incbin "build/graphics/rayquaza_scene/scene_5/light.bin.lz"
	.globl gRayquazaSceneData_08DAB0FC
gRayquazaSceneData_08DAB0FC:
sLz77Block_08DAB0FC:
	.globl gRaySceneChasesAway_Bg_Tilemap
gRaySceneChasesAway_Bg_Tilemap: @ 0x08DAB0FC
	.incbin "build/graphics/rayquaza_scene/scene_5/bg.bin.lz"
	.globl gRayquazaSceneData_08DAB240
gRayquazaSceneData_08DAB240:
sLz77Block_08DAB240:
	.globl gRaySceneChasesAway_Ring_Tilemap
gRaySceneChasesAway_Ring_Tilemap: @ 0x08DAB240
	.incbin "build/graphics/rayquaza_scene/scene_5/ring.bin.lz"
	@ RAYQUAZA SCENE 5 CONTINUES IN 8174
