	@ pret/pokeemerald-jp direct xref for 0x0856DCC8: item_use.s: sub_080FDD58, sub_080FE330
	.globl gItemUseFacingDirectionOrder
gItemUseFacingDirectionOrder: @ 0x0856DCC8
	@ analyzed canonical ROM range 0x0856DCC8-0x0856DCCB
	.byte 0x02, 0x04, 0x01, 0x03
	@ pret/pokeemerald-jp direct xref for 0x0856DCCC: item_use.s: sub_080FE874
	.globl gItemUseYesNoCallbacks
gItemUseYesNoCallbacks: @ 0x0856DCCC
	@ analyzed canonical ROM range 0x0856DCCC-0x0856DCD3
	.4byte sub_080FE88C
	.4byte BagMenu_InitListsMenu
	.set gBattleAnimOam_AffineOff_ObjNormal_8x8, gOamData_AffineOff_ObjNormal_8x8

	.set gBattleAnimOam_AffineOff_ObjNormal_16x16, gOamData_AffineOff_ObjNormal_16x16

	.set gBattleAnimOam_AffineOff_ObjNormal_32x32, gOamData_AffineOff_ObjNormal_32x32

	.set gBattleAnimOam_AffineOff_ObjNormal_32x16, gOamData_AffineOff_ObjNormal_32x16

	.set gBattleAnimOam_084FD060, gOamData_AffineOff_ObjNormal_16x32

	.set gBattleAnimOam_084FD078, gOamData_AffineNormal_ObjNormal_16x16

	.set gBattleAnimOam_AffineOff_ObjNormal_8x16, gOamData_AffineOff_ObjNormal_8x16

	.set gBattleAnimOam_AffineOff_ObjNormal_64x64, gOamData_AffineNormal_ObjNormal_32x32

	.set gBattleAnimOam_084FD0A8, gOamData_AffineNormal_ObjNormal_64x32

	.set gBattleAnimOam_084FD0C8, gOamData_AffineNormal_ObjNormal_32x64

	.set gBattleAnimOam_084FD0E0, gOamData_AffineDouble_ObjNormal_32x32

	.set gBattleAnimOam_084FD0E8, gOamData_AffineDouble_ObjNormal_64x64

	.set gBattleAnimOam_084FD120, gOamData_AffineDouble_ObjNormal_16x32

	.set gBattleAnimOam_084FD128, gOamData_AffineDouble_ObjNormal_32x64

	.set gBattleAnimOam_084FD140, gOamData_AffineOff_ObjBlend_32x32

	.set gBattleAnimOam_084FD148, gOamData_AffineOff_ObjBlend_64x64

	.set gBattleAnimOam_084FD160, gOamData_AffineOff_ObjBlend_32x16

	.set gBattleAnimOam_084FD1A0, gOamData_AffineNormal_ObjBlend_32x32

	.set gBattleAnimOam_084FD1A8, gOamData_AffineNormal_ObjBlend_64x64

	.set gBattleAnimOam_084FD1E8, gOamData_AffineNormal_ObjBlend_32x64

	.set gBattleAnimOam_084FD1F0, gOamData_AffineDouble_ObjBlend_8x8

	.set gBattleAnimOam_084FD200, gOamData_AffineDouble_ObjBlend_32x32

	.set gBattleAnimOam_084FD208, gOamData_AffineDouble_ObjBlend_64x64

	.set gBattleAnimOam_084FD220, gOamData_AffineDouble_ObjBlend_32x16

	.set gBattleAnimOam_084FD228, gOamData_AffineDouble_ObjBlend_64x32

	.set gBattleAnimOam_AffineDouble_ObjNormal_8x8, gOamData_AffineDouble_ObjNormal_8x8

	.set gBattleAnimOam_AffineDouble_ObjNormal_16x16, gOamData_AffineDouble_ObjNormal_16x16

	.set gBattleAnimOam_AffineOn_ObjBlend_8x8, gOamData_AffineNormal_ObjBlend_16x16

	.globl gMovePowderParticleAnim
gMovePowderParticleAnim: @ 0x0856DCD4
	@ analyzed canonical ROM range 0x0856DCD4-0x0856DDF3
	rodata_anim_frame 0, 5
	rodata_anim_frame 2, 5
	rodata_anim_frame 4, 5
	rodata_anim_frame 6, 5
	rodata_anim_frame 8, 5
	rodata_anim_frame 10, 5
	rodata_anim_frame 12, 5
	rodata_anim_frame 14, 5
	rodata_anim_jump 0
	.globl gMovePowderParticleAnims
gMovePowderParticleAnims: @ 0x0856DCF8
	semantic_anim_table_entry gMovePowderParticleAnim
	.globl gSleepPowderParticleSpriteTemplate
gSleepPowderParticleSpriteTemplate: @ 0x0856DCFC
	rodata_sprite_template 0x2753, 0x2753, gOamData_AffineOff_ObjNormal_8x16, gMovePowderParticleAnims, 0, gDummySpriteAffineAnimTable, AnimMovePowderParticle
	.globl gStunSporeParticleSpriteTemplate
gStunSporeParticleSpriteTemplate: @ 0x0856DD14
	rodata_sprite_template 0x2754, 0x2754, gOamData_AffineOff_ObjNormal_8x16, gMovePowderParticleAnims, 0, gDummySpriteAffineAnimTable, AnimMovePowderParticle
	.globl gPoisonPowderParticleSpriteTemplate
gPoisonPowderParticleSpriteTemplate: @ 0x0856DD2C
	rodata_sprite_template 0x2751, 0x2751, gOamData_AffineOff_ObjNormal_8x16, gMovePowderParticleAnims, 0, gDummySpriteAffineAnimTable, AnimMovePowderParticle
	.globl gSolarbeamBigOrbAnim_Frame0
gSolarbeamBigOrbAnim_Frame0: @ 0x0856DD44
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame1
gSolarbeamBigOrbAnim_Frame1: @ 0x0856DD4C
	rodata_anim_frame 1, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame2
gSolarbeamBigOrbAnim_Frame2: @ 0x0856DD54
	rodata_anim_frame 2, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame3
gSolarbeamBigOrbAnim_Frame3: @ 0x0856DD5C
	rodata_anim_frame 3, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame4
gSolarbeamBigOrbAnim_Frame4: @ 0x0856DD64
	rodata_anim_frame 4, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame5
gSolarbeamBigOrbAnim_Frame5: @ 0x0856DD6C
	rodata_anim_frame 5, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame6
gSolarbeamBigOrbAnim_Frame6: @ 0x0856DD74
	rodata_anim_frame 6, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame7
gSolarbeamBigOrbAnim_Frame7: @ 0x0856DD7C
	rodata_anim_frame 7, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnim_Frame8
gSolarbeamBigOrbAnim_Frame8: @ 0x0856DD84
	rodata_anim_frame 8, 1
	rodata_anim_end
	.globl gSolarbeamBigOrbAnims
gSolarbeamBigOrbAnims: @ 0x0856DD8C
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame0
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame1
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame2
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame3
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame4
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame5
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame6
	.globl gSolarbeamSmallOrbAnims
gSolarbeamSmallOrbAnims: @ 0x0856DDA8
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame7
	.globl gPowerAbsorptionOrbAnims
gPowerAbsorptionOrbAnims: @ 0x0856DDAC
	semantic_anim_table_entry gSolarbeamBigOrbAnim_Frame8
	.globl gPowerAbsorptionOrbAffineAnim
gPowerAbsorptionOrbAffineAnim: @ 0x0856DDB0
	semantic_affine_animcmd_frame -5, -5, 0x00, 0x01
	semantic_affine_animcmd_jump 0
	.globl gPowerAbsorptionOrbAffineAnims
gPowerAbsorptionOrbAffineAnims: @ 0x0856DDC0
	semantic_affine_anim_table_entry gPowerAbsorptionOrbAffineAnim
	.globl gPowerAbsorptionOrbSpriteTemplate
gPowerAbsorptionOrbSpriteTemplate: @ 0x0856DDC4
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineNormal_ObjBlend_16x16, gPowerAbsorptionOrbAnims, 0, gPowerAbsorptionOrbAffineAnims, AnimPowerAbsorptionOrb
	.globl gSolarbeamBigOrbSpriteTemplate
gSolarbeamBigOrbSpriteTemplate: @ 0x0856DDDC
	rodata_sprite_template 0x27A3, 0x27A3, gOamData_AffineOff_ObjNormal_8x8, gSolarbeamBigOrbAnims, 0, gDummySpriteAffineAnimTable, AnimSolarbeamBigOrb
