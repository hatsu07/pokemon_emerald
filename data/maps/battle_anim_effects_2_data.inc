	@ pret/pokeemerald-jp direct xref for 0x0856EF94: battle_anim_effects_2.s: sub_0810445C
	.globl gAirCutterProjectileSpriteTemplate
gAirCutterProjectileSpriteTemplate: @ 0x0856EF94
	rodata_sprite_template 0x2713, 0x2713, gOamData_AffineOff_ObjBlend_32x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081042F4
	.globl gSoundWaveAffineAnim_Wide
gSoundWaveAffineAnim_Wide: @ 0x0856EFAC
	semantic_affine_animcmd_frame 0x20, 0x20, 0, 0
	semantic_affine_animcmd_frame 7, 7, 0, 0xC8
	rodata_affine_anim_end
	.globl gSoundWaveAffineAnim_Pulse
gSoundWaveAffineAnim_Pulse: @ 0x0856EFC4
	semantic_affine_animcmd_frame 5, 5, 0, 0x0A
	semantic_affine_animcmd_frame -10, -10, 0, 0x0A
	semantic_affine_animcmd_frame 10, 10, 0, 0x0A
	semantic_affine_animcmd_frame -10, -10, 0, 0x0A
	semantic_affine_animcmd_frame 10, 10, 0, 0x0A
	semantic_affine_animcmd_frame -10, -10, 0, 0x0A
	semantic_affine_animcmd_frame 10, 10, 0, 0x0A
	rodata_affine_anim_end
	.globl gSoundWaveAffineAnims
gSoundWaveAffineAnims: @ 0x0856F004
	semantic_affine_anim_table_entry gSoundWaveAffineAnim_Wide
	.globl gSoundWaveAffineAnims_PulseOnly
gSoundWaveAffineAnims_PulseOnly: @ 0x0856F008
	semantic_affine_anim_table_entry gSoundWaveAffineAnim_Pulse
	.globl gSupersonicWaveSpriteTemplate
gSupersonicWaveSpriteTemplate: @ 0x0856F00C
	rodata_sprite_template 0x27B3, 0x27B3, gOamData_AffineDouble_ObjNormal_16x32, gDummySpriteAnimTable, 0, gSoundWaveAffineAnims, TranslateAnimSpriteToTargetMonLocation
	.globl gScreechWaveSpriteTemplate
gScreechWaveSpriteTemplate: @ 0x0856F024
	rodata_sprite_template 0x27B4, 0x27B4, gOamData_AffineDouble_ObjNormal_16x32, gDummySpriteAnimTable, 0, gSoundWaveAffineAnims, TranslateAnimSpriteToTargetMonLocation
	.globl gMetalSoundWaveSpriteTemplate
gMetalSoundWaveSpriteTemplate: @ 0x0856F03C
	rodata_sprite_template 0x2814, 0x2814, gOamData_AffineDouble_ObjNormal_32x64, gDummySpriteAnimTable, 0, gSoundWaveAffineAnims, TranslateAnimSpriteToTargetMonLocation
	.globl gWaterPulseRingSpriteTemplate
gWaterPulseRingSpriteTemplate: @ 0x0856F054
	rodata_sprite_template 0x2830, 0x2830, gOamData_AffineDouble_ObjNormal_16x32, gDummySpriteAnimTable, 0, gSoundWaveAffineAnims_PulseOnly, sub_081094E4
	.globl gEggBombProjectileSpriteTemplate
gEggBombProjectileSpriteTemplate: @ 0x0856F06C
	rodata_sprite_template 0x27BF, 0x27BF, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, AnimThrowProjectile
	@ pret/pokeemerald-jp direct xref for 0x0856F084: battle_anim_effects_2.s: sub_08104838
	.globl sVoidLinesSpriteTemplate
sVoidLinesSpriteTemplate: @ 0x0856F084
	rodata_sprite_template 0x27C2, 0x27C2, gOamData_AffineOff_ObjBlend_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08104838
	.globl gCoinAnimCmds
gCoinAnimCmds: @ 0x0856F09C
	rodata_anim_frame 8, 1
	rodata_anim_end
	.globl gCoinAnimTable
gCoinAnimTable: @ 0x0856F0A4
	semantic_anim_table_entry gCoinAnimCmds
	.globl gFallingCoinAffineAnimCmds
gFallingCoinAffineAnimCmds: @ 0x0856F0A8
	rodata_affine_anim_frame 0, 0, 0x010A, 0
	semantic_affine_animcmd_jump 0
	.globl gFallingCoinAffineAnimTable
gFallingCoinAffineAnimTable: @ 0x0856F0B8
	semantic_affine_anim_table_entry gFallingCoinAffineAnimCmds
	.globl gCoinThrowSpriteTemplate
gCoinThrowSpriteTemplate: @ 0x0856F0BC
	rodata_sprite_template 0x2774, 0x2774, gOamData_AffineNormal_ObjNormal_16x16, gCoinAnimTable, 0, gDummySpriteAffineAnimTable, sub_081048D8
	.globl gFallingCoinSpriteTemplate
gFallingCoinSpriteTemplate: @ 0x0856F0D4
	rodata_sprite_template 0x2774, 0x2774, gOamData_AffineNormal_ObjNormal_16x16, gCoinAnimTable, 0, gFallingCoinAffineAnimTable, sub_0810498C
	.globl gBulletSeedAffineAnim
gBulletSeedAffineAnim: @ 0x0856F0EC
	rodata_affine_anim_frame 0, 0, 0x0114, 0
	semantic_affine_animcmd_jump 0
	.globl gBulletSeedAffineAnims
gBulletSeedAffineAnims: @ 0x0856F0FC
	semantic_affine_anim_table_entry gBulletSeedAffineAnim
	.globl gBulletSeedSpriteTemplate
gBulletSeedSpriteTemplate: @ 0x0856F100
	rodata_sprite_template 0x2716, 0x2716, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gBulletSeedAffineAnims, sub_08104A14
	.globl gRazorWindTornadoAffineAnim
gRazorWindTornadoAffineAnim: @ 0x0856F118
	semantic_affine_animcmd_frame 0x10, 0x100, 0, 0
	semantic_affine_animcmd_frame 4, 0, 0, 0x28
	rodata_affine_anim_end
	.globl gRazorWindTornadoAffineAnims
gRazorWindTornadoAffineAnims: @ 0x0856F130
	semantic_affine_anim_table_entry gRazorWindTornadoAffineAnim
	.globl gRazorWindTornadoSpriteTemplate
gRazorWindTornadoSpriteTemplate: @ 0x0856F134
	rodata_sprite_template 0x2719, 0x2719, gOamData_AffineNormal_ObjNormal_32x64, gDummySpriteAnimTable, 0, gRazorWindTornadoAffineAnims, Anim_RazorWindTornado
	.globl gViceGripPincerAnim_Left
gViceGripPincerAnim_Left: @ 0x0856F14C
	rodata_anim_frame 0, 3
	rodata_anim_frame 16, 3
	rodata_anim_frame 32, 20
	rodata_anim_end
	.globl gViceGripPincerAnim_Right
gViceGripPincerAnim_Right: @ 0x0856F15C
	rodata_anim_frame 0, 3, 1, 1
	rodata_anim_frame 16, 3, 1, 1
	rodata_anim_frame 32, 20, 1, 1
	rodata_anim_end
	.globl gViceGripPincerAnims
gViceGripPincerAnims: @ 0x0856F16C
	semantic_anim_table_entry gViceGripPincerAnim_Left
	semantic_anim_table_entry gViceGripPincerAnim_Right
	.globl gViceGripPincerSpriteTemplate
gViceGripPincerSpriteTemplate: @ 0x0856F174
	rodata_sprite_template 0x279A, 0x279A, gOamData_AffineOff_ObjBlend_32x32, gViceGripPincerAnims, 0, gDummySpriteAffineAnimTable, Anim_ViceGripPincer
	.globl gGuillotinePincerAnim_Left
gGuillotinePincerAnim_Left: @ 0x0856F18C
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 32, 1
	rodata_anim_end
	.globl gGuillotinePincerAnim_Right
gGuillotinePincerAnim_Right: @ 0x0856F19C
	rodata_anim_frame 0, 2, 1, 1
	rodata_anim_frame 16, 2, 1, 1
	rodata_anim_frame 32, 1, 1, 1
	rodata_anim_end
	.globl gGuillotinePincerAnims
gGuillotinePincerAnims: @ 0x0856F1AC
	semantic_anim_table_entry gGuillotinePincerAnim_Left
	semantic_anim_table_entry gGuillotinePincerAnim_Right
	.globl gGuillotinePincerSpriteTemplate
gGuillotinePincerSpriteTemplate: @ 0x0856F1B4
	rodata_sprite_template 0x279A, 0x279A, gOamData_AffineOff_ObjBlend_32x32, gGuillotinePincerAnims, 0, gDummySpriteAffineAnimTable, Anim_GuillotinePincer
	@ pret/pokeemerald-jp direct xref for 0x0856F1CC: battle_anim_effects_2.s: AnimTask_Splash, AnimTask_SplashStep
	.globl gSplashAffineAnim
gSplashAffineAnim: @ 0x0856F1CC
	rodata_affine_anim_frame -6, 4, 0x0800, 0
	rodata_affine_anim_frame 10, -10, 0x0800, 0
	rodata_affine_anim_frame -4, 6, 0x0800, 0
	rodata_affine_anim_end
	@ pret/pokeemerald-jp direct xref for 0x0856F1EC: battle_anim_effects_2.s: sub_08105304
	.globl gSwaggerBulkUpAffineAnim
gSwaggerBulkUpAffineAnim: @ 0x0856F1EC
	rodata_affine_anim_frame -4, -5, 0x0C00, 0
	rodata_affine_anim_frame 0, 0, 0x1800, 0
	rodata_affine_anim_frame 4, 5, 0x0C00, 0
	rodata_affine_anim_end
	.globl gBreathPuffAnim_Left
gBreathPuffAnim_Left: @ 0x0856F20C
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 4, 40, 1
	rodata_anim_frame 8, 4, 1
	rodata_anim_frame 12, 4, 1
	rodata_anim_end
	.globl gBreathPuffAnim_Right
gBreathPuffAnim_Right: @ 0x0856F220
	rodata_anim_frame 0, 4
	rodata_anim_frame 4, 40
	rodata_anim_frame 8, 4
	rodata_anim_frame 12, 4
	rodata_anim_end
	.globl gBreathPuffAnims
gBreathPuffAnims: @ 0x0856F234
	semantic_anim_table_entry gBreathPuffAnim_Left
	semantic_anim_table_entry gBreathPuffAnim_Right
	.globl gBreathPuffSpriteTemplate
gBreathPuffSpriteTemplate: @ 0x0856F23C
	rodata_sprite_template 0x2766, 0x2766, gOamData_AffineOff_ObjNormal_16x16, gBreathPuffAnims, 0, gDummySpriteAffineAnimTable, Anim_BreathPuff
	.globl gAngerMarkAffineAnim
gAngerMarkAffineAnim: @ 0x0856F254
	rodata_affine_anim_frame 11, 11, 0x0800, 0
	rodata_affine_anim_frame -11, -11, 0x0800, 0
	rodata_affine_anim_end
	.globl gAngerMarkAffineAnims
gAngerMarkAffineAnims: @ 0x0856F26C
	semantic_affine_anim_table_entry gAngerMarkAffineAnim
	.globl gAngerMarkSpriteTemplate
gAngerMarkSpriteTemplate: @ 0x0856F270
	rodata_sprite_template 0x2767, 0x2767, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gAngerMarkAffineAnims, Anim_AngerMark
	@ pret/pokeemerald-jp direct xref for 0x0856F288: battle_anim_effects_2.s: sub_08105488
	.globl gGrowAndShrinkAffineAnim
gGrowAndShrinkAffineAnim: @ 0x0856F288
	rodata_affine_anim_frame -10, 9, 0x0700, 0
	rodata_affine_anim_frame 20, -20, 0x0700, 0
	rodata_affine_anim_frame -20, 20, 0x0700, 0
	rodata_affine_anim_frame 10, -9, 0x0700, 0
	semantic_affine_animcmd_loop 2
	rodata_affine_anim_end
	.globl gSketchSpriteTemplate
gSketchSpriteTemplate: @ 0x0856F2B8
	rodata_sprite_template 0x2712, 0x2712, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810586C
	.globl gSnoreZSpriteTemplate
gSnoreZSpriteTemplate: @ 0x0856F2D0
	rodata_sprite_template 0x27D5, 0x27D5, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_080A7200
	.globl gExplosionAnimCmds
gExplosionAnimCmds: @ 0x0856F2E8
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 5
	rodata_anim_frame 48, 5
	rodata_anim_end
	.globl gExplosionAnimTable
gExplosionAnimTable: @ 0x0856F2FC
	semantic_anim_table_entry gExplosionAnimCmds
	.globl gExplosionSpriteTemplate
gExplosionSpriteTemplate: @ 0x0856F300
	rodata_sprite_template 0x27D6, 0x27D6, gOamData_AffineOff_ObjNormal_32x32, gExplosionAnimTable, 0, gDummySpriteAffineAnimTable, AnimSpriteOnMonPos
	.globl gSoftBoiledEggAffineAnimCmds1
gSoftBoiledEggAffineAnimCmds1: @ 0x0856F318
	rodata_affine_anim_frame 0, 0, 0x02F8, 0
	rodata_affine_anim_frame 0, 0, 0x0408, 0
	rodata_affine_anim_frame 0, 0, 0x02F8, 0
	semantic_affine_animcmd_jump 0
	.globl gSoftBoiledEggAffineAnimCmds2
gSoftBoiledEggAffineAnimCmds2: @ 0x0856F338
	rodata_affine_anim_frame 0x100, 0x100, 0, 0
	rodata_affine_anim_end
	.globl gSoftBoiledEggAffineAnimCmds3
gSoftBoiledEggAffineAnimCmds3: @ 0x0856F348
	rodata_affine_anim_frame -8, 4, 0x0800, 0
	semantic_affine_animcmd_loop 0
	rodata_affine_anim_frame 16, -8, 0x0800, 0
	rodata_affine_anim_frame -16, 8, 0x0800, 0
	semantic_affine_animcmd_loop 1
	rodata_affine_anim_frame 0x100, 0x100, 0, 0
	rodata_affine_anim_frame 0, 0, 0x0F00, 0
	rodata_affine_anim_end
	.globl gSoftBoiledEggAffineAnims
gSoftBoiledEggAffineAnims: @ 0x0856F388
	semantic_affine_anim_table_entry gSoftBoiledEggAffineAnimCmds1
	semantic_affine_anim_table_entry gSoftBoiledEggAffineAnimCmds2
	semantic_affine_anim_table_entry gSoftBoiledEggAffineAnimCmds3
	.globl gSoftBoiledEggSpriteTemplate
gSoftBoiledEggSpriteTemplate: @ 0x0856F394
	rodata_sprite_template 0x27DA, 0x27DA, gOamData_AffineDouble_ObjBlend_32x32, gDummySpriteAnimTable, 0, gSoftBoiledEggAffineAnims, sub_08105D88
	.globl gThinRingExpandingAffineAnimCmds1
gThinRingExpandingAffineAnimCmds1: @ 0x0856F3AC
	rodata_affine_anim_frame 0x10, 0x10, 0, 0
	rodata_affine_anim_frame 0x10, 0x10, 0x1E00, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gThinRingExpandingAffineAnimCmds2
gThinRingExpandingAffineAnimCmds2: @ 0x0856F3C4
	rodata_affine_anim_frame 0x10, 0x10, 0, 0
	rodata_affine_anim_frame 0x20, 0x20, 0x0F00, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gHyperVoiceRingAffineAnimCmds
gHyperVoiceRingAffineAnimCmds: @ 0x0856F3DC
	rodata_affine_anim_frame 0x10, 0x10, 0, 0
	rodata_affine_anim_frame 11, 11, 0x2D00, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gThinRingExpandingAffineAnimTable
gThinRingExpandingAffineAnimTable: @ 0x0856F3F4
	semantic_affine_anim_table_entry gThinRingExpandingAffineAnimCmds1
	semantic_affine_anim_table_entry gThinRingExpandingAffineAnimCmds2
	.globl gHyperVoiceRingAffineAnimTable
gHyperVoiceRingAffineAnimTable: @ 0x0856F3FC
	semantic_affine_anim_table_entry gHyperVoiceRingAffineAnimCmds
	.globl gThinRingExpandingSpriteTemplate
gThinRingExpandingSpriteTemplate: @ 0x0856F400
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjNormal_64x64, gDummySpriteAnimTable, 0, gThinRingExpandingAffineAnimTable, AnimSpriteOnMonPos
	.globl gThinRingShrinkingAffineAnimCmds
gThinRingShrinkingAffineAnimCmds: @ 0x0856F418
	rodata_affine_anim_frame 0x200, 0x200, 0, 0
	rodata_affine_anim_frame -16, -16, 0x1E00, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gThinRingShrinkingAffineAnimTable
gThinRingShrinkingAffineAnimTable: @ 0x0856F430
	semantic_affine_anim_table_entry gThinRingShrinkingAffineAnimCmds
	.globl gThinRingShrinkingSpriteTemplate
gThinRingShrinkingSpriteTemplate: @ 0x0856F434
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjBlend_64x64, gDummySpriteAnimTable, 0, gThinRingShrinkingAffineAnimTable, AnimSpriteOnMonPos
	.globl gBlendThinRingExpandingSpriteTemplate
gBlendThinRingExpandingSpriteTemplate: @ 0x0856F44C
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjBlend_64x64, gDummySpriteAnimTable, 0, gThinRingExpandingAffineAnimTable, sub_08105A14
	.globl gHyperVoiceRingSpriteTemplate
gHyperVoiceRingSpriteTemplate: @ 0x0856F464
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjBlend_64x64, gDummySpriteAnimTable, 0, gHyperVoiceRingAffineAnimTable, sub_08105AF4
	.globl gUproarRingSpriteTemplate
gUproarRingSpriteTemplate: @ 0x0856F47C
	rodata_sprite_template 0x27DB, 0x27DB, gOamData_AffineDouble_ObjBlend_64x64, gDummySpriteAnimTable, 0, gThinRingExpandingAffineAnimTable, sub_08105D38
	@ pret/pokeemerald-jp direct xref for 0x0856F494: battle_anim_effects_2.s: sub_08105FCC
	.globl gExtremeSpeedTaskAffineAnim
gExtremeSpeedTaskAffineAnim: @ 0x0856F494
	rodata_affine_anim_frame 0x60, -13, 0x0800, 0
	rodata_affine_anim_end
	.globl gExtremeSpeedAfterimageAnim
gExtremeSpeedAfterimageAnim: @ 0x0856F4A4
	rodata_anim_frame 0, 3
	rodata_anim_frame 4, 3
	rodata_anim_frame 8, 3
	rodata_anim_frame 4, 3
	rodata_anim_frame 0, 3
	rodata_anim_end
	.globl gExtremeSpeedAfterimageAnims
gExtremeSpeedAfterimageAnims: @ 0x0856F4BC
	semantic_anim_table_entry gExtremeSpeedAfterimageAnim
	@ pret/pokeemerald-jp direct xref for 0x0856F4C0: battle_anim_effects_2.s: sub_08106358
	.globl gExtremeSpeedAfterimageSpriteTemplate
gExtremeSpeedAfterimageSpriteTemplate: @ 0x0856F4C0
	rodata_sprite_template 0x27DF, 0x27DF, gOamData_AffineOff_ObjNormal_16x16, gExtremeSpeedAfterimageAnims, 0, gDummySpriteAffineAnimTable, sub_08106498
	@ pret/pokeemerald-jp direct xref for 0x0856F4D8: battle_anim_effects_2.s: sub_08106358
	.globl gExtremeSpeedAfterimageOffsets
gExtremeSpeedAfterimageOffsets: @ 0x0856F4D8
	.byte 30, 28, -20, 24, 16, 26, -10, 28
	.globl gHealBellRingAnim
gHealBellRingAnim: @ 0x0856F4E0
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 6
	rodata_anim_frame 32, 15
	rodata_anim_frame 16, 6
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 6, 1
	rodata_anim_frame 32, 15, 1
	rodata_anim_frame 16, 6, 1
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 6
	rodata_anim_frame 32, 15
	rodata_anim_frame 16, 6
	rodata_anim_frame 0, 6
	rodata_anim_end
	.globl gHealBellRingAnims
gHealBellRingAnims: @ 0x0856F518
	semantic_anim_table_entry gHealBellRingAnim
	.globl gHealBellRingSpriteTemplate
gHealBellRingSpriteTemplate: @ 0x0856F51C
	rodata_sprite_template 0x27DD, 0x27DD, gOamData_AffineOff_ObjNormal_32x32, gHealBellRingAnims, 0, gDummySpriteAffineAnimTable, AnimSpriteOnMonPos
	@ pret/pokeemerald-jp direct xref for 0x0856F534: battle_anim_effects_2.s: sub_081065B0, sub_081065D8
	.globl gHealBellPaletteTags
gHealBellPaletteTags: @ 0x0856F534
	.2byte 0x27DE, 0x270F, 0x270E, 0
	.globl gHealBellParticleSpriteTemplate
gHealBellParticleSpriteTemplate: @ 0x0856F53C
	rodata_sprite_template 0x27DE, 0x27DE, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08106638
	.globl gCharmHeartSpriteTemplate
gCharmHeartSpriteTemplate: @ 0x0856F554
	rodata_sprite_template 0x27E2, 0x27E2, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081066B0
	@ pret/pokeemerald-jp direct xref for 0x0856F56C: battle_anim_effects_2.s: sub_08106870, sub_08106900
	.globl gTrickTaskAffineAnim
gTrickTaskAffineAnim: @ 0x0856F56C
	rodata_affine_anim_frame 10, -13, 0x0A00, 0
	rodata_affine_anim_frame -10, 13, 0x0A00, 0
	rodata_affine_anim_end
	.globl gAttractHeartSpriteTemplate
gAttractHeartSpriteTemplate: @ 0x0856F584
	rodata_sprite_template 0x27E8, 0x27E8, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08106990
	.globl gFloatingHeartSpriteTemplate
gFloatingHeartSpriteTemplate: @ 0x0856F59C
	rodata_sprite_template 0x27E8, 0x27E8, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08106A14
	.globl gAttractBackgroundHeartSpriteTemplate
gAttractBackgroundHeartSpriteTemplate: @ 0x0856F5B4
	rodata_sprite_template 0x27E8, 0x27E8, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08106A9C
	.globl gHiddenPowerOrbAffineAnim
gHiddenPowerOrbAffineAnim: @ 0x0856F5CC
	rodata_affine_anim_frame 0x80, 0x80, 0, 0
	rodata_affine_anim_frame 8, 8, 0x0100, 0
	semantic_affine_animcmd_jump 1
	.globl gHiddenPowerOrbAffineAnims
gHiddenPowerOrbAffineAnims: @ 0x0856F5E4
	semantic_affine_anim_table_entry gHiddenPowerOrbAffineAnim
	.globl gHiddenPowerOrbAttackerSpriteTemplate
gHiddenPowerOrbAttackerSpriteTemplate: @ 0x0856F5E8
	rodata_sprite_template 0x27E9, 0x27E9, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gHiddenPowerOrbAffineAnims, AnimOrbitFast
	.globl gHiddenPowerOrbTargetSpriteTemplate
gHiddenPowerOrbTargetSpriteTemplate: @ 0x0856F600
	rodata_sprite_template 0x27E9, 0x27E9, gOamData_AffineDouble_ObjNormal_16x16, gDummySpriteAnimTable, 0, gHiddenPowerOrbAffineAnims, AnimOrbitScatter
	.globl gSpitUpParticleAffineAnim
gSpitUpParticleAffineAnim: @ 0x0856F618
	rodata_affine_anim_frame 0x80, 0x80, 0, 0
	rodata_affine_anim_frame 8, 8, 0x0100, 0
	semantic_affine_animcmd_jump 1
	.globl gSpitUpParticleAffineAnims
gSpitUpParticleAffineAnims: @ 0x0856F630
	semantic_affine_anim_table_entry gSpitUpParticleAffineAnim
	.globl gSpitUpParticleSpriteTemplate
gSpitUpParticleSpriteTemplate: @ 0x0856F634
	rodata_sprite_template 0x27FD, 0x27FD, gOamData_AffineDouble_ObjNormal_8x8, gDummySpriteAnimTable, 0, gSpitUpParticleAffineAnims, sub_08107194
	.globl gGlareEyeAnim
gGlareEyeAnim: @ 0x0856F64C
	rodata_anim_frame 0, 4
	rodata_anim_frame 4, 4
	rodata_anim_frame 8, 4
	rodata_anim_frame 4, 4
	rodata_anim_frame 0, 4
	rodata_anim_end
	.globl gGlareEyeAnims
gGlareEyeAnims: @ 0x0856F664
	semantic_anim_table_entry gGlareEyeAnim
	.globl gGlareEyeSpriteTemplate
gGlareEyeSpriteTemplate: @ 0x0856F668
	rodata_sprite_template 0x27EA, 0x27EA, gOamData_AffineOff_ObjNormal_16x16, gGlareEyeAnims, 0, gDummySpriteAffineAnimTable, sub_08107208
	.globl gSweetKissAnim
gSweetKissAnim: @ 0x0856F680
	rodata_anim_frame 0, 24
	rodata_anim_end
	.globl gSweetKissAnims
gSweetKissAnims: @ 0x0856F688
	semantic_anim_table_entry gSweetKissAnim
	.globl gSweetKissSpriteTemplate
gSweetKissSpriteTemplate: @ 0x0856F68C
	rodata_sprite_template 0x27EC, 0x27EC, gOamData_AffineOff_ObjNormal_32x32, gSweetKissAnims, 0, gDummySpriteAffineAnimTable, sub_08107220
	.globl gLovelyKissHeartSpriteTemplate
gLovelyKissHeartSpriteTemplate: @ 0x0856F6A4
	rodata_sprite_template 0x27EB, 0x27EB, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08107320
	.globl gLovelyKissAnim_0
gLovelyKissAnim_0: @ 0x0856F6BC
	rodata_anim_frame 0, 3
	rodata_anim_jump 0
	.globl gLovelyKissAnim_1
gLovelyKissAnim_1: @ 0x0856F6C4
	rodata_anim_frame 16, 3
	rodata_anim_jump 0
	.globl gLovelyKissAnims
gLovelyKissAnims: @ 0x0856F6CC
	semantic_anim_table_entry gLovelyKissAnim_0
	semantic_anim_table_entry gLovelyKissAnim_1
	.globl gLovelyKissSpriteTemplate
gLovelyKissSpriteTemplate: @ 0x0856F6D4
	rodata_sprite_template 0x27ED, 0x27ED, gOamData_AffineOff_ObjNormal_32x32, gLovelyKissAnims, 0, gDummySpriteAffineAnimTable, sub_081073A4
	.globl gFurySwipesAnim_0
gFurySwipesAnim_0: @ 0x0856F6EC
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 48, 4
	rodata_anim_end
	.globl gFurySwipesAnim_1
gFurySwipesAnim_1: @ 0x0856F700
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 16, 4, 1
	rodata_anim_frame 32, 4, 1
	rodata_anim_frame 48, 4, 1
	rodata_anim_end
	.globl gFurySwipesAnims
gFurySwipesAnims: @ 0x0856F714
	semantic_anim_table_entry gFurySwipesAnim_0
	semantic_anim_table_entry gFurySwipesAnim_1
	.globl gFurySwipesSpriteTemplate
gFurySwipesSpriteTemplate: @ 0x0856F71C
	rodata_sprite_template 0x27EE, 0x27EE, gOamData_AffineOff_ObjNormal_32x32, gFurySwipesAnims, 0, gDummySpriteAffineAnimTable, sub_081074D0
	.globl gStruggleAnim_0
gStruggleAnim_0: @ 0x0856F734
	rodata_anim_frame 0, 8
	rodata_anim_frame 16, 8
	rodata_anim_frame 32, 8
	rodata_anim_frame 16, 8
	rodata_anim_end
	.globl gStruggleAnim_1
gStruggleAnim_1: @ 0x0856F748
	rodata_anim_frame 16, 8, 1
	rodata_anim_frame 32, 8, 1
	rodata_anim_frame 16, 8, 1
	rodata_anim_frame 0, 8, 1
	rodata_anim_end
	.globl gStruggleAnims
gStruggleAnims: @ 0x0856F75C
	semantic_anim_table_entry gStruggleAnim_0
	semantic_anim_table_entry gStruggleAnim_1
	.globl gStruggleSpriteTemplate
gStruggleSpriteTemplate: @ 0x0856F764
	rodata_sprite_template 0x27E7, 0x27E7, gOamData_AffineOff_ObjNormal_32x32, gStruggleAnims, 0, gDummySpriteAffineAnimTable, sub_08107520
	@ pret/pokeemerald-jp direct xref for 0x0856F77C: battle_anim_effects_2.s: sub_081075E0
	.globl gUproarTaskAffineAnim
gUproarTaskAffineAnim: @ 0x0856F77C
	rodata_affine_anim_frame -12, 8, 0x0400, 0
	rodata_affine_anim_frame 20, -20, 0x0400, 0
	rodata_affine_anim_frame -8, 12, 0x0400, 0
	rodata_affine_anim_end
	.globl gJaggedMusicNoteSpriteTemplate
gJaggedMusicNoteSpriteTemplate: @ 0x0856F79C
	rodata_sprite_template 0x27F1, 0x27F1, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08107650
	.globl gPerishSongNoteAffineAnim_0
gPerishSongNoteAffineAnim_0: @ 0x0856F7B4
	rodata_affine_anim_frame 0, 0, 0x0500, 0
	rodata_affine_anim_end
	.globl gPerishSongNoteAffineAnim_1
gPerishSongNoteAffineAnim_1: @ 0x0856F7C4
	rodata_affine_anim_frame 0, 0, 0x10F8, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gPerishSongNoteAffineAnim_2
gPerishSongNoteAffineAnim_2: @ 0x0856F7D4
	rodata_affine_anim_frame 0, 0, 0x1008, 0
	.2byte 0x7FFF, 1, 0, 0
	.globl gPerishSongNoteAffineAnims
gPerishSongNoteAffineAnims: @ 0x0856F7E4
	semantic_affine_anim_table_entry gPerishSongNoteAffineAnim_0
	semantic_affine_anim_table_entry gPerishSongNoteAffineAnim_1
	semantic_affine_anim_table_entry gPerishSongNoteAffineAnim_2
	.globl gPerishSongMusicNoteSpriteTemplate
gPerishSongMusicNoteSpriteTemplate: @ 0x0856F7F0
	rodata_sprite_template 0x27DE, 0x27DE, gOamData_AffineNormal_ObjNormal_16x16, gSingMusicNoteAnims, 0, gPerishSongNoteAffineAnims, sub_081077B0
	.globl gPerishSongMusicNote2SpriteTemplate
gPerishSongMusicNote2SpriteTemplate: @ 0x0856F808
	rodata_sprite_template 0x27DE, 0x27DE, gOamData_AffineNormal_ObjNormal_16x16, gSingMusicNoteAnims, 0, gPerishSongNoteAffineAnims, sub_08107750
	.globl gSafeguardAffineAnim_0
gSafeguardAffineAnim_0: @ 0x0856F820
	rodata_affine_anim_frame 0x100, 0x100, 0, 0
	rodata_affine_anim_end
	.globl gSafeguardAffineAnim_1
gSafeguardAffineAnim_1: @ 0x0856F830
	rodata_affine_anim_frame 0x200, 0x100, 0, 0
	rodata_affine_anim_end
	.globl gSafeguardAffineAnims
gSafeguardAffineAnims: @ 0x0856F840
	semantic_affine_anim_table_entry gSafeguardAffineAnim_0
	semantic_affine_anim_table_entry gSafeguardAffineAnim_1
	.globl gSafeguardSpriteTemplate
gSafeguardSpriteTemplate: @ 0x0856F848
	rodata_sprite_template 0x2804, 0x2804, gOamData_AffineDouble_ObjBlend_64x32, gDummySpriteAnimTable, 0, gSafeguardAffineAnims, sub_081078FC
	.globl sUnusedWater_Gfx
sUnusedWater_Gfx: @ 0x0856F860
	@ Canonical unused battle-animation water graphics.
	.incbin "build/graphics/battle_anims/unused/water_gfx.4bpp"

	.globl sUnusedWater
sUnusedWater: @ 0x0856FBE0
	@ Canonical unused battle-animation water text-BG tilemap.
	.include "build/graphics/battle_anims/unused/water.tilemap.inc"

	.globl sAnim_RainDrop
sAnim_RainDrop: @ 0x08570BE0
	rodata_anim_frame 0, 2
	rodata_anim_frame 8, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 24, 6
	rodata_anim_frame 32, 2
	rodata_anim_frame 40, 2
	rodata_anim_frame 48, 2
	rodata_anim_end

	.globl sAnims_RainDrop
sAnims_RainDrop: @ 0x08570C00
	semantic_anim_table_entry sAnim_RainDrop
