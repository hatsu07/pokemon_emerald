	@ pret/pokeemerald-jp direct xref for 0x0857280C: rock.s: sub_08111A64
	.globl gMoveTwisterParticleData
gMoveTwisterParticleData: @ 0x0857280C
	@ analyzed canonical ROM range 0x0857280C-0x08572823
gRolloutMudSpriteTemplate: @ 0x0857280C
	rodata_sprite_template 0x275A, 0x275A, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, AnimRolloutParticle
	@ pret/pokeemerald-jp direct xref for 0x08572824: rock.s: sub_08111A64
	@ semantic battle-animation reconstruction: rock_b
	@ ROM range 0x08572824-0x0857299B
.LRockBattleAnimTemplateBoundary:
	.globl gRolloutRockSpriteTemplate
gRolloutRockSpriteTemplate: @ 0x08572824
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRolloutParticle @ callback (AnimRolloutParticle)

gRockTombRockSpriteTemplate: @ 0x0857283C
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_BasicRock @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRockTomb @ callback (AnimRockTomb)

sAffineAnim_BasicRock_0: @ 0x08572854
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x05FB, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnim_BasicRock_1: @ 0x08572864
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0505, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_BasicRock: @ 0x08572874
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_BasicRock_0 @ [0]
	.4byte sAffineAnim_BasicRock_1 @ [1]

sRockBlastRockSpriteTemplate: @ 0x0857287C
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_BasicRock @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_BasicRock @ affineAnims
	.4byte AnimRockBlastRock @ callback (AnimRockBlastRock)

sRockScatterSpriteTemplate: @ 0x08572894
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_BasicRock @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_BasicRock @ affineAnims
	.4byte AnimRockScatter @ callback (AnimRockScatter)

sMoveTwisterParticleSpriteTemplate: @ 0x085728AC
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_MoveTwisterParticle @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_BasicRock @ affineAnims
	.4byte AnimMoveTwisterParticle @ callback
sWeatherBallIceDownSpriteTemplate_4: @ 0x085728C4
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_WeatherBallIceDown_2 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_BasicRock @ affineAnims
	.4byte AnimWeatherBallDown @ callback (AnimWeatherBallDown)

sAffineAnim_ConfuseRayBallBounce_0: @ 0x085728DC
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x001E, 0x001E, 0x050A, 0x0000 @ AFFINE_FRAME(30, 30, rot=0x00, duration=0)
	.2byte 0xFFE2, 0xFFE2, 0x050A, 0x0000 @ AFFINE_FRAME(-30, -30, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_ConfuseRayBallBounce: @ 0x085728F4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_ConfuseRayBallBounce_0 @ [0]

sConfuseRayBallBounceSpriteTemplate: @ 0x085728F8
	@ SpriteTemplate: tileTag=0x271D, paletteTag=0x271D
	.2byte 0x271D, 0x271D
	.4byte gBattleAnimOam_AffineDouble_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_ConfuseRayBallBounce @ affineAnims
	.4byte AnimConfuseRayBallBounce @ callback (AnimConfuseRayBallBounce)

gConfuseRayBallSpiralSpriteTemplate: @ 0x08572910
	@ SpriteTemplate: tileTag=0x271D, paletteTag=0x271D
	.2byte 0x271D, 0x271D
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimConfuseRayBallSpiral @ callback (AnimConfuseRayBallSpiral)

sAffineAnim_AnimShadowBall_0: @ 0x08572928
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x010A, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_AnimShadowBall: @ 0x08572938
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_AnimShadowBall_0 @ [0]

sAnimShadowBallSpriteTemplate: @ 0x0857293C
	@ SpriteTemplate: tileTag=0x27C0, paletteTag=0x27C0
	.2byte 0x27C0, 0x27C0
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_AnimShadowBall @ affineAnims
	.4byte InitAnimShadowBall @ callback
sAnim_Lick_0: @ 0x08572954
	@ union AnimCmd stream
	.2byte 0x0000, 0x0002 @ ANIMCMD_FRAME(0, 2)
	.2byte 0x0008, 0x0002 @ ANIMCMD_FRAME(8, 2)
	.2byte 0x0010, 0x0002 @ ANIMCMD_FRAME(16, 2)
	.2byte 0x0018, 0x0002 @ ANIMCMD_FRAME(24, 2)
	.2byte 0x0020, 0x0002 @ ANIMCMD_FRAME(32, 2)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Lick: @ 0x0857296C
	@ AnimCmd pointer table
	.4byte sAnim_Lick_0 @ [0]

sLickSpriteTemplate: @ 0x08572970
	@ SpriteTemplate: tileTag=0x27C1, paletteTag=0x27C1
	.2byte 0x27C1, 0x27C1
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte sAnims_Lick @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimLick @ callback
	@ semanticized v110: canonical static data at 0x08572988, size=0x14
sAffineAnim_GhostUnused:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x0200, 0x0200
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(512, 512, 0, 0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END
sAffineAnims_GhostUnused: @ 0x08572998
	.4byte sAffineAnim_GhostUnused

	.if (. - .LRockBattleAnimTemplateBoundary) != 0x178
	.error "semantic range 0x08572824 size mismatch"
	.endif
	@ semantic battle-animation reconstruction: ghost
	@ ROM range 0x0857299C-0x08572F3B
.LGhostBattleAnimSectionStart:
	.globl gDestinyBondWhiteShadowSpriteTemplate
gDestinyBondWhiteShadowSpriteTemplate: @ 0x0857299C
	@ SpriteTemplate: tileTag=0x27CC, paletteTag=0x27CC
	.2byte 0x27CC, 0x27CC
	.4byte gOamData_AffineOff_ObjBlend_64x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDestinyBondWhiteShadow @ callback
sCurseNailSpriteTemplate: @ 0x085729B4
	@ SpriteTemplate: tileTag=0x27D7, paletteTag=0x27D7
	.2byte 0x27D7, 0x27D7
	.4byte gBattleAnimOam_084FD160 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimCurseNail @ callback
sCurseGhostSpriteTemplate: @ 0x085729CC
	@ SpriteTemplate: tileTag=0x27D8, paletteTag=0x27D8
	.2byte 0x27D8, 0x27D8
	.4byte gBattleAnimOam_084FD140 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimGhostStatusSprite @ callback
sNightmareDevilSpriteTemplate: @ 0x085729E4
	@ SpriteTemplate: tileTag=0x27ED, paletteTag=0x27ED
	.2byte 0x27ED, 0x27ED
	.4byte gBattleAnimOam_084FD140 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimGhostStatusSprite @ callback
sAnim_GrudgeFlame: @ 0x085729FC
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0008, 0x0004 @ ANIMCMD_FRAME(8, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0018, 0x0004 @ ANIMCMD_FRAME(24, 4)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_GrudgeFlame: @ 0x08572A10
	@ AnimCmd pointer table
	.4byte sAnim_GrudgeFlame @ [0]

	.globl gGrudgeFlameSpriteTemplate
gGrudgeFlameSpriteTemplate: @ 0x08572A14
	@ SpriteTemplate: tileTag=0x280D, paletteTag=0x280D
	.2byte 0x280D, 0x280D
	.4byte gOamData_AffineOff_ObjBlend_16x32 @ oam
	.4byte sAnims_GrudgeFlame @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimGrudgeFlame @ callback
sMonMoveCircularSpriteTemplate: @ 0x08572A2C
	@ SpriteTemplate: tileTag=0x0000, paletteTag=0x0000
	.2byte 0x0000, 0x0000
	.4byte gDummyOamData @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimMonMoveCircular @ callback
sAnim_SmallEmber_0_3: @ 0x08572A44
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0x0040, 0x0004 @ ANIMCMD_FRAME(64, 4)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_SmallEmber_3: @ 0x08572A5C
	@ AnimCmd pointer table
	.4byte sAnim_SmallEmber_0_3 @ [0]

sOutrageFlameSpriteTemplate: @ 0x08572A60
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber_3 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimOutrageFlame @ callback (AnimOutrageFlame)

sAnim_DragonFireToTarget_0: @ 0x08572A78
	@ union AnimCmd stream
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnim_DragonFireToTarget_1: @ 0x08572A88
	@ union AnimCmd stream
	.2byte 0x0010, 0x00C3 @ ANIMCMD_FRAME(16, 195)
	.2byte 0x0020, 0x00C3 @ ANIMCMD_FRAME(32, 195)
	.2byte 0x0030, 0x00C3 @ ANIMCMD_FRAME(48, 195)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_DragonFireToTarget: @ 0x08572A98
	@ AnimCmd pointer table
	.4byte sAnim_DragonFireToTarget_0 @ [0]
	.4byte sAnim_DragonFireToTarget_1 @ [1]

sAffineAnim_DragonFireToTarget_0: @ 0x08572AA0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0050, 0x0050, 0x007F, 0x0000 @ AFFINE_FRAME(80, 80, rot=0x00, duration=0)
	.2byte 0x000D, 0x000D, 0x6400, 0x0000 @ AFFINE_FRAME(13, 13, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_DragonFireToTarget_1: @ 0x08572AB8
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0050, 0x0050, 0x0000, 0x0000 @ AFFINE_FRAME(80, 80, rot=0x00, duration=0)
	.2byte 0x000D, 0x000D, 0x6400, 0x0000 @ AFFINE_FRAME(13, 13, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_DragonFireToTarget: @ 0x08572AD0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_DragonFireToTarget_0 @ [0]
	.4byte sAffineAnim_DragonFireToTarget_1 @ [1]

sDragonFireToTargetSpriteTemplate: @ 0x08572AD8
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_DragonFireToTarget @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_DragonFireToTarget @ affineAnims
	.4byte AnimDragonFireToTarget @ callback (AnimDragonFireToTarget)

sAnim_DragonRageFirePlume_0: @ 0x08572AF0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0010, 0x0005 @ ANIMCMD_FRAME(16, 5)
	.2byte 0x0020, 0x0005 @ ANIMCMD_FRAME(32, 5)
	.2byte 0x0030, 0x0005 @ ANIMCMD_FRAME(48, 5)
	.2byte 0x0040, 0x0005 @ ANIMCMD_FRAME(64, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_DragonRageFirePlume: @ 0x08572B08
	@ AnimCmd pointer table
	.4byte sAnim_DragonRageFirePlume_0 @ [0]

sDragonRageFirePlumeSpriteTemplate: @ 0x08572B0C
	@ SpriteTemplate: tileTag=0x2733, paletteTag=0x2733
	.2byte 0x2733, 0x2733
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_DragonRageFirePlume @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDragonRageFirePlume @ callback
sAnim_DragonFireToTarget_0_2: @ 0x08572B24
	@ union AnimCmd stream
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_DragonFireToTarget_2: @ 0x08572B34
	@ AnimCmd pointer table
	.4byte sAnim_DragonFireToTarget_0_2 @ [0]
	.4byte sAnim_DragonFireToTarget_0_2 @ [1]

sAffineAnim_DragonFireToTarget_0_2: @ 0x08572B3C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0064, 0x0064, 0x017F, 0x0000 @ AFFINE_FRAME(100, 100, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_DragonFireToTarget_1_2: @ 0x08572B4C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0064, 0x0064, 0x0100, 0x0000 @ AFFINE_FRAME(100, 100, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_DragonFireToTarget_2: @ 0x08572B5C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_DragonFireToTarget_0_2 @ [0]
	.4byte sAffineAnim_DragonFireToTarget_1_2 @ [1]

sDragonFireToTargetSpriteTemplate_2: @ 0x08572B64
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_DragonFireToTarget_2 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_DragonFireToTarget_2 @ affineAnims
	.4byte AnimDragonFireToTarget @ callback (AnimDragonFireToTarget)

sDragonDanceOrbSpriteTemplate: @ 0x08572B7C
	@ SpriteTemplate: tileTag=0x2809, paletteTag=0x2809
	.2byte 0x2809, 0x2809
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDragonDanceOrb @ callback
sOverheatFlameSpriteTemplate: @ 0x08572B94
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber_3 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimOverheatFlame @ callback (AnimOverheatFlame)

sUnusedBagStealSpriteTemplate: @ 0x08572BAC
	@ SpriteTemplate: tileTag=0x271F, paletteTag=0x271F
	.2byte 0x271F, 0x271F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedBagSteal @ callback
sAffineAnim_Bite_0: @ 0x08572BC4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0100, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Bite_1: @ 0x08572BD4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0120, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Bite_2: @ 0x08572BE4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0140, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Bite_3: @ 0x08572BF4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0160, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Bite_4: @ 0x08572C04
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0180, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Bite_5: @ 0x08572C14
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01A0, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Bite_6: @ 0x08572C24
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01C0, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Bite_7: @ 0x08572C34
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01E0, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

gAffineAnims_Bite: @ 0x08572C44
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Bite_0 @ [0]
	.4byte sAffineAnim_Bite_1 @ [1]
	.4byte sAffineAnim_Bite_2 @ [2]
	.4byte sAffineAnim_Bite_3 @ [3]
	.4byte sAffineAnim_Bite_4 @ [4]
	.4byte sAffineAnim_Bite_5 @ [5]
	.4byte sAffineAnim_Bite_6 @ [6]
	.4byte sAffineAnim_Bite_7 @ [7]

gSharpTeethSpriteTemplate: @ 0x08572C64
	@ SpriteTemplate: tileTag=0x279B, paletteTag=0x279B
	.2byte 0x279B, 0x279B
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gAffineAnims_Bite @ affineAnims
	.4byte AnimBite @ callback
gClampJawSpriteTemplate: @ 0x08572C7C
	@ SpriteTemplate: tileTag=0x27A1, paletteTag=0x27A1
	.2byte 0x27A1, 0x27A1
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gAffineAnims_Bite @ affineAnims
	.4byte AnimBite @ callback
sAffineAnim_TearDrop_0: @ 0x08572C94
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00C0, 0x00C0, 0x0050, 0x0000 @ AFFINE_FRAME(192, 192, rot=0x00, duration=0)
	.2byte 0x0000, 0x0000, 0x08FE, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_TearDrop_1: @ 0x08572CAC
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00C0, 0x00C0, 0x00B0, 0x0000 @ AFFINE_FRAME(192, 192, rot=0x00, duration=0)
	.2byte 0x0000, 0x0000, 0x0802, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_TearDrop: @ 0x08572CC4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_TearDrop_0 @ [0]
	.4byte sAffineAnim_TearDrop_1 @ [1]

sTearDropSpriteTemplate: @ 0x08572CCC
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_TearDrop @ affineAnims
	.4byte AnimTearDrop @ callback
sAnim_ClawSlash_0: @ 0x08572CE4
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0x0040, 0x0004 @ ANIMCMD_FRAME(64, 4)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_ClawSlash_1: @ 0x08572CFC
	@ union AnimCmd stream
	.2byte 0x0000, 0x0044 @ ANIMCMD_FRAME(0, 68)
	.2byte 0x0010, 0x0044 @ ANIMCMD_FRAME(16, 68)
	.2byte 0x0020, 0x0044 @ ANIMCMD_FRAME(32, 68)
	.2byte 0x0030, 0x0044 @ ANIMCMD_FRAME(48, 68)
	.2byte 0x0040, 0x0044 @ ANIMCMD_FRAME(64, 68)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_ClawSlash: @ 0x08572D14
	@ AnimCmd pointer table
	.4byte sAnim_ClawSlash_0 @ [0]
	.4byte sAnim_ClawSlash_1 @ [1]

sClawSlashSpriteTemplate: @ 0x08572D1C
	@ SpriteTemplate: tileTag=0x2737, paletteTag=0x2737
	.2byte 0x2737, 0x2737
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_ClawSlash @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimClawSlash @ callback
sAffineAnim_BonemerangProjectile_0: @ 0x08572D34
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x010F, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnim_BoneHitProjectile_0: @ 0x08572D44
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0114, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_BonemerangProjectile: @ 0x08572D54
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_BonemerangProjectile_0 @ [0]

sAffineAnims_BoneHitProjectile: @ 0x08572D58
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_BoneHitProjectile_0 @ [0]

sBonemerangProjectileSpriteTemplate: @ 0x08572D5C
	@ SpriteTemplate: tileTag=0x2710, paletteTag=0x2710
	.2byte 0x2710, 0x2710
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_BonemerangProjectile @ affineAnims
	.4byte AnimBonemerangProjectile @ callback
sBoneHitProjectileSpriteTemplate: @ 0x08572D74
	@ SpriteTemplate: tileTag=0x2710, paletteTag=0x2710
	.2byte 0x2710, 0x2710
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_BoneHitProjectile @ affineAnims
	.4byte AnimBoneHitProjectile @ callback
sDirtScatterSpriteTemplate: @ 0x08572D8C
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDirtScatter @ callback
sAnim_DirtScatter_0: @ 0x08572DA4
	@ union AnimCmd stream
	.2byte 0x0001, 0x0001 @ ANIMCMD_FRAME(1, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_DirtScatter: @ 0x08572DAC
	@ AnimCmd pointer table
	.4byte sAnim_DirtScatter_0 @ [0]

sDirtScatterSpriteTemplate_2: @ 0x08572DB0
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte sAnims_DirtScatter @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDirtScatter @ callback
sMudSportDirtSpriteTemplate: @ 0x08572DC8
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimMudSportDirt @ callback
sFissureDirtPlumeParticleSpriteTemplate: @ 0x08572DE0
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFissureDirtPlumeParticle @ callback
sDigDirtMoundSpriteTemplate: @ 0x08572DF8
	@ SpriteTemplate: tileTag=0x2829, paletteTag=0x2829
	.2byte 0x2829, 0x2829
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDigDirtMound @ callback
sAnim_ConfusionDuck_0: @ 0x08572E10
	@ union AnimCmd stream
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0x0004, 0x0008 @ ANIMCMD_FRAME(4, 8)
	.2byte 0x0000, 0x0048 @ ANIMCMD_FRAME(0, 72)
	.2byte 0x0008, 0x0008 @ ANIMCMD_FRAME(8, 8)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnim_ConfusionDuck_1: @ 0x08572E24
	@ union AnimCmd stream
	.2byte 0x0000, 0x0048 @ ANIMCMD_FRAME(0, 72)
	.2byte 0x0004, 0x0008 @ ANIMCMD_FRAME(4, 8)
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0x0008, 0x0008 @ ANIMCMD_FRAME(8, 8)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_ConfusionDuck: @ 0x08572E38
	@ AnimCmd pointer table
	.4byte sAnim_ConfusionDuck_0 @ [0]
	.4byte sAnim_ConfusionDuck_1 @ [1]

sConfusionDuckSpriteTemplate: @ 0x08572E40
	@ SpriteTemplate: tileTag=0x2759, paletteTag=0x2759
	.2byte 0x2759, 0x2759
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte sAnims_ConfusionDuck @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimConfusionDuck @ callback
sSimplePaletteBlendSpriteTemplate: @ 0x08572E58
	@ SpriteTemplate: tileTag=0x0000, paletteTag=0x0000
	.2byte 0x0000, 0x0000
	.4byte gDummyOamData @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSimplePaletteBlend @ callback
gComplexPaletteBlendSpriteTemplate: @ 0x08572E70
	@ SpriteTemplate: tileTag=0x0000, paletteTag=0x0000
	.2byte 0x0000, 0x0000
	.4byte gDummyOamData @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimComplexPaletteBlend @ callback (AnimComplexPaletteBlend)

sAnim_CirclingSparkle_0: @ 0x08572E88
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0x0040, 0x0003 @ ANIMCMD_FRAME(64, 3)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_CirclingSparkle: @ 0x08572EA0
	@ AnimCmd pointer table
	.4byte sAnim_CirclingSparkle_0 @ [0]

sCirclingSparkleSpriteTemplate: @ 0x08572EA4
	@ SpriteTemplate: tileTag=0x2757, paletteTag=0x2757
	.2byte 0x2757, 0x2757
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_CirclingSparkle @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimCirclingSparkle @ callback
gShakeMonOrPlatformSpriteTemplate: @ 0x08572EBC
	@ SpriteTemplate: tileTag=0x0000, paletteTag=0x0000
	.2byte 0x0000, 0x0000
	.4byte gDummyOamData @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimShakeMonOrBattlePlatforms @ callback (AnimShakeMonOrBattlePlatforms)

	@ semanticized v110: canonical static data at 0x08572ED4, size=0x10
sAffineAnim_HitSplat_0:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 8)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	@ semanticized v110: canonical static data at 0x08572EE4, size=0x18
sAffineAnim_HitSplat_1:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x00D8, 0x00D8
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(216, 216, 0, 0)
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 8)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	@ semanticized v110: canonical static data at 0x08572EFC, size=0x18
sAffineAnim_HitSplat_2:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x00B0, 0x00B0
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(176, 176, 0, 0)
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 8)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	@ semanticized v110: canonical static data at 0x08572F14, size=0x28
sAffineAnim_HitSplat_3:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x0080, 0x0080
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(128, 128, 0, 0)
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 8)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END
sAffineAnims_HitSplat: @ 0x08572F2C
	.4byte sAffineAnim_HitSplat_0
	.4byte sAffineAnim_HitSplat_1
	.4byte sAffineAnim_HitSplat_2
	.4byte sAffineAnim_HitSplat_3

	.if (. - .LGhostBattleAnimSectionStart) != 0x5A0
	.error "semantic range 0x0857299C size mismatch"
	.endif
	.globl gBasicHitSplatSpriteTemplateSpriteTemplate
gBasicHitSplatSpriteTemplateSpriteTemplate:
	.globl gBattleAnimSpriteTemplate_BasicHit
gBattleAnimSpriteTemplate_BasicHit: @ 0x08572F3C
gBasicHitSplatSpriteTemplate:
	@ analyzed canonical ROM range 0x08572F3C-0x08572F6B
	@ pointer/nullable table
	.4byte 0x27972797 @ +0x0
	.4byte gOamData_AffineNormal_ObjBlend_32x32 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	.4byte 0 @ +0xC
	.4byte sAffineAnims_HitSplat @ +0x10
	.4byte sub_08116BD8 @ +0x14
	.globl gBattleAnimSpriteTemplate_BasicHitFlipped
gBattleAnimSpriteTemplate_BasicHitFlipped: @ 0x08572F54
	.4byte 0x27972797 @ +0x18
	.4byte gOamData_AffineNormal_ObjBlend_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	.4byte 0 @ +0x24
	.4byte sAffineAnims_HitSplat @ +0x28
	.4byte sub_08116C70 @ +0x2C
