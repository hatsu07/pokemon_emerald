	@ pret/pokeemerald-jp direct xref for 0x0856DDF4: battle_anim_effects_1.s: AnimTask_CreateSmallSolarbeamOrbs
	.globl gSolarbeamSmallOrbSpriteTemplate
gSolarbeamSmallOrbSpriteTemplate: @ 0x0856DDF4
	@ analyzed canonical ROM range 0x0856DDF4-0x0856DE0B
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineOff_ObjNormal_8x8, gSolarbeamSmallOrbAnims, 0, gDummySpriteAffineAnimTable, AnimSolarbeamSmallOrb
	.globl gSolarbeamSmallOrbAffineAnim
gSolarbeamSmallOrbAffineAnim: @ 0x0856DE0C
	semantic_affine_animcmd_frame 0x0140, 0x0140, 0x00, 0x00
	semantic_affine_animcmd_frame -14, -14, 0x00, 0x01
	semantic_affine_animcmd_jump 1
	.globl gSolarbeamSmallOrbAffineAnims
gSolarbeamSmallOrbAffineAnims: @ 0x0856DE24
	semantic_affine_anim_table_entry gSolarbeamSmallOrbAffineAnim
	.globl gStockpileAbsorptionOrbSpriteTemplate
gStockpileAbsorptionOrbSpriteTemplate: @ 0x0856DE28
	rodata_sprite_template 0x27FB, 0x27FB, gOamData_AffineDouble_ObjNormal_8x8, gDummySpriteAnimTable, 0, gSolarbeamSmallOrbAffineAnims, AnimPowerAbsorptionOrb
	.globl gPowerAbsorptionOrbAffineAnim_Loop
gPowerAbsorptionOrbAffineAnim_Loop: @ 0x0856DE40
	semantic_affine_animcmd_frame -5, -5, 0x00, 0x01
	semantic_affine_animcmd_jump 0
	.globl gPowerAbsorptionOrbAffineAnims_Loop
gPowerAbsorptionOrbAffineAnims_Loop: @ 0x0856DE50
	semantic_affine_anim_table_entry gPowerAbsorptionOrbAffineAnim_Loop
	.globl gAbsorptionOrbSpriteTemplate
gAbsorptionOrbSpriteTemplate: @ 0x0856DE54
	@ analyzed canonical ROM range 0x0856DE54-0x0856DE6B
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineNormal_ObjBlend_16x16, gPowerAbsorptionOrbAnims, 0, gPowerAbsorptionOrbAffineAnims_Loop, AnimAbsorptionOrb
	.globl gHyperBeamOrbSpriteTemplate
gHyperBeamOrbSpriteTemplate: @ 0x0856DE6C
	@ analyzed canonical ROM range 0x0856DE6C-0x0856DE83
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineOff_ObjNormal_8x8, gSolarbeamBigOrbAnims, 0, gDummySpriteAffineAnimTable, AnimHyperBeamOrb
	.globl gLeechSeedAnim_Idle
gLeechSeedAnim_Idle: @ 0x0856DE84
	@ analyzed canonical ROM range 0x0856DE84-0x0856DF17
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gLeechSeedAnim_Sprouting
gLeechSeedAnim_Sprouting: @ 0x0856DE8C
	rodata_anim_frame 4, 7
	rodata_anim_frame 8, 7
	rodata_anim_jump 0
	.globl gLeechSeedAnims
gLeechSeedAnims: @ 0x0856DE98
	semantic_anim_table_entry gLeechSeedAnim_Idle
	semantic_anim_table_entry gLeechSeedAnim_Sprouting
	.globl gLeechSeedSpriteTemplate
gLeechSeedSpriteTemplate: @ 0x0856DEA0
	rodata_sprite_template 0x2716, 0x2716, gOamData_AffineOff_ObjNormal_16x16, gLeechSeedAnims, 0, gDummySpriteAffineAnimTable, AnimLeechSeed
	.globl gSporeParticleAnim_Idle
gSporeParticleAnim_Idle: @ 0x0856DEB8
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gSporeParticleAnim_Sprout
gSporeParticleAnim_Sprout: @ 0x0856DEC0
	rodata_anim_frame 4, 7
	rodata_anim_end
	.globl gSporeParticleAnims
gSporeParticleAnims: @ 0x0856DEC8
	semantic_anim_table_entry gSporeParticleAnim_Idle
	semantic_anim_table_entry gSporeParticleAnim_Sprout
	.globl gSporeParticleSpriteTemplate
gSporeParticleSpriteTemplate: @ 0x0856DED0
	rodata_sprite_template 0x27AE, 0x27AE, gOamData_AffineOff_ObjNormal_16x16, gSporeParticleAnims, 0, gDummySpriteAffineAnimTable, AnimSporeParticle
	.globl gPetalDanceBigFlowerAnim_Idle
gPetalDanceBigFlowerAnim_Idle: @ 0x0856DEE8
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gPetalDanceBigFlowerAnim_Bloom
gPetalDanceBigFlowerAnim_Bloom: @ 0x0856DEF0
	rodata_anim_frame 4, 1
	rodata_anim_end
	.globl gPetalDanceBigFlowerAnims
gPetalDanceBigFlowerAnims: @ 0x0856DEF8
	semantic_anim_table_entry gPetalDanceBigFlowerAnim_Idle
	.globl gPetalDanceSmallFlowerAnims
gPetalDanceSmallFlowerAnims: @ 0x0856DEFC
	semantic_anim_table_entry gPetalDanceBigFlowerAnim_Bloom
	.globl gPetalDanceBigFlowerSpriteTemplate
gPetalDanceBigFlowerSpriteTemplate: @ 0x0856DF00
	rodata_sprite_template 0x27AF, 0x27AF, gOamData_AffineOff_ObjNormal_16x16, gPetalDanceBigFlowerAnims, 0, gDummySpriteAffineAnimTable, AnimPetalDanceBigFlower
	.globl gPetalDanceSmallFlowerSpriteTemplate
gPetalDanceSmallFlowerSpriteTemplate: @ 0x0856DF18
	@ analyzed canonical ROM range 0x0856DF18-0x0856DF2F
	rodata_sprite_template 0x27AF, 0x27AF, gOamData_AffineOff_ObjNormal_8x8, gPetalDanceSmallFlowerAnims, 0, gDummySpriteAffineAnimTable, AnimPetalDanceSmallFlower
	.globl gRazorLeafParticleAnim_Spin
gRazorLeafParticleAnim_Spin: @ 0x0856DF30
	rodata_anim_frame 0, 5
	rodata_anim_frame 4, 5
	rodata_anim_frame 8, 5
	rodata_anim_frame 12, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 20, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 12, 5
	rodata_anim_frame 8, 5
	rodata_anim_frame 4, 5
	rodata_anim_jump 0
	.globl gRazorLeafParticleAnim_End
gRazorLeafParticleAnim_End: @ 0x0856DF5C
	rodata_anim_frame 24, 5
	rodata_anim_frame 28, 5
	rodata_anim_frame 32, 5
	rodata_anim_end
	.globl gRazorLeafParticleAnims
gRazorLeafParticleAnims: @ 0x0856DF6C
	semantic_anim_table_entry gRazorLeafParticleAnim_Spin
	semantic_anim_table_entry gRazorLeafParticleAnim_End
	.globl gRazorLeafParticleSpriteTemplate
gRazorLeafParticleSpriteTemplate: @ 0x0856DF74
	rodata_sprite_template 0x274F, 0x274F, gOamData_AffineOff_ObjNormal_16x16, gRazorLeafParticleAnims, 0, gDummySpriteAffineAnimTable, AnimRazorLeafParticle
	.globl gMoveTwisterParticleSpriteTemplate
gMoveTwisterParticleSpriteTemplate: @ 0x0856DF8C
	rodata_sprite_template 0x274F, 0x274F, gOamData_AffineOff_ObjNormal_16x16, gRazorLeafParticleAnims, 0, gDummySpriteAffineAnimTable, AnimMoveTwisterParticle
	.globl gTranslateLinearSingleSineWaveAnim_Tag27B0
gTranslateLinearSingleSineWaveAnim_Tag27B0: @ 0x0856DFA4
	rodata_anim_frame 0, 3
	rodata_anim_frame 0, 3, 1
	rodata_anim_frame 0, 3, 1, 1
	rodata_anim_frame 0, 3, 0, 1
	rodata_anim_jump 0
	.globl gTranslateLinearSingleSineWaveAnims_Tag27B0
gTranslateLinearSingleSineWaveAnims_Tag27B0: @ 0x0856DFB8
	semantic_anim_table_entry gTranslateLinearSingleSineWaveAnim_Tag27B0
	.globl gRazorLeafCutterSpriteTemplate
gRazorLeafCutterSpriteTemplate: @ 0x0856DFBC
	rodata_sprite_template 0x27B0, 0x27B0, gOamData_AffineOff_ObjNormal_32x16, gTranslateLinearSingleSineWaveAnims_Tag27B0, 0, gDummySpriteAffineAnimTable, AnimTranslateLinearSingleSineWave
	.globl gTranslateLinearSingleSineWaveAffineAnim
gTranslateLinearSingleSineWaveAffineAnim: @ 0x0856DFD4
	semantic_affine_animcmd_frame 0, 0, 0, 1
	semantic_affine_animcmd_jump 0
	.globl gTranslateLinearSingleSineWaveAffineAnims
gTranslateLinearSingleSineWaveAffineAnims: @ 0x0856DFE4
	semantic_affine_anim_table_entry gTranslateLinearSingleSineWaveAffineAnim
	.globl gSwiftStarSpriteTemplate
gSwiftStarSpriteTemplate: @ 0x0856DFE8
	rodata_sprite_template 0x27BE, 0x27BE, gOamData_AffineNormal_ObjNormal_32x32, gDummySpriteAnimTable, 0, gTranslateLinearSingleSineWaveAffineAnims, AnimTranslateLinearSingleSineWave
	.globl gConstrictBindingAnim_Normal
gConstrictBindingAnim_Normal: @ 0x0856E000
	rodata_anim_frame 0, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 64, 4
	rodata_anim_frame 96, 4
	rodata_anim_end
	.globl gConstrictBindingAnim_Flipped
gConstrictBindingAnim_Flipped: @ 0x0856E014
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 32, 4, 1
	rodata_anim_frame 64, 4, 1
	rodata_anim_frame 96, 4, 1
	rodata_anim_end
	.globl gConstrictBindingAnims
gConstrictBindingAnims: @ 0x0856E028
	semantic_anim_table_entry gConstrictBindingAnim_Normal
	semantic_anim_table_entry gConstrictBindingAnim_Flipped
	.globl gConstrictBindingAffineAnim_Normal
gConstrictBindingAffineAnim_Normal: @ 0x0856E030
	semantic_affine_animcmd_frame 0x100, 0x100, 0, 0
	semantic_affine_animcmd_frame -11, 0, 0, 6
	semantic_affine_animcmd_frame 11, 0, 0, 6
	rodata_affine_anim_end
	.globl gConstrictBindingAffineAnim_Flipped
gConstrictBindingAffineAnim_Flipped: @ 0x0856E050
	semantic_affine_animcmd_frame -0x100, 0x100, 0, 0
	semantic_affine_animcmd_frame 11, 0, 0, 6
	semantic_affine_animcmd_frame -11, 0, 0, 6
	rodata_affine_anim_end
	.globl gConstrictBindingAffineAnims
gConstrictBindingAffineAnims: @ 0x0856E070
	semantic_affine_anim_table_entry gConstrictBindingAffineAnim_Normal
	semantic_affine_anim_table_entry gConstrictBindingAffineAnim_Flipped
	.globl gConstrictBindingSpriteTemplate
gConstrictBindingSpriteTemplate: @ 0x0856E078
	rodata_sprite_template 0x27CA, 0x27CA, gOamData_AffineNormal_ObjNormal_64x32, gConstrictBindingAnims, 0, gConstrictBindingAffineAnims, AnimConstrictBinding
	.globl gMimicOrbAffineAnim_Grow
gMimicOrbAffineAnim_Grow: @ 0x0856E090
	semantic_affine_animcmd_frame 0, 0, 0, 0
	semantic_affine_animcmd_frame 0x30, 0x30, 0, 14
	rodata_affine_anim_end
	.globl gMimicOrbAffineAnim_Loop
gMimicOrbAffineAnim_Loop: @ 0x0856E0A8
	semantic_affine_animcmd_frame -16, -16, 0, 1
	semantic_affine_animcmd_jump 0
	.globl gMimicOrbAffineAnims
gMimicOrbAffineAnims: @ 0x0856E0B8
	semantic_affine_anim_table_entry gMimicOrbAffineAnim_Grow
	semantic_affine_anim_table_entry gMimicOrbAffineAnim_Loop
	.globl gMimicOrbSpriteTemplate
gMimicOrbSpriteTemplate: @ 0x0856E0C0
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineDouble_ObjNormal_16x16, gPowerAbsorptionOrbAnims, 0, gMimicOrbAffineAnims, AnimMimicOrb
	.globl gIngrainRootAnim_Normal
gIngrainRootAnim_Normal: @ 0x0856E0D8
	rodata_anim_frame 0, 7
	rodata_anim_frame 16, 7
	rodata_anim_frame 32, 7
	rodata_anim_frame 48, 7
	rodata_anim_end
	.globl gIngrainRootAnim_Flipped
gIngrainRootAnim_Flipped: @ 0x0856E0EC
	rodata_anim_frame 0, 7, 1
	rodata_anim_frame 16, 7, 1
	rodata_anim_frame 32, 7, 1
	rodata_anim_frame 48, 7, 1
	rodata_anim_end
	.globl gIngrainRootAnim_Short
gIngrainRootAnim_Short: @ 0x0856E100
	rodata_anim_frame 0, 7
	rodata_anim_frame 16, 7
	rodata_anim_frame 32, 7
	rodata_anim_end
	.globl gIngrainRootAnim_ShortFlipped
gIngrainRootAnim_ShortFlipped: @ 0x0856E110
	rodata_anim_frame 0, 7, 1
	rodata_anim_frame 16, 7, 1
	rodata_anim_frame 32, 7, 1
	rodata_anim_end
	.globl gIngrainRootAnims
gIngrainRootAnims: @ 0x0856E120
	semantic_anim_table_entry gIngrainRootAnim_Normal
	semantic_anim_table_entry gIngrainRootAnim_Flipped
	semantic_anim_table_entry gIngrainRootAnim_Short
	semantic_anim_table_entry gIngrainRootAnim_ShortFlipped
	.globl gIngrainRootSpriteTemplate
gIngrainRootSpriteTemplate: @ 0x0856E130
	rodata_sprite_template 0x27EF, 0x27EF, gOamData_AffineOff_ObjNormal_32x32, gIngrainRootAnims, 0, gDummySpriteAffineAnimTable, AnimIngrainRoot
	.globl gFrenzyPlantRootSpriteTemplate
gFrenzyPlantRootSpriteTemplate: @ 0x0856E148
	rodata_sprite_template 0x27EF, 0x27EF, gOamData_AffineOff_ObjNormal_32x32, gIngrainRootAnims, 0, gDummySpriteAffineAnimTable, AnimFrenzyPlantRoot
	.globl gIngrainOrbAnim
gIngrainOrbAnim: @ 0x0856E160
	rodata_anim_frame 3, 3
	rodata_anim_frame 0, 5
	rodata_anim_jump 0
	.globl gIngrainOrbAnims
gIngrainOrbAnims: @ 0x0856E16C
	semantic_anim_table_entry gIngrainOrbAnim
	.globl gIngrainOrbSpriteTemplate
gIngrainOrbSpriteTemplate: @ 0x0856E170
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineOff_ObjNormal_8x8, gIngrainOrbAnims, 0, gDummySpriteAffineAnimTable, AnimIngrainOrb
	.globl gPresentAnim
gPresentAnim: @ 0x0856E188
	rodata_anim_frame 0, 30
	rodata_anim_end
	.globl gPresentAnims
gPresentAnims: @ 0x0856E190
	semantic_anim_table_entry gPresentAnim
	.globl gPresentAffineAnim_Spin
gPresentAffineAnim_Spin: @ 0x0856E194
	semantic_affine_animcmd_frame 0, 0, 0xFC, 10
	semantic_affine_animcmd_frame 0, 0, 4, 20
	semantic_affine_animcmd_frame 0, 0, 0xFC, 10
	rodata_affine_anim_end
	.globl gPresentAffineAnim_Shake
gPresentAffineAnim_Shake: @ 0x0856E1B4
	semantic_affine_animcmd_frame 0, 0, 0xFF, 2
	semantic_affine_animcmd_frame 0, 0, 1, 4
	semantic_affine_animcmd_frame 0, 0, 0xFF, 4
	semantic_affine_animcmd_frame 0, 0, 1, 4
	semantic_affine_animcmd_frame 0, 0, 0xFF, 4
	semantic_affine_animcmd_frame 0, 0, 1, 2
	rodata_affine_anim_end
	.globl gPresentAffineAnims
gPresentAffineAnims: @ 0x0856E1EC
	semantic_affine_anim_table_entry gPresentAffineAnim_Spin
	semantic_affine_anim_table_entry gPresentAffineAnim_Shake
	.globl gPresentSpriteTemplate
gPresentSpriteTemplate: @ 0x0856E1F4
	rodata_sprite_template 0x27F0, 0x27F0, gOamData_AffineNormal_ObjNormal_32x32, gPresentAnims, 0, gPresentAffineAnims, AnimPresent
	.globl gKnockOffItemSpriteTemplate
gKnockOffItemSpriteTemplate: @ 0x0856E20C
	rodata_sprite_template 0x27F0, 0x27F0, gOamData_AffineNormal_ObjNormal_32x32, gPresentAnims, 0, gPresentAffineAnims, AnimKnockOffItem
	.globl gPresentHealParticleAnim
gPresentHealParticleAnim: @ 0x0856E224
	rodata_anim_frame 0, 4
	rodata_anim_frame 4, 4
	rodata_anim_frame 8, 4
	rodata_anim_frame 12, 4
	rodata_anim_end
	.globl gPresentHealParticleAnims
gPresentHealParticleAnims: @ 0x0856E238
	semantic_anim_table_entry gPresentHealParticleAnim
	.globl gPresentHealParticleSpriteTemplate
gPresentHealParticleSpriteTemplate: @ 0x0856E23C
	rodata_sprite_template 0x27D3, 0x27D3, gOamData_AffineOff_ObjNormal_16x16, gPresentHealParticleAnims, 0, gDummySpriteAffineAnimTable, AnimPresentHealParticle
	.globl gItemStealSpriteTemplate
gItemStealSpriteTemplate: @ 0x0856E254
	rodata_sprite_template 0x27F0, 0x27F0, gOamData_AffineNormal_ObjNormal_32x32, gPresentAnims, 0, gPresentAffineAnims, AnimItemSteal
	.globl gTrickBagAffineAnim_Idle
gTrickBagAffineAnim_Idle: @ 0x0856E26C
	semantic_affine_animcmd_frame 0, 0, 0, 3
	rodata_affine_anim_end
	.globl gTrickBagAffineAnim_Wobble
gTrickBagAffineAnim_Wobble: @ 0x0856E27C
	semantic_affine_animcmd_frame 0, -10, 0, 3
	semantic_affine_animcmd_frame 0, -6, 0, 3
	semantic_affine_animcmd_frame 0, -2, 0, 3
	semantic_affine_animcmd_frame 0, 0, 0, 3
	semantic_affine_animcmd_frame 0, 2, 0, 3
	semantic_affine_animcmd_frame 0, 6, 0, 3
	semantic_affine_animcmd_frame 0, 10, 0, 3
	rodata_affine_anim_end
	.globl gTrickBagAffineAnims
gTrickBagAffineAnims: @ 0x0856E2BC
	semantic_affine_anim_table_entry gTrickBagAffineAnim_Idle
	semantic_affine_anim_table_entry gTrickBagAffineAnim_Wobble
	semantic_affine_anim_table_entry gPresentAffineAnim_Spin
	semantic_affine_anim_table_entry gPresentAffineAnim_Shake
	.globl gTrickBagSpriteTemplate
gTrickBagSpriteTemplate: @ 0x0856E2CC
	rodata_sprite_template 0x27F0, 0x27F0, gOamData_AffineNormal_ObjNormal_32x32, gPresentAnims, 0, gTrickBagAffineAnims, AnimTrickBag
	.globl gTrickBagSwingSteps
gTrickBagSwingSteps: @ 0x0856E2E4
	.byte 5, 24, 1
	.byte 0, 4, 0
	.byte 8, 16, -1
	.byte 0, 2, 0
	.byte 8, 16, 1
	.byte 0, 2, 0
	.byte 8, 16, 1
	.byte 0, 2, 0
	.byte 8, 16, 1
	.byte 0, 16, 0
	.byte 0, 0, 0x7F
	.byte 0, 0, 0
	.globl gTrickBagItemAnim_Frame28
gTrickBagItemAnim_Frame28: @ 0x0856E308
	rodata_anim_frame 28, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame32
gTrickBagItemAnim_Frame32: @ 0x0856E310
	rodata_anim_frame 32, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame20
gTrickBagItemAnim_Frame20: @ 0x0856E318
	rodata_anim_frame 20, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame28Flipped
gTrickBagItemAnim_Frame28Flipped: @ 0x0856E320
	rodata_anim_frame 28, 1, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame16
gTrickBagItemAnim_Frame16: @ 0x0856E328
	rodata_anim_frame 16, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame16Flipped
gTrickBagItemAnim_Frame16Flipped: @ 0x0856E330
	rodata_anim_frame 16, 1, 1
	rodata_anim_end
	.globl gTrickBagItemAnim_Frame28_2
gTrickBagItemAnim_Frame28_2: @ 0x0856E338
	rodata_anim_frame 28, 1
	rodata_anim_end
	.globl gTrickBagItemAnims
gTrickBagItemAnims: @ 0x0856E340
	semantic_anim_table_entry gTrickBagItemAnim_Frame28
	semantic_anim_table_entry gTrickBagItemAnim_Frame32
	semantic_anim_table_entry gTrickBagItemAnim_Frame20
	semantic_anim_table_entry gTrickBagItemAnim_Frame28Flipped
	semantic_anim_table_entry gTrickBagItemAnim_Frame16
	semantic_anim_table_entry gTrickBagItemAnim_Frame16Flipped
	semantic_anim_table_entry gTrickBagItemAnim_Frame28_2
	.globl gTrickBagItemSpriteTemplate
gTrickBagItemSpriteTemplate: @ 0x0856E35C
	rodata_sprite_template 0x274F, 0x274F, gOamData_AffineOff_ObjNormal_16x16, gTrickBagItemAnims, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.globl gAromatherapyFlowerAffineAnim
gAromatherapyFlowerAffineAnim: @ 0x0856E374
	semantic_affine_animcmd_frame 0x100, 0x100, 0, 0
	semantic_affine_animcmd_frame 0, 0, 4, 1
	semantic_affine_animcmd_jump 1
	.globl gAromatherapyFlowerAffineAnims
gAromatherapyFlowerAffineAnims: @ 0x0856E38C
	semantic_affine_anim_table_entry gAromatherapyFlowerAffineAnim
	.globl gAromatherapySmallFlowerSpriteTemplate
gAromatherapySmallFlowerSpriteTemplate: @ 0x0856E390
	rodata_sprite_template 0x27AF, 0x27AF, gOamData_AffineOff_ObjNormal_8x8, gPetalDanceSmallFlowerAnims, 0, gDummySpriteAffineAnimTable, sub_08100E90
	.globl gAromatherapyBigFlowerSpriteTemplate
gAromatherapyBigFlowerSpriteTemplate: @ 0x0856E3A8
	rodata_sprite_template 0x27AF, 0x27AF, gOamData_AffineNormal_ObjNormal_16x16, gPetalDanceBigFlowerAnims, 0, gAromatherapyFlowerAffineAnims, sub_08100E90
	.globl gSilverWindParticleAffineAnim_Small
gSilverWindParticleAffineAnim_Small: @ 0x0856E3C0
	semantic_affine_animcmd_frame 0x100, 0x100, 0, 0
	semantic_affine_animcmd_frame 0, 0, 0xF6, 1
	semantic_affine_animcmd_jump 1
	.globl gSilverWindParticleAffineAnim_Medium
gSilverWindParticleAffineAnim_Medium: @ 0x0856E3D8
	semantic_affine_animcmd_frame 0xC0, 0xC0, 0, 0
	semantic_affine_animcmd_frame 0, 0, 0xF4, 1
	semantic_affine_animcmd_jump 1
	.globl gSilverWindParticleAffineAnim_Large
gSilverWindParticleAffineAnim_Large: @ 0x0856E3F0
	semantic_affine_animcmd_frame 0x8F, 0x8F, 0, 0
	semantic_affine_animcmd_frame 0, 0, 0xF1, 1
	semantic_affine_animcmd_jump 1
	.globl gSilverWindParticleAffineAnims_Small
gSilverWindParticleAffineAnims_Small: @ 0x0856E408
	semantic_affine_anim_table_entry gSilverWindParticleAffineAnim_Small
	.globl gSilverWindParticleAffineAnims_Medium
gSilverWindParticleAffineAnims_Medium: @ 0x0856E40C
	semantic_affine_anim_table_entry gSilverWindParticleAffineAnim_Medium
	.globl gSilverWindParticleAffineAnims_Large
gSilverWindParticleAffineAnims_Large: @ 0x0856E410
	semantic_affine_anim_table_entry gSilverWindParticleAffineAnim_Large
	.globl gSilverWindParticleSpriteTemplate_Small
gSilverWindParticleSpriteTemplate_Small: @ 0x0856E414
	rodata_sprite_template 0x281F, 0x281F, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gSilverWindParticleAffineAnims_Small, sub_08100E90
	.globl gSilverWindParticleSpriteTemplate_Medium
gSilverWindParticleSpriteTemplate_Medium: @ 0x0856E42C
	rodata_sprite_template 0x281F, 0x281F, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gSilverWindParticleAffineAnims_Medium, sub_08100E90
	.globl gSilverWindParticleSpriteTemplate_Large
gSilverWindParticleSpriteTemplate_Large: @ 0x0856E444
	rodata_sprite_template 0x281F, 0x281F, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gSilverWindParticleAffineAnims_Large, sub_08100E90
	.globl gMagicalLeafBlendColors
gMagicalLeafBlendColors: @ 0x0856E45C
	.2byte 0x001F, 0x027F, 0x03FF, 0x03E0, 0x7DC5, 0x7D56, 0x7EB6
	.2byte 0
	.globl gNeedleArmSpikeSpriteTemplate
gNeedleArmSpikeSpriteTemplate: @ 0x0856E46C
	rodata_sprite_template 0x281A, 0x281A, gOamData_AffineNormal_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081010E8
	.globl gSlamVineWhipAnim_Normal
gSlamVineWhipAnim_Normal: @ 0x0856E484
	rodata_anim_frame 64, 3
	rodata_anim_frame 80, 3
	rodata_anim_frame 96, 3
	rodata_anim_frame 112, 6
	rodata_anim_end
	.globl gSlamVineWhipAnim_Flipped
gSlamVineWhipAnim_Flipped: @ 0x0856E498
	rodata_anim_frame 64, 3, 1
	rodata_anim_frame 80, 3, 1
	rodata_anim_frame 96, 3, 1
	rodata_anim_frame 112, 6, 1
	rodata_anim_end
	.globl gSlamVineWhipAnims
gSlamVineWhipAnims: @ 0x0856E4AC
	semantic_anim_table_entry gSlamVineWhipAnim_Normal
	semantic_anim_table_entry gSlamVineWhipAnim_Flipped
	.globl gSlamImpactSpriteTemplate
gSlamImpactSpriteTemplate: @ 0x0856E4B4
	rodata_sprite_template 0x2748, 0x2748, gOamData_AffineOff_ObjNormal_32x32, gSlamVineWhipAnims, 0, gDummySpriteAffineAnimTable, sub_081012A0
	.globl gVineWhipImpactSpriteTemplate
gVineWhipImpactSpriteTemplate: @ 0x0856E4CC
	rodata_sprite_template 0x282F, 0x282F, gOamData_AffineOff_ObjNormal_32x32, gSlamVineWhipAnims, 0, gDummySpriteAffineAnimTable, sub_081012A0
	.globl sAnim_SlidingHit
sAnim_SlidingHit: @ 0x0856E4E4
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 48, 4
	rodata_anim_frame 64, 5
	rodata_anim_end
	.globl sAnims_SlidingHit
sAnims_SlidingHit: @ 0x0856E4FC
	semantic_anim_table_entry sAnim_SlidingHit
	.globl sSlidingHit1SpriteTemplate
sSlidingHit1SpriteTemplate: @ 0x0856E500
	rodata_sprite_template 0x2725, 0x2725, gOamData_AffineOff_ObjNormal_32x32, sAnims_SlidingHit, 0, gDummySpriteAffineAnimTable, sub_08101248
	.globl sSlidingHit2SpriteTemplate
sSlidingHit2SpriteTemplate: @ 0x0856E518
	rodata_sprite_template 0x2726, 0x2726, gOamData_AffineOff_ObjNormal_32x32, sAnims_SlidingHit, 0, gDummySpriteAffineAnimTable, sub_08101248
	.globl gBattleAnimEffects1AffineAnim_Rot00
gBattleAnimEffects1AffineAnim_Rot00: @ 0x0856E530
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x00, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_Rot20
gBattleAnimEffects1AffineAnim_Rot20: @ 0x0856E540
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x20, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_Rot40
gBattleAnimEffects1AffineAnim_Rot40: @ 0x0856E550
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x40, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_Rot60
gBattleAnimEffects1AffineAnim_Rot60: @ 0x0856E560
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x60, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_Rot80
gBattleAnimEffects1AffineAnim_Rot80: @ 0x0856E570
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0x80, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_RotA0
gBattleAnimEffects1AffineAnim_RotA0: @ 0x0856E580
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xA0, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_RotC0
gBattleAnimEffects1AffineAnim_RotC0: @ 0x0856E590
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xC0, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnim_RotE0
gBattleAnimEffects1AffineAnim_RotE0: @ 0x0856E5A0
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0xE0, 0x00
	rodata_affine_anim_end
	.globl gBattleAnimEffects1AffineAnims_RotationSet
gBattleAnimEffects1AffineAnims_RotationSet: @ 0x0856E5B0
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot00
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot20
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot40
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot60
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_Rot80
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_RotA0
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_RotC0
	semantic_affine_anim_table_entry gBattleAnimEffects1AffineAnim_RotE0
	.globl sFlickeringPunchSpriteTemplate
sFlickeringPunchSpriteTemplate: @ 0x0856E5D0
	rodata_sprite_template 0x279F, 0x279F, gOamData_AffineNormal_ObjNormal_32x32, gDummySpriteAnimTable, 0, gBattleAnimEffects1AffineAnims_RotationSet, sub_081012E4
	.globl gCuttingSliceAnim
gCuttingSliceAnim: @ 0x0856E5E8
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 5
	rodata_anim_frame 48, 5
	rodata_anim_end
	.globl gCuttingSliceAnims
gCuttingSliceAnims: @ 0x0856E5FC
	semantic_anim_table_entry gCuttingSliceAnim
	.globl gCuttingSliceSpriteTemplate
gCuttingSliceSpriteTemplate: @ 0x0856E600
	rodata_sprite_template 0x279A, 0x279A, gOamData_AffineOff_ObjBlend_32x32, gCuttingSliceAnims, 0, gDummySpriteAffineAnimTable, AnimCuttingSlice
	.globl gAirCutterSliceSpriteTemplate
gAirCutterSliceSpriteTemplate: @ 0x0856E618
	rodata_sprite_template 0x279A, 0x279A, gOamData_AffineOff_ObjBlend_32x32, gCuttingSliceAnims, 0, gDummySpriteAffineAnimTable, sub_081013D8
	.globl gMusicNoteAnim_Frame0
gMusicNoteAnim_Frame0: @ 0x0856E630
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame4
gMusicNoteAnim_Frame4: @ 0x0856E638
	rodata_anim_frame 4, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame8
gMusicNoteAnim_Frame8: @ 0x0856E640
	rodata_anim_frame 8, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame12
gMusicNoteAnim_Frame12: @ 0x0856E648
	rodata_anim_frame 12, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame16
gMusicNoteAnim_Frame16: @ 0x0856E650
	rodata_anim_frame 16, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame20
gMusicNoteAnim_Frame20: @ 0x0856E658
	rodata_anim_frame 20, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame0Flipped
gMusicNoteAnim_Frame0Flipped: @ 0x0856E660
	rodata_anim_frame 0, 1, 0, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame4Flipped
gMusicNoteAnim_Frame4Flipped: @ 0x0856E668
	rodata_anim_frame 4, 1, 0, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame8Flipped
gMusicNoteAnim_Frame8Flipped: @ 0x0856E670
	rodata_anim_frame 8, 1, 0, 1
	rodata_anim_end
	.globl gMusicNoteAnim_Frame12Flipped
gMusicNoteAnim_Frame12Flipped: @ 0x0856E678
	rodata_anim_frame 12, 1, 0, 1
	rodata_anim_end
	.globl gMusicNoteAnims
gMusicNoteAnims: @ 0x0856E680
	semantic_anim_table_entry gMusicNoteAnim_Frame0
	semantic_anim_table_entry gMusicNoteAnim_Frame4
	semantic_anim_table_entry gMusicNoteAnim_Frame8
	semantic_anim_table_entry gMusicNoteAnim_Frame12
	semantic_anim_table_entry gMusicNoteAnim_Frame16
	semantic_anim_table_entry gMusicNoteAnim_Frame20
	semantic_anim_table_entry gMusicNoteAnim_Frame0Flipped
	semantic_anim_table_entry gMusicNoteAnim_Frame4Flipped
	semantic_anim_table_entry gMusicNoteAnim_Frame8Flipped
	semantic_anim_table_entry gMusicNoteAnim_Frame12Flipped
	.globl gMusicNoteSpriteTemplate
gMusicNoteSpriteTemplate: @ 0x0856E6A8
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineOff_ObjNormal_16x16, gMusicNoteAnims, 0, gDummySpriteAffineAnimTable, sub_0810166C
	.globl gProtectShieldSpriteTemplate
gProtectShieldSpriteTemplate: @ 0x0856E6C0
	rodata_sprite_template 0x2828, 0x2828, gOamData_AffineOff_ObjBlend_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08101740
	.globl gMilkDrinkDropletAffineAnim_Normal
gMilkDrinkDropletAffineAnim_Normal: @ 0x0856E6D8
	semantic_affine_animcmd_frame 0x0100, 0x0100, 0, 0
	rodata_affine_anim_end
	.globl gMilkDrinkDropletAffineAnim_Wobble
gMilkDrinkDropletAffineAnim_Wobble: @ 0x0856E6E8
	semantic_affine_animcmd_frame 0, 0, 2, 12
	semantic_affine_animcmd_frame 0, 0, 0, 6
	semantic_affine_animcmd_frame 0, 0, 0xFE, 24
	semantic_affine_animcmd_frame 0, 0, 0, 6
	semantic_affine_animcmd_frame 0, 0, 2, 12
	semantic_affine_animcmd_jump 0
	.globl gMilkDrinkDropletAffineAnims
gMilkDrinkDropletAffineAnims: @ 0x0856E718
	semantic_affine_anim_table_entry gMilkDrinkDropletAffineAnim_Normal
	semantic_affine_anim_table_entry gMilkDrinkDropletAffineAnim_Wobble
	.globl gMilkDrinkDropletSpriteTemplate
gMilkDrinkDropletSpriteTemplate: @ 0x0856E720
	rodata_sprite_template 0x2773, 0x2773, gOamData_AffineNormal_ObjBlend_32x32, gDummySpriteAnimTable, 0, gMilkDrinkDropletAffineAnims, sub_0810191C
	.globl gHealingSparkleAnim
gHealingSparkleAnim: @ 0x0856E738
	rodata_anim_frame 0, 7
	rodata_anim_frame 16, 7
	rodata_anim_frame 32, 7
	rodata_anim_frame 48, 7
	rodata_anim_frame 64, 7
	rodata_anim_frame 80, 7
	rodata_anim_frame 96, 7
	rodata_anim_frame 112, 7
	rodata_anim_jump 0
	.globl gHealingSparkleAnims
gHealingSparkleAnims: @ 0x0856E75C
	semantic_anim_table_entry gHealingSparkleAnim
	.globl gHealingSparkleSpriteTemplate
gHealingSparkleSpriteTemplate: @ 0x0856E760
	rodata_sprite_template 0x2741, 0x2741, gOamData_AffineOff_ObjNormal_32x32, gHealingSparkleAnims, 0, gDummySpriteAffineAnimTable, sub_08101B5C
	.globl gAromatherapySparkleSpriteTemplate
gAromatherapySparkleSpriteTemplate: @ 0x0856E778
	rodata_sprite_template 0x2741, 0x2741, gOamData_AffineOff_ObjNormal_32x32, gHealingSparkleAnims, 0, gDummySpriteAffineAnimTable, sub_08101BAC
	.globl sAnim_BubbleBurst
sAnim_BubbleBurst: @ 0x0856E790
	rodata_anim_frame 0, 10
	rodata_anim_frame 4, 10
	rodata_anim_frame 8, 10
	rodata_anim_frame 12, 10
	rodata_anim_frame 16, 26
	rodata_anim_frame 16, 5
	rodata_anim_frame 20, 5
	rodata_anim_frame 24, 15
	rodata_anim_end
	.globl sAnim_BubbleBurst_Flipped
sAnim_BubbleBurst_Flipped: @ 0x0856E7B4
	rodata_anim_frame 0, 10, 1
	rodata_anim_frame 4, 10, 1
	rodata_anim_frame 8, 10, 1
	rodata_anim_frame 12, 10, 1
	rodata_anim_frame 16, 26, 1
	rodata_anim_frame 16, 5, 1
	rodata_anim_frame 20, 5, 1
	rodata_anim_frame 24, 15, 1
	rodata_anim_end
	.globl sAnims_BubbleBurst
sAnims_BubbleBurst: @ 0x0856E7D8
	semantic_anim_table_entry sAnim_BubbleBurst
	semantic_anim_table_entry sAnim_BubbleBurst_Flipped
	.globl sBubbleBurstSpriteTemplate
sBubbleBurstSpriteTemplate: @ 0x0856E7E0
	rodata_sprite_template 0x2730, 0x2730, gOamData_AffineOff_ObjNormal_16x16, sAnims_BubbleBurst, 0, gDummySpriteAffineAnimTable, sub_08101C90
	.globl gSleepZAnim
gSleepZAnim: @ 0x0856E7F8
	rodata_anim_frame 0, 40
	rodata_anim_end
	.globl gSleepZAnims
gSleepZAnims: @ 0x0856E800
	semantic_anim_table_entry gSleepZAnim
	.globl gSleepZAffineAnim_Right
gSleepZAffineAnim_Right: @ 0x0856E804
	semantic_affine_animcmd_frame 20, 20, 0xE2, 0
	semantic_affine_animcmd_frame 8, 8, 1, 24
	rodata_affine_anim_end
	semantic_affine_animcmd_loop 0
	semantic_affine_animcmd_frame 0, 0, 1, 24
	semantic_affine_animcmd_loop 10
	.globl gSleepZAffineAnim_Left
gSleepZAffineAnim_Left: @ 0x0856E834
	semantic_affine_animcmd_frame 20, 20, 0x1E, 0
	semantic_affine_animcmd_frame 8, 8, 0xFF, 24
	rodata_affine_anim_end
	semantic_affine_animcmd_loop 0
	semantic_affine_animcmd_frame 0, 0, 0xFF, 24
	semantic_affine_animcmd_loop 10
	.globl gSleepZAffineAnims
gSleepZAffineAnims: @ 0x0856E864
	semantic_affine_anim_table_entry gSleepZAffineAnim_Right
	semantic_affine_anim_table_entry gSleepZAffineAnim_Left
	.globl gSleepZSpriteTemplate
gSleepZSpriteTemplate: @ 0x0856E86C
	rodata_sprite_template 0x27F4, 0x27F4, gOamData_AffineNormal_ObjNormal_32x32, gSleepZAnims, 0, gSleepZAffineAnims, sub_08101D44
	.globl gLockOnTargetSpriteTemplate
gLockOnTargetSpriteTemplate: @ 0x0856E884
	rodata_sprite_template 0x271E, 0x271E, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08101DFC
	.globl gLockOnRingSpriteTemplate
gLockOnRingSpriteTemplate: @ 0x0856E89C
	rodata_sprite_template 0x271E, 0x271E, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081020E8
	.globl gLockOnRingOffsets
gLockOnRingOffsets: @ 0x0856E8B4
	.byte 64, 64
	.byte 0, -64
	.byte -64, 64
	.byte 32, -32
	.globl gPhysicalStrikeMovementSpriteTemplate
gPhysicalStrikeMovementSpriteTemplate: @ 0x0856E8BC
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08102190
	.globl sTipMonSpriteTemplate
sTipMonSpriteTemplate: @ 0x0856E8D4
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_081023E0
	.globl gSlashAnim_Sweep
gSlashAnim_Sweep: @ 0x0856E8EC
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 48, 4
	rodata_anim_end
	.globl gSlashAnim_LastFrame
gSlashAnim_LastFrame: @ 0x0856E900
	rodata_anim_frame 48, 4
	rodata_anim_end
	.globl gSlashAnims
gSlashAnims: @ 0x0856E908
	semantic_anim_table_entry gSlashAnim_Sweep
	semantic_anim_table_entry gSlashAnim_LastFrame
	.globl gSlashSpriteTemplate
gSlashSpriteTemplate: @ 0x0856E910
	rodata_sprite_template 0x27C7, 0x27C7, gOamData_AffineOff_ObjNormal_32x32, gSlashAnims, 0, gDummySpriteAffineAnimTable, sub_08102790
	.globl gFalseSwipeSlashSpriteTemplate
gFalseSwipeSlashSpriteTemplate: @ 0x0856E928
	rodata_sprite_template 0x282E, 0x282E, gOamData_AffineOff_ObjNormal_32x32, gSlashAnims, 0, gDummySpriteAffineAnimTable, sub_081027F8
	.globl gFalseSwipeSliceSpriteTemplate
gFalseSwipeSliceSpriteTemplate: @ 0x0856E940
	rodata_sprite_template 0x282E, 0x282E, gOamData_AffineOff_ObjNormal_32x32, gSlashAnims, 0, gDummySpriteAffineAnimTable, sub_08102840
	.globl gEndureFocusEnergyAnim
gEndureFocusEnergyAnim: @ 0x0856E958
	rodata_anim_frame 0, 4
	rodata_anim_frame 8, 12
	rodata_anim_frame 16, 4
	rodata_anim_frame 24, 4
	rodata_anim_end
	.globl gEndureFocusEnergyAnims
gEndureFocusEnergyAnims: @ 0x0856E96C
	semantic_anim_table_entry gEndureFocusEnergyAnim
	.globl gEndureFocusEnergySpriteTemplate
gEndureFocusEnergySpriteTemplate: @ 0x0856E970
	rodata_sprite_template 0x27C8, 0x27C8, gOamData_AffineOff_ObjNormal_16x32, gEndureFocusEnergyAnims, 0, gDummySpriteAffineAnimTable, sub_08102928
	.globl gSharpenAnim
gSharpenAnim: @ 0x0856E988
	rodata_anim_frame 0, 18
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 18
	rodata_anim_frame 0, 6
	rodata_anim_frame 16, 6
	rodata_anim_frame 32, 18
	rodata_anim_frame 16, 6
	rodata_anim_frame 32, 6
	rodata_anim_frame 48, 18
	rodata_anim_frame 32, 6
	rodata_anim_frame 48, 6
	rodata_anim_frame 64, 18
	rodata_anim_frame 48, 6
	rodata_anim_frame 64, 54
	rodata_anim_end
	.globl gSharpenAnims
gSharpenAnims: @ 0x0856E9C4
	semantic_anim_table_entry gSharpenAnim
	.globl gSharpenSpriteTemplate
gSharpenSpriteTemplate: @ 0x0856E9C8
	rodata_sprite_template 0x27C9, 0x27C9, gOamData_AffineOff_ObjNormal_32x32, gSharpenAnims, 0, gDummySpriteAffineAnimTable, sub_081029CC
	.globl gOctazookaSmokeSpriteTemplate
gOctazookaSmokeSpriteTemplate: @ 0x0856E9E0
	rodata_sprite_template 0x2721, 0x2721, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, TranslateAnimSpriteToTargetMonLocation
	.globl gOctazookaInkAnim
gOctazookaInkAnim: @ 0x0856E9F8
	rodata_anim_frame 0, 3
	rodata_anim_frame 16, 3
	rodata_anim_frame 32, 3
	rodata_anim_frame 48, 3
	rodata_anim_frame 64, 3
	rodata_anim_end
	.globl gOctazookaInkAnims
gOctazookaInkAnims: @ 0x0856EA10
	semantic_anim_table_entry gOctazookaInkAnim
	.globl gOctazookaInkSpriteTemplate
gOctazookaInkSpriteTemplate: @ 0x0856EA14
	rodata_sprite_template 0x272E, 0x272E, gOamData_AffineOff_ObjNormal_32x32, gOctazookaInkAnims, 0, gDummySpriteAffineAnimTable, AnimSpriteOnMonPos
	.globl gConversionAnim
gConversionAnim: @ 0x0856EA2C
	rodata_anim_frame 3, 5
	rodata_anim_frame 2, 5
	rodata_anim_frame 1, 5
	rodata_anim_frame 0, 5
	rodata_anim_end
	.globl gConversionAnims
gConversionAnims: @ 0x0856EA40
	semantic_anim_table_entry gConversionAnim
	.globl gConversionAffineAnim
gConversionAffineAnim: @ 0x0856EA44
	rodata_affine_anim_frame 0x0200, 0x0200, 0, 0
	rodata_affine_anim_end
	.globl gConversionAffineAnims
gConversionAffineAnims: @ 0x0856EA54
	semantic_affine_anim_table_entry gConversionAffineAnim
	.globl gConversionSpriteTemplate
gConversionSpriteTemplate: @ 0x0856EA58
	rodata_sprite_template 0x2722, 0x2722, gOamData_AffineDouble_ObjBlend_8x8, gConversionAnims, 0, gConversionAffineAnims, sub_08102AB8
	.globl gConversion2Anim
gConversion2Anim: @ 0x0856EA70
	rodata_anim_frame 0, 5
	rodata_anim_frame 1, 5
	rodata_anim_frame 2, 5
	rodata_anim_frame 3, 5
	rodata_anim_end
	.globl gConversion2Anims
gConversion2Anims: @ 0x0856EA84
	semantic_anim_table_entry gConversion2Anim
	.globl gConversion2SpriteTemplate
gConversion2SpriteTemplate: @ 0x0856EA88
	rodata_sprite_template 0x2722, 0x2722, gOamData_AffineDouble_ObjBlend_8x8, gConversion2Anims, 0, gConversionAffineAnims, sub_08102B9C
	@ pret/pokeemerald-jp direct xref for 0x0856EAA0: battle_anim_effects_1.s: sub_08102EF8
	.globl gBattleAnimSpriteTemplate_MoonlightMoon
gBattleAnimSpriteTemplate_MoonlightMoon: @ 0x0856EAA0
	rodata_sprite_template 0x27D2, 0x27D2, gOamData_AffineOff_ObjBlend_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08102D30
	.globl gMoonlightSparkleAnim
gMoonlightSparkleAnim: @ 0x0856EAB8
	rodata_anim_frame 0, 8
	rodata_anim_frame 4, 8
	rodata_anim_frame 8, 8
	rodata_anim_frame 12, 8
	rodata_anim_jump 0
	.globl gMoonlightSparkleAnims
gMoonlightSparkleAnims: @ 0x0856EACC
	semantic_anim_table_entry gMoonlightSparkleAnim
	@ pret/pokeemerald-jp direct xref for 0x0856EAD0: battle_anim_effects_1.s: sub_08102EF8
	.globl gBattleAnimSpriteTemplate_MoonlightSparkle
gBattleAnimSpriteTemplate_MoonlightSparkle: @ 0x0856EAD0
	rodata_sprite_template 0x27D3, 0x27D3, gOamData_AffineOff_ObjNormal_16x16, gMoonlightSparkleAnims, 0, gDummySpriteAffineAnimTable, sub_08102D90
	.globl gHealingSparkleAnim_Tag272F
gHealingSparkleAnim_Tag272F: @ 0x0856EAE8
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 32, 2
	rodata_anim_frame 48, 3
	rodata_anim_frame 64, 5
	rodata_anim_frame 80, 3
	rodata_anim_frame 96, 2
	rodata_anim_frame 0, 2
	rodata_anim_end
	.globl gHealingSparkleAnims_Tag272F
gHealingSparkleAnims_Tag272F: @ 0x0856EB0C
	semantic_anim_table_entry gHealingSparkleAnim_Tag272F
	.globl gHealingBlueStarSpriteTemplate
gHealingBlueStarSpriteTemplate: @ 0x0856EB10
	rodata_sprite_template 0x272F, 0x272F, gOamData_AffineOff_ObjNormal_32x32, gHealingSparkleAnims_Tag272F, 0, gDummySpriteAffineAnimTable, AnimSpriteOnMonPos
	.globl gHornHitSpriteTemplate
gHornHitSpriteTemplate: @ 0x0856EB28
	rodata_sprite_template 0x2724, 0x2724, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103094
	.globl gSuperFangAnim
gSuperFangAnim: @ 0x0856EB40
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 32, 2
	rodata_anim_frame 48, 2
	rodata_anim_end
	.globl gSuperFangAnims
gSuperFangAnims: @ 0x0856EB54
	semantic_anim_table_entry gSuperFangAnim
	.globl gSuperFangSpriteTemplate
gSuperFangSpriteTemplate: @ 0x0856EB58
	rodata_sprite_template 0x27D0, 0x27D0, gOamData_AffineOff_ObjNormal_32x32, gSuperFangAnims, 0, gDummySpriteAffineAnimTable, sub_0810341C
	.globl gSingMusicNoteAnim_0
gSingMusicNoteAnim_0: @ 0x0856EB70
	rodata_anim_frame 0, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_1
gSingMusicNoteAnim_1: @ 0x0856EB78
	rodata_anim_frame 4, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_2
gSingMusicNoteAnim_2: @ 0x0856EB80
	rodata_anim_frame 8, 41
	rodata_anim_end
	.globl gSingMusicNoteAnim_3
gSingMusicNoteAnim_3: @ 0x0856EB88
	rodata_anim_frame 12, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_4
gSingMusicNoteAnim_4: @ 0x0856EB90
	rodata_anim_frame 16, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_5
gSingMusicNoteAnim_5: @ 0x0856EB98
	rodata_anim_frame 20, 10
	rodata_anim_end
	.globl gSingMusicNoteAnim_6
gSingMusicNoteAnim_6: @ 0x0856EBA0
	rodata_anim_frame 0, 10, 0, 1
	rodata_anim_end
	.globl gSingMusicNoteAnim_7
gSingMusicNoteAnim_7: @ 0x0856EBA8
	rodata_anim_frame 4, 10, 0, 1
	rodata_anim_end
	.globl gSingMusicNoteAnims
gSingMusicNoteAnims: @ 0x0856EBB0
	semantic_anim_table_entry gSingMusicNoteAnim_0
	semantic_anim_table_entry gSingMusicNoteAnim_1
	semantic_anim_table_entry gSingMusicNoteAnim_2
	semantic_anim_table_entry gSingMusicNoteAnim_3
	semantic_anim_table_entry gSingMusicNoteAnim_4
	semantic_anim_table_entry gSingMusicNoteAnim_5
	semantic_anim_table_entry gSingMusicNoteAnim_6
	semantic_anim_table_entry gSingMusicNoteAnim_7
	.globl gSingMusicNoteAffineAnim
gSingMusicNoteAffineAnim: @ 0x0856EBD0
	semantic_affine_animcmd_frame 12, 12, 0, 16
	semantic_affine_animcmd_frame -12, -12, 0, 16
	semantic_affine_animcmd_jump 0
	.globl gSingMusicNoteAffineAnims
gSingMusicNoteAffineAnims: @ 0x0856EBE8
	semantic_affine_anim_table_entry gSingMusicNoteAffineAnim
	.globl gSingMusicNoteSpriteTemplate
gSingMusicNoteSpriteTemplate: @ 0x0856EBEC
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineDouble_ObjNormal_16x16, gSingMusicNoteAnims, 0, gSingMusicNoteAffineAnims, sub_08103524
	@ pret/pokeemerald-jp direct xref for 0x0856EC04: battle_anim_effects_1.s: sub_08103438, sub_081034F0, sub_08103524, sub_08103634, sub_08103878
	.globl gMusicNotePaletteVariants
gMusicNotePaletteVariants: @ 0x0856EC04
	@ Four palette variants, six BGR555 colors per variant.
	@ Stored as explicit 5-bit RGB components rather than opaque u16 colors.
	.macro jp_music_note_color red5, green5, blue5, alpha=0
		.2byte ((\red5) & 31) | (((\green5) & 31) << 5) | (((\blue5) & 31) << 10) | (((\alpha) & 1) << 15)
	.endm

	@ palette variant 0
	jp_music_note_color 24, 26, 9, 0
	jp_music_note_color 31, 31, 31, 0
	jp_music_note_color 31, 26, 28, 0
	jp_music_note_color 31, 22, 26, 0
	jp_music_note_color 31, 17, 24, 0
	jp_music_note_color 31, 13, 22, 0
	@ palette variant 1
	jp_music_note_color 17, 27, 9, 0
	jp_music_note_color 31, 31, 31, 0
	jp_music_note_color 25, 31, 26, 0
	jp_music_note_color 20, 31, 21, 0
	jp_music_note_color 15, 31, 16, 0
	jp_music_note_color 10, 31, 12, 0
	@ palette variant 2
	jp_music_note_color 9, 30, 9, 0
	jp_music_note_color 31, 31, 31, 0
	jp_music_note_color 31, 31, 24, 0
	jp_music_note_color 31, 31, 17, 0
	jp_music_note_color 31, 31, 10, 0
	jp_music_note_color 31, 31, 3, 0
	@ palette variant 3
	jp_music_note_color 31, 29, 9, 0
	jp_music_note_color 31, 31, 31, 0
	jp_music_note_color 26, 28, 31, 0
	jp_music_note_color 21, 26, 31, 0
	jp_music_note_color 16, 24, 31, 0
	jp_music_note_color 12, 22, 31, 0
	.globl gTeeterDanceMusicNoteSpriteTemplate
gTeeterDanceMusicNoteSpriteTemplate: @ 0x0856EC34
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineDouble_ObjNormal_16x16, gSingMusicNoteAnims, 0, gSingMusicNoteAffineAnims, sub_08103700
	.globl gBellyDrumImpactSpriteTemplate
gBellyDrumImpactSpriteTemplate: @ 0x0856EC4C
	rodata_sprite_template 0x27D1, 0x27D1, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103808
	.globl gBellyDrumMusicNoteAffineAnim
gBellyDrumMusicNoteAffineAnim: @ 0x0856EC64
	semantic_affine_animcmd_frame 160, 160, 0, 0
	semantic_affine_animcmd_frame 4, 4, 0, 1
	semantic_affine_animcmd_jump 1
	.globl gBellyDrumMusicNoteAffineAnims
gBellyDrumMusicNoteAffineAnims: @ 0x0856EC7C
	semantic_affine_anim_table_entry gBellyDrumMusicNoteAffineAnim
	.globl gBellyDrumMusicNoteSpriteTemplate
gBellyDrumMusicNoteSpriteTemplate: @ 0x0856EC80
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineDouble_ObjNormal_16x16, gSingMusicNoteAnims, 0, gBellyDrumMusicNoteAffineAnims, sub_08103878
	.globl gFingerWagAnim_Left
gFingerWagAnim_Left: @ 0x0856EC98
	rodata_anim_frame 0, 2, 1
	rodata_anim_frame 16, 2, 1
	rodata_anim_frame 32, 2, 1
	rodata_anim_frame 48, 2, 1
	rodata_anim_end
	.globl gFingerWagAnim_Right
gFingerWagAnim_Right: @ 0x0856ECAC
	rodata_anim_frame 48, 2, 1
	rodata_anim_frame 32, 2, 1
	rodata_anim_frame 16, 2, 1
	rodata_anim_frame 0, 2, 1
	rodata_anim_end
	.globl gFingerWagAnim_LeftNoFlip
gFingerWagAnim_LeftNoFlip: @ 0x0856ECC0
	rodata_anim_frame 0, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 32, 2
	rodata_anim_frame 48, 2
	rodata_anim_end
	.globl gFingerWagAnim_RightNoFlip
gFingerWagAnim_RightNoFlip: @ 0x0856ECD4
	rodata_anim_frame 48, 2
	rodata_anim_frame 32, 2
	rodata_anim_frame 16, 2
	rodata_anim_frame 0, 2
	rodata_anim_end
	.globl gFingerWagAnims
gFingerWagAnims: @ 0x0856ECE8
	semantic_anim_table_entry gFingerWagAnim_Left
	semantic_anim_table_entry gFingerWagAnim_LeftNoFlip
	semantic_anim_table_entry gFingerWagAnim_Right
	semantic_anim_table_entry gFingerWagAnim_RightNoFlip
