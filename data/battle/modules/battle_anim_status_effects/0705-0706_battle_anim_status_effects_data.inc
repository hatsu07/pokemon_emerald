	@ Priority A: battle status-effect structs and title-screen assets.
	@ Priority A: battle status-effect structs and title-screen assets.
	@ Priority A external targets identified from battle_anim_status_effects consumers.
	@ Local aliases emit no bytes and avoid depending on C static symbol visibility.
.set gPriorityABattleAnimFrozenIceCubeOam, gOamData_AffineOff_ObjBlend_64x64 @ gOamData_AffineOff_ObjBlend_64x64
	.set gPriorityABattleAnimFlashingCircleImpactOam, gOamData_AffineOff_ObjNormal_8x8 @ gOamData_AffineOff_ObjNormal_8x8
	.set gPriorityABattleAnimDummySpriteAnimTable, 0x082BF304 @ gDummySpriteAnimTable
	.set gPriorityABattleAnimDummySpriteAffineAnimTable, 0x082BF310 @ gDummySpriteAffineAnimTable
	.set gPriorityABattleAnimSpriteCallbackDummy, 0x08007141 @ SpriteCallbackDummy (Thumb)
	.set gPriorityABattleAnimFlashingCircleImpactCallback, 0x080A970D @ AnimFlashingCircleImpact (Thumb)
	.globl gBattleAnimFrozenIceCubeSubspriteTable
gBattleAnimFrozenIceCubeSubspriteTable: @ 0x0851769C
	rodata_subsprite_table 4, sFrozenIceCubeSubsprites
	.globl gBattleAnimFrozenIceCubeSpriteTemplate
gBattleAnimFrozenIceCubeSpriteTemplate: @ 0x085176A4
	rodata_sprite_template 0x271A, 0x271A, gPriorityABattleAnimFrozenIceCubeOam, gPriorityABattleAnimDummySpriteAnimTable, 0, gPriorityABattleAnimDummySpriteAffineAnimTable, gPriorityABattleAnimSpriteCallbackDummy
	.globl gBattleAnimFlashingCircleImpactSpriteTemplate
gBattleAnimFlashingCircleImpactSpriteTemplate: @ 0x085176BC
	rodata_sprite_template 0x2798, 0x2798, gPriorityABattleAnimFlashingCircleImpactOam, gPriorityABattleAnimDummySpriteAnimTable, 0, gPriorityABattleAnimDummySpriteAffineAnimTable, gPriorityABattleAnimFlashingCircleImpactCallback
	.globl gTitleScreenPressStart_Pal
