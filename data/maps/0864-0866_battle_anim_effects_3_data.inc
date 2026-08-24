	@ pret/pokeemerald-jp direct xref for 0x0856ECF8: battle_anim_effects_3.s: sub_0815AF90
	.globl gBattleAnimSpriteTemplate_FingerWag
gBattleAnimSpriteTemplate_FingerWag: @ 0x0856ECF8
	rodata_sprite_template 0x27E1, 0x27E1, gOamData_AffineOff_ObjNormal_32x32, gFingerWagAnims, 0, gDummySpriteAffineAnimTable, sub_081039B4
	.globl gMetronomeHandAffineAnim_Grow
gMetronomeHandAffineAnim_Grow: @ 0x0856ED10
	semantic_affine_animcmd_frame 16, 16, 0, 0
	semantic_affine_animcmd_frame 30, 30, 0, 8
	rodata_affine_anim_end
	.globl gMetronomeHandAffineAnim_Pulse
gMetronomeHandAffineAnim_Pulse: @ 0x0856ED28
	semantic_affine_animcmd_frame 0, 0, 4, 0x0B
	semantic_affine_animcmd_frame 0, 0, 0xFC, 0x0B
	semantic_affine_animcmd_loop 2
	semantic_affine_animcmd_frame -30, -30, 0, 8
	rodata_affine_anim_end
	.globl gMetronomeFingerAffineAnimCmds2_2
gMetronomeFingerAffineAnimCmds2_2: @ 0x0856ED50
	@ Canonical unused alternate Metronome finger affine animation.
	semantic_affine_animcmd_frame 16, 16, 0, 0
	semantic_affine_animcmd_frame 30, 30, 0, 8
	semantic_affine_animcmd_frame 0, 0, 0, 16
	semantic_affine_animcmd_loop 0
	semantic_affine_animcmd_frame 0, 0, 4, 0x0B
	semantic_affine_animcmd_frame 0, 0, -4, 0x0B
	semantic_affine_animcmd_loop 2
	semantic_affine_animcmd_frame -30, -30, 0, 8
	rodata_affine_anim_end
	.globl gMetronomeHandAffineAnims
gMetronomeHandAffineAnims: @ 0x0856ED98
	semantic_affine_anim_table_entry gMetronomeHandAffineAnim_Grow
	semantic_affine_anim_table_entry gMetronomeHandAffineAnim_Pulse
	.globl gMetronomeHandSpriteTemplate
gMetronomeHandSpriteTemplate: @ 0x0856EDA0
	rodata_sprite_template 0x2750, 0x2750, gOamData_AffineDouble_ObjNormal_32x32, gDummySpriteAnimTable, 0, gMetronomeHandAffineAnims, sub_08103A58
	.globl gFollowMeHandSpriteTemplate
gFollowMeHandSpriteTemplate: @ 0x0856EDB8
	rodata_sprite_template 0x2750, 0x2750, gOamData_AffineNormal_ObjNormal_32x32, gDummySpriteAnimTable, 0, gMetronomeHandAffineAnims, sub_08103AD4
	.globl gTauntHandAnim_LeftStill
gTauntHandAnim_LeftStill: @ 0x0856EDD0
	rodata_anim_frame 0, 1
	rodata_anim_end
	.globl gTauntHandAnim_RightStill
gTauntHandAnim_RightStill: @ 0x0856EDD8
	rodata_anim_frame 0, 1, 1
	rodata_anim_end
	.globl gTauntHandAnim_LeftWag
gTauntHandAnim_LeftWag: @ 0x0856EDE0
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 0, 4
	rodata_anim_frame 16, 4
	rodata_anim_frame 32, 4
	rodata_anim_end
	.globl gTauntHandAnim_RightWag
gTauntHandAnim_RightWag: @ 0x0856EE00
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 16, 4, 1
	rodata_anim_frame 32, 4, 1
	rodata_anim_frame 16, 4, 1
	rodata_anim_frame 0, 4, 1
	rodata_anim_frame 16, 4, 1
	rodata_anim_frame 32, 4, 1
	rodata_anim_end
	.globl gTauntHandAnims
gTauntHandAnims: @ 0x0856EE20
	semantic_anim_table_entry gTauntHandAnim_LeftStill
	semantic_anim_table_entry gTauntHandAnim_RightStill
	semantic_anim_table_entry gTauntHandAnim_LeftWag
	semantic_anim_table_entry gTauntHandAnim_RightWag
	.globl gTauntHandSpriteTemplate
gTauntHandSpriteTemplate: @ 0x0856EE30
	rodata_sprite_template 0x27E6, 0x27E6, gOamData_AffineOff_ObjNormal_32x32, gTauntHandAnims, 0, gDummySpriteAffineAnimTable, sub_08103BE0
	.globl gFollowMeHandSpriteTemplate_Static
gFollowMeHandSpriteTemplate_Static: @ 0x0856EE48
	rodata_sprite_template 0x2750, 0x2750, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103C98
	.globl sAnim_BouncingMusicNote
sAnim_BouncingMusicNote: @ 0x0856EE60
	rodata_anim_frame 4, 1
	rodata_anim_end
	.globl sAnims_BouncingMusicNote
sAnims_BouncingMusicNote: @ 0x0856EE68
	semantic_anim_table_entry sAnim_BouncingMusicNote
	.globl sBouncingMusicNoteSpriteTemplate
sBouncingMusicNoteSpriteTemplate: @ 0x0856EE6C
	rodata_sprite_template 0x2758, 0x2758, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103CE8
	.globl sVibrateBattlerBackSpriteTemplate
sVibrateBattlerBackSpriteTemplate: @ 0x0856EE84
	rodata_sprite_template 0, 0, gDummyOamData, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08103DDC
	.globl sMovingClampSpriteTemplate
sMovingClampSpriteTemplate: @ 0x0856EE9C
	rodata_sprite_template 0x27A1, 0x27A1, gOamData_AffineNormal_ObjBlend_64x64, gDummySpriteAnimTable, 0, gAffineAnims_Bite, sub_08103E70
	.globl sAnim_SmallExplosion
sAnim_SmallExplosion: @ 0x0856EEB4
	rodata_anim_frame 0, 9
	rodata_anim_frame 16, 3
	rodata_anim_frame 32, 3
	rodata_anim_frame 48, 3
	rodata_anim_end
	.globl sAnims_SmallExplosion
sAnims_SmallExplosion: @ 0x0856EEC8
	semantic_anim_table_entry sAnim_SmallExplosion
	.globl sAffineAnim_SmallExplosion
sAffineAnim_SmallExplosion: @ 0x0856EECC
	semantic_affine_animcmd_frame 0x50, 0x50, 0, 0
	semantic_affine_animcmd_frame 9, 9, 0, 0x12
	rodata_affine_anim_end
	.globl sAffineAnims_SmallExplosion
sAffineAnims_SmallExplosion: @ 0x0856EEE4
	semantic_affine_anim_table_entry sAffineAnim_SmallExplosion
	.globl sSmallExplosionSpriteTemplate
sSmallExplosionSpriteTemplate: @ 0x0856EEE8
	rodata_sprite_template 0x2717, 0x2717, gOamData_AffineNormal_ObjNormal_32x32, sAnims_SmallExplosion, 0, sAffineAnims_SmallExplosion, AnimSpriteOnMonPos
	.globl gKinesisZapEnergyAnim
gKinesisZapEnergyAnim: @ 0x0856EF00
	rodata_anim_frame 0, 3, 1
	rodata_anim_frame 8, 3, 1
	rodata_anim_frame 16, 3, 1
	rodata_anim_frame 24, 3, 1
	rodata_anim_frame 32, 3, 1
	rodata_anim_frame 40, 3, 1
	rodata_anim_frame 48, 3, 1
	.2byte 0xFFFD, 1
	rodata_anim_end
	.globl gKinesisZapEnergyAnims
gKinesisZapEnergyAnims: @ 0x0856EF24
	semantic_anim_table_entry gKinesisZapEnergyAnim
	.globl gKinesisZapEnergySpriteTemplate
gKinesisZapEnergySpriteTemplate: @ 0x0856EF28
	rodata_sprite_template 0x275B, 0x275B, gOamData_AffineOff_ObjNormal_32x16, gKinesisZapEnergyAnims, 0, gDummySpriteAffineAnimTable, Anim_KinesisZapEnergy
	.globl gSwordsDanceBladeAffineAnim
gSwordsDanceBladeAffineAnim: @ 0x0856EF40
	semantic_affine_animcmd_frame 0x10, 0x100, 0, 0
	semantic_affine_animcmd_frame 0x14, 0, 0, 0x0C
	semantic_affine_animcmd_frame 0, 0, 0, 0x20
	rodata_affine_anim_end
	.globl gSwordsDanceBladeAffineAnims
gSwordsDanceBladeAffineAnims: @ 0x0856EF60
	semantic_affine_anim_table_entry gSwordsDanceBladeAffineAnim
	.globl gSwordsDanceBladeSpriteTemplate
gSwordsDanceBladeSpriteTemplate: @ 0x0856EF64
	rodata_sprite_template 0x2715, 0x2715, gOamData_AffineNormal_ObjBlend_32x64, gDummySpriteAnimTable, 0, gSwordsDanceBladeAffineAnims, Anim_SwordsDanceBlade
	.globl gSonicBoomProjectileSpriteTemplate
gSonicBoomProjectileSpriteTemplate: @ 0x0856EF7C
	rodata_sprite_template 0x2713, 0x2713, gOamData_AffineDouble_ObjBlend_32x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, AnimSonicBoomProjectile
