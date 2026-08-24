
	.globl gClearSaveDataScreenBgTemplates
gClearSaveDataScreenBgTemplates: @ 0x085CDB90
	bg_template 0, 0, 31, 0, 0, 0, 0
	bg_template 3, 0, 30, 0, 0, 1, 0
	.if (. - gClearSaveDataScreenBgTemplates) != 2 * 4
	.error "gClearSaveDataScreenBgTemplates must contain two entries"
	.endif

	.globl gClearSaveDataScreenWindowTemplates
gClearSaveDataScreenWindowTemplates: @ 0x085CDB98
	window_template 0, 3, 15, 26, 4, 15, 0xB
	null_window_template
	.if (. - gClearSaveDataScreenWindowTemplates) != 2 * 8
	.error "gClearSaveDataScreenWindowTemplates must contain one entry and a terminator"
	.endif

	.globl gClearSaveDataMenuWindowTemplate
gClearSaveDataMenuWindowTemplate: @ 0x085CDBA8
	window_template 0, 3, 2, 5, 4, 15, 0x73

	.globl gIntroCreditsBgPalette_0
gIntroCreditsBgPalette_0: @ 0x085CDBB0
	.incbin "build/graphics/intro_credits/bg_palette_0.gbapal"

	.globl gIntroCreditsBgPalette_1
gIntroCreditsBgPalette_1: @ 0x085CDBD0
	.incbin "build/graphics/intro_credits/bg_palette_1.gbapal"

	.globl gIntroCreditsBgPalette_2
gIntroCreditsBgPalette_2: @ 0x085CDBF0
	.incbin "build/graphics/intro_credits/bg_palette_2.gbapal"
	.if (. - gIntroCreditsBgPalette_0) != 3 * 0x20
	.error "Intro credits BG palettes must contain three 16-color palettes"
	.endif
	.globl gIntroCreditsCommonBgGfx
gIntroCreditsCommonBgGfx: @ 0x085CDC10
	.incbin "build/graphics/intro_credits/common_bg.4bpp.lz"

	.globl gIntroCreditsCommonBgTilemap
gIntroCreditsCommonBgTilemap: @ 0x085CE090
	.incbin "build/graphics/intro_credits/common_bg.bin.lz"

	.globl gIntroCreditsScene0BgPalette
gIntroCreditsScene0BgPalette: @ 0x085CE1CC
	.incbin "build/graphics/intro_credits/scene0_bg_palette.gbapal"

	.globl gIntroCreditsScene1BgPalette
gIntroCreditsScene1BgPalette: @ 0x085CE22C
	.incbin "build/graphics/intro_credits/scene1_bg_palette.gbapal"
	.if (. - gIntroCreditsScene0BgPalette) != 2 * 0x60
	.error "Intro credits scene palettes must contain two 48-color palettes"
	.endif
	.globl gIntroCreditsCloudsBgGfx
gIntroCreditsCloudsBgGfx: @ 0x085CE28C
	.incbin "build/graphics/intro_credits/clouds_bg.4bpp.lz"

	.globl gIntroCreditsCloudsBgTilemaps
gIntroCreditsCloudsBgTilemaps: @ 0x085CE868
	.incbin "build/graphics/intro_credits/clouds_bg.bin.lz"

	.globl gIntroCreditsScene0CloudsObjPalette
gIntroCreditsScene0CloudsObjPalette: @ 0x085CEB38
	.incbin "build/graphics/intro_credits/scene0_clouds_obj_palette.gbapal"

	.globl gIntroCreditsScene1CloudsObjPalette
gIntroCreditsScene1CloudsObjPalette: @ 0x085CEB58
	.incbin "build/graphics/intro_credits/scene1_clouds_obj_palette.gbapal"

	.globl gIntroCreditsCloudsObjGfx
gIntroCreditsCloudsObjGfx: @ 0x085CEB78
	.incbin "build/graphics/intro_credits/clouds_obj.4bpp.lz"
	.globl gIntroPart2MountainsPalette
gIntroPart2MountainsPalette: @ 0x085CECB4
	.incbin "build/graphics/intro_credits/intro_part2_mountains_palette.gbapal"

	.globl gIntroCreditsMountainsPalette
gIntroCreditsMountainsPalette: @ 0x085CECD4
	.incbin "build/graphics/intro_credits/credits_mountains_palette.gbapal"

	.globl gIntroCreditsMountainsBgGfx
gIntroCreditsMountainsBgGfx: @ 0x085CECF4
	.incbin "build/graphics/intro_credits/mountains_bg.4bpp.lz"

	.globl gIntroCreditsMountainsBgTilemaps
gIntroCreditsMountainsBgTilemaps: @ 0x085CF37C
	.incbin "build/graphics/intro_credits/mountains_bg.bin.lz"

	.globl gIntroPart2MountainsObjPalette
gIntroPart2MountainsObjPalette: @ 0x085CF680
	.incbin "build/graphics/intro_credits/intro_part2_mountains_palette.gbapal"

	.globl gIntroCreditsMountainsObjGfx
gIntroCreditsMountainsObjGfx: @ 0x085CF6A0
	.incbin "build/graphics/intro_credits/mountains_obj.4bpp.lz"
	.globl gIntroCreditsCityBgPalette
gIntroCreditsCityBgPalette: @ 0x085CF7EC
	.incbin "build/graphics/intro_credits/city_bg_palette.gbapal"

	.globl gIntroCreditsCityBgGfx
gIntroCreditsCityBgGfx: @ 0x085CF82C
	.incbin "build/graphics/intro_credits/city_bg.4bpp.lz"

	.globl gIntroCreditsCityObjPalette
gIntroCreditsCityObjPalette: @ 0x085CFA18
	.incbin "build/graphics/intro_credits/city_obj_palette.gbapal"

	.globl gIntroCreditsCityBgTilemaps
gIntroCreditsCityBgTilemaps: @ 0x085CFA38
	.incbin "build/graphics/intro_credits/city_bg.bin.lz"

	.globl gIntroCreditsCityObjGfx
gIntroCreditsCityObjGfx: @ 0x085CFCE4
	.incbin "build/graphics/intro_credits/city_obj.4bpp.lz"

	.globl gCreditsBrendanBikePalette
gCreditsBrendanBikePalette: @ 0x085CFD68
	.incbin "build/graphics/intro_credits/credits_brendan_bike_palette.gbapal"

	.globl gCreditsBrendanBikeGfx
gCreditsBrendanBikeGfx: @ 0x085CFD88
	.incbin "build/graphics/intro_credits/credits_brendan_bike.4bpp.lz"

	.globl gCreditsMayBikePalette
gCreditsMayBikePalette: @ 0x085D0940
	.incbin "build/graphics/intro_credits/credits_may_bike_palette.gbapal"
	.space 0x1E0, 0 @ unused palette padding

	.globl gCreditsMayBikeGfx
gCreditsMayBikeGfx: @ 0x085D0B40
	.incbin "build/graphics/intro_credits/credits_may_bike.4bpp.lz"

	.globl gCreditsBicycleGfx
gCreditsBicycleGfx: @ 0x085D17E8
	.incbin "build/graphics/intro_credits/credits_bicycle.4bpp.lz"

	.globl gCreditsLatiosPalette
gCreditsLatiosPalette: @ 0x085D1C14
	.incbin "build/graphics/intro_credits/credits_latios_palette.gbapal"

	.globl gCreditsLatiosGfx
gCreditsLatiosGfx: @ 0x085D1C34
	.incbin "build/graphics/intro_credits/credits_latios.4bpp.lz"

	.globl gCreditsLatiasPalette
gCreditsLatiasPalette: @ 0x085D20D8
	.incbin "build/graphics/intro_credits/credits_latias_palette.gbapal"

	.globl gCreditsLatiasGfx
gCreditsLatiasGfx: @ 0x085D20F8
	.incbin "build/graphics/intro_credits/credits_latias.4bpp.lz"
	.if (. - gCreditsBrendanBikePalette) != 0x27B4
	.error "Credits bike and Eon Pokemon graphics must retain their original size"
	.endif

	.globl gIntroCreditsSceneSpriteTemplate
gIntroCreditsSceneSpriteTemplate: @ 0x085D251C
	rodata_sprite_template 0x7D0, TAG_NONE, gDummyOamData, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, sub_0817B4EC
	.globl gIntroCreditsCloudsSpriteSheet
gIntroCreditsCloudsSpriteSheet: @ 0x085D2534
	.4byte gIntroCreditsCloudsObjGfx
	.2byte 0x400
	.2byte 0x7D0
	.space 8, 0 @ unused second sheet entry

gIntroCreditsCloudsSpriteAnim_0: @ 0x085D2544
	sprite_anim_frame 0x00, 30
	sprite_anim_end

gIntroCreditsCloudsSpriteAnim_1: @ 0x085D254C
	sprite_anim_frame 0x10, 30
	sprite_anim_end

gIntroCreditsCloudsSpriteAnim_2: @ 0x085D2554
	sprite_anim_frame 0x14, 30
	sprite_anim_end

gIntroCreditsCloudsSpriteAnim_3: @ 0x085D255C
	sprite_anim_frame 0x16, 30
	sprite_anim_end

	.globl gIntroCreditsCloudsSpriteAnimTable
gIntroCreditsCloudsSpriteAnimTable: @ 0x085D2564
	sprite_anim_sequence gIntroCreditsCloudsSpriteAnim_0
	sprite_anim_sequence gIntroCreditsCloudsSpriteAnim_1
	sprite_anim_sequence gIntroCreditsCloudsSpriteAnim_2
	sprite_anim_sequence gIntroCreditsCloudsSpriteAnim_3

	.globl gIntroCreditsCloudsSpriteSpawns
gIntroCreditsCloudsSpriteSpawns: @ 0x085D2574
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  72, 32, 100, 0x0C00
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 158, 32, 100, 0x0C00
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x16, 192, 40, 101, 0x0800
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x16,  56, 40, 101, 0x0800
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x8,  100, 44, 102, 0x0400
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x8,  152, 44, 102, 0x0400
	intro_credits_sprite_spawn 3, SPRITE_SIZE_16x8,    8, 46, 103, 0x0100
	intro_credits_sprite_spawn 3, SPRITE_SIZE_16x8,   56, 46, 103, 0x0100
	intro_credits_sprite_spawn 3, SPRITE_SIZE_16x8,  240, 46, 103, 0x0100
	.if (. - gIntroCreditsCloudsSpriteSheet) != 0x88
	.error "Intro credits clouds sprite data must retain its original size"
	.endif

	.globl gIntroCreditsMountainsSpriteSheet
gIntroCreditsMountainsSpriteSheet: @ 0x085D25BC
	.4byte gIntroCreditsMountainsObjGfx
	.2byte 0x400
	.2byte 0x7D0
	.space 8, 0 @ unused second sheet entry

gIntroCreditsMountainsSpriteAnim_0: @ 0x085D25CC
	sprite_anim_frame 0x00, 30
	sprite_anim_end

gIntroCreditsMountainsSpriteAnim_1: @ 0x085D25D4
	sprite_anim_frame 0x10, 30
	sprite_anim_end

gIntroCreditsMountainsSpriteAnim_2: @ 0x085D25DC
	sprite_anim_frame 0x18, 30
	sprite_anim_end

	.globl gIntroCreditsMountainsSpriteAnimTable
gIntroCreditsMountainsSpriteAnimTable: @ 0x085D25E4
	sprite_anim_sequence gIntroCreditsMountainsSpriteAnim_0
	sprite_anim_sequence gIntroCreditsMountainsSpriteAnim_1
	sprite_anim_sequence gIntroCreditsMountainsSpriteAnim_2

	.globl gIntroCreditsMountainsSpriteSpawns
gIntroCreditsMountainsSpriteSpawns: @ 0x085D25F0
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  16, 88, 100, 0x2000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  80, 88, 100, 0x2000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 144, 88, 100, 0x2000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 208, 88, 100, 0x2000
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x32,  40, 88, 101, 0x1000
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x32, 104, 88, 101, 0x1000
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x32, 168, 88, 101, 0x1000
	intro_credits_sprite_spawn 1, SPRITE_SIZE_16x32, 232, 88, 101, 0x1000
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x32,  56, 88, 102, 0x0800
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x32, 120, 88, 102, 0x0800
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x32, 184, 88, 102, 0x0800
	intro_credits_sprite_spawn 2, SPRITE_SIZE_16x32, 248, 88, 102, 0x0800
	.if (. - gIntroCreditsMountainsSpriteSheet) != 0x94
	.error "Intro credits mountains sprite data must retain its original size"
	.endif
	.globl gIntroCreditsCitySpriteSheet
gIntroCreditsCitySpriteSheet: @ 0x085D2650
	.4byte gIntroCreditsCityObjGfx
	.2byte 0x400
	.2byte 0x7D0
	.space 8, 0 @ unused second sheet entry

gIntroCreditsCitySpriteAnim: @ 0x085D2660
	sprite_anim_frame 0, 30
	sprite_anim_end

	.globl gIntroCreditsCitySpriteAnimTable
gIntroCreditsCitySpriteAnimTable: @ 0x085D2668
	sprite_anim_sequence gIntroCreditsCitySpriteAnim

	.globl gIntroCreditsCitySpriteSpawns
gIntroCreditsCitySpriteSpawns: @ 0x085D266C
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  24, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32,  64, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 104, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 144, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 184, 88, 100, 0x1000
	intro_credits_sprite_spawn 0, SPRITE_SIZE_32x32, 224, 88, 100, 0x1000

gIntroCreditsRiderOamData: @ 0x085D269C
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 0, 0

gIntroCreditsRiderSpriteAnim: @ 0x085D26A4
	sprite_anim_frame 0x00, 8
	sprite_anim_frame 0x40, 8
	sprite_anim_frame 0x80, 8
	sprite_anim_frame 0xC0, 8
	sprite_anim_jump 0

gIntroCreditsRiderSpriteAnimTable: @ 0x085D26B8
	sprite_anim_sequence gIntroCreditsRiderSpriteAnim

	.globl gIntroCreditsBrendanSpriteTemplate
gIntroCreditsBrendanSpriteTemplate: @ 0x085D26BC
	rodata_sprite_template 0x3EA, 0x3EA, gIntroCreditsRiderOamData, gIntroCreditsRiderSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, nullsub_65

	.globl gIntroCreditsMaySpriteTemplate
gIntroCreditsMaySpriteTemplate: @ 0x085D26D4
	rodata_sprite_template 0x3EB, 0x3EB, gIntroCreditsRiderOamData, gIntroCreditsRiderSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, nullsub_65

gIntroCreditsBicycleOamData: @ 0x085D26EC
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 1, 0, 0, 3, 0, 1, 0, 0

gIntroCreditsBicycleSpriteAnim: @ 0x085D26F4
	sprite_anim_frame 0x00, 8
	sprite_anim_frame 0x20, 8
	sprite_anim_frame 0x40, 8
	sprite_anim_frame 0x60, 8
	sprite_anim_jump 0

gIntroCreditsBicycleSpriteAnimTable: @ 0x085D2708
	sprite_anim_sequence gIntroCreditsBicycleSpriteAnim

	.globl gIntroCreditsBrendanBicycleSpriteTemplate
gIntroCreditsBrendanBicycleSpriteTemplate: @ 0x085D270C
	rodata_sprite_template 0x3E9, 0x3EA, gIntroCreditsBicycleOamData, gIntroCreditsBicycleSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, sub_0817B684

	.globl gIntroCreditsMayBicycleSpriteTemplate
gIntroCreditsMayBicycleSpriteTemplate: @ 0x085D2724
	rodata_sprite_template 0x3E9, 0x3EB, gIntroCreditsBicycleOamData, gIntroCreditsBicycleSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, sub_0817B684

gIntroCreditsFlygonOamData: @ 0x085D273C
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 0, 0

gIntroCreditsFlygonSpriteAnim_0: @ 0x085D2744
	sprite_anim_frame 0x00, 16
	sprite_anim_end

gIntroCreditsFlygonSpriteAnim_1: @ 0x085D274C
	sprite_anim_frame 0x40, 16
	sprite_anim_end

gIntroCreditsFlygonSpriteAnimTable: @ 0x085D2754
	sprite_anim_sequence gIntroCreditsFlygonSpriteAnim_0
	sprite_anim_sequence gIntroCreditsFlygonSpriteAnim_1

	.globl gIntroCreditsFlygonSpriteTemplate_0
gIntroCreditsFlygonSpriteTemplate_0: @ 0x085D275C
	rodata_sprite_template 0x3EC, 0x3EC, gIntroCreditsFlygonOamData, gIntroCreditsFlygonSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, nullsub_66

	.globl gIntroCreditsFlygonSpriteTemplate_1
gIntroCreditsFlygonSpriteTemplate_1: @ 0x085D2774
	rodata_sprite_template 0x3ED, 0x3ED, gIntroCreditsFlygonOamData, gIntroCreditsFlygonSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, nullsub_66
	.if (. - gIntroCreditsCitySpriteSpawns) != 0x120
	.error "Intro credits city, rider, bicycle, and Flygon sprite data must retain their original size"
	.endif
	.globl gIntroCreditsBrendanSpriteSheet
gIntroCreditsBrendanSpriteSheet: @ 0x085D278C
	rodata_compressed_sprite_sheet gIntroCreditsBrendanGfx, 0x2000, 0x3EA
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsMaySpriteSheet
gIntroCreditsMaySpriteSheet: @ 0x085D279C
	rodata_compressed_sprite_sheet gIntroCreditsMayGfx, 0x2000, 0x3EB
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsBicycleSpriteSheet
gIntroCreditsBicycleSpriteSheet: @ 0x085D27AC
	rodata_compressed_sprite_sheet gCreditsBicycleGfx, 0x1000, 0x3E9
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsFlygonSpriteSheet_0
gIntroCreditsFlygonSpriteSheet_0: @ 0x085D27BC
	rodata_compressed_sprite_sheet gIntroCreditsFlygonGfx, 0x1000, 0x3EC
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsFlygonSpriteSheet_1
gIntroCreditsFlygonSpriteSheet_1: @ 0x085D27CC
	rodata_compressed_sprite_sheet gIntroCreditsFlygonGfx, 0x1000, 0x3ED
	.space 8, 0 @ unused second sheet entry

	.globl gIntroCreditsSpritePalettes
gIntroCreditsSpritePalettes: @ 0x085D27DC
	rodata_sprite_palette gIntroCreditsRiderPalette, 0x3EA
	rodata_sprite_palette gIntroCreditsRiderPalette, 0x3EB
	rodata_sprite_palette gIntroCreditsFlygonPalette, 0x3EC
	rodata_sprite_palette gIntroCreditsFlygonPalette, 0x3ED
	.space 8, 0 @ terminator
	.if (. - gIntroCreditsBrendanSpriteSheet) != 0x78
	.error "Intro credits sprite resource descriptors must retain their original size"
	.endif
	.globl gCreditsBrendanBikeFullSpriteSheet
gCreditsBrendanBikeFullSpriteSheet: @ 0x085D2804
	rodata_compressed_sprite_sheet gCreditsBrendanBikeGfx, 0x3800, 0x3EA
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsMayBikeFullSpriteSheet
gCreditsMayBikeFullSpriteSheet: @ 0x085D2814
	rodata_compressed_sprite_sheet gCreditsMayBikeGfx, 0x3800, 0x3EB
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsBicycleSpriteSheet
gCreditsBicycleSpriteSheet: @ 0x085D2824
	rodata_compressed_sprite_sheet gCreditsBicycleGfx, 0x1000, 0x3E9
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsLatiosSpriteSheet
gCreditsLatiosSpriteSheet: @ 0x085D2834
	rodata_compressed_sprite_sheet gCreditsLatiosGfx, 0x1000, 0x3EC
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsLatiasSpriteSheet
gCreditsLatiasSpriteSheet: @ 0x085D2844
	rodata_compressed_sprite_sheet gCreditsLatiasGfx, 0x1000, 0x3ED
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsBikeRideSpritePalettes
gCreditsBikeRideSpritePalettes: @ 0x085D2854
	rodata_sprite_palette gCreditsBrendanBikePalette, 0x3EA
	rodata_sprite_palette gCreditsMayBikePalette, 0x3EB
	rodata_sprite_palette gCreditsLatiosPalette, 0x3EC
	rodata_sprite_palette gCreditsLatiasPalette, 0x3ED
	.space 8, 0 @ terminator

	.globl gCreditsBrendanBikeReducedSpriteSheet
gCreditsBrendanBikeReducedSpriteSheet: @ 0x085D287C
	rodata_compressed_sprite_sheet gCreditsBrendanBikeGfx, 0x2000, 0x3EA
	.space 8, 0 @ unused second sheet entry

	.globl gCreditsMayBikeReducedSpriteSheet
gCreditsMayBikeReducedSpriteSheet: @ 0x085D288C
	rodata_compressed_sprite_sheet gCreditsMayBikeGfx, 0x2000, 0x3EB
	.space 8, 0 @ unused second sheet entry
	.if (. - gCreditsBrendanBikeFullSpriteSheet) != 0x98
	.error "Credits bike ride sprite resource descriptors must retain their original size"
	.endif

	.globl gEvolutionSparklePalette
gEvolutionSparklePalette: @ 0x085D289C
	.incbin "build/graphics/evolution/sparkle_palette.gbapal"

	.globl gEvolutionSparkleGfx
gEvolutionSparkleGfx: @ 0x085D28BC
	.incbin "build/graphics/evolution/sparkle.4bpp.lz"

	.globl gEvolutionSparkleSpriteSheet
gEvolutionSparkleSpriteSheet: @ 0x085D28DC
	rodata_compressed_sprite_sheet gEvolutionSparkleGfx, 0x20, 0x3E9
	.space 8, 0 @ unused second sheet entry

	.globl gEvolutionSparkleSpritePalettes
gEvolutionSparkleSpritePalettes: @ 0x085D28EC
	rodata_sprite_palette gEvolutionSparklePalette, 0x3E9
	.space 8, 0 @ terminator

gEvolutionSparkleOamData: @ 0x085D28FC
	rodata_sprite_oam_data DISPLAY_HEIGHT, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0

gEvolutionSparkleSpriteAnim: @ 0x085D2904
	sprite_anim_frame 0, 8
	sprite_anim_end

gEvolutionSparkleSpriteAnimTable: @ 0x085D290C
	sprite_anim_sequence gEvolutionSparkleSpriteAnim

	.globl gEvolutionSparkleSpriteTemplate
gEvolutionSparkleSpriteTemplate: @ 0x085D2910
	rodata_sprite_template 0x3E9, 0x3E9, gEvolutionSparkleOamData, gEvolutionSparkleSpriteAnimTable, NULL, gDummySpriteAffineAnimTable, PokeEvoSprite_DummySpriteCB
	.if (. - gEvolutionSparklePalette) != 0x8C
	.error "Evolution sparkle graphics and sprite data must retain their original size"
	.endif
	.globl gEvolutionSparkleScaleFactors
gEvolutionSparkleScaleFactors: @ 0x085D2928
	.2byte 0x3C0, 0x380, 0x340, 0x300
	.2byte 0x2C0, 0x280, 0x240, 0x200
	.2byte 0x1C0, 0x180, 0x140, 0x100

gUnused_85D2940: @ 0x085D2940
	.2byte -4, 16, -3, 48, -2, 80, -1, 112
	.2byte 1, 112, 2, 80, 3, 48, 4, 16

	@ Signed 8.8 fixed-point pitch patterns used by the Bard's word sounds.
gBardPitchPattern_0: @ 0x085D2960
	.2byte -3 * 0x100, 24 * 0x100
gBardPitchPattern_1: @ 0x085D2964
	.2byte 9 * 0x100, 24 * 0x100
gBardPitchPattern_2: @ 0x085D2968
	.2byte 1 * 0x100, 24 * 0x100
gBardPitchPattern_3: @ 0x085D296C
	.2byte 4 * 0x100, 24 * 0x100
gBardPitchPattern_4: @ 0x085D2970
	.2byte 11 * 0x100, 24 * 0x100
gBardPitchPattern_5: @ 0x085D2974
	.2byte -3 * 0x100, -1 * 0x100, 24 * 0x100
gBardPitchPattern_6: @ 0x085D297A
	.2byte -3 * 0x100, 2 * 0x100, 24 * 0x100
gBardPitchPattern_7: @ 0x085D2980
	.2byte 2 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_8: @ 0x085D2986
	.2byte 6 * 0x100, 8 * 0x100, 24 * 0x100
gBardPitchPattern_9: @ 0x085D298C
	.2byte 9 * 0x100, 8 * 0x100, 24 * 0x100
gBardPitchPattern_10: @ 0x085D2992
	.2byte -3 * 0x100, -1 * 0x100, -3 * 0x100, 24 * 0x100
gBardPitchPattern_11: @ 0x085D299A
	.2byte 4 * 0x100, -3 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_12: @ 0x085D29A2
	.2byte 9 * 0x100, 8 * 0x100, 6 * 0x100, 24 * 0x100
gBardPitchPattern_13: @ 0x085D29AA
	.2byte 1 * 0x100, 2 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_14: @ 0x085D29B2
	.2byte 6 * 0x100, 16 * 0x100, 13 * 0x100, 24 * 0x100
gBardPitchPattern_15: @ 0x085D29BA
	.2byte 4 * 0x100, 9 * 0x100, 4 * 0x100, 9 * 0x100, 24 * 0x100
gBardPitchPattern_16: @ 0x085D29C4
	.2byte 9 * 0x100, 4 * 0x100, 13 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_17: @ 0x085D29CE
	.2byte 1 * 0x100, 2 * 0x100, 4 * 0x100, 6 * 0x100, 24 * 0x100
gBardPitchPattern_18: @ 0x085D29D8
	.2byte 8 * 0x100, 6 * 0x100, 4 * 0x100, 2 * 0x100, 24 * 0x100
gBardPitchPattern_19: @ 0x085D29E2
	.2byte 15 * 0x100, 13 * 0x100, 11 * 0x100, 10 * 0x100, 24 * 0x100
gBardPitchPattern_20: @ 0x085D29EC
	.2byte -3 * 0x100, -1 * 0x100, 1 * 0x100, 2 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_21: @ 0x085D29F8
	.2byte 9 * 0x100, 8 * 0x100, 6 * 0x100, 4 * 0x100, 2 * 0x100, 24 * 0x100
gBardPitchPattern_22: @ 0x085D2A04
	.2byte 1 * 0x100, 4 * 0x100, 9 * 0x100, 4 * 0x100, 1 * 0x100, 24 * 0x100
gBardPitchPattern_23: @ 0x085D2A10
	.2byte 9 * 0x100, 4 * 0x100, 9 * 0x100, 4 * 0x100, -3 * 0x100, 24 * 0x100
gBardPitchPattern_24: @ 0x085D2A1C
	.2byte 11 * 0x100, 8 * 0x100, 4 * 0x100, 4 * 0x100, 6 * 0x100, 24 * 0x100
gBardPitchPattern_25: @ 0x085D2A28
	.2byte -3 * 0x100, -1 * 0x100, 1 * 0x100, 2 * 0x100, 4 * 0x100, 6 * 0x100, 24 * 0x100
gBardPitchPattern_26: @ 0x085D2A36
	.2byte 8 * 0x100, 6 * 0x100, 4 * 0x100, 2 * 0x100, 1 * 0x100, -1 * 0x100, 24 * 0x100
gBardPitchPattern_27: @ 0x085D2A44
	.2byte 1 * 0x100, 2 * 0x100, 4 * 0x100, 1 * 0x100, 2 * 0x100, 16 * 0x100, 24 * 0x100
gBardPitchPattern_28: @ 0x085D2A52
	.2byte 4 * 0x100, -3 * 0x100, 9 * 0x100, 4 * 0x100, 9 * 0x100, 4 * 0x100, 24 * 0x100
gBardPitchPattern_29: @ 0x085D2A60
	.2byte 8 * 0x100, 9 * 0x100, 8 * 0x100, 9 * 0x100, 8 * 0x100, 9 * 0x100, 24 * 0x100
gBardPitchPattern_30: @ 0x085D2A6E
	.2byte 2 * 0x100, 1 * 0x100, 2 * 0x100, 1 * 0x100, 2 * 0x100, 4 * 0x100, 2 * 0x100, 24 * 0x100
gBardPitchPattern_31: @ 0x085D2A7E
	.2byte 1 * 0x100, 1 * 0x100, -1 * 0x100, -1 * 0x100, -3 * 0x100, 4 * 0x100, -3 * 0x100, 24 * 0x100
gBardPitchPattern_32: @ 0x085D2A8E
	.2byte 8 * 0x100, 9 * 0x100, 11 * 0x100, 13 * 0x100, 14 * 0x100, 13 * 0x100, 11 * 0x100, 24 * 0x100
gBardPitchPattern_33: @ 0x085D2A9E
	.2byte 8 * 0x100, 6 * 0x100, 4 * 0x100, 2 * 0x100, 13 * 0x100, 11 * 0x100, 9 * 0x100, 24 * 0x100
gBardPitchPattern_34: @ 0x085D2AAE
	.2byte 3 * 0x100, 4 * 0x100, 6 * 0x100, 8 * 0x100, 7 * 0x100, 8 * 0x100, 4 * 0x100, 24 * 0x100
	.2byte 0 @ alignment padding

	.globl gBardPitchPatternTable
gBardPitchPatternTable: @ 0x085D2AC0
	.4byte gBardPitchPattern_0
	.4byte gBardPitchPattern_1
	.4byte gBardPitchPattern_2
	.4byte gBardPitchPattern_3
	.4byte gBardPitchPattern_4
	.4byte gBardPitchPattern_5
	.4byte gBardPitchPattern_6
	.4byte gBardPitchPattern_7
	.4byte gBardPitchPattern_8
	.4byte gBardPitchPattern_9
	.4byte gBardPitchPattern_10
	.4byte gBardPitchPattern_11
	.4byte gBardPitchPattern_12
	.4byte gBardPitchPattern_13
	.4byte gBardPitchPattern_14
	.4byte gBardPitchPattern_15
	.4byte gBardPitchPattern_16
	.4byte gBardPitchPattern_17
	.4byte gBardPitchPattern_18
	.4byte gBardPitchPattern_19
	.4byte gBardPitchPattern_20
	.4byte gBardPitchPattern_21
	.4byte gBardPitchPattern_22
	.4byte gBardPitchPattern_23
	.4byte gBardPitchPattern_24
	.4byte gBardPitchPattern_25
	.4byte gBardPitchPattern_26
	.4byte gBardPitchPattern_27
	.4byte gBardPitchPattern_28
	.4byte gBardPitchPattern_29
	.4byte gBardPitchPattern_30
	.4byte gBardPitchPattern_31
	.4byte gBardPitchPattern_32
	.4byte gBardPitchPattern_33
	.4byte gBardPitchPattern_34
	.if (. - gEvolutionSparkleScaleFactors) != 0x224
	.error "Evolution sparkle scale and Bard pitch data must retain their original size"
	.endif
	.set BARD_SOUND_STOP, -2
	.set BARD_SOUND_0, 25
	.set BARD_SOUND_1, 26
	.set BARD_SOUND_2, 27
	.set BARD_SOUND_3, 28
	.set BARD_SOUND_4, 29
	.set BARD_SOUND_5, 30

	.globl gBardSoundTable
gBardSoundTable: @ 0x085D2B4C
	@ Entries 0-159: the same 80-entry sound assignment block twice.
	.rept 2
	bard_sound_entry BARD_SOUND_STOP
	.rept 7
	bard_sound_cycle
	.endr
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_4
	bard_sound_cycle
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_5
	bard_sound_cycle 0xC0
	bard_sound_entry BARD_SOUND_0, 0xC0
	bard_sound_entry BARD_SOUND_2, 0xC0
	bard_sound_entry BARD_SOUND_4, 0xC0
	.rept 5
	bard_sound_cycle
	.endr
	.endr

	@ Entries 160-175
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry -1
	bard_sound_entry BARD_SOUND_STOP

	@ Entries 176-191
	bard_sound_entry 0
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_STOP
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1

	@ Entries 192-207
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_2

	@ Entries 208-223
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3

	@ Entries 224-239
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_4
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_1
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_2
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_0
	bard_sound_entry BARD_SOUND_3
	bard_sound_entry BARD_SOUND_STOP
	.if (. - gBardSoundTable) != 240 * 4
	.error "Bard sound table must contain 240 four-byte entries"
	.endif
	.globl gBattleTvMovesExcludedFromDamageCalculation
gBattleTvMovesExcludedFromDamageCalculation: @ 0x085D2F0C
	.2byte MOVE_COUNTER
	.2byte MOVE_FISSURE
	.2byte MOVE_BIDE
	.2byte MOVE_MIRROR_COAT
	.2byte MOVE_HORN_DRILL
	.2byte MOVE_FLAIL
	.2byte MOVE_REVERSAL
	.2byte MOVE_HIDDEN_POWER
	.2byte MOVE_SHEER_COLD
	.2byte MOVE_FOCUS_PUNCH
	.2byte MOVE_ERUPTION
	.2byte MOVE_WATER_SPOUT
	.2byte MOVE_DREAM_EATER
	.2byte MOVE_WEATHER_BALL
	.2byte MOVE_SNORE
	.2byte MOVE_PAIN_SPLIT
	.2byte MOVE_GUILLOTINE
	.2byte MOVE_FRUSTRATION
	.2byte MOVE_RETURN
	.2byte MOVE_ENDEAVOR
	.2byte MOVE_PRESENT
	.2byte MOVE_REVENGE
	.2byte 0xFFFF @ terminator

gUnusedBattleTvSpecialDamageMoves: @ 0x085D2F3A
	.2byte MOVE_MAGNITUDE, MOVE_PSYWAVE, 0xFFFF
