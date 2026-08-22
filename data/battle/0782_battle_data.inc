	@ Priority A: Frontier Pass fully split into exact assets and typed tables.
	@ reference ROM is used only by tools/semanticize_priority_a_full.py; build uses the extracted files below.
	@ Priority A: Frontier Pass fully split into exact assets and typed tables.
	@ reference ROM is used only by tools/semanticize_priority_a_full.py; build uses the extracted files below.
	@ Priority A external targets identified from Frontier Pass consumers / pret declarations.
	@ Local aliases emit no bytes and avoid depending on C static symbol visibility.
	.set gPriorityAFrontierPassCursorPal, 0x085468E4 @ gFrontierPassCursor_Pal
	.set gPriorityAFrontierPassMapCursorPal, 0x08546904 @ gFrontierPassMapCursor_Pal
	.set gPriorityAFrontierPassMedalsSilverPal, 0x08546924 @ gFrontierPassMedalsSilver_Pal
	.set gPriorityAFrontierPassMedalsGoldPal, 0x08546944 @ gFrontierPassMedalsGold_Pal
	.set gPriorityAFrontierPassMaleHeadPal, 0x08546964 @ sMaleHead_Pal
	.set gPriorityAFrontierPassFemaleHeadPal, 0x08546984 @ sFemaleHead_Pal
	.set gPriorityAFrontierPassOam16x16, gOamData_AffineOff_ObjNormal_16x16 @ gOamData_AffineOff_ObjNormal_16x16
	.set gPriorityAFrontierPassOam32x16, gOamData_AffineOff_ObjNormal_32x16 @ gOamData_AffineOff_ObjNormal_32x16
	.set gPriorityAFrontierPassDummyAffineAnimTable, 0x082BF310 @ gDummySpriteAffineAnimTable
	.set gPriorityAFrontierPassSpriteCallbackDummy, 0x08007141 @ SpriteCallbackDummy (Thumb)
	.set gPriorityAFrontierPassSpriteCbDummy, 0x080C5D3D @ JP SpriteCb_Dummy (Thumb)

	.set gPriorityAFrontierPassTextThereIsNoBattleRecord, 0x085CCB94
	.set gPriorityAFrontierPassTextCheckFrontierMap, 0x085CCAB5
	.set gPriorityAFrontierPassTextCheckTrainerCard, 0x085CCAC9
	.set gPriorityAFrontierPassTextViewRecordedBattle, 0x085CCAD7
	.set gPriorityAFrontierPassTextPutAwayFrontierPass, 0x085CCAE7
	.set gPriorityAFrontierPassTextCurrentBattlePoints, 0x085CCAF6
	.set gPriorityAFrontierPassTextCollectedSymbols, 0x085CCB0A
	.set gPriorityAFrontierPassTextBattleTowerAbilitySymbol, 0x085CCB1A
	.set gPriorityAFrontierPassTextBattleDomeTacticsSymbol, 0x085CCB2B
	.set gPriorityAFrontierPassTextBattlePalaceSpiritsSymbol, 0x085CCB3D
	.set gPriorityAFrontierPassTextBattleArenaGutsSymbol, 0x085CCB4E
	.set gPriorityAFrontierPassTextBattleFactoryKnowledgeSymbol, 0x085CCB5E
	.set gPriorityAFrontierPassTextBattlePikeLuckSymbol, 0x085CCB72
	.set gPriorityAFrontierPassTextBattlePyramidBraveSymbol, 0x085CCB82
	.set gPriorityAFrontierPassTextEmptyString, 0x085CCAB4

	.set gPriorityAFrontierPassTextBattleTowerName, 0x085CCBA8
	.set gPriorityAFrontierPassTextBattleTowerDesc, 0x085CCBE0
	.set gPriorityAFrontierPassTextBattleDomeName, 0x085CCBAF
	.set gPriorityAFrontierPassTextBattleDomeDesc, 0x085CCC00
	.set gPriorityAFrontierPassTextBattlePalaceName, 0x085CCBB6
	.set gPriorityAFrontierPassTextBattlePalaceDesc, 0x085CCC1C
	.set gPriorityAFrontierPassTextBattleArenaName, 0x085CCBBD
	.set gPriorityAFrontierPassTextBattleArenaDesc, 0x085CCC3B
	.set gPriorityAFrontierPassTextBattleFactoryName, 0x085CCBC5
	.set gPriorityAFrontierPassTextBattleFactoryDesc, 0x085CCC5E
	.set gPriorityAFrontierPassTextBattlePikeName, 0x085CCBCF
	.set gPriorityAFrontierPassTextBattlePikeDesc, 0x085CCC7C
	.set gPriorityAFrontierPassTextBattlePyramidName, 0x085CCBD7
	.set gPriorityAFrontierPassTextBattlePyramidDesc, 0x085CCC9D

	.globl gFrontierPassMapScreen_Gfx
gFrontierPassMapScreen_Gfx: @ 0x08548168
	.incbin "build/graphics/priority_a/frontier_pass/map_screen.4bpp.lz"
	.if (. - gFrontierPassMapScreen_Gfx) != 0xFEC
	.error "gFrontierPassMapScreen_Gfx exact asset size mismatch"
	.endif
	.globl gFrontierPassCursor_Gfx
gFrontierPassCursor_Gfx: @ 0x08549154
	.incbin "build/graphics/priority_a/frontier_pass/cursor.4bpp.lz"
	.if (. - gFrontierPassCursor_Gfx) != 0x9C
	.error "gFrontierPassCursor_Gfx exact asset size mismatch"
	.endif
	.globl gFrontierPassMedals_Gfx
gFrontierPassMedals_Gfx: @ 0x085491F0
	.incbin "build/graphics/priority_a/frontier_pass/medals.4bpp.lz"
	.if (. - gFrontierPassMedals_Gfx) != 0x264
	.error "gFrontierPassMedals_Gfx exact asset size mismatch"
	.endif
	.globl gFrontierPassHeads_Gfx
gFrontierPassHeads_Gfx: @ 0x08549454
	.incbin "build/graphics/priority_a/frontier_pass/map_heads.4bpp.lz"
	.if (. - gFrontierPassHeads_Gfx) != 0xBC
	.error "gFrontierPassHeads_Gfx exact asset size mismatch"
	.endif
	.globl gFrontierPassMapCursor_Gfx
gFrontierPassMapCursor_Gfx: @ 0x08549510
	.incbin "build/graphics/priority_a/frontier_pass/map_cursor.4bpp.lz"
	.if (. - gFrontierPassMapCursor_Gfx) != 0x100
	.error "gFrontierPassMapCursor_Gfx exact asset size mismatch"
	.endif
	.globl gFrontierPassBg_Tilemap
gFrontierPassBg_Tilemap: @ 0x08549610
	.incbin "build/graphics/priority_a/frontier_pass/pass_bg.bin.lz"
	.if (. - gFrontierPassBg_Tilemap) != 0x2E8
	.error "gFrontierPassBg_Tilemap exact asset size mismatch"
	.endif
	.globl gFrontierPassMapScreen_Tilemap
gFrontierPassMapScreen_Tilemap: @ 0x085498F8
	.incbin "build/graphics/priority_a/frontier_pass/map_screen.bin.lz"
	.if (. - gFrontierPassMapScreen_Tilemap) != 0x260
	.error "gFrontierPassMapScreen_Tilemap exact asset size mismatch"
	.endif
	.globl gFrontierPassMapAndCardZoomedOut_Tilemap
gFrontierPassMapAndCardZoomedOut_Tilemap: @ 0x08549B58
	.incbin "build/graphics/priority_a/frontier_pass/small_map_and_card.bin.lz"
	.if (. - gFrontierPassMapAndCardZoomedOut_Tilemap) != 0x260
	.error "gFrontierPassMapAndCardZoomedOut_Tilemap exact asset size mismatch"
	.endif
	.globl gFrontierPassCancelButton_Tilemap
gFrontierPassCancelButton_Tilemap: @ 0x08549DB8
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.2byte 0x0039, 0x003A, 0x003B, 0x003C, 0x003D, 0x003E, 0x0049, 0x004A, 0x004B, 0x004C, 0x004D, 0x004E
	.globl gFrontierPassCancelButtonHighlighted_Tilemap
gFrontierPassCancelButtonHighlighted_Tilemap: @ 0x08549DD0
	@ ANALYSIS: SEMANTIC_NUMERIC_TILEMAP_ASSET
	.2byte 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x000A, 0x000B, 0x000C, 0x000D, 0x000E, 0x000F
	.globl gFrontierPassBattleRecord_Tilemap
gFrontierPassBattleRecord_Tilemap: @ 0x08549DE8
	.incbin "build/graphics/priority_a/frontier_pass/record_frame.bin.lz"
	.if (. - gFrontierPassBattleRecord_Tilemap) != 0x38
	.error "gFrontierPassBattleRecord_Tilemap exact asset size mismatch"
	.endif
	.globl gFrontierPassMapAndCard_Gfx
gFrontierPassMapAndCard_Gfx: @ 0x08549E20
	.incbin "build/graphics/priority_a/frontier_pass/map_and_card.4bpp.lz"
	.if (. - gFrontierPassMapAndCard_Gfx) != 0xFFC
	.error "gFrontierPassMapAndCard_Gfx exact asset size mismatch"
	.endif
	.globl gFrontierPassMapAndCardZooming_Tilemap
gFrontierPassMapAndCardZooming_Tilemap: @ 0x0854AE1C
	.incbin "build/graphics/priority_a/frontier_pass/small_map_and_card_affine.bin.lz"
	.if (. - gFrontierPassMapAndCardZooming_Tilemap) != 0xE8
	.error "gFrontierPassMapAndCardZooming_Tilemap exact asset size mismatch"
	.endif
	.globl gFrontierPassBgAffineCoords
gFrontierPassBgAffineCoords: @ 0x0854AF04
	.2byte 216, 32 @ map
	.2byte 216, 128 @ card
	.globl gFrontierPassBgTemplates
gFrontierPassBgTemplates: @ 0x0854AF0C
	bg_template 0x0, 0x2, 0x1F, 0x0, 0x0, 0x1, 0x0
	bg_template 0x1, 0x0, 0x1E, 0x0, 0x0, 0x2, 0x0
	bg_template 0x2, 0x1, 0x1D, 0x1, 0x1, 0x0, 0x0
	.globl gFrontierPassMapBgTemplates
gFrontierPassMapBgTemplates: @ 0x0854AF18
	bg_template 0x0, 0x2, 0x1F, 0x0, 0x0, 0x0, 0x0
	bg_template 0x1, 0x0, 0x1E, 0x0, 0x0, 0x1, 0x0
	bg_template 0x2, 0x0, 0x1D, 0x0, 0x0, 0x2, 0x0
	.globl gFrontierPassWindowTemplates
gFrontierPassWindowTemplates: @ 0x0854AF24
	window_template 0x00, 0x02, 0x03, 0x0C, 0x03, 0x0F, 0x0001
	window_template 0x00, 0x02, 0x0A, 0x0C, 0x03, 0x0F, 0x0026
	window_template 0x00, 0x02, 0x0D, 0x0C, 0x04, 0x0F, 0x004B
	window_template 0x00, 0x01, 0x12, 0x1C, 0x03, 0x0F, 0x007C
	null_window_template
	.globl gFrontierPassMapWindowTemplates
gFrontierPassMapWindowTemplates: @ 0x0854AF4C
	window_template 0x00, 0x00, 0x01, 0x0F, 0x05, 0x0F, 0x0001
	window_template 0x00, 0x14, 0x01, 0x0A, 0x0E, 0x0F, 0x004D
	window_template 0x00, 0x03, 0x10, 0x1A, 0x04, 0x0F, 0x00DA
	null_window_template
	.globl gFrontierPassTextColors
gFrontierPassTextColors: @ 0x0854AF6C
	.byte 0x00, 0x02, 0x03 @ pass text
	.globl gFrontierPassTextColors_Map
gFrontierPassTextColors_Map: @ 0x0854AF6F
	.byte 0x00, 0x01, 0x09 @ map text
	.globl gFrontierPassTextColors_Red
gFrontierPassTextColors_Red: @ 0x0854AF72
	.byte 0x00, 0x04, 0x05 @ red text
	.byte 0, 0, 0 @ alignment
	.globl gFrontierPassAreasLayout
gFrontierPassAreasLayout: @ 0x0854AF78
	frontier_pass_area_bounds 28, 76, 132, 220 @ cursor area 1
	frontier_pass_area_bounds 84, 132, 132, 220 @ cursor area 2
	frontier_pass_area_bounds 80, 102, 20, 108 @ cursor area 3
	frontier_pass_area_bounds 0, 16, 152, 240 @ cursor area 4
	frontier_pass_area_bounds 108, 134, 20, 108 @ cursor area 5
	frontier_pass_area_bounds 24, 48, 20, 108 @ cursor area 6
	frontier_pass_area_bounds 50, 66, 20, 36 @ cursor area 7
	frontier_pass_area_bounds 66, 82, 32, 48 @ cursor area 8
	frontier_pass_area_bounds 50, 66, 44, 60 @ cursor area 9
	frontier_pass_area_bounds 66, 82, 56, 72 @ cursor area 10
	frontier_pass_area_bounds 50, 66, 68, 84 @ cursor area 11
	frontier_pass_area_bounds 66, 82, 80, 96 @ cursor area 12
	frontier_pass_area_bounds 50, 66, 92, 108 @ cursor area 13
	.globl gFrontierPassCursorSpriteSheets
gFrontierPassCursorSpriteSheets: @ 0x0854AFE0
	rodata_compressed_sprite_sheet gFrontierPassCursor_Gfx, 0x0100, 0x0000
	rodata_compressed_sprite_sheet gFrontierPassMapCursor_Gfx, 0x0400, 0x0001
	rodata_compressed_sprite_sheet gFrontierPassMedals_Gfx, 0x0380, 0x0002
	.globl gFrontierPassHeadsSpriteSheet
gFrontierPassHeadsSpriteSheet: @ 0x0854AFF8
	rodata_compressed_sprite_sheet gFrontierPassHeads_Gfx, 0x0100, 0x0004
	rodata_compressed_sprite_sheet 0, 0x0000, 0x0000
	.globl gFrontierPassSpritePalettes
gFrontierPassSpritePalettes: @ 0x0854B008
	rodata_sprite_palette gPriorityAFrontierPassCursorPal, 0x0000
	rodata_sprite_palette gPriorityAFrontierPassMapCursorPal, 0x0001
	rodata_sprite_palette gPriorityAFrontierPassMedalsSilverPal, 0x0002
	rodata_sprite_palette gPriorityAFrontierPassMedalsGoldPal, 0x0003
	rodata_sprite_palette gPriorityAFrontierPassMaleHeadPal, 0x0004
	rodata_sprite_palette gPriorityAFrontierPassFemaleHeadPal, 0x0005
	rodata_sprite_palette 0, 0x0000
	.globl gFrontierPassAnim_Frame1_Unused
gFrontierPassAnim_Frame1_Unused: @ 0x0854B040
	rodata_anim_frame 0x0, 0x0, 0, 0
	rodata_anim_end
	.globl gFrontierPassAnim_Frame1
gFrontierPassAnim_Frame1: @ 0x0854B048
	rodata_anim_frame 0x0, 0x0, 0, 0
	rodata_anim_end
	.globl gFrontierPassAnim_Frame2
gFrontierPassAnim_Frame2: @ 0x0854B050
	rodata_anim_frame 0x4, 0x0, 0, 0
	rodata_anim_end
	.globl gFrontierPassAnim_Frame3
gFrontierPassAnim_Frame3: @ 0x0854B058
	rodata_anim_frame 0x8, 0x0, 0, 0
	rodata_anim_end
	.globl gFrontierPassAnim_Frame4
gFrontierPassAnim_Frame4: @ 0x0854B060
	rodata_anim_frame 0xC, 0x0, 0, 0
	rodata_anim_end
	.globl gFrontierPassAnim_Frame5
gFrontierPassAnim_Frame5: @ 0x0854B068
	rodata_anim_frame 0x10, 0x0, 0, 0
	rodata_anim_end
	.globl gFrontierPassAnim_Frame6
gFrontierPassAnim_Frame6: @ 0x0854B070
	rodata_anim_frame 0x14, 0x0, 0, 0
	rodata_anim_end
	.globl gFrontierPassAnim_Frame7
gFrontierPassAnim_Frame7: @ 0x0854B078
	rodata_anim_frame 0x18, 0x0, 0, 0
	rodata_anim_end
	.globl gFrontierPassAnim_MapIndicator_Rectangle
gFrontierPassAnim_MapIndicator_Rectangle: @ 0x0854B080
	rodata_anim_frame 0x0, 0x2D, 0, 0
	rodata_anim_frame 0x8, 0x2D, 0, 0
	rodata_anim_jump 0x0
	.globl gFrontierPassAnim_MapIndicator_Square
gFrontierPassAnim_MapIndicator_Square: @ 0x0854B08C
	rodata_anim_frame 0x10, 0x2D, 0, 0
	rodata_anim_frame 0x18, 0x2D, 0, 0
	rodata_anim_jump 0x0
	.globl gFrontierPassAnims_TwoFrame
gFrontierPassAnims_TwoFrame: @ 0x0854B098
	.4byte gFrontierPassAnim_Frame1
	.4byte gFrontierPassAnim_Frame2
	.globl gFrontierPassAnims_Medal
gFrontierPassAnims_Medal: @ 0x0854B0A0
	.4byte gFrontierPassAnim_Frame1
	.4byte gFrontierPassAnim_Frame2
	.4byte gFrontierPassAnim_Frame3
	.4byte gFrontierPassAnim_Frame4
	.4byte gFrontierPassAnim_Frame5
	.4byte gFrontierPassAnim_Frame6
	.4byte gFrontierPassAnim_Frame7
	.globl gFrontierPassAnims_MapIndicator
gFrontierPassAnims_MapIndicator: @ 0x0854B0BC
	.4byte gFrontierPassAnim_MapIndicator_Rectangle
	.4byte gFrontierPassAnim_MapIndicator_Square
	.globl gFrontierPassAffineAnim_Unused
gFrontierPassAffineAnim_Unused: @ 0x0854B0C4
	rodata_affine_anim_frame 0x0100, 0x0100, 0x0000, 0x0000
	rodata_affine_anim_end
	.globl gFrontierPassAffineAnims_Unused
gFrontierPassAffineAnims_Unused: @ 0x0854B0D4
	.4byte gFrontierPassAffineAnim_Unused
	.globl gFrontierPassCursorSpriteTemplate
gFrontierPassCursorSpriteTemplate: @ 0x0854B0D8
	rodata_sprite_template 0x0000, 0x0000, gPriorityAFrontierPassOam16x16, gFrontierPassAnims_TwoFrame, 0, gPriorityAFrontierPassDummyAffineAnimTable, gPriorityAFrontierPassSpriteCallbackDummy
	.globl gFrontierPassMapIndicatorSpriteTemplate
gFrontierPassMapIndicatorSpriteTemplate: @ 0x0854B0F0
	rodata_sprite_template 0x0001, 0x0001, gPriorityAFrontierPassOam32x16, gFrontierPassAnims_MapIndicator, 0, gPriorityAFrontierPassDummyAffineAnimTable, gPriorityAFrontierPassSpriteCallbackDummy
	.globl gFrontierPassMedalSpriteTemplate
gFrontierPassMedalSpriteTemplate: @ 0x0854B108
	rodata_sprite_template 0x0002, 0x0002, gPriorityAFrontierPassOam16x16, gFrontierPassAnims_Medal, 0, gPriorityAFrontierPassDummyAffineAnimTable, gPriorityAFrontierPassSpriteCallbackDummy
	.globl gFrontierPassPlayerHeadSpriteTemplate
gFrontierPassPlayerHeadSpriteTemplate: @ 0x0854B120
	rodata_sprite_template 0x0004, 0x0004, gPriorityAFrontierPassOam16x16, gFrontierPassAnims_TwoFrame, 0, gPriorityAFrontierPassDummyAffineAnimTable, gPriorityAFrontierPassSpriteCbDummy
	.globl gFrontierPassAreaDescriptions
gFrontierPassAreaDescriptions: @ 0x0854B138
	.4byte gPriorityAFrontierPassTextThereIsNoBattleRecord
	.4byte gPriorityAFrontierPassTextCheckFrontierMap
	.4byte gPriorityAFrontierPassTextCheckTrainerCard
	.4byte gPriorityAFrontierPassTextViewRecordedBattle
	.4byte gPriorityAFrontierPassTextPutAwayFrontierPass
	.4byte gPriorityAFrontierPassTextCurrentBattlePoints
	.4byte gPriorityAFrontierPassTextCollectedSymbols
	.4byte gPriorityAFrontierPassTextBattleTowerAbilitySymbol
	.4byte gPriorityAFrontierPassTextBattleDomeTacticsSymbol
	.4byte gPriorityAFrontierPassTextBattlePalaceSpiritsSymbol
	.4byte gPriorityAFrontierPassTextBattleArenaGutsSymbol
	.4byte gPriorityAFrontierPassTextBattleFactoryKnowledgeSymbol
	.4byte gPriorityAFrontierPassTextBattlePikeLuckSymbol
	.4byte gPriorityAFrontierPassTextBattlePyramidBraveSymbol
	.4byte gPriorityAFrontierPassTextEmptyString
	.globl gFrontierPassMapLandmarks
gFrontierPassMapLandmarks: @ 0x0854B174
	frontier_pass_landmark gPriorityAFrontierPassTextBattleTowerName, gPriorityAFrontierPassTextBattleTowerDesc, 89, 40, 1 @ facility 0
	frontier_pass_landmark gPriorityAFrontierPassTextBattleDomeName, gPriorityAFrontierPassTextBattleDomeDesc, 33, 42, 1 @ facility 1
	frontier_pass_landmark gPriorityAFrontierPassTextBattlePalaceName, gPriorityAFrontierPassTextBattlePalaceDesc, 120, 86, 0 @ facility 2
	frontier_pass_landmark gPriorityAFrontierPassTextBattleArenaName, gPriorityAFrontierPassTextBattleArenaDesc, 114, 59, 0 @ facility 3
	frontier_pass_landmark gPriorityAFrontierPassTextBattleFactoryName, gPriorityAFrontierPassTextBattleFactoryDesc, 25, 67, 0 @ facility 4
	frontier_pass_landmark gPriorityAFrontierPassTextBattlePikeName, gPriorityAFrontierPassTextBattlePikeDesc, 57, 57, 1 @ facility 5
	frontier_pass_landmark gPriorityAFrontierPassTextBattlePyramidName, gPriorityAFrontierPassTextBattlePyramidDesc, 134, 41, 1 @ facility 6
	@ pret/pokeemerald-jp direct xref for 0x0854B1E4: pokemon_storage_system.s: Task_PokemonStorageSystemPC, sub_080C6E88
	@ Priority B: Pokémon Storage System menu and choose-box animation tables.
	@ Text aliases are proven by pret table order and JP consumer indexing.
	.set gPokemonStorageText_WithdrawPokemon, 0x085CB449
	.set gPokemonStorageText_WithdrawMonDescription, 0x085CB47A
	.set gPokemonStorageText_DepositPokemon, 0x085CB455
	.set gPokemonStorageText_DepositMonDescription, 0x085CB4A2
	.set gPokemonStorageText_MovePokemon, 0x085CB461
	.set gPokemonStorageText_MoveMonDescription, 0x085CB4CA
	.set gPokemonStorageText_MoveItems, 0x085CB46D
	.set gPokemonStorageText_MoveItemsDescription, 0x085CB4F2
	.set gPokemonStorageText_SeeYa, 0x085CB474
	.set gPokemonStorageText_SeeYaDescription, 0x085CB50C

	.globl gPokemonStorageMainMenuTexts
gPokemonStorageMainMenuTexts: @ 0x0854B1E4
	.4byte gPokemonStorageText_WithdrawPokemon, gPokemonStorageText_WithdrawMonDescription
	.4byte gPokemonStorageText_DepositPokemon, gPokemonStorageText_DepositMonDescription
	.4byte gPokemonStorageText_MovePokemon, gPokemonStorageText_MoveMonDescription
	.4byte gPokemonStorageText_MoveItems, gPokemonStorageText_MoveItemsDescription
	.4byte gPokemonStorageText_SeeYa, gPokemonStorageText_SeeYaDescription

	.globl gPokemonStorageMainMenuWindowTemplate
gPokemonStorageMainMenuWindowTemplate: @ 0x0854B20C
	window_template 0x00, 0x01, 0x01, 0x11, 0x0A, 0x0F, 0x0001

	.globl gPokemonStorageAnim_ChooseBoxMenu_TopLeft
gPokemonStorageAnim_ChooseBoxMenu_TopLeft: @ 0x0854B214
	rodata_anim_frame 0, 5, 0, 0
	rodata_anim_end
	.globl gPokemonStorageAnim_ChooseBoxMenu_BottomLeft
gPokemonStorageAnim_ChooseBoxMenu_BottomLeft: @ 0x0854B21C
	rodata_anim_frame 4, 5, 0, 0
	rodata_anim_end
	.globl gPokemonStorageAnim_ChooseBoxMenu_TopRight
gPokemonStorageAnim_ChooseBoxMenu_TopRight: @ 0x0854B224
	rodata_anim_frame 6, 5, 0, 0
	rodata_anim_end
	.globl gPokemonStorageAnim_ChooseBoxMenu_BottomRight
gPokemonStorageAnim_ChooseBoxMenu_BottomRight: @ 0x0854B22C
	rodata_anim_frame 10, 5, 0, 0
	rodata_anim_end

	.globl gPokemonStorageAnims_ChooseBoxMenu
gPokemonStorageAnims_ChooseBoxMenu: @ 0x0854B234
	.4byte gPokemonStorageAnim_ChooseBoxMenu_TopLeft
	.4byte gPokemonStorageAnim_ChooseBoxMenu_BottomLeft
	.4byte gPokemonStorageAnim_ChooseBoxMenu_TopRight
	.4byte gPokemonStorageAnim_ChooseBoxMenu_BottomRight

	.globl gPokemonStorageAffineAnim_ChooseBoxMenu
gPokemonStorageAffineAnim_ChooseBoxMenu: @ 0x0854B244
	rodata_affine_anim_frame 0x00E0, 0x00E0, 0, 0
	rodata_affine_anim_end

	.globl gPokemonStorageAffineAnims_ChooseBoxMenu
gPokemonStorageAffineAnims_ChooseBoxMenu: @ 0x0854B254
	.4byte gPokemonStorageAffineAnim_ChooseBoxMenu
	.globl gText_Rom_54B258

