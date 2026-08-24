	@ Semantic aliases proven against pinned pret/pokeemerald battle_anim_ice.c.
	@ These .set directives emit no ROM bytes.
	.set sAnims_Snowball, sAnims_IceCrystalSmall + 0x4
	.set sAnims_BlizzardIceCrystal, sAnims_IceCrystalSmall + 0x8
	.set sAnim_IceGroundSpike, gBattleAnimSpriteTemplate_IceEffectParticle + 0x78
	.set sAnims_IceGroundSpike, gBattleAnimSpriteTemplate_IceEffectParticle + 0x98
	.set sAnim_Cloud, gBattleAnimSpriteTemplate_IceEffectParticle + 0xB4
	.set sAnims_Cloud, gBattleAnimSpriteTemplate_IceEffectParticle + 0xC0

	.4byte sAnims_Snowball @ +0x38
	.4byte 0 @ +0x3C
	.4byte gDummySpriteAffineAnimTable @ +0x40
	.4byte AnimSwirlingSnowball_Step1 @ +0x44
	.4byte 0x279D279D @ +0x48
	.4byte gOamData_AffineOff_ObjNormal_16x16 @ +0x4C
	.4byte sAnims_BlizzardIceCrystal @ +0x50
	.4byte 0 @ +0x54
	.4byte gDummySpriteAffineAnimTable @ +0x58
	.4byte AnimMoveParticleBeyondTarget @ +0x5C
	.4byte 0x279D279D @ +0x60
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x64
	.4byte sAnims_Snowball @ +0x68
	.4byte 0 @ +0x6C
	.4byte gDummySpriteAffineAnimTable @ +0x70
	.4byte AnimMoveParticleBeyondTarget @ +0x74
	.4byte 0x00050000 @ +0x78
	.4byte 0x00050002 @ +0x7C
	.4byte 0x00050004 @ +0x80
	.4byte 0x00050006 @ +0x84
	.4byte 0x00050004 @ +0x88
	.4byte 0x00050002 @ +0x8C
	.4byte 0x00050000 @ +0x90
	.4byte 0x0000FFFF @ +0x94
	.4byte sAnim_IceGroundSpike @ +0x98
	.4byte 0x279E279E @ +0x9C
	.4byte gOamData_AffineOff_ObjBlend_8x16 @ +0xA0
	.4byte sAnims_IceGroundSpike @ +0xA4
	.4byte 0 @ +0xA8
	.4byte gDummySpriteAffineAnimTable @ +0xAC
	.4byte AnimWaveFromCenterOfTarget @ +0xB0
	.4byte 0x00080000 @ +0xB4
	.4byte 0x00080008 @ +0xB8
	.4byte 0x0000FFFE @ +0xBC
	.4byte sAnim_Cloud @ +0xC0
	.4byte 0x27A027A0 @ +0xC4
	.4byte gOamData_AffineOff_ObjBlend_32x16 @ +0xC8
	.4byte sAnims_Cloud @ +0xCC
	.4byte 0 @ +0xD0
	.4byte gDummySpriteAffineAnimTable @ +0xD4
	.4byte InitSwirlingFogAnim @ +0xD8
	.4byte 0x27BC27BC @ +0xDC
	.4byte gOamData_AffineOff_ObjBlend_32x16 @ +0xE0
	.4byte sAnims_Cloud @ +0xE4
	.4byte 0 @ +0xE8
	.4byte gDummySpriteAffineAnimTable @ +0xEC
	.4byte InitSwirlingFogAnim @ +0xF0
