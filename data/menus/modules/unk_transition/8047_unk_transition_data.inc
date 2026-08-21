gBattleTransitionFrontierLogoCenter_Gfx: @ 0x085FC03C
	.incbin "build/graphics/priority_b/battle_transitions/frontier_logo_center.4bpp.lz"
	.if (. - gBattleTransitionFrontierLogoCenter_Gfx) != 0x1DC
	.error "frontier logo center gfx exact slot size mismatch"
	.endif

	.globl gBattleTransitionFrontierLogoCenter_Tilemap
gBattleTransitionFrontierLogoCenter_Tilemap: @ 0x085FC218
	.incbin "build/graphics/priority_b/battle_transitions/frontier_logo_center.bin.lz"
	.if (. - gBattleTransitionFrontierLogoCenter_Tilemap) != 0x1AC
	.error "frontier logo center tilemap exact slot size mismatch"
	.endif

	.globl gBattleTransitionFrontierLogoCircles_Gfx
gBattleTransitionFrontierLogoCircles_Gfx: @ 0x085FC3C4
	.incbin "build/graphics/priority_b/battle_transitions/frontier_logo_circles.4bpp.lz"
	.if (. - gBattleTransitionFrontierLogoCircles_Gfx) != 0x460
	.error "frontier logo circles gfx exact slot size mismatch"
	.endif

	.globl gBattleTransitionFrontierLogoCircles_Pal
gBattleTransitionFrontierLogoCircles_Pal: @ 0x085FC824
	.incbin "build/graphics/priority_b/battle_transitions/frontier_logo_circles.gbapal"
	.if (. - gBattleTransitionFrontierLogoCircles_Pal) != 0x20
	.error "frontier logo circles palette size mismatch"
	.endif

	.globl gBattleTransitionFrontierCirclesFiller
gBattleTransitionFrontierCirclesFiller: @ 0x085FC844
	.fill 0x1C0, 1, 0

	.globl gBattleTransitionFrontierLogoCirclesOam
gBattleTransitionFrontierLogoCirclesOam: @ 0x085FCA04
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 0, 0

	.globl gBattleTransitionFrontierLogoCirclesSpriteSheet
gBattleTransitionFrontierLogoCirclesSpriteSheet: @ 0x085FCA0C
	rodata_compressed_sprite_sheet gBattleTransitionFrontierLogoCircles_Gfx, 0x1800, 0x2E90

	.globl gBattleTransitionFrontierLogoCirclesSpritePalette
gBattleTransitionFrontierLogoCirclesSpritePalette: @ 0x085FCA14
	rodata_sprite_palette gBattleTransitionFrontierLogoCircles_Pal, 0x2E90

	.globl gBattleTransitionFrontierAnim_LogoCircle_Top
gBattleTransitionFrontierAnim_LogoCircle_Top: @ 0x085FCA1C
	rodata_anim_frame 0, 1, 0, 0
	rodata_anim_end
	.globl gBattleTransitionFrontierAnim_LogoCircle_Left
gBattleTransitionFrontierAnim_LogoCircle_Left: @ 0x085FCA24
	rodata_anim_frame 64, 1, 0, 0
	rodata_anim_end
	.globl gBattleTransitionFrontierAnim_LogoCircle_Right
gBattleTransitionFrontierAnim_LogoCircle_Right: @ 0x085FCA2C
	rodata_anim_frame 128, 1, 0, 0
	rodata_anim_end

	.globl gBattleTransitionFrontierAnims_LogoCircles
gBattleTransitionFrontierAnims_LogoCircles: @ 0x085FCA34
	.4byte gBattleTransitionFrontierAnim_LogoCircle_Top
	.4byte gBattleTransitionFrontierAnim_LogoCircle_Left
	.4byte gBattleTransitionFrontierAnim_LogoCircle_Right

	.globl gBattleTransitionFrontierLogoCirclesSpriteTemplate
gBattleTransitionFrontierLogoCirclesSpriteTemplate: @ 0x085FCA40
	rodata_sprite_template 0x2E90, 0x2E90, gBattleTransitionFrontierLogoCirclesOam, gBattleTransitionFrontierAnims_LogoCircles, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl gBattleTransitionFrontierCirclesMeet_Funcs
gBattleTransitionFrontierCirclesMeet_Funcs: @ 0x085FCA58
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA464 @ CirclesMeet_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA4D0 @ CirclesMeet_End

	.globl gBattleTransitionFrontierCirclesCross_Funcs
gBattleTransitionFrontierCirclesCross_Funcs: @ 0x085FCA6C
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA53C @ CirclesCross_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA5A8 @ CirclesCross_End

	.globl gBattleTransitionFrontierCirclesAsymmetricSpiral_Funcs
gBattleTransitionFrontierCirclesAsymmetricSpiral_Funcs: @ 0x085FCA80
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA614 @ CirclesAsymmetricSpiral_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA694 @ CirclesAsymmetricSpiral_End

	.globl gBattleTransitionFrontierCirclesSymmetricSpiral_Funcs
gBattleTransitionFrontierCirclesSymmetricSpiral_Funcs: @ 0x085FCA94
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA700 @ CirclesSymmetricSpiral_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA784 @ CirclesSymmetricSpiral_End

	.globl gBattleTransitionFrontierCirclesMeetInSeq_Funcs
gBattleTransitionFrontierCirclesMeetInSeq_Funcs: @ 0x085FCAA8
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA7F0 @ CirclesMeetInSeq_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA87C @ CirclesMeetInSeq_End

	.globl gBattleTransitionFrontierCirclesCrossInSeq_Funcs
gBattleTransitionFrontierCirclesCrossInSeq_Funcs: @ 0x085FCABC
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA8E8 @ CirclesCrossInSeq_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DA974 @ CirclesCrossInSeq_End

	.globl gBattleTransitionFrontierCirclesAsymmetricSpiralInSeq_Funcs
gBattleTransitionFrontierCirclesAsymmetricSpiralInSeq_Funcs: @ 0x085FCAD0
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DA9E0 @ CirclesAsymmetricSpiralInSeq_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DAA74 @ CirclesAsymmetricSpiralInSeq_End

	.globl gBattleTransitionFrontierCirclesSymmetricSpiralInSeq_Funcs
gBattleTransitionFrontierCirclesSymmetricSpiralInSeq_Funcs: @ 0x085FCAE4
	.4byte sub_081DA31C @ Circles_Init
	.4byte sub_081DAAE0 @ CirclesSymmetricSpiralInSeq_CreateSprites
	.4byte sub_081DA40C @ WaitForLogoCirclesAnim
	.4byte sub_081DA39C @ FadeInCenterLogoCircle
	.4byte sub_081DAB78 @ CirclesSymmetricSpiralInSeq_End

	@ Priority C: Mystery Event Enigma Berry result messages.
	@ These are normal localized strings consumed by MEScrCmd_setenigmaberry.

	.globl gMysteryEventScriptData_085FCAF8
