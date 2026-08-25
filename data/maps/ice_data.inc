	@ pret/pokeemerald-jp direct xref for 0x08571840: ice.s: AnimTask_Haze2
	@ semantic battle-animation reconstruction: ice
	@ ROM range 0x08571840-0x08572323
.LIceBattleAnimSectionBoundary:
	@ semanticized v110: canonical static data at 0x08571840, size=0x14
	.globl sHazeBlendAmounts
sHazeBlendAmounts:
	.byte 0, 1, 2, 2, 2, 2, 3, 4, 4, 4
	.byte 5, 6, 6, 6, 6, 7, 8, 8, 8, 9

gMistBallSpriteTemplate:
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimThrowMistBall @ callback
	@ semanticized v110: canonical static data at 0x0857186C, size=0x14
	.globl sMistBlendAmounts
sMistBlendAmounts:
	.byte 0, 1, 1, 1, 1, 2, 2, 2, 2, 3
	.byte 3, 3, 3, 3, 4, 4, 4, 4, 4, 5

gPoisonGasCloudSpriteTemplate:
	@ SpriteTemplate: tileTag=0x27BC, paletteTag=0x27BC
	.2byte 0x27BC, 0x27BC
	.4byte gBattleAnimOam_084FD160 @ oam
	.4byte sAnims_Cloud @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte InitPoisonGasCloudAnim @ callback
	@ semanticized v110: canonical static data at 0x08571898, size=0x28
	.globl sHailCoordData
sHailCoordData:
	@ packed HailStruct {x:10, y:10, bPosition:8, type:4}
	.4byte 0x2001E064 @ x=100, y=120, bPosition=0, type=2
	.4byte 0x0001E055 @ x=85, y=120, bPosition=0, type=0
	.4byte 0x1011E0F2 @ x=242, y=120, bPosition=1, type=1
	.4byte 0x1021E042 @ x=66, y=120, bPosition=2, type=1
	.4byte 0x0031E0B6 @ x=182, y=120, bPosition=3, type=0
	.4byte 0x2001E03C @ x=60, y=120, bPosition=0, type=2
	.4byte 0x0011E0D6 @ x=214, y=120, bPosition=1, type=0
	.4byte 0x1001E071 @ x=113, y=120, bPosition=0, type=1
	.4byte 0x1031E0D2 @ x=210, y=120, bPosition=3, type=1
	.4byte 0x0021E026 @ x=38, y=120, bPosition=2, type=0

sAffineAnim_HailParticle_0: @ 0x085718C0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_HailParticle_1: @ 0x085718D0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00F0, 0x00F0, 0x0000, 0x0000 @ AFFINE_FRAME(240, 240, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_HailParticle_2: @ 0x085718E0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00E0, 0x00E0, 0x0000, 0x0000 @ AFFINE_FRAME(224, 224, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_WeatherBallIceDown: @ 0x085718F0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0150, 0x0150, 0x0000, 0x0000 @ AFFINE_FRAME(336, 336, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_HailParticle: @ 0x08571900
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_HailParticle_0 @ [0]
	.4byte sAffineAnim_HailParticle_1 @ [1]
	.4byte sAffineAnim_HailParticle_2 @ [2]

sAffineAnims_WeatherBallIceDown_2: @ 0x0857190C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_WeatherBallIceDown @ [0]

	.globl gHailParticleSpriteTemplate
gHailParticleSpriteTemplate: @ 0x08571910
	@ SpriteTemplate: tileTag=0x2817, paletteTag=0x2817
	.2byte 0x2817, 0x2817
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_HailParticle @ affineAnims
	.4byte AnimHailBegin @ callback
gWeatherBallIceDownSpriteTemplate: @ 0x08571928
	@ SpriteTemplate: tileTag=0x2817, paletteTag=0x2817
	.2byte 0x2817, 0x2817
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_WeatherBallIceDown_2 @ affineAnims
	.4byte AnimWeatherBallDown @ callback (AnimWeatherBallDown)

sAnim_IceBallChunk_0: @ 0x08571940
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_IceBallChunk_1: @ 0x08571948
	@ union AnimCmd stream
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0x0040, 0x0004 @ ANIMCMD_FRAME(64, 4)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_IceBallChunk: @ 0x0857195C
	@ AnimCmd pointer table
	.4byte sAnim_IceBallChunk_0 @ [0]
	.4byte sAnim_IceBallChunk_1 @ [1]

sAffineAnim_IceBallChunk_0: @ 0x08571964
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00E0, 0x00E0, 0x0000, 0x0000 @ AFFINE_FRAME(224, 224, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_IceBallChunk_1: @ 0x08571974
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0118, 0x0118, 0x0000, 0x0000 @ AFFINE_FRAME(280, 280, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_IceBallChunk_2: @ 0x08571984
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0150, 0x0150, 0x0000, 0x0000 @ AFFINE_FRAME(336, 336, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_IceBallChunk_3: @ 0x08571994
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0180, 0x0180, 0x0000, 0x0000 @ AFFINE_FRAME(384, 384, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_IceBallChunk_4: @ 0x085719A4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x01C0, 0x01C0, 0x0000, 0x0000 @ AFFINE_FRAME(448, 448, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_IceBallChunk: @ 0x085719B4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_IceBallChunk_0 @ [0]
	.4byte sAffineAnim_IceBallChunk_1 @ [1]
	.4byte sAffineAnim_IceBallChunk_2 @ [2]
	.4byte sAffineAnim_IceBallChunk_3 @ [3]
	.4byte sAffineAnim_IceBallChunk_4 @ [4]

gIceBallChunkSpriteTemplate: @ 0x085719C8
	@ SpriteTemplate: tileTag=0x273B, paletteTag=0x273B
	.2byte 0x273B, 0x273B
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_IceBallChunk @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_IceBallChunk @ affineAnims
	.4byte InitIceBallAnim @ callback
gIceBallImpactShardSpriteTemplate: @ 0x085719E0
	@ SpriteTemplate: tileTag=0x279D, paletteTag=0x279D
	.2byte 0x279D, 0x279D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte sAnims_IceCrystalSmall @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte InitIceBallParticle @ callback
sUnusedHumanoidFootSpriteTemplate: @ 0x085719F8
	@ SpriteTemplate: tileTag=0x2742, paletteTag=0x2742
	.2byte 0x2742, 0x2742
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedHumanoidFoot @ callback
sAnim_HandsAndFeet_0: @ 0x08571A10
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_HandsAndFeet_0_2: @ 0x08571A18
	@ union AnimCmd stream
	.2byte 0x0010, 0x0001 @ ANIMCMD_FRAME(16, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_HandsAndFeet_1: @ 0x08571A20
	@ union AnimCmd stream
	.2byte 0x0020, 0x0001 @ ANIMCMD_FRAME(32, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_CrossChopHand_0: @ 0x08571A28
	@ union AnimCmd stream
	.2byte 0x0030, 0x0001 @ ANIMCMD_FRAME(48, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_CrossChopHand_1: @ 0x08571A30
	@ union AnimCmd stream
	.2byte 0x0030, 0x0041 @ ANIMCMD_FRAME(48, 65)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_HandsAndFeet: @ 0x08571A38
	@ AnimCmd pointer table
	.4byte sAnim_HandsAndFeet_0 @ [0]

sAnims_HandsAndFeet_2: @ 0x08571A3C
	@ AnimCmd pointer table
	.4byte sAnim_HandsAndFeet_0_2 @ [0]
	.4byte sAnim_HandsAndFeet_1 @ [1]

sAnims_CrossChopHand: @ 0x08571A44
	@ AnimCmd pointer table
	.4byte sAnim_CrossChopHand_0 @ [0]
	.4byte sAnim_CrossChopHand_1 @ [1]

sSlidingHandOrFootSpriteTemplate: @ 0x08571A4C
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_HandsAndFeet @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSlideHandOrFootToTarget @ callback (AnimSlideHandOrFootToTarget)

sJumpKickSpriteTemplate: @ 0x08571A64
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_HandsAndFeet @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimJumpKick @ callback (AnimJumpKick)

sBasicFistOrFootSpriteTemplate: @ 0x08571A7C
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_HandsAndFeet @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBasicFistOrFoot @ callback
sRandomFistOrFootSpriteTemplate: @ 0x08571A94
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_HandsAndFeet @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFistOrFootRandomPos @ callback (AnimFistOrFootRandomPos)

sCrossChopHandSpriteTemplate: @ 0x08571AAC
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_CrossChopHand @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimCrossChopHand @ callback (AnimCrossChopHand)

sSlidingKickSpriteTemplate: @ 0x08571AC4
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_HandsAndFeet_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSlidingKick @ callback (AnimSlidingKick)

sAffineAnim_SpinningKickOrPunch_0: @ 0x08571ADC
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0114, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_SpinningKickOrPunch: @ 0x08571AF4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_SpinningKickOrPunch_0 @ [0]

sSpinningKickOrPunchSpriteTemplate: @ 0x08571AF8
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_HandsAndFeet @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_SpinningKickOrPunch @ affineAnims
	.4byte AnimSpinningKickOrPunch @ callback
sAffineAnim_SpinningKickOrPunch_0_2: @ 0x08571B10
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFFC, 0xFFFC, 0x0114, 0x0000 @ AFFINE_FRAME(-4, -4, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_SpinningKickOrPunch_2: @ 0x08571B28
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_SpinningKickOrPunch_0_2 @ [0]

sSpinningKickOrPunchSpriteTemplate_2: @ 0x08571B2C
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_HandsAndFeet @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_SpinningKickOrPunch_2 @ affineAnims
	.4byte AnimSpinningKickOrPunch @ callback
sStompFootSpriteTemplate: @ 0x08571B44
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_HandsAndFeet_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimStompFoot @ callback
sDizzyPunchDuckSpriteTemplate: @ 0x08571B5C
	@ SpriteTemplate: tileTag=0x2759, paletteTag=0x2759
	.2byte 0x2759, 0x2759
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDizzyPunchDuck @ callback
sBrickBreakWallSpriteTemplate: @ 0x08571B74
	@ SpriteTemplate: tileTag=0x27B7, paletteTag=0x27B7
	.2byte 0x27B7, 0x27B7
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBrickBreakWall @ callback
sBrickBreakWallShardSpriteTemplate: @ 0x08571B8C
	@ SpriteTemplate: tileTag=0x27E0, paletteTag=0x27E0
	.2byte 0x27E0, 0x27E0
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBrickBreakWallShard @ callback
sAffineAnim_SuperpowerOrb_0: @ 0x08571BA4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0020, 0x0020, 0x0000, 0x0000 @ AFFINE_FRAME(32, 32, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x4000, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0xFFFA, 0xFFFA, 0x0800, 0x0000 @ AFFINE_FRAME(-6, -6, rot=0x00, duration=0)
	.2byte 0x0006, 0x0006, 0x0800, 0x0000 @ AFFINE_FRAME(6, 6, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0002, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(2)

sAffineAnims_SuperpowerOrb: @ 0x08571BCC
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_SuperpowerOrb_0 @ [0]

sSuperpowerOrbSpriteTemplate: @ 0x08571BD0
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD208 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_SuperpowerOrb @ affineAnims
	.4byte AnimSuperpowerOrb @ callback
sSuperpowerRockSpriteTemplate: @ 0x08571BE8
	@ SpriteTemplate: tileTag=0x2811, paletteTag=0x2811
	.2byte 0x2811, 0x2811
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSuperpowerRock @ callback
sSuperpowerFireballSpriteTemplate: @ 0x08571C00
	@ SpriteTemplate: tileTag=0x2810, paletteTag=0x2810
	.2byte 0x2810, 0x2810
	.4byte gOamData_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSuperpowerFireball @ callback
sArmThrustHitSpriteTemplate: @ 0x08571C18
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_HandsAndFeet @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimArmThrustHit @ callback (AnimArmThrustHit)

sAnim_RevengeScratch_0: @ 0x08571C30
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_RevengeScratch_1: @ 0x08571C40
	@ union AnimCmd stream
	.2byte 0x0000, 0x0084 @ ANIMCMD_FRAME(0, 132)
	.2byte 0x0010, 0x0084 @ ANIMCMD_FRAME(16, 132)
	.2byte 0x0020, 0x0084 @ ANIMCMD_FRAME(32, 132)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_RevengeScratch_2: @ 0x08571C50
	@ union AnimCmd stream
	.2byte 0x0000, 0x0044 @ ANIMCMD_FRAME(0, 68)
	.2byte 0x0010, 0x0044 @ ANIMCMD_FRAME(16, 68)
	.2byte 0x0020, 0x0044 @ ANIMCMD_FRAME(32, 68)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_RevengeScratch: @ 0x08571C60
	@ AnimCmd pointer table
	.4byte sAnim_RevengeScratch_0 @ [0]
	.4byte sAnim_RevengeScratch_1 @ [1]
	.4byte sAnim_RevengeScratch_2 @ [2]

sRevengeScratchSpriteTemplate: @ 0x08571C6C
	@ SpriteTemplate: tileTag=0x2805, paletteTag=0x2805
	.2byte 0x2805, 0x2805
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_RevengeScratch @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRevengeScratch @ callback
sAnim_RevengeScratch_0_2: @ 0x08571C84
	@ union AnimCmd stream
	.2byte 0x0000, 0x0006 @ ANIMCMD_FRAME(0, 6)
	.2byte 0x0040, 0x0006 @ ANIMCMD_FRAME(64, 6)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_RevengeScratch_1_2: @ 0x08571C90
	@ union AnimCmd stream
	.2byte 0x0000, 0x00C6 @ ANIMCMD_FRAME(0, 198)
	.2byte 0x0040, 0x00C6 @ ANIMCMD_FRAME(64, 198)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_RevengeScratch_2_2: @ 0x08571C9C
	@ union AnimCmd stream
	.2byte 0x0000, 0x0046 @ ANIMCMD_FRAME(0, 70)
	.2byte 0x0040, 0x0046 @ ANIMCMD_FRAME(64, 70)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_RevengeScratch_2: @ 0x08571CA8
	@ AnimCmd pointer table
	.4byte sAnim_RevengeScratch_0_2 @ [0]
	.4byte sAnim_RevengeScratch_1_2 @ [1]
	.4byte sAnim_RevengeScratch_2_2 @ [2]

sRevengeScratchSpriteTemplate_2: @ 0x08571CB4
	@ SpriteTemplate: tileTag=0x2806, paletteTag=0x2806
	.2byte 0x2806, 0x2806
	.4byte gOamData_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_RevengeScratch_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRevengeScratch @ callback
sAffineAnim_FocusPunchFist_0: @ 0x08571CCC
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0200, 0x0200, 0x0000, 0x0000 @ AFFINE_FRAME(512, 512, rot=0x00, duration=0)
	.2byte 0xFFE0, 0xFFE0, 0x0800, 0x0000 @ AFFINE_FRAME(-32, -32, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_FocusPunchFist: @ 0x08571CE4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_FocusPunchFist_0 @ [0]

sFocusPunchFistSpriteTemplate: @ 0x08571CE8
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_HandsAndFeet @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_FocusPunchFist @ affineAnims
	.4byte AnimFocusPunchFist @ callback (AnimFocusPunchFist)

sAnim_ToxicBubble: @ 0x08571D00
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0008, 0x0005 @ ANIMCMD_FRAME(8, 5)
	.2byte 0x0010, 0x0005 @ ANIMCMD_FRAME(16, 5)
	.2byte 0x0018, 0x0005 @ ANIMCMD_FRAME(24, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_ToxicBubble: @ 0x08571D14
	@ AnimCmd pointer table
	.4byte sAnim_ToxicBubble @ [0]

gToxicBubbleSpriteTemplate: @ 0x08571D18
	@ SpriteTemplate: tileTag=0x27A7, paletteTag=0x27A7
	.2byte 0x27A7, 0x27A7
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte sAnims_ToxicBubble @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSpriteOnMonPos @ callback
sAnim_PoisonProjectile: @ 0x08571D30
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_AcidPoisonDroplet: @ 0x08571D38
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_SludgeBombHit: @ 0x08571D40
	@ union AnimCmd stream
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_PoisonProjectile: @ 0x08571D48
	@ Canonical 3-entry AnimCmd pointer table.
	.4byte sAnim_PoisonProjectile @ [0]
	.4byte sAnim_AcidPoisonDroplet @ [1]
	.4byte sAnim_SludgeBombHit @ [2]

sAffineAnim_PoisonProjectile: @ 0x08571D54
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0160, 0x0160, 0x0000, 0x0000 @ AFFINE_FRAME(352, 352, rot=0x00, duration=0)
	.2byte 0xFFF6, 0xFFF6, 0x0A00, 0x0000 @ AFFINE_FRAME(-10, -10, rot=0x00, duration=0)
	.2byte 0x000A, 0x000A, 0x0A00, 0x0000 @ AFFINE_FRAME(10, 10, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnim_SludgeBombHit: @ 0x08571D74
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00EC, 0x00EC, 0x0000, 0x0000 @ AFFINE_FRAME(236, 236, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_PoisonProjectile: @ 0x08571D84
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_PoisonProjectile @ [0]

sAffineAnims_SludgeBombHit: @ 0x08571D88
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_SludgeBombHit @ [0]

gSludgeProjectileSpriteTemplate: @ 0x08571D8C
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_AffineDouble_ObjNormal_16x16 @ oam
	.4byte sAnims_PoisonProjectile @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_PoisonProjectile @ affineAnims
	.4byte AnimSludgeProjectile @ callback (AnimSludgeProjectile)

gAcidPoisonBubbleSpriteTemplate: @ 0x08571DA4
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_AffineDouble_ObjNormal_16x16 @ oam
	.4byte sAnims_PoisonProjectile @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_PoisonProjectile @ affineAnims
	.4byte AnimAcidPoisonBubble @ callback (AnimAcidPoisonBubble)

gSludgeBombHitParticleSpriteTemplate: @ 0x08571DBC
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte sAnims_PoisonProjectile + 8 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_SludgeBombHit @ affineAnims
	.4byte AnimSludgeBombHitParticle @ callback (AnimSludgeBombHitParticle)

sAffineAnim_AcidPoisonDroplet: @ 0x08571DD4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0xFFF0, 0x0010, 0x0600, 0x0000 @ AFFINE_FRAME(-16, 16, rot=0x00, duration=0)
	.2byte 0x0010, 0xFFF0, 0x0600, 0x0000 @ AFFINE_FRAME(16, -16, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

gAffineAnims_Droplet: @ 0x08571DEC
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_AcidPoisonDroplet @ [0]

gAcidPoisonDropletSpriteTemplate: @ 0x08571DF0
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_AffineDouble_ObjNormal_16x16 @ oam
	.4byte sAnims_PoisonProjectile + 4 @ anims
	.4byte 0 @ images
	.4byte gAffineAnims_Droplet @ affineAnims
	.4byte AnimAcidPoisonDroplet @ callback (AnimAcidPoisonDroplet)

sAffineAnim_Bubble: @ 0x08571E08
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x009C, 0x009C, 0x0000, 0x0000 @ AFFINE_FRAME(156, 156, rot=0x00, duration=0)
	.2byte 0x0005, 0x0005, 0x1400, 0x0000 @ AFFINE_FRAME(5, 5, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Bubble: @ 0x08571E20
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Bubble @ [0]

sBubbleEffectSpriteTemplate: @ 0x08571E24
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte sAnims_PoisonProjectile @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Bubble @ affineAnims
	.4byte AnimBubbleEffect @ callback
sBubbleEffectSpriteTemplate_2: @ 0x08571E3C
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_AffineOn_ObjBlend_8x8 @ oam
	.4byte gAnims_WaterBubble @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Bubble @ affineAnims
	.4byte AnimBubbleEffect @ callback
gEllipticalGustSpriteTemplate: @ 0x08571E54
	@ SpriteTemplate: tileTag=0x2719, paletteTag=0x2719
	.2byte 0x2719, 0x2719
	.4byte gOamData_AffineOff_ObjNormal_32x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimEllipticalGust @ callback (AnimEllipticalGust)

sAffineAnim_GustToTarget_0: @ 0x08571E6C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(16, 256, rot=0x00, duration=0)
	.2byte 0x000A, 0x0000, 0x1800, 0x0000 @ AFFINE_FRAME(10, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_GustToTarget: @ 0x08571E84
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_GustToTarget_0 @ [0]

sGustToTargetSpriteTemplate: @ 0x08571E88
	@ SpriteTemplate: tileTag=0x2719, paletteTag=0x2719
	.2byte 0x2719, 0x2719
	.4byte gBattleAnimOam_084FD0C8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_GustToTarget @ affineAnims
	.4byte AnimGustToTarget @ callback (AnimGustToTarget)

sAnim_AirWaveCrescent_0: @ 0x08571EA0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0000, 0x0043 @ ANIMCMD_FRAME(0, 67)
	.2byte 0x0000, 0x0083 @ ANIMCMD_FRAME(0, 131)
	.2byte 0x0000, 0x00C3 @ ANIMCMD_FRAME(0, 195)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_AirWaveCrescent: @ 0x08571EB4
	@ AnimCmd pointer table
	.4byte sAnim_AirWaveCrescent_0 @ [0]

sAirWaveCrescentSpriteTemplate: @ 0x08571EB8
	@ SpriteTemplate: tileTag=0x27AA, paletteTag=0x27AA
	.2byte 0x27AA, 0x27AA
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x16 @ oam
	.4byte sAnims_AirWaveCrescent @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimAirWaveCrescent @ callback
sAffineAnim_FlyBallUp_0: @ 0x08571ED0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(16, 256, rot=0x00, duration=0)
	.2byte 0x0028, 0x0000, 0x0600, 0x0000 @ AFFINE_FRAME(40, 0, rot=0x00, duration=0)
	.2byte 0x0000, 0xFFE0, 0x0500, 0x0000 @ AFFINE_FRAME(0, -32, rot=0x00, duration=0)
	.2byte 0xFFF0, 0x0020, 0x0A00, 0x0000 @ AFFINE_FRAME(-16, 32, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_FlyBallUp: @ 0x08571EF8
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_FlyBallUp_0 @ [0]

sAffineAnim_FlyBallAttack_0: @ 0x08571EFC
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0132, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_FlyBallAttack_1: @ 0x08571F0C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01D8, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_FlyBallAttack: @ 0x08571F1C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_FlyBallAttack_0 @ [0]
	.4byte sAffineAnim_FlyBallAttack_1 @ [1]

sFlyBallUpSpriteTemplate: @ 0x08571F24
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_FlyBallUp @ affineAnims
	.4byte AnimFlyBallUp @ callback (AnimFlyBallUp)

gFlyBallAttackSpriteTemplate: @ 0x08571F3C
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gOamData_AffineNormal_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_FlyBallAttack @ affineAnims
	.4byte AnimFlyBallAttack @ callback (AnimFlyBallAttack)

sAnim_FallingFeather_0: @ 0x08571F54
	@ union AnimCmd stream
	.2byte 0x0000, 0x0000 @ ANIMCMD_FRAME(0, 0)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_FallingFeather_1: @ 0x08571F5C
	@ union AnimCmd stream
	.2byte 0x0010, 0x0040 @ ANIMCMD_FRAME(16, 64)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_FallingFeather: @ 0x08571F64
	@ AnimCmd pointer table
	.4byte sAnim_FallingFeather_0 @ [0]
	.4byte sAnim_FallingFeather_1 @ [1]

sFallingFeatherSpriteTemplate: @ 0x08571F6C
	@ SpriteTemplate: tileTag=0x281E, paletteTag=0x281E
	.2byte 0x281E, 0x281E
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_FallingFeather @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFallingFeather @ callback
sUnusedBubbleThrowSpriteTemplate: @ 0x08571F84
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedBubbleThrow @ callback
sAnim_WhirlwindLine_0: @ 0x08571F9C
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0x0010, 0x0001 @ ANIMCMD_FRAME(16, 1)
	.2byte 0x0008, 0x0041 @ ANIMCMD_FRAME(8, 65)
	.2byte 0x0000, 0x0041 @ ANIMCMD_FRAME(0, 65)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_WhirlwindLine: @ 0x08571FB4
	@ AnimCmd pointer table
	.4byte sAnim_WhirlwindLine_0 @ [0]

sWhirlwindLineSpriteTemplate: @ 0x08571FB8
	@ SpriteTemplate: tileTag=0x27B2, paletteTag=0x27B2
	.2byte 0x27B2, 0x27B2
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x16 @ oam
	.4byte sAnims_WhirlwindLine @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWhirlwindLine @ callback
sAffineAnim_BounceBallShrink_0: @ 0x08571FD0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(16, 256, rot=0x00, duration=0)
	.2byte 0x0028, 0x0000, 0x0600, 0x0000 @ AFFINE_FRAME(40, 0, rot=0x00, duration=0)
	.2byte 0x0000, 0xFFE0, 0x0500, 0x0000 @ AFFINE_FRAME(0, -32, rot=0x00, duration=0)
	.2byte 0xFFEC, 0x0000, 0x0700, 0x0000 @ AFFINE_FRAME(-20, 0, rot=0x00, duration=0)
	.2byte 0xFFEC, 0xFFEC, 0x0500, 0x0000 @ AFFINE_FRAME(-20, -20, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_BounceBallShrink: @ 0x08572000
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_BounceBallShrink_0 @ [0]

sBounceBallShrinkSpriteTemplate: @ 0x08572004
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_BounceBallShrink @ affineAnims
	.4byte AnimBounceBallShrink @ callback (AnimBounceBallShrink)

sAffineAnim_BounceBallLand_0: @ 0x0857201C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00A0, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(160, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_BounceBallLand: @ 0x0857202C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_BounceBallLand_0 @ [0]

sBounceBallLandSpriteTemplate: @ 0x08572030
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_BounceBallLand @ affineAnims
	.4byte AnimBounceBallLand @ callback (AnimBounceBallLand)

sAffineAnim_DiveBall_0: @ 0x08572048
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(16, 256, rot=0x00, duration=0)
	.2byte 0x0028, 0x0000, 0x0600, 0x0000 @ AFFINE_FRAME(40, 0, rot=0x00, duration=0)
	.2byte 0x0000, 0xFFE0, 0x0500, 0x0000 @ AFFINE_FRAME(0, -32, rot=0x00, duration=0)
	.2byte 0xFFF0, 0x0020, 0x0A00, 0x0000 @ AFFINE_FRAME(-16, 32, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_DiveBall: @ 0x08572070
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_DiveBall_0 @ [0]

sDiveBallSpriteTemplate: @ 0x08572074
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_DiveBall @ affineAnims
	.4byte AnimDiveBall @ callback (AnimDiveBall)

	@ semanticized v110: canonical static data at 0x0857208C, size=0x24
sAffineAnim_UnusedFlyBallStretch:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x0100, 0x0000
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(256, 0, 0, 0)
	.2byte 0x0000, 0x0020
	.byte 0x00, 0x0C
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 32, 0, 12)
	.2byte 0x0000, 0xFFE0
	.byte 0x00, 0x0B
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, -32, 0, 11)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END
sAffineAnims_UnusedFlyBallStretch: @ 0x085720AC
	.4byte sAffineAnim_UnusedFlyBallStretch

gDiveWaterSplashSpriteTemplate:
	@ SpriteTemplate: tileTag=0x2820, paletteTag=0x2820
	.2byte 0x2820, 0x2820
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDiveWaterSplash @ callback
sSprayWaterDropletSpriteTemplate: @ 0x085720C8
	@ SpriteTemplate: tileTag=0x2821, paletteTag=0x2821
	.2byte 0x2821, 0x2821
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSprayWaterDroplet @ callback
sUnusedFlashingLightSpriteTemplate: @ 0x085720E0
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedFlashingLight @ callback
sSkyAttackBirdSpriteTemplate: @ 0x085720F8
	@ SpriteTemplate: tileTag=0x282C, paletteTag=0x282C
	.2byte 0x282C, 0x282C
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSkyAttackBird @ callback
sAffineAnim_Spiral_0: @ 0x08572110
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFFE, 0xFFFE, 0x78F6, 0x0000 @ AFFINE_FRAME(-2, -2, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Spiral: @ 0x08572128
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Spiral_0 @ [0]

sSpiralSpriteTemplate: @ 0x0857212C
	@ SpriteTemplate: tileTag=0x27D4, paletteTag=0x27D4
	.2byte 0x27D4, 0x27D4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Spiral @ affineAnims
	.4byte AnimSpriteOnMonPos @ callback
sDefensiveWallSpriteTemplate: @ 0x08572144
	@ SpriteTemplate: tileTag=0x27B6, paletteTag=0x27B6
	.2byte 0x27B6, 0x27B6
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sDefensiveWallSpriteTemplate_2: @ 0x0857215C
	@ SpriteTemplate: tileTag=0x27B7, paletteTag=0x27B7
	.2byte 0x27B7, 0x27B7
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sDefensiveWallSpriteTemplate_3: @ 0x08572174
	@ SpriteTemplate: tileTag=0x27B8, paletteTag=0x27B8
	.2byte 0x27B8, 0x27B8
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sDefensiveWallSpriteTemplate_4: @ 0x0857218C
	@ SpriteTemplate: tileTag=0x27B9, paletteTag=0x27B9
	.2byte 0x27B9, 0x27B9
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sDefensiveWallSpriteTemplate_5: @ 0x085721A4
	@ SpriteTemplate: tileTag=0x27BA, paletteTag=0x27BA
	.2byte 0x27BA, 0x27BA
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sAnim_WallSparkle_0: @ 0x085721BC
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0x0040, 0x0003 @ ANIMCMD_FRAME(64, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_WallSparkle: @ 0x085721D4
	@ AnimCmd pointer table
	.4byte sAnim_WallSparkle_0 @ [0]

sWallSparkleSpriteTemplate: @ 0x085721D8
	@ SpriteTemplate: tileTag=0x2757, paletteTag=0x2757
	.2byte 0x2757, 0x2757
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_WallSparkle @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWallSparkle @ callback
sAnim_WallSparkle_0_2: @ 0x085721F0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0004, 0x0005 @ ANIMCMD_FRAME(4, 5)
	.2byte 0x0008, 0x0005 @ ANIMCMD_FRAME(8, 5)
	.2byte 0x000C, 0x0005 @ ANIMCMD_FRAME(12, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_WallSparkle_2: @ 0x08572204
	@ AnimCmd pointer table
	.4byte sAnim_WallSparkle_0_2 @ [0]

sWallSparkleSpriteTemplate_2: @ 0x08572208
	@ SpriteTemplate: tileTag=0x2756, paletteTag=0x2756
	.2byte 0x2756, 0x2756
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte sAnims_WallSparkle_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWallSparkle @ callback
sTranslateAnimSpriteToTargetMonLocationSpriteTemplate_2: @ 0x08572220
	@ SpriteTemplate: tileTag=0x27B3, paletteTag=0x27B3
	.2byte 0x27B3, 0x27B3
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte TranslateAnimSpriteToTargetMonLocation @ callback
sAnim_BentSpoon_0: @ 0x08572238
	@ union AnimCmd stream
	.2byte 0x0008, 0x007C @ ANIMCMD_FRAME(8, 124)
	.2byte 0x0010, 0x0045 @ ANIMCMD_FRAME(16, 69)
	.2byte 0x0008, 0x0045 @ ANIMCMD_FRAME(8, 69)
	.2byte 0x0000, 0x0045 @ ANIMCMD_FRAME(0, 69)
	.2byte 0x0008, 0x0056 @ ANIMCMD_FRAME(8, 86)
	.2byte 0xFFFD, 0x0000 @ ANIMCMD_LOOP(0)
	.2byte 0x0010, 0x0045 @ ANIMCMD_FRAME(16, 69)
	.2byte 0x0008, 0x0045 @ ANIMCMD_FRAME(8, 69)
	.2byte 0x0000, 0x0045 @ ANIMCMD_FRAME(0, 69)
	.2byte 0x0008, 0x0045 @ ANIMCMD_FRAME(8, 69)
	.2byte 0xFFFD, 0x0001 @ ANIMCMD_LOOP(1)
	.2byte 0x0008, 0x0056 @ ANIMCMD_FRAME(8, 86)
	.2byte 0x0018, 0x0043 @ ANIMCMD_FRAME(24, 67)
	.2byte 0x0020, 0x0043 @ ANIMCMD_FRAME(32, 67)
	.2byte 0x0028, 0x0056 @ ANIMCMD_FRAME(40, 86)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_BentSpoon_1: @ 0x08572278
	@ union AnimCmd stream
	.2byte 0x0008, 0x003C @ ANIMCMD_FRAME(8, 60)
	.2byte 0x0010, 0x0005 @ ANIMCMD_FRAME(16, 5)
	.2byte 0x0008, 0x0005 @ ANIMCMD_FRAME(8, 5)
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0008, 0x0016 @ ANIMCMD_FRAME(8, 22)
	.2byte 0xFFFD, 0x0000 @ ANIMCMD_LOOP(0)
	.2byte 0x0010, 0x0005 @ ANIMCMD_FRAME(16, 5)
	.2byte 0x0008, 0x0005 @ ANIMCMD_FRAME(8, 5)
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0008, 0x0005 @ ANIMCMD_FRAME(8, 5)
	.2byte 0xFFFD, 0x0001 @ ANIMCMD_LOOP(1)
	.2byte 0x0008, 0x0016 @ ANIMCMD_FRAME(8, 22)
	.2byte 0x0018, 0x0003 @ ANIMCMD_FRAME(24, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0028, 0x0016 @ ANIMCMD_FRAME(40, 22)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_BentSpoon: @ 0x085722B8
	@ AnimCmd pointer table
	.4byte sAnim_BentSpoon_0 @ [0]
	.4byte sAnim_BentSpoon_1 @ [1]

sBentSpoonSpriteTemplate: @ 0x085722C0
	@ SpriteTemplate: tileTag=0x2771, paletteTag=0x2771
	.2byte 0x2771, 0x2771
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte sAnims_BentSpoon @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBentSpoon @ callback
sAnim_QuestionMark_0: @ 0x085722D8
	@ union AnimCmd stream
	.2byte 0x0000, 0x0006 @ ANIMCMD_FRAME(0, 6)
	.2byte 0x0010, 0x0006 @ ANIMCMD_FRAME(16, 6)
	.2byte 0x0020, 0x0006 @ ANIMCMD_FRAME(32, 6)
	.2byte 0x0030, 0x0006 @ ANIMCMD_FRAME(48, 6)
	.2byte 0x0040, 0x0006 @ ANIMCMD_FRAME(64, 6)
	.2byte 0x0050, 0x0006 @ ANIMCMD_FRAME(80, 6)
	.2byte 0x0060, 0x0012 @ ANIMCMD_FRAME(96, 18)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_QuestionMark: @ 0x085722F8
	@ AnimCmd pointer table
	.4byte sAnim_QuestionMark_0 @ [0]

	@ semanticized v110: canonical static data at 0x085722FC, size=0x28
sAffineAnim_QuestionMark:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x0000, 0x0000
	.byte 0x04, 0x04
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 4, 4)
	.2byte 0x0000, 0x0000
	.byte 0xFC, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, -4, 8)
	.2byte 0x0000, 0x0000
	.byte 0x04, 0x04
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 4, 4)
	.2byte 0x7FFD, 0x0002, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(2)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	.if (. - .LIceBattleAnimSectionBoundary) != 0xAE4
	.error "semantic range 0x08571840 size mismatch"
	.endif
	@ semantic battle-animation reconstruction: psychic
	@ ROM range 0x08572324-0x085727A3
.LPsychicBattleAnimSectionStart:
	@ semanticized v110: canonical static data at 0x08572324, size=0x4
	.globl sAffineAnims_QuestionMark
sAffineAnims_QuestionMark:
	.4byte sAffineAnim_QuestionMark

gQuestionMarkSpriteTemplate:
	@ SpriteTemplate: tileTag=0x276D, paletteTag=0x276D
	.2byte 0x276D, 0x276D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_QuestionMark @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimQuestionMark @ callback
	@ semanticized v110: canonical static data at 0x08572340, size=0x20
	.globl sAffineAnim_MeditateStretchAttacker
sAffineAnim_MeditateStretchAttacker:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0xFFF8, 0x000A
	.byte 0x00, 0x10
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(-8, 10, 0, 16)
	.2byte 0x0012, 0xFFEE
	.byte 0x00, 0x10
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(18, -18, 0, 16)
	.2byte 0xFFEC, 0x0010
	.byte 0x00, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(-20, 16, 0, 8)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END
	@ semanticized v110: canonical static data at 0x08572360, size=0x18
	.globl sAffineAnim_Teleport
sAffineAnim_Teleport:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x0040, 0xFFFC
	.byte 0x00, 0x14
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(64, -4, 0, 20)
	.2byte 0x0000, 0x0000
	.byte 0x00, 0xC8
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, -56)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	.globl gImprisonOrbSpriteTemplate
gImprisonOrbSpriteTemplate: @ 0x08572378
	@ SpriteTemplate: tileTag=0x2809, paletteTag=0x2809
	.2byte 0x2809, 0x2809
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte gPriorityABattleAnimSpriteCallbackDummy @ callback (SpriteCallbackDummy)

sRedXSpriteTemplate: @ 0x08572390
	@ SpriteTemplate: tileTag=0x280A, paletteTag=0x280A
	.2byte 0x280A, 0x280A
	.4byte gOamData_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRedX @ callback
sAffineAnim_SkillSwapOrb_0: @ 0x085723A8
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0xFFF8, 0xFFF8, 0x0800, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0800, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnim_SkillSwapOrb_1: @ 0x085723C0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00F0, 0x00F0, 0x0000, 0x0000 @ AFFINE_FRAME(240, 240, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0600, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0800, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0200, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnim_SkillSwapOrb_2: @ 0x085723E8
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00D0, 0x00D0, 0x0000, 0x0000 @ AFFINE_FRAME(208, 208, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0400, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0800, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0400, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnim_SkillSwapOrb_3: @ 0x08572410
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00B0, 0x00B0, 0x0000, 0x0000 @ AFFINE_FRAME(176, 176, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0200, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0800, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0600, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_SkillSwapOrb: @ 0x08572438
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_SkillSwapOrb_0 @ [0]
	.4byte sAffineAnim_SkillSwapOrb_1 @ [1]
	.4byte sAffineAnim_SkillSwapOrb_2 @ [2]
	.4byte sAffineAnim_SkillSwapOrb_3 @ [3]

	.globl gSkillSwapOrbSpriteTemplate
gSkillSwapOrbSpriteTemplate: @ 0x08572448
	@ SpriteTemplate: tileTag=0x280B, paletteTag=0x280B
	.2byte 0x280B, 0x280B
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_SkillSwapOrb @ affineAnims
	.4byte AnimSkillSwapOrb @ callback
sAffineAnim_WhiteCircleOfLight_0: @ 0x08572460
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0020, 0x0020, 0x0000, 0x0000 @ AFFINE_FRAME(32, 32, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x7800, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_WhiteCircleOfLight: @ 0x08572478
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_WhiteCircleOfLight_0 @ [0]

sWhiteCircleOfLightSpriteTemplate: @ 0x0857247C
	@ SpriteTemplate: tileTag=0x281B, paletteTag=0x281B
	.2byte 0x281B, 0x281B
	.4byte gBattleAnimOam_084FD208 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_WhiteCircleOfLight @ affineAnims
	.4byte AnimSpriteOnMonPos @ callback
sAffineAnim_PsychoBoost_0: @ 0x08572494
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0020, 0x0020, 0x0000, 0x0000 @ AFFINE_FRAME(32, 32, rot=0x00, duration=0)
	.2byte 0x0010, 0x0010, 0x1100, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(0)
	.2byte 0xFFF8, 0xFFF8, 0x0A00, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0A00, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0004, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(4)
	.2byte 0x7FFD, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(0)
	.2byte 0xFFF0, 0xFFF0, 0x0500, 0x0000 @ AFFINE_FRAME(-16, -16, rot=0x00, duration=0)
	.2byte 0x0010, 0x0010, 0x0500, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0007, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(7)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_PsychoBoost_1: @ 0x085724EC
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0xFFEC, 0x0018, 0x0F00, 0x0000 @ AFFINE_FRAME(-20, 24, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_PsychoBoost: @ 0x085724FC
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_PsychoBoost_0 @ [0]
	.4byte sAffineAnim_PsychoBoost_1 @ [1]

sPsychoBoostSpriteTemplate: @ 0x08572504
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD208 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_PsychoBoost @ affineAnims
	.4byte AnimPsychoBoost @ callback
sAffineAnim_MegahornHorn_0: @ 0x0857251C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x001E, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_MegahornHorn_1: @ 0x0857252C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x009D, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_MegahornHorn_2: @ 0x0857253C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x005E, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_MegahornHorn: @ 0x0857254C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_MegahornHorn_0 @ [0]
	.4byte sAffineAnim_MegahornHorn_1 @ [1]
	.4byte sAffineAnim_MegahornHorn_2 @ [2]

sMegahornHornSpriteTemplate: @ 0x08572558
	@ SpriteTemplate: tileTag=0x27A9, paletteTag=0x27A9
	.2byte 0x27A9, 0x27A9
	.4byte gOamData_AffineDouble_ObjNormal_32x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_MegahornHorn @ affineAnims
	.4byte AnimMegahornHorn @ callback
sAffineAnim_LeechLifeNeedle_0: @ 0x08572570
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01DF, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_LeechLifeNeedle_1: @ 0x08572580
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0160, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_LeechLifeNeedle_2: @ 0x08572590
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01A0, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_LeechLifeNeedle: @ 0x085725A0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_LeechLifeNeedle_0 @ [0]
	.4byte sAffineAnim_LeechLifeNeedle_1 @ [1]
	.4byte sAffineAnim_LeechLifeNeedle_2 @ [2]

sLeechLifeNeedleSpriteTemplate: @ 0x085725AC
	@ SpriteTemplate: tileTag=0x27B1, paletteTag=0x27B1
	.2byte 0x27B1, 0x27B1
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_LeechLifeNeedle @ affineAnims
	.4byte AnimLeechLifeNeedle @ callback (AnimLeechLifeNeedle)

sTranslateWebThreadSpriteTemplate: @ 0x085725C4
	@ SpriteTemplate: tileTag=0x27C4, paletteTag=0x27C4
	.2byte 0x27C4, 0x27C4
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimTranslateWebThread @ callback
sStringWrapSpriteTemplate: @ 0x085725DC
	@ SpriteTemplate: tileTag=0x27C3, paletteTag=0x27C3
	.2byte 0x27C3, 0x27C3
	.4byte gOamData_AffineOff_ObjNormal_64x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimStringWrap @ callback
sAffineAnim_SpiderWeb_0: @ 0x085725F4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0006, 0x0006, 0x0100, 0x0000 @ AFFINE_FRAME(6, 6, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_SpiderWeb: @ 0x0857260C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_SpiderWeb_0 @ [0]

sSpiderWebSpriteTemplate: @ 0x08572610
	@ SpriteTemplate: tileTag=0x27C5, paletteTag=0x27C5
	.2byte 0x27C5, 0x27C5
	.4byte gBattleAnimOam_084FD208 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_SpiderWeb @ affineAnims
	.4byte AnimSpiderWeb @ callback
sTranslateStingerSpriteTemplate: @ 0x08572628
	@ SpriteTemplate: tileTag=0x27B1, paletteTag=0x27B1
	.2byte 0x27B1, 0x27B1
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimTranslateStinger @ callback
sMissileArcSpriteTemplate: @ 0x08572640
	@ SpriteTemplate: tileTag=0x27B1, paletteTag=0x27B1
	.2byte 0x27B1, 0x27B1
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimMissileArc @ callback
sMissileArcSpriteTemplate_2: @ 0x08572658
	@ SpriteTemplate: tileTag=0x2816, paletteTag=0x2816
	.2byte 0x2816, 0x2816
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimMissileArc @ callback
sAffineAnim_TailGlowOrb_0: @ 0x08572670
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x1200, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(0)
	.2byte 0xFFFB, 0xFFFB, 0x0800, 0x0000 @ AFFINE_FRAME(-5, -5, rot=0x00, duration=0)
	.2byte 0x0005, 0x0005, 0x0800, 0x0000 @ AFFINE_FRAME(5, 5, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0005, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(5)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_TailGlowOrb: @ 0x085726A8
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_TailGlowOrb_0 @ [0]

sTailGlowOrbSpriteTemplate: @ 0x085726AC
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_TailGlowOrb @ affineAnims
	.4byte AnimTailGlowOrb @ callback
sAnim_Rocks_0: @ 0x085726C4
	@ union AnimCmd stream
	.2byte 0x0020, 0x0001 @ ANIMCMD_FRAME(32, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Rocks_1: @ 0x085726CC
	@ union AnimCmd stream
	.2byte 0x0030, 0x0001 @ ANIMCMD_FRAME(48, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Rocks_2: @ 0x085726D4
	@ union AnimCmd stream
	.2byte 0x0040, 0x0001 @ ANIMCMD_FRAME(64, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Rocks: @ 0x085726DC
	@ AnimCmd pointer table
	.4byte sAnim_Rocks_0 @ [0]
	.4byte sAnim_Rocks_1 @ [1]
	.4byte sAnim_Rocks_2 @ [2]

sFallingRockSpriteTemplate: @ 0x085726E8
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Rocks @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFallingRock @ callback (AnimFallingRock)

sRockFragmentSpriteTemplate: @ 0x08572700
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Rocks @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRockFragment @ callback (AnimRockFragment)

sParticleInVortexSpriteTemplate: @ 0x08572718
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimParticleInVortex @ callback (AnimParticleInVortex)

sAffineAnim_ParticleInVortex_0: @ 0x08572730
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00C0, 0x00C0, 0x0000, 0x0000 @ AFFINE_FRAME(192, 192, rot=0x00, duration=0)
	.2byte 0x0002, 0xFFFD, 0x0500, 0x0000 @ AFFINE_FRAME(2, -3, rot=0x00, duration=0)
	.2byte 0xFFFE, 0x0003, 0x0500, 0x0000 @ AFFINE_FRAME(-2, 3, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_ParticleInVortex: @ 0x08572750
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_ParticleInVortex_0 @ [0]

sParticleInVortexSpriteTemplate_2: @ 0x08572754
	@ SpriteTemplate: tileTag=0x27A5, paletteTag=0x27A5
	.2byte 0x27A5, 0x27A5
	.4byte gBattleAnimOam_AffineOn_ObjBlend_8x8 @ oam
	.4byte gAnims_WaterMudOrb @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_ParticleInVortex @ affineAnims
	.4byte AnimParticleInVortex @ callback (AnimParticleInVortex)

sParticleInVortexSpriteTemplate_3: @ 0x0857276C
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimParticleInVortex @ callback (AnimParticleInVortex)

sDirtParticleAcrossScreenSpriteTemplate: @ 0x08572784
	@ SpriteTemplate: tileTag=0x2815, paletteTag=0x2815
	.2byte 0x2815, 0x2815
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDirtParticleAcrossScreen @ callback
	@ semanticized v110: canonical static data at 0x0857279C, size=0x8
sFlyingSandSubsprites:
	.byte 0xF0, 0x00
	.2byte 0x4009 @ x=-16, y=0, 32x16, tileOffset=0, priority=1
	.byte 0x10, 0x00
	.2byte 0x4089 @ x=16,  y=0, 32x16, tileOffset=8, priority=1

	.if (. - .LPsychicBattleAnimSectionStart) != 0x480
	.error "semantic range 0x08572324 size mismatch"
	.endif
	@ semantic battle-animation reconstruction: rock_a
	@ ROM range 0x085727A4-0x085727F3
.LRockBattleAnimSectionStart:
	@ semanticized v110: canonical static data at 0x085727A4, size=0x8
	.globl sFlyingSandSubspriteTable
sFlyingSandSubspriteTable:
	.byte 2, 0, 0, 0 @ subspriteCount + ABI padding
	.4byte sFlyingSandSubsprites

sAnim_Rock_Biggest: @ 0x085727AC
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Rock_Bigger: @ 0x085727B4
	@ union AnimCmd stream
	.2byte 0x0010, 0x0001 @ ANIMCMD_FRAME(16, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Rock_Big: @ 0x085727BC
	@ union AnimCmd stream
	.2byte 0x0020, 0x0001 @ ANIMCMD_FRAME(32, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Rock_Small: @ 0x085727C4
	@ union AnimCmd stream
	.2byte 0x0030, 0x0001 @ ANIMCMD_FRAME(48, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Rock_Smaller: @ 0x085727CC
	@ union AnimCmd stream
	.2byte 0x0040, 0x0001 @ ANIMCMD_FRAME(64, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Rock_Smallest: @ 0x085727D4
	@ union AnimCmd stream
	.2byte 0x0050, 0x0001 @ ANIMCMD_FRAME(80, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_BasicRock: @ 0x085727DC
	@ AnimCmd pointer table
	.4byte sAnim_Rock_Biggest @ [0]
	.4byte sAnim_Rock_Bigger @ [1]

sAnims_WeatherBallIceDown_2: @ 0x085727E4
	@ AnimCmd pointer table
	.4byte sAnim_Rock_Big @ [0]
	.4byte sAnim_Rock_Small @ [1]

sAnims_MoveTwisterParticle: @ 0x085727EC
	@ AnimCmd pointer table
	.4byte sAnim_Rock_Smaller @ [0]
	.4byte sAnim_Rock_Smallest @ [1]

	.if (. - .LRockBattleAnimSectionStart) != 0x50
	.error "semantic range 0x085727A4 size mismatch"
	.endif
	.globl gAncientPowerRockSpriteTemplateSpriteTemplate
gAncientPowerRockSpriteTemplateSpriteTemplate:
	@ analyzed canonical ROM range 0x085727F4-0x0857280B
	.globl gAncientPowerRockSpriteTemplate
gAncientPowerRockSpriteTemplate: @ 0x085727F4
	rodata_sprite_template 0x274A, 0x274A, gOamData_AffineOff_ObjNormal_32x32, sAnims_BasicRock, 0, gDummySpriteAffineAnimTable, AnimRaiseSprite
