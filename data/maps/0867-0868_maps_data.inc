	@ pret/pokeemerald-jp direct xref for 0x08570C04: water.s: AnimTask_CreateRaindrops
	@ semantic battle-animation reconstruction: water
	@ ROM range 0x08570C04-0x08571197
.LFireBattleAnimSectionStart:
	.globl gRainDropSpriteTemplate
gRainDropSpriteTemplate: @ 0x08570C04
	@ SpriteTemplate: tileTag=0x2783, paletteTag=0x2783
	.2byte 0x2783, 0x2783
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte sAnims_RainDrop @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRainDrop @ callback
	.globl gBubbleAffineAnim
gBubbleAffineAnim: @ 0x08570C1C
	@ union AffineAnimCmd stream
	.2byte 0xFFFB, 0xFFFB, 0x0A00, 0x0000 @ AFFINE_FRAME(-5, -5, rot=0x00, duration=0)
	.2byte 0x0005, 0x0005, 0x0A00, 0x0000 @ AFFINE_FRAME(5, 5, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

	.globl gBubbleAffineAnims
gBubbleAffineAnims: @ 0x08570C34
	@ AffineAnimCmd pointer table
	.4byte gBubbleAffineAnim @ [0]

	.globl gBubbleAnim
gBubbleAnim: @ 0x08570C38
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0x0004, 0x0005 @ ANIMCMD_FRAME(4, 5)
	.2byte 0x0008, 0x0005 @ ANIMCMD_FRAME(8, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

	.globl gBubbleAnims
gBubbleAnims: @ 0x08570C48
	@ AnimCmd pointer table
	.4byte gBubbleAnim @ [0]

	.globl gBubbleSpriteTemplate
gBubbleSpriteTemplate: @ 0x08570C4C
gWaterBubbleProjectileSpriteTemplate: @ 0x08570C4C
	@ SpriteTemplate: tileTag=0x27A2, paletteTag=0x27A2
	.2byte 0x27A2, 0x27A2
	.4byte gBattleAnimOam_AffineOn_ObjBlend_8x8 @ oam
	.4byte gBubbleAnims @ anims
	.4byte 0 @ images
	.4byte gBubbleAffineAnims @ affineAnims
	.4byte AnimWaterBubbleProjectile @ callback
sAnim_AuroraBeamRing_0: @ 0x08570C64
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_AuroraBeamRing_1: @ 0x08570C6C
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_AuroraBeamRing: @ 0x08570C74
	@ AnimCmd pointer table
	.4byte sAnim_AuroraBeamRing_0 @ [0]
	.4byte sAnim_AuroraBeamRing_1 @ [1]

sAffineAnim_AuroraBeamRing: @ 0x08570C7C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0100, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x0060, 0x0060, 0x0100, 0x0000 @ AFFINE_FRAME(96, 96, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_AuroraBeamRing: @ 0x08570C94
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_AuroraBeamRing @ [0]

gAuroraBeamRingSpriteTemplate: @ 0x08570C98
	@ SpriteTemplate: tileTag=0x279C, paletteTag=0x279C
	.2byte 0x279C, 0x279C
	.4byte gOamData_AffineDouble_ObjNormal_8x16 @ oam
	.4byte sAnims_AuroraBeamRing @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_AuroraBeamRing @ affineAnims
	.4byte AnimAuroraBeamRings @ callback
sAnim_WaterMudOrb: @ 0x08570CB0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0x000C, 0x0001 @ ANIMCMD_FRAME(12, 1)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

gAnims_WaterMudOrb: @ 0x08570CC4
	@ AnimCmd pointer table
	.4byte sAnim_WaterMudOrb @ [0]

gHydroPumpOrbSpriteTemplate: @ 0x08570CC8
	@ SpriteTemplate: tileTag=0x27A5, paletteTag=0x27A5
	.2byte 0x27A5, 0x27A5
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte gAnims_WaterMudOrb @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimToTargetInSinWave @ callback
gMudShotOrbSpriteTemplate: @ 0x08570CE0
	@ SpriteTemplate: tileTag=0x2813, paletteTag=0x2813
	.2byte 0x2813, 0x2813
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte gAnims_WaterMudOrb @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimToTargetInSinWave @ callback
gSignalBeamRedOrbSpriteTemplate: @ 0x08570CF8
	@ SpriteTemplate: tileTag=0x2818, paletteTag=0x2818
	.2byte 0x2818, 0x2818
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimToTargetInSinWave @ callback
gSignalBeamGreenOrbSpriteTemplate: @ 0x08570D10
	@ SpriteTemplate: tileTag=0x2819, paletteTag=0x2819
	.2byte 0x2819, 0x2819
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimToTargetInSinWave @ callback
sAnim_FlamethrowerFlame: @ 0x08570D28
	@ union AnimCmd stream
	.2byte 0x0010, 0x0002 @ ANIMCMD_FRAME(16, 2)
	.2byte 0x0020, 0x0002 @ ANIMCMD_FRAME(32, 2)
	.2byte 0x0030, 0x0002 @ ANIMCMD_FRAME(48, 2)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_FlamethrowerFlame: @ 0x08570D38
	@ AnimCmd pointer table
	.4byte sAnim_FlamethrowerFlame @ [0]

gFlamethrowerFlameSpriteTemplate: @ 0x08570D3C
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_FlamethrowerFlame @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimToTargetInSinWave @ callback
gPsywaveRingSpriteTemplate: @ 0x08570D54
	@ SpriteTemplate: tileTag=0x27B5, paletteTag=0x27B5
	.2byte 0x27B5, 0x27B5
	.4byte gBattleAnimOam_084FD120 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gSoundWaveAffineAnims @ affineAnims
	.4byte AnimToTargetInSinWave @ callback
sAffineAnim_HydroCannonCharge: @ 0x08570D6C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0003, 0x0003, 0x320A, 0x0000 @ AFFINE_FRAME(3, 3, rot=0x00, duration=0)
	.2byte 0x0000, 0x0000, 0x0A00, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0xFFEC, 0xFFEC, 0x14F6, 0x0000 @ AFFINE_FRAME(-20, -20, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_HydroCannonBeam: @ 0x08570D8C
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0150, 0x0150, 0x0000, 0x0000 @ AFFINE_FRAME(336, 336, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_HydroCannonCharge: @ 0x08570D9C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_HydroCannonCharge @ [0]

sAffineAnims_HydroCannonBeam: @ 0x08570DA0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_HydroCannonBeam @ [0]

gHydroCannonChargeSpriteTemplate: @ 0x08570DA4
	@ SpriteTemplate: tileTag=0x27A5, paletteTag=0x27A5
	.2byte 0x27A5, 0x27A5
	.4byte gOamData_AffineDouble_ObjBlend_16x16 @ oam
	.4byte gAnims_WaterMudOrb @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_HydroCannonCharge @ affineAnims
	.4byte AnimHydroCannonCharge @ callback
gHydroCannonBeamSpriteTemplate: @ 0x08570DBC
	@ SpriteTemplate: tileTag=0x27A5, paletteTag=0x27A5
	.2byte 0x27A5, 0x27A5
	.4byte gOamData_AffineDouble_ObjBlend_16x16 @ oam
	.4byte gAnims_WaterMudOrb @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_HydroCannonBeam @ affineAnims
	.4byte AnimHydroCannonBeam @ callback
sAnim_WaterBubble: @ 0x08570DD4
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_WaterGunDroplet: @ 0x08570DDC
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

gAnims_WaterBubble: @ 0x08570DE4
	@ AnimCmd pointer table
	.4byte sAnim_WaterBubble @ [0]

sAnims_WaterGunDroplet: @ 0x08570DE8
	@ AnimCmd pointer table
	.4byte sAnim_WaterGunDroplet @ [0]

gWaterGunProjectileSpriteTemplate: @ 0x08570DEC
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte gAnims_WaterBubble @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimThrowProjectile @ callback
gWaterGunDropletSpriteTemplate: @ 0x08570E04
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gOamData_AffineDouble_ObjBlend_16x16 @ oam
	.4byte sAnims_WaterGunDroplet @ anims
	.4byte 0 @ images
	.4byte gAffineAnims_Droplet @ affineAnims
	.4byte AnimWaterGunDroplet @ callback
gSmallBubblePairSpriteTemplate: @ 0x08570E1C
	@ SpriteTemplate: tileTag=0x279D, paletteTag=0x279D
	.2byte 0x279D, 0x279D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gAnims_SmallBubblePair @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSmallBubblePair @ callback
gSmallDriftingBubblesSpriteTemplate: @ 0x08570E34
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSmallDriftingBubbles @ callback
	.globl gSmallWaterOrbSpriteTemplate
gSmallWaterOrbSpriteTemplate: @ 0x08570E4C
	@ SpriteTemplate: tileTag=0x281C, paletteTag=0x281C
	.2byte 0x281C, 0x281C
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSmallWaterOrb @ callback
sAnim_WaterPulseBubble_0: @ 0x08570E64
	@ union AnimCmd stream
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_WaterPulseBubble_1: @ 0x08570E6C
	@ union AnimCmd stream
	.2byte 0x0009, 0x0001 @ ANIMCMD_FRAME(9, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_WeatherBallIceDown_0: @ 0x08570E74
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_WaterPulseBubble: @ 0x08570E7C
	@ AnimCmd pointer table
	.4byte sAnim_WaterPulseBubble_0 @ [0]
	.4byte sAnim_WaterPulseBubble_1 @ [1]

sAnims_WeatherBallIceDown: @ 0x08570E84
	@ AnimCmd pointer table
	.4byte sAnim_WeatherBallIceDown_0 @ [0]

sAffineAnim_WaterPulseRingBubble_0: @ 0x08570E88
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFF6, 0xFFF6, 0x0F00, 0x0000 @ AFFINE_FRAME(-10, -10, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_WaterPulseRingBubble_1: @ 0x08570EA0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x00E0, 0x00E0, 0x0000, 0x0000 @ AFFINE_FRAME(224, 224, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0F00, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_WeatherBallIceDown_0: @ 0x08570EB8
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0150, 0x0150, 0x0000, 0x0000 @ AFFINE_FRAME(336, 336, rot=0x00, duration=0)
	.2byte 0x0000, 0x0000, 0x0F00, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_WaterPulseRingBubble: @ 0x08570ED0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_WaterPulseRingBubble_0 @ [0]
	.4byte sAffineAnim_WaterPulseRingBubble_1 @ [1]

sAffineAnims_WeatherBallIceDown: @ 0x08570ED8
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_WeatherBallIceDown_0 @ [0]

gWaterPulseBubbleSpriteTemplate: @ 0x08570EDC
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte sAnims_WaterPulseBubble @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWaterPulseBubble @ callback
	.globl gWaterPulseRingBubbleSpriteTemplate
gWaterPulseRingBubbleSpriteTemplate: @ 0x08570EF4
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gOamData_AffineNormal_ObjNormal_8x8 @ oam
	.4byte sAnims_WaterPulseBubble @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_WaterPulseRingBubble @ affineAnims
	.4byte AnimWaterPulseRingBubble @ callback
sWeatherBallIceDownSpriteTemplate: @ 0x08570F0C
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte sAnims_WeatherBallIceDown @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_WeatherBallIceDown @ affineAnims
	.4byte AnimWeatherBallDown @ callback (AnimWeatherBallDown)

sAnim_SmallEmber_0: @ 0x08570F24
	@ union AnimCmd stream
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnim_SmallEmber_1: @ 0x08570F34
	@ union AnimCmd stream
	.2byte 0x0010, 0x00C4 @ ANIMCMD_FRAME(16, 196)
	.2byte 0x0020, 0x00C4 @ ANIMCMD_FRAME(32, 196)
	.2byte 0x0030, 0x00C4 @ ANIMCMD_FRAME(48, 196)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_SmallEmber: @ 0x08570F44
	@ AnimCmd pointer table
	.4byte sAnim_SmallEmber_0 @ [0]
	.4byte sAnim_SmallEmber_1 @ [1]

sFireSpiralInwardSpriteTemplate: @ 0x08570F4C
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFireSpiralInward @ callback (AnimFireSpiralInward)

sFireSpreadSpriteTemplate: @ 0x08570F64
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFireSpread @ callback (AnimFireSpread)

sAnim_LargeFlame_0: @ 0x08570F7C
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0x0040, 0x0003 @ ANIMCMD_FRAME(64, 3)
	.2byte 0x0050, 0x0003 @ ANIMCMD_FRAME(80, 3)
	.2byte 0x0060, 0x0003 @ ANIMCMD_FRAME(96, 3)
	.2byte 0x0070, 0x0003 @ ANIMCMD_FRAME(112, 3)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_LargeFlame: @ 0x08570FA0
	@ AnimCmd pointer table
	.4byte sAnim_LargeFlame_0 @ [0]

sAnim_FirePlume_0: @ 0x08570FA4
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0010, 0x0005 @ ANIMCMD_FRAME(16, 5)
	.2byte 0x0020, 0x0005 @ ANIMCMD_FRAME(32, 5)
	.2byte 0x0030, 0x0005 @ ANIMCMD_FRAME(48, 5)
	.2byte 0x0040, 0x0005 @ ANIMCMD_FRAME(64, 5)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_FirePlume: @ 0x08570FBC
	@ AnimCmd pointer table
	.4byte sAnim_FirePlume_0 @ [0]

sAffineAnim_LargeFlame_0: @ 0x08570FC0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0032, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(50, 256, rot=0x00, duration=0)
	.2byte 0x0020, 0x0000, 0x0700, 0x0000 @ AFFINE_FRAME(32, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_LargeFlame: @ 0x08570FD8
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_LargeFlame_0 @ [0]

sLargeFlameSpriteTemplate: @ 0x08570FDC
	@ SpriteTemplate: tileTag=0x2731, paletteTag=0x2731
	.2byte 0x2731, 0x2731
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_LargeFlame @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_LargeFlame @ affineAnims
	.4byte AnimLargeFlame @ callback
sLargeFlameSpriteTemplate_2: @ 0x08570FF4
	@ SpriteTemplate: tileTag=0x2731, paletteTag=0x2731
	.2byte 0x2731, 0x2731
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_LargeFlame @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimLargeFlame @ callback
sFirePlumeSpriteTemplate: @ 0x0857100C
	@ SpriteTemplate: tileTag=0x2733, paletteTag=0x2733
	.2byte 0x2733, 0x2733
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_FirePlume @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFirePlume @ callback (AnimFirePlume)

sFirePlumeSpriteTemplate_2: @ 0x08571024
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_FirePlume @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFirePlume @ callback (AnimFirePlume)

sAnim_UnusedSmallEmber_0: @ 0x0857103C
	@ union AnimCmd stream
	.2byte 0x0010, 0x0006 @ ANIMCMD_FRAME(16, 6)
	.2byte 0x0020, 0x0006 @ ANIMCMD_FRAME(32, 6)
	.2byte 0x0030, 0x0006 @ ANIMCMD_FRAME(48, 6)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_UnusedSmallEmber: @ 0x0857104C
	@ AnimCmd pointer table
	.4byte sAnim_UnusedSmallEmber_0 @ [0]

sUnusedSmallEmberSpriteTemplate: @ 0x08571050
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_UnusedSmallEmber @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedSmallEmber @ callback (AnimUnusedSmallEmber)

sAffineAnim_Sunlight_0: @ 0x08571068
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0050, 0x0050, 0x0000, 0x0000 @ AFFINE_FRAME(80, 80, rot=0x00, duration=0)
	.2byte 0x0002, 0x0002, 0x010A, 0x0000 @ AFFINE_FRAME(2, 2, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_Sunlight: @ 0x08571080
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Sunlight_0 @ [0]

sSunlightSpriteTemplate: @ 0x08571084
	@ SpriteTemplate: tileTag=0x27AD, paletteTag=0x27AD
	.2byte 0x27AD, 0x27AD
	.4byte gBattleAnimOam_084FD1A0 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Sunlight @ affineAnims
	.4byte AnimSunlight @ callback
sAnim_SmallEmber_0_2: @ 0x0857109C
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0x0040, 0x0004 @ ANIMCMD_FRAME(64, 4)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_SmallEmber_2: @ 0x085710B4
	@ AnimCmd pointer table
	.4byte sAnim_SmallEmber_0_2 @ [0]

sTranslateAnimSpriteToTargetMonLocationSpriteTemplate: @ 0x085710B8
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte TranslateAnimSpriteToTargetMonLocation @ callback
sEmberFlareSpriteTemplate: @ 0x085710D0
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimEmberFlare @ callback
sBurnFlameSpriteTemplate: @ 0x085710E8
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBurnFlame @ callback (AnimBurnFlame)

sFireRingSpriteTemplate: @ 0x08571100
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFireRing @ callback
sAnim_FireCross_0: @ 0x08571118
	@ union AnimCmd stream
	.2byte 0x0020, 0x0006 @ ANIMCMD_FRAME(32, 6)
	.2byte 0x0030, 0x0006 @ ANIMCMD_FRAME(48, 6)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_FireCross: @ 0x08571124
	@ AnimCmd pointer table
	.4byte sAnim_FireCross_0 @ [0]

	@ semanticized v110: canonical static data at 0x08571128, size=0x10
sAffineAnim_FireBlastUnused_0:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x01
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 1)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	@ semanticized v110: canonical static data at 0x08571138, size=0x18
sAffineAnim_FireBlastUnused_1:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x00A0, 0x00A0
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(160, 160, 0, 0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END
sAffineAnims_FireBlastUnused: @ 0x08571148
	.4byte sAffineAnim_FireBlastUnused_0
	.4byte sAffineAnim_FireBlastUnused_1

gFireBlastCrossSpriteTemplate:
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_FireCross @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFireCross @ callback
sFireSpiralOutwardSpriteTemplate: @ 0x08571168
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFireSpiralOutward @ callback (AnimFireSpiralOutward)

sWeatherBallIceDownSpriteTemplate_2: @ 0x08571180
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_SmallEmber_2 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWeatherBallDown @ callback (AnimWeatherBallDown)

	.if (. - .LFireBattleAnimSectionStart) != 0x594
	.error "semantic range 0x08570C04 size mismatch"
	.endif
	.globl gWeatherBallIceDownData
gWeatherBallIceDownData: @ 0x08571198
	@ analyzed canonical ROM range 0x08571198-0x085711AF
sWeatherBallIceDownSpriteTemplate_3: @ 0x08571198
	rodata_sprite_template 0x27D9, 0x27D9, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810A13C
	@ Eruption launch-rock initial speeds. Canonical layout: static const s16 [7][2].
	.globl sEruptionLaunchRockSpeeds
sEruptionLaunchRockSpeeds: @ 0x085711B0
	@ ANALYSIS: SEMANTIC_S16_PAIR_TABLE addr=0x085711B0 size=0x1C count=7
	.2byte -2, -5
	.2byte -1, -1
	.2byte 3, -6
	.2byte 4, -2
	.2byte 2, -8
	.2byte -5, -5
	.2byte 4, -7
sFireEffectSpriteTemplate: @ 0x085711CC
	@ ANALYSIS: SEMANTIC_SPRITE_TEMPLATE addr=0x085711CC size=0x18
	rodata_sprite_template 0x27D9, 0x27D9, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810A260
	@ Fire AnimCmd sequences used by sFireEffectSpriteTemplate_2.
	@ ANALYSIS: SEMANTIC_ANIM_CMD_TABLE addr=0x085711E4 size=0x3C count=4
sAnim_FireEffect: @ 0x085711E4
	rodata_anim_frame 0, 5
	rodata_anim_frame 4, 5
	rodata_anim_frame 8, 5
	rodata_anim_frame 12, 5
	rodata_anim_jump 0
sAnim_FireEffect_2: @ 0x085711F8
	rodata_anim_frame 16, 5
	rodata_anim_end
sAnim_FireEffect_3: @ 0x08571200
	rodata_anim_frame 20, 5
	rodata_anim_end
sAnim_FireEffect_4: @ 0x08571208
	rodata_anim_frame 20, 5
	rodata_anim_end
sAnims_FireEffect: @ 0x08571210
	.4byte sAnim_FireEffect
	.4byte sAnim_FireEffect_2
	.4byte sAnim_FireEffect_3
	.4byte sAnim_FireEffect_4
sFireEffectSpriteTemplate_2: @ 0x08571220
	@ ANALYSIS: SEMANTIC_SPRITE_TEMPLATE addr=0x08571220 size=0x18
	rodata_sprite_template 0x27F7, 0x27F7, gOamData_AffineOff_ObjNormal_16x16, sAnims_FireEffect, 0, gDummySpriteAffineAnimTable, sub_0810A34C
	@ Fire AnimCmd sequence used by sFireEffectSpriteTemplate_3.
	@ ANALYSIS: SEMANTIC_ANIM_CMD_TABLE addr=0x08571238 size=0x18 count=1
sAnim_FireEffect_5: @ 0x08571238
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 5
	rodata_anim_frame 48, 5
	rodata_anim_jump 0
sAnims_FireEffect_2: @ 0x0857124C
	.4byte sAnim_FireEffect_5
sFireEffectSpriteTemplate_3: @ 0x08571250
	@ ANALYSIS: SEMANTIC_SPRITE_TEMPLATE addr=0x08571250 size=0x18
	rodata_sprite_template 0x27F8, 0x27F8, gOamData_AffineOff_ObjNormal_32x32, sAnims_FireEffect_2, 0, gDummySpriteAffineAnimTable, sub_0810A500
	@ Shake direction pattern 0; only indices 0..9 are accessed by sub_0810A8E4.
	.globl sShakeDirsPattern0
sShakeDirsPattern0: @ 0x08571268
	@ ANALYSIS: SEMANTIC_S8_LOOKUP_TABLE addr=0x08571268 size=0x10 count=16
	.byte -1, -1, 0, 1, 1, 0, 0, -1, -1, 1, 1, 0, 0, -1, 0, 1
	@ Shake direction pattern 1; only indices 0..9 are accessed by sub_0810A8E4.
	.globl sShakeDirsPattern1
sShakeDirsPattern1: @ 0x08571278
	@ ANALYSIS: SEMANTIC_S8_LOOKUP_TABLE addr=0x08571278 size=0x10 count=16
	.byte -1, 0, 1, 0, -1, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, 1
	@ ElectricSpark AnimCmd sequence and one-entry animation table.
	@ ANALYSIS: SEMANTIC_ANIM_CMD_TABLE addr=0x08571288 size=0x1C count=1
sAnim_Lightning: @ 0x08571288
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 8
	rodata_anim_frame 48, 5
	rodata_anim_frame 64, 5
	rodata_anim_end
sAnims_BattleLightning: @ 0x085712A0
	.4byte sAnim_Lightning
	@ pret/pokeemerald-jp direct xref for 0x085712A4: electric.s: sub_0810BE64
	.globl gLightningSpriteTemplate
gLightningSpriteTemplate: @ 0x085712A4
	@ analyzed canonical ROM range 0x085712A4-0x0857140B
	@ pointer/nullable table
	.4byte 0x27352735 @ +0x0
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x4
	.4byte sAnims_BattleLightning @ +0x8
	.4byte 0 @ +0xC
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte AnimLightning @ +0x14
sAffineAnim_UnusedSpinningFist:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.4byte 0x01000100 @ +0x18
	.4byte 0 @ +0x1C
	.4byte 0 @ +0x20
	.4byte 0x00001400 @ +0x24
	.4byte 0 @ +0x28
	.4byte 0x00003CF0 @ +0x2C
	.4byte 0x00007FFF @ +0x30
	.4byte 0 @ +0x34
sAffineAnims_UnusedSpinningFist:
	.4byte sAffineAnim_UnusedSpinningFist @ +0x38
	.4byte 0x279F279F @ +0x3C
	.4byte gOamData_AffineNormal_ObjNormal_32x32 @ +0x40
	.4byte gDummySpriteAnimTable @ +0x44
	.4byte 0 @ +0x48
	.4byte sAffineAnims_UnusedSpinningFist @ +0x4C
	.4byte sub_0810AA64 @ +0x50
sAnim_UnusedCirclingShock:
	.4byte 0x00050000 @ +0x54
	.4byte 0x00050010 @ +0x58
	.4byte 0x00050020 @ +0x5C
	.4byte 0x00050030 @ +0x60
	.4byte 0x00050040 @ +0x64
	.4byte 0x00050050 @ +0x68
	.4byte 0x0000FFFE @ +0x6C
sAnims_UnusedCirclingShock:
	.4byte sAnim_UnusedCirclingShock @ +0x70
	.4byte 0x275F275F @ +0x74
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x78
	.4byte sAnims_UnusedCirclingShock @ +0x7C
	.4byte 0 @ +0x80
	.4byte gDummySpriteAffineAnimTable @ +0x84
	.4byte sub_0810AAC4 @ +0x88
	.4byte 0x271B271B @ +0x8C
	.4byte gOamData_AffineNormal_ObjNormal_16x16 @ +0x90
	.4byte gDummySpriteAnimTable @ +0x94
	.4byte 0 @ +0x98
	.4byte gDummySpriteAffineAnimTable @ +0x9C
	.4byte sub_0810AB58 @ +0xA0
	.4byte 0x27BB27BB @ +0xA4
	.4byte gOamData_AffineOff_ObjNormal_16x16 @ +0xA8
	.4byte gDummySpriteAnimTable @ +0xAC
	.4byte 0 @ +0xB0
	.4byte gDummySpriteAffineAnimTable @ +0xB4
	.4byte TranslateAnimSpriteToTargetMonLocation @ +0xB8
sAffineAnim_FlashingSpark:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.4byte 0 @ +0xBC
	.4byte 0x00000114 @ +0xC0
	.4byte 0x00007FFE @ +0xC4
	.4byte 0 @ +0xC8
sAffineAnims_FlashingSpark:
	.4byte sAffineAnim_FlashingSpark @ +0xCC
	.4byte 0x271B271B @ +0xD0
	.4byte gOamData_AffineNormal_ObjNormal_16x16 @ +0xD4
	.4byte gDummySpriteAnimTable @ +0xD8
	.4byte 0 @ +0xDC
	.4byte sAffineAnims_FlashingSpark @ +0xE0
	.4byte sub_0810ACBC @ +0xE4
sAnim_ThunderboltOrb:
	.4byte 0x00060000 @ +0xE8
	.4byte 0x00060010 @ +0xEC
	.4byte 0x00060020 @ +0xF0
	.4byte 0x0000FFFE @ +0xF4
sAnims_ThunderboltOrb:
	.4byte sAnim_ThunderboltOrb @ +0xF8
sAffineAnim_ThunderboltOrb:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.4byte 0x00E800E8 @ +0xFC
	.4byte 0 @ +0x100
	.4byte 0xFFF8FFF8 @ +0x104
	.4byte 0x00000A00 @ +0x108
	.4byte 0x00080008 @ +0x10C
	.4byte 0x00000A00 @ +0x110
	.4byte 0x00017FFE @ +0x114
	.4byte 0 @ +0x118
sAffineAnims_ThunderboltOrb:
	.4byte sAffineAnim_ThunderboltOrb @ +0x11C
	.4byte 0x282A282A @ +0x120
	.4byte gOamData_AffineNormal_ObjNormal_32x32 @ +0x124
	.4byte sAnims_ThunderboltOrb @ +0x128
	.4byte 0 @ +0x12C
	.4byte sAffineAnims_ThunderboltOrb @ +0x130
	.4byte sub_0810AE0C @ +0x134
	.4byte 0x271B271B @ +0x138
	.4byte gOamData_AffineNormal_ObjNormal_16x16 @ +0x13C
	.4byte gDummySpriteAnimTable @ +0x140
	.4byte 0 @ +0x144
	.4byte sAffineAnims_FlashingSpark @ +0x148
	.4byte sub_0810AE78 @ +0x14C
	.4byte 0x271B271B @ +0x150
	.4byte gOamData_AffineOff_ObjNormal_16x16 @ +0x154
	.4byte gDummySpriteAnimTable @ +0x158
	.4byte 0 @ +0x15C
	.4byte gDummySpriteAffineAnimTable @ +0x160
	.4byte sub_0810AFAC @ +0x164
	@ pret/pokeemerald-jp direct xref for 0x0857140C: electric.s: sub_0810B084
	.globl gBattleAnimationEffectData
gBattleAnimationEffectData: @ 0x0857140C
	@ analyzed canonical ROM range 0x0857140C-0x08571423
sBattleAnimationEffectSpriteTemplate: @ 0x0857140C
	rodata_sprite_template 0x2711, 0x2711, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810B22C
	@ pret/pokeemerald-jp direct xref for 0x08571424: electric.s: sub_0810B27C
	.globl gElectricOrbsData
gElectricOrbsData:
	@ analyzed canonical ROM range 0x08571424-0x0857143B
	.globl gElectricOrbsSpriteTemplate
gElectricOrbsSpriteTemplate: @ 0x08571424
	rodata_sprite_template 0x27BD, 0x27BD, gOamData_AffineOff_ObjNormal_32x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810B27C
	@ pret/pokeemerald-jp direct xref for 0x0857143C: electric.s: sub_0810B3C8
	@ semantic battle-animation reconstruction: electric
	@ ROM range 0x0857143C-0x0857174B
.LElectricBattleAnimSectionStart:
	@ semanticized v110: canonical static data at 0x0857143C, size=0x20
	.globl sElectricChargingParticleCoordOffsets
sElectricChargingParticleCoordOffsets:
	.byte 0x3A, 0xC4 @ {  58, -60 }
	.byte 0xC8, 0xDC @ { -56, -36 }
	.byte 0x08, 0xC8 @ {   8, -56 }
	.byte 0xF0, 0x38 @ { -16,  56 }
	.byte 0x3A, 0xF6 @ {  58, -10 }
	.byte 0xC6, 0x0A @ { -58,  10 }
	.byte 0x30, 0xEE @ {  48, -18 }
	.byte 0xF8, 0x38 @ {  -8,  56 }
	.byte 0x10, 0xC8 @ {  16, -56 }
	.byte 0xC6, 0xD6 @ { -58, -42 }
	.byte 0x3A, 0x1E @ {  58,  30 }
	.byte 0xD0, 0x28 @ { -48,  40 }
	.byte 0x0C, 0xD0 @ {  12, -48 }
	.byte 0x30, 0xF4 @ {  48, -12 }
	.byte 0xC8, 0x12 @ { -56,  18 }
	.byte 0x30, 0x30 @ {  48,  48 }

sAnim_ElectricChargingParticles_0: @ 0x0857145C
	@ union AnimCmd stream
	.2byte 0x0003, 0x0001 @ ANIMCMD_FRAME(3, 1)
	.2byte 0x0002, 0x0001 @ ANIMCMD_FRAME(2, 1)
	.2byte 0x0001, 0x0001 @ ANIMCMD_FRAME(1, 1)
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_ElectricChargingParticles_1: @ 0x08571470
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0001, 0x0005 @ ANIMCMD_FRAME(1, 5)
	.2byte 0x0002, 0x0005 @ ANIMCMD_FRAME(2, 5)
	.2byte 0x0003, 0x0005 @ ANIMCMD_FRAME(3, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_ElectricChargingParticles: @ 0x08571484
	@ AnimCmd pointer table
	.4byte sAnim_ElectricChargingParticles_0 @ [0]
	.4byte sAnim_ElectricChargingParticles_1 @ [1]

	.globl gElectricChargingParticlesSpriteTemplate
gElectricChargingParticlesSpriteTemplate: @ 0x0857148C
	@ SpriteTemplate: tileTag=0x27E3, paletteTag=0x27E3
	.2byte 0x27E3, 0x27E3
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte sAnims_ElectricChargingParticles @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte gPriorityABattleAnimSpriteCallbackDummy @ callback (SpriteCallbackDummy)

sAffineAnim_CircleOfLight_0: @ 0x085714A4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x3C00, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(0)
	.2byte 0xFFFC, 0xFFFC, 0x0500, 0x0000 @ AFFINE_FRAME(-4, -4, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x0500, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x000A, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(10)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_CircleOfLight_1: @ 0x085714E4
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x1E00, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFFC, 0xFFFC, 0x0500, 0x0000 @ AFFINE_FRAME(-4, -4, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x0500, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0003, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(3)

sAffineAnim_CircleOfLight_2: @ 0x08571514
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x1E00, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x1E00, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_CircleOfLight: @ 0x08571534
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_CircleOfLight_0 @ [0]
	.4byte sAffineAnim_CircleOfLight_1 @ [1]
	.4byte sAffineAnim_CircleOfLight_2 @ [2]

sGrowingChargeOrbSpriteTemplate: @ 0x08571540
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_CircleOfLight @ affineAnims
	.4byte AnimGrowingChargeOrb @ callback (AnimGrowingChargeOrb)

sAnim_ElectricPuff_0: @ 0x08571558
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_ElectricPuff: @ 0x0857156C
	@ AnimCmd pointer table
	.4byte sAnim_ElectricPuff_0 @ [0]

sElectricPuffSpriteTemplate: @ 0x08571570
	@ SpriteTemplate: tileTag=0x27E5, paletteTag=0x27E5
	.2byte 0x27E5, 0x27E5
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_ElectricPuff @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimElectricPuff @ callback
sVoltTackleOrbSlideSpriteTemplate: @ 0x08571588
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_CircleOfLight @ affineAnims
	.4byte AnimVoltTackleOrbSlide @ callback (AnimVoltTackleOrbSlide)

sAnim_VoltTackleBolt_0: @ 0x085715A0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_VoltTackleBolt_1: @ 0x085715A8
	@ union AnimCmd stream
	.2byte 0x0002, 0x0003 @ ANIMCMD_FRAME(2, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_VoltTackleBolt_2: @ 0x085715B0
	@ union AnimCmd stream
	.2byte 0x0004, 0x0003 @ ANIMCMD_FRAME(4, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_VoltTackleBolt_3: @ 0x085715B8
	@ union AnimCmd stream
	.2byte 0x0006, 0x0003 @ ANIMCMD_FRAME(6, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_VoltTackleBolt: @ 0x085715C0
	@ AnimCmd pointer table
	.4byte sAnim_VoltTackleBolt_0 @ [0]
	.4byte sAnim_VoltTackleBolt_1 @ [1]
	.4byte sAnim_VoltTackleBolt_2 @ [2]
	.4byte sAnim_VoltTackleBolt_3 @ [3]

sAffineAnim_VoltTackleBolt: @ 0x085715D0
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0040, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_VoltTackleBolt: @ 0x085715E0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_VoltTackleBolt @ [0]

	.globl gVoltTackleBoltSpriteTemplate
gVoltTackleBoltSpriteTemplate: @ 0x085715E4
	@ SpriteTemplate: tileTag=0x2711, paletteTag=0x2711
	.2byte 0x2711, 0x2711
	.4byte gOamData_AffineDouble_ObjNormal_8x16 @ oam
	.4byte sAnims_VoltTackleBolt @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_VoltTackleBolt @ affineAnims
	.4byte AnimVoltTackleBolt @ callback (AnimVoltTackleBolt)

sGrowingShockWaveOrbSpriteTemplate: @ 0x085715FC
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_CircleOfLight @ affineAnims
	.4byte AnimGrowingShockWaveOrb @ callback (AnimGrowingShockWaveOrb)

	.globl gShockWaveProgressingBoltSpriteTemplate
gShockWaveProgressingBoltSpriteTemplate: @ 0x08571614
	@ SpriteTemplate: tileTag=0x2711, paletteTag=0x2711
	.2byte 0x2711, 0x2711
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimShockWaveProgressingBolt @ callback (AnimShockWaveProgressingBolt)

	@ semanticized v110: canonical static data at 0x0857162C, size=0x10
sAnim_UnusedIceCrystalThrow:
	.2byte 0x0000, 0x0045 @ ANIMCMD_FRAME(0, 5, hFlip=TRUE)
	.2byte 0x0001, 0x0045 @ ANIMCMD_FRAME(1, 5, hFlip=TRUE)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)
sAnims_UnusedIceCrystalThrow: @ 0x08571638
	.4byte sAnim_UnusedIceCrystalThrow

sUnusedIceCrystalThrowSpriteTemplate:
	@ SpriteTemplate: tileTag=0x279D, paletteTag=0x279D
	.2byte 0x279D, 0x279D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedIceCrystalThrow @ callback
	@ semanticized v110: canonical static data at 0x08571654, size=0x8
sAnim_IceCrystalLargeChunk:
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_IceCrystalLarge:
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_IceCrystalSmall:
	@ union AnimCmd stream
	.2byte 0x0006, 0x0001 @ ANIMCMD_FRAME(6, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Snowball:
	@ union AnimCmd stream
	.2byte 0x0007, 0x0001 @ ANIMCMD_FRAME(7, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_BlizzardIceCrystal:
	@ union AnimCmd stream
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_SmallBubblePair:
	@ union AnimCmd stream
	.2byte 0x000C, 0x0006 @ ANIMCMD_FRAME(12, 6)
	.2byte 0x000D, 0x0006 @ ANIMCMD_FRAME(13, 6)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

	@ semanticized v110: canonical static data at 0x08571688, size=0x4
sAnims_IceCrystalLargeChunk:
	.4byte sAnim_IceCrystalLargeChunk

sAnims_IceCrystalLarge:
	@ AnimCmd pointer table
	.4byte sAnim_IceCrystalLarge @ [0]

sAnims_IceCrystalSmall:
	@ AnimCmd pointer table
	.4byte sAnim_IceCrystalSmall @ [0]
	.4byte sAnim_Snowball @ [1]
	.4byte sAnim_BlizzardIceCrystal @ [2]

gAnims_SmallBubblePair:
	@ AnimCmd pointer table
	.4byte sAnim_SmallBubblePair @ [0]

sAffineAnim_IceCrystalSpiralInwardLarge:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0128, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_IceCrystalSpiralInwardLarge:
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_IceCrystalSpiralInwardLarge @ [0]

gIceCrystalSpiralInwardLarge:
	@ SpriteTemplate: tileTag=0x279D, paletteTag=0x279D
	.2byte 0x279D, 0x279D
	.4byte gOamData_AffineDouble_ObjBlend_8x16 @ oam
	.4byte sAnims_IceCrystalLarge @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_IceCrystalSpiralInwardLarge @ affineAnims
	.4byte AnimIcePunchSwirlingParticle @ callback
gIceCrystalSpiralInwardSmall:
	@ SpriteTemplate: tileTag=0x279D, paletteTag=0x279D
	.2byte 0x279D, 0x279D
	.4byte gOamData_AffineOff_ObjBlend_8x8 @ oam
	.4byte sAnims_IceCrystalSmall @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimIcePunchSwirlingParticle @ callback
sAffineAnim_IceBeamInnerCrystal:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x010A, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_IceBeamInnerCrystal:
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_IceBeamInnerCrystal @ [0]

gIceBeamInnerCrystalSpriteTemplate:
	@ SpriteTemplate: tileTag=0x279D, paletteTag=0x279D
	.2byte 0x279D, 0x279D
	.4byte gOamData_AffineNormal_ObjBlend_8x16 @ oam
	.4byte sAnims_IceCrystalLarge @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_IceBeamInnerCrystal @ affineAnims
	.4byte AnimIceBeamParticle @ callback
gIceBeamOuterCrystalSpriteTemplate:
	@ SpriteTemplate: tileTag=0x279D, paletteTag=0x279D
	.2byte 0x279D, 0x279D
	.4byte gOamData_AffineOff_ObjBlend_8x8 @ oam
	.4byte sAnims_IceCrystalSmall @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimIceBeamParticle @ callback
	@ semanticized v110: canonical static data at 0x08571728, size=0x24
sAffineAnim_IceCrystalHit:
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0x00CE, 0x00CE
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(206, 206, 0, 0)
	.2byte 0x0005, 0x0005
	.byte 0x00, 0x0A
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(5, 5, 0, 10)
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x06
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 6)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END
sAffineAnims_IceCrystalHit: @ 0x08571748
	.4byte sAffineAnim_IceCrystalHit

	.if (. - .LElectricBattleAnimSectionStart) != 0x310
	.error "semantic range 0x0857143C size mismatch"
	.endif
	.globl gIceCrystalHitLargeSpriteTemplateSpriteTemplate
gIceCrystalHitLargeSpriteTemplateSpriteTemplate:
	.globl gBattleAnimSpriteTemplate_IceEffectParticle
gBattleAnimSpriteTemplate_IceEffectParticle: @ 0x0857174C
gIceCrystalHitLargeSpriteTemplate:
	@ analyzed canonical ROM range 0x0857174C-0x0857183F
	@ pointer/nullable table
	.4byte 0x279D279D @ +0x0
	.4byte gOamData_AffineNormal_ObjBlend_8x16 @ +0x4
	.4byte sAnims_IceCrystalLarge @ +0x8
	.4byte 0 @ +0xC
	.4byte sAffineAnims_IceCrystalHit @ +0x10
	.4byte AnimIceEffectParticle @ +0x14
	.4byte 0x279D279D @ +0x18
	.4byte gOamData_AffineNormal_ObjBlend_8x8 @ +0x1C
	.4byte sAnims_IceCrystalSmall @ +0x20
	.4byte 0 @ +0x24
	.4byte sAffineAnims_IceCrystalHit @ +0x28
	.4byte AnimIceEffectParticle @ +0x2C
	.4byte 0x279D279D @ +0x30
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x34
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
	@ pret/pokeemerald-jp direct xref for 0x08572F6C: water.s: sub_08109010
	.globl gBattleAnimSpriteTemplate_WaterHit
gBattleAnimSpriteTemplate_WaterHit: @ 0x08572F6C
	@ analyzed canonical ROM range 0x08572F6C-0x08572FCB
	@ pointer/nullable table
	.4byte 0x27A427A4 @ +0x0
	.4byte gOamData_AffineNormal_ObjBlend_32x32 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	.4byte 0 @ +0xC
	.4byte sAffineAnims_HitSplat @ +0x10
	.4byte sub_08116BD8 @ +0x14
	.globl gBattleAnimSpriteTemplate_WaterHitRandomOffset
gBattleAnimSpriteTemplate_WaterHitRandomOffset: @ 0x08572F84
	.4byte 0x27972797 @ +0x18
	.4byte gOamData_AffineNormal_ObjBlend_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	.4byte 0 @ +0x24
	.4byte sAffineAnims_HitSplat @ +0x28
	.4byte sub_08116CA8 @ +0x2C
	.globl gBattleAnimSpriteTemplate_WaterHitOnBattler
gBattleAnimSpriteTemplate_WaterHitOnBattler: @ 0x08572F9C
	.4byte 0x27972797 @ +0x30
	.4byte gOamData_AffineNormal_ObjBlend_32x32 @ +0x34
	.4byte gDummySpriteAnimTable @ +0x38
	.4byte 0 @ +0x3C
	.4byte sAffineAnims_HitSplat @ +0x40
	.4byte sub_08116D40 @ +0x44
	.4byte 0x282D282D @ +0x48
	.4byte gOamData_AffineOff_ObjBlend_32x32 @ +0x4C
	.4byte gDummySpriteAnimTable @ +0x50
	.4byte 0 @ +0x54
	.4byte gDummySpriteAffineAnimTable @ +0x58
	.4byte sub_08116DB0 @ +0x5C
	@ pret/pokeemerald-jp direct xref for 0x08572FCC: flying.s: sub_0810F3D8
	.globl gBattleAnimSpriteTemplate_PiercingHit
gBattleAnimSpriteTemplate_PiercingHit: @ 0x08572FCC
	@ analyzed canonical ROM range 0x08572FCC-0x08572FFB
	@ pointer/nullable table
	.4byte 0x27972797 @ +0x0
	.4byte gOamData_AffineNormal_ObjNormal_32x32 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	.4byte 0 @ +0xC
	.4byte sAffineAnims_HitSplat @ +0x10
	.4byte sub_08116DF8 @ +0x14
	.globl gBattleAnimSpriteTemplate_PiercingHitStoredCallback
gBattleAnimSpriteTemplate_PiercingHitStoredCallback: @ 0x08572FE4
	.4byte 0x27972797 @ +0x18
	.4byte gOamData_AffineNormal_ObjBlend_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	.4byte 0 @ +0x24
	.4byte sAffineAnims_HitSplat @ +0x28
	.4byte sub_08116C20 @ +0x2C
	@ pret/pokeemerald-jp direct xref for 0x08572FFC: battle_anim_utility_funcs.s: sub_08117364
	.globl sCurseLinesPalette
sCurseLinesPalette:
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ battle_anim_utility_funcs: { RGB_WHITE }
	.2byte 0x7FFF
	.globl gBattleAnimBgCntSet
gBattleAnimBgCntSet:
	@ REG_OFFSET_BG0CNT..REG_OFFSET_BG3CNT
	.byte 0x08, 0x0A, 0x0C, 0x0E
	.globl gBattleAnimBgCntGet
gBattleAnimBgCntGet:
	@ REG_OFFSET_BG0CNT..REG_OFFSET_BG3CNT
	.byte 0x08, 0x0A, 0x0C, 0x0E
	@ original alignment before sBattleIntroSlideFuncs
	.byte 0x00, 0x00
sBattleIntroSlideFuncs:
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide3
	.4byte BattleIntroSlide3
sMachBikeTransitions:
	.4byte MachBikeTransition_FaceDirection
	.4byte MachBikeTransition_TurnDirection
	.4byte MachBikeTransition_TrySpeedUp
	.4byte MachBikeTransition_TrySlowDown
sMachBikeSpeedCallbacks:
	.4byte PlayerGoSpeed1
	.4byte PlayerGoSpeed2
	.4byte PlayerGoSpeed4
sAcroBikeTransitions:
	.4byte AcroBikeTransition_TurnJump
	.4byte AcroBikeTransition_TurnDirection
	.4byte AcroBikeTransition_Moving
	.4byte AcroBikeTransition_NormalToWheelie
	.4byte AcroBikeTransition_WheelieToNormal
	.4byte AcroBikeTransition_WheelieIdle
	.4byte AcroBikeTransition_WheelieHoppingStanding
	.4byte AcroBikeTransition_WheelieHoppingMoving
	.4byte AcroBikeTransition_SideJump
	.4byte sub_0811A2E4
	.4byte AcroBikeTransition_WheelieMoving
	.4byte AcroBikeTransition_WheelieRisingMoving
	.4byte AcroBikeTransition_WheelieLoweringMoving
sAcroBikeInputHandlers:
	.4byte AcroBikeHandleInputNormal
	.4byte AcroBikeHandleInputTurning
	.4byte AcroBikeHandleInputWheelieStanding
	.4byte AcroBikeHandleInputBunnyHop
	.4byte AcroBikeHandleInputWheelieMoving
	.4byte AcroBikeHandleInputSidewaysJump
	.4byte AcroBikeHandleInputTurnJump
	@ pret/pokeemerald-jp direct xref for 0x0857309C: bike.s: GetPlayerSpeed
	.globl sMachBikeSpeeds
sMachBikeSpeeds:
	@ PLAYER_SPEED_NORMAL, PLAYER_SPEED_FAST, PLAYER_SPEED_FASTEST
	.2byte 0x0001, 0x0002, 0x0004
sAcroBikeJumpTimerList:
	@ jump timer list terminated by 0
	.byte 0x04, 0x00

	@ pret/pokeemerald-jp direct xref for 0x085730A4: bike.s: AcroBike_GetJumpDirection
	.globl sAcroBikeTricksList
sAcroBikeTricksList:
	@ BikeHistoryInputInfo records matching pret/pokeemerald bike.c.
	.set JP_ACRO_DIR_SOUTH, 1
	.set JP_ACRO_DIR_NORTH, 2
	.set JP_ACRO_DIR_WEST,  3
	.set JP_ACRO_DIR_EAST,  4
	.set JP_ACRO_B_BUTTON,  2
	.set JP_ACRO_HISTORY_LAST_ENTRY_MASK, 0xF

	.macro jp_acro_bike_trick direction
		.4byte \direction
		.4byte JP_ACRO_B_BUTTON
		.4byte JP_ACRO_HISTORY_LAST_ENTRY_MASK
		.4byte JP_ACRO_HISTORY_LAST_ENTRY_MASK
		.4byte sAcroBikeJumpTimerList
		.4byte sAcroBikeJumpTimerList
		.4byte \direction
	.endm

	jp_acro_bike_trick JP_ACRO_DIR_SOUTH
	jp_acro_bike_trick JP_ACRO_DIR_NORTH
	jp_acro_bike_trick JP_ACRO_DIR_WEST
	jp_acro_bike_trick JP_ACRO_DIR_EAST
sQuizLadyEasyChatScreens:
	@ Resolved pointer table; original ROM range 0x573114..0x573133.
	.4byte ABILITY_LEVITATE
	.4byte DoQuizAnswerEasyChatScreen
	.4byte MAP_NUM_ROUTE110
	.4byte DoQuizQuestionEasyChatScreen
	.4byte MAP_NUM_ROUTE113
	.4byte DoQuizSetAnswerEasyChatScreen
	.4byte PSR_UND_MODE
	.4byte DoQuizSetQuestionEasyChatScreen
	@ pret/pokeemerald-jp direct xref for 0x08573134: easy_chat.s: EasyChat_AllocateResources, FooterHasFourOptions, GetEachChatScreenTemplateId, GetEasyChatConfirmText, GetEasyChatInstructionsText (+3 more)
	.globl sEasyChatScreenTemplates
sEasyChatScreenTemplates:
	@ ANALYSIS: SEMANTIC_NUMERIC_EASY_CHAT_SCREEN_TABLE
	@ 21 x EasyChatScreenTemplate, stride 0x18.
	@ [00] PROFILE
	.byte 0x00, 0x02, 0x02, 0x00
	.4byte gText_Profile
	.4byte gText_CombineFourWordsOrPhrases
	.4byte gText_AndMakeYourProfile
	.4byte gText_YourProfile
	.4byte gText_IsAsShownOkay
	@ [01] BATTLE_START
	.byte 0x01, 0x03, 0x02, 0x01
	.4byte gText_AtTheBattlesStart
	@ Easy Chat semantic aliases.
	@ The first two roles match pinned sEasyChatScreenTemplates.
	@ Keyboard rows are JP-localized; keep neutral JP row names rather than US alphabet names.
	@ These .set directives emit no ROM bytes.
	.set gText_CombineSixWordsOrPhrases, gText_AndMakeYourProfile + 0xE
	.set gText_AndMakeAMessage, gText_Rom_5CB88E + 0xD
	.set gText_EasyChatKeyboard_JPRow0, gText_Questionnaire + 0x6
	.set gText_EasyChatKeyboard_JPRow1, gText_Questionnaire + 0x18
	.set gText_EasyChatKeyboard_JPRow2, gText_Questionnaire + 0x28
	.set gText_EasyChatKeyboard_JPRow3, gText_Rom_5CBC50 + 0x6

	.4byte gText_CombineSixWordsOrPhrases
	.4byte gText_AndMakeAMessage
	.4byte gText_YourFeelingAtTheBattlesStart
	.4byte gText_IsAsShownOkay
	@ [02] BATTLE_WON
	.byte 0x02, 0x03, 0x02, 0x01
	.4byte gText_UponWinningABattle
	.4byte gText_CombineSixWordsOrPhrases
	.4byte gText_AndMakeAMessage
	.4byte gText_WhatYouSayIfYouWin
	.4byte gText_IsAsShownOkay
	@ [03] BATTLE_LOST
	.byte 0x03, 0x03, 0x02, 0x01
	.4byte gText_UponLosingABattle
	.4byte gText_CombineSixWordsOrPhrases
	.4byte gText_AndMakeAMessage
	.4byte gText_WhatYouSayIfYouLose
	.4byte gText_IsAsShownOkay
	@ [04] MAIL
	.byte 0x04, 0x03, 0x03, 0x02
	.4byte 0
	.4byte gText_CombineNineWordsOrPhrases
	.4byte gText_Rom_5CB8E6
	.4byte gText_TheMailMessage
	.4byte gText_IsAsShownOkay
	@ [05] INTERVIEW
	.byte 0x05, 0x02, 0x02, 0x05
	.4byte gText_Interview
	.4byte gText_CombineFourWordsOrPhrases
	.4byte gText_LetsReplyToTheInterview
	.4byte gText_Rom_5CB957
	.4byte gText_IsAsShownOkay
	@ [06] BARD_SONG
	.byte 0x06, 0x03, 0x02, 0x01
	.4byte gText_TheBardsSong
	.4byte gText_ChangeJustOneWordOrPhrase
	.4byte gText_AndImproveTheBardsSong
	.4byte gText_TheBardsSong2
	.4byte gText_IsAsShownOkay
	@ [07] FAN_CLUB
	.byte 0x07, 0x01, 0x01, 0x04
	.4byte gText_Interview
	.4byte gText_FindWordsThatDescribeYour
	.4byte gText_FeelingsRightNow
	.4byte gText_Rom_5CB957
	.4byte gText_IsAsShownOkay
	@ [08] TRENDY_PHRASE
	.byte 0x09, 0x02, 0x01, 0x03
	.4byte gText_WhatsHipAndHappening
	.4byte gText_Rom_5CB985
	.4byte gText_AndMakeATrendySaying
	.4byte gText_TheTrendySaying
	.4byte gText_IsAsShownOkay
	@ [09] QUIZ_QUESTION
	.byte 0x10, 0x03, 0x03, 0x87
	.4byte 0
	.4byte gText_AfterYouHaveReadTheQuiz
	.4byte gText_QuestionPressTheAButton
	.4byte 0
	.4byte 0
	@ [10] QUIZ_ANSWER
	.byte 0x0F, 0x01, 0x01, 0x86
	.4byte gText_Rom_5CBCA0
	.4byte gText_OutOfTheListedChoices
	.4byte gText_SelectTheAnswerToTheQuiz
	.4byte gText_Rom_5CBA4E
	.4byte gText_IsAsShownOkay
	@ [11] QUIZ_SET_QUESTION
	.byte 0x11, 0x03, 0x03, 0x88
	.4byte 0
	.4byte gText_CombineNineWordsOrPhrases
	.4byte gText_AndCreateAQuiz
	.4byte gText_IsThisQuizOK
	.4byte 0
	@ [12] QUIZ_SET_ANSWER
	.byte 0x12, 0x01, 0x01, 0x86
	.4byte gText_Rom_5CBCA0
	.4byte gText_PickAWordOrPhraseAnd
	.4byte gText_SetTheQuizAnswer
	.4byte gText_IsThisQuizOK
	.4byte 0
	@ [13] BARD_SONG_ALT
	.byte 0x06, 0x03, 0x02, 0x01
	.4byte gText_TheBardsSong
	.4byte gText_ChangeJustOneWordOrPhrase
	.4byte gText_AndImproveTheBardsSong
	.4byte gText_TheBardsSong2
	.4byte gText_IsAsShownOkay
	@ [14] APPRENTICE
	.byte 0x13, 0x03, 0x02, 0x01
	.4byte gText_ApprenticesPhrase
	.4byte gText_FindWordsWhichFit
	.4byte gText_TheTrainersImage
	.4byte gText_ApprenticePhrase
	.4byte gText_IsAsShownOkay
	@ [15] GOOD_SAYING
	.byte 0x0D, 0x02, 0x01, 0x03
	.4byte gText_GoodSaying
	.4byte gText_Rom_5CB9BE
	.4byte gText_ToTeachHerAGoodSaying
	.4byte gText_Rom_5CB957
	.4byte gText_IsAsShownOkay
	@ [16] GABBY_AND_TY
	.byte 0x0A, 0x01, 0x01, 0x04
	.4byte gText_Interview
	.4byte gText_FindWordsThatDescribeYour
	.4byte gText_FeelingsRightNow
	.4byte gText_Rom_5CB957
	.4byte gText_IsAsShownOkay
	@ [17] BATTLE_TOWER_INTERVIEW
	.byte 0x0C, 0x01, 0x01, 0x04
	.4byte gText_Interview
	.4byte gText_FindWordsThatDescribeYour
	.4byte gText_FeelingsRightNow
	.4byte gText_Rom_5CB957
	.4byte gText_IsAsShownOkay
	@ [18] CONTEST_INTERVIEW
	.byte 0x0B, 0x01, 0x01, 0x04
	.4byte gText_Interview
	.4byte gText_FindWordsThatDescribeYour
	.4byte gText_FeelingsRightNow
	.4byte gText_Rom_5CB957
	.4byte gText_IsAsShownOkay
	@ [19] FAN_QUESTION
	.byte 0x0E, 0x01, 0x01, 0x04
	.4byte gText_FansQuestion
	.4byte gText_FindWordsWhichFit
	.4byte gText_TheTrainersImage
	.4byte gText_TheImage
	.4byte gText_IsAsShownOkay
	@ [20] QUESTIONNAIRE
	.byte 0x14, 0x02, 0x02, 0x00
	.4byte gText_Questionnaire
	.4byte gText_CombineFourWordsOrPhrases
	.4byte gText_AndFillOutTheQuestionnaire
	.4byte gText_Rom_5CB957
	.4byte gText_IsAsShownOkay
	.if (. - sEasyChatScreenTemplates) != 0x1F8
	.error "sEasyChatScreenTemplates size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0857332C: easy_chat.s: sub_0811C724
	.globl sEasyChatJpPhraseData0
sEasyChatJpPhraseData0:
	.2byte 0x143A, 0x1817, 0x2023, 0x200F

	@ pret/pokeemerald-jp direct xref for 0x08573334: easy_chat.s: sub_0811C744
	.globl sEasyChatJpPhraseData1
sEasyChatJpPhraseData1:
	.2byte 0x0A33, 0x140C, 0x143A, 0x0209
	@ pret/pokeemerald-jp direct xref for 0x0857333C: easy_chat.s: sub_0811C764
	.globl sEasyChatJpPhrasePairs
sEasyChatJpPhrasePairs:
	@ 5 x 2 u16 JP Easy Chat phrase IDs; keep as scalar IDs until constants are proven.
	.2byte 0x1421, 0x0618, 0x061F, 0x2204, 0x1422, 0x0197, 0x0415, 0x0198
	.2byte 0x281E, 0x2818

sTriangleCursor_Pal: @ 0x08573350
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.2byte 0x4BFF, 0x4B1F, 0x2E3D, 0x1577, 0x6B5F, 0x5ADE, 0x4218, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x18C5, 0x318C, 0x5AF6, 0x6F5B, 0x7FFF

gEasyChatRectangleCursor_Pal: @ 0x08573370
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.2byte 0x028E, 0x001F, 0x109F, 0x253F, 0x35BF, 0x4A5F, 0x5ADF, 0x6F7F
	.2byte 0x7FFF, 0x7FFF, 0x67FF, 0x67FF, 0x0000, 0x0000, 0x0000, 0x0000

sTriangleCursor_Gfx: @ 0x08573390
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	@ uncompressed 8x8 4bpp cursor tile
	.byte 0xC0, 0xCC, 0x00, 0x00, 0xC0, 0xDD, 0x0C, 0x00, 0xC0, 0xDD, 0xCD, 0x00, 0xC0, 0xDD, 0xDD, 0x0C
	.byte 0xC0, 0xDD, 0xDD, 0x0C, 0xC0, 0xDD, 0xCD, 0x00, 0xC0, 0xDD, 0x0C, 0x00, 0xC0, 0xCC, 0x00, 0x00

sEasyChatUnreferencedPalette: @ 0x085733B0
	@ v105: palette-like 16-color data, but no exact xref. Name intentionally neutral.
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/easy_chat/sEasyChatUnreferencedPalette.gbapal"
gEasyChatRectangleCursor_Gfx: @ 0x085733D0
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/easy_chat/rectangle_cursor.4bpp.lz"
	.if (. - gEasyChatRectangleCursor_Gfx) != 0x201
	.error "gEasyChatRectangleCursor_Gfx compressed size mismatch"
	.endif
	@ original alignment padding
	.byte 0x00, 0x00, 0x00

sScrollIndicator_Gfx: @ 0x085735D4
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x6C, 0x00, 0x00, 0xC0, 0x66, 0x00, 0x00, 0x6C, 0x66
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x0C, 0x00, 0x00, 0x00, 0xC6, 0x00, 0x00, 0x00, 0x66, 0x0C, 0x00, 0x00, 0x66, 0xC6, 0x00, 0x00
	.byte 0x00, 0xC0, 0x66, 0x66, 0x00, 0xC0, 0x66, 0x66, 0x00, 0xC0, 0x66, 0x66, 0x00, 0xC0, 0xCC, 0xCC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x66, 0x66, 0x0C, 0x00, 0x66, 0x66, 0x0C, 0x00, 0x66, 0x66, 0x0C, 0x00, 0xCC, 0xCC, 0x0C, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x6C, 0x00, 0x00, 0xC0, 0x66, 0x00, 0x00, 0x6C, 0x66
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x0C, 0x00, 0x00, 0x00, 0xC6, 0x00, 0x00, 0x00, 0x66, 0x0C, 0x00, 0x00, 0x66, 0xC6, 0x00, 0x00
	.byte 0x00, 0xC0, 0x66, 0x66, 0x00, 0xC0, 0x66, 0x66, 0x00, 0xC0, 0x66, 0x66, 0x00, 0xC0, 0xCC, 0xCC
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x66, 0x66, 0x0C, 0x00, 0x66, 0x66, 0x0C, 0x00, 0x66, 0x66, 0x0C, 0x00, 0xCC, 0xCC, 0x0C, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

sStartSelectButtons_Gfx: @ 0x085736D4
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.byte 0xC0, 0x99, 0x99, 0x99, 0x9C, 0xF9, 0x9F, 0xFF, 0x9C, 0xF9, 0x99, 0xF9, 0x9C, 0xF9, 0x9F, 0xF9
	.byte 0x9C, 0x99, 0x9F, 0xF9, 0x9C, 0xF9, 0x9F, 0xF9, 0xC0, 0x99, 0x99, 0x99, 0x00, 0xCC, 0xCC, 0xCC
	.byte 0x99, 0x99, 0x99, 0x99, 0x9F, 0xFF, 0x9F, 0xFF, 0x99, 0x9F, 0x9F, 0x9F, 0x99, 0xFF, 0x9F, 0xFF
	.byte 0x99, 0x9F, 0x9F, 0x9F, 0x99, 0x9F, 0x9F, 0x9F, 0x99, 0x99, 0x99, 0x99, 0xCC, 0xCC, 0xCC, 0xCC
	.byte 0x99, 0x99, 0x99, 0x99, 0x9F, 0xFF, 0x9F, 0x99, 0x9F, 0xF9, 0x99, 0x99, 0x99, 0xF9, 0x99, 0x99
	.byte 0x9F, 0xF9, 0x99, 0xF9, 0x9F, 0xF9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xCC, 0xCC, 0xCC, 0xCC
	.byte 0x99, 0x99, 0x99, 0x0C, 0x99, 0x99, 0x99, 0xC9, 0xF9, 0x9F, 0x99, 0xC9, 0xFF, 0xFF, 0x99, 0xC9
	.byte 0xFF, 0xFF, 0x9F, 0xC9, 0x99, 0x99, 0x99, 0xC9, 0x99, 0x99, 0x99, 0xCC, 0xCC, 0xCC, 0xCC, 0x0C
	.byte 0xC0, 0x99, 0x99, 0x99, 0x9C, 0xF9, 0x9F, 0xFF, 0x9C, 0xF9, 0x99, 0x9F, 0x9C, 0xF9, 0x9F, 0xFF
	.byte 0x9C, 0x99, 0x9F, 0x9F, 0x9C, 0xF9, 0x9F, 0xFF, 0xC0, 0x99, 0x99, 0x99, 0x00, 0xCC, 0xCC, 0xCC
	.byte 0x99, 0x99, 0x99, 0x99, 0xF9, 0x99, 0xFF, 0xF9, 0xF9, 0x99, 0x9F, 0xF9, 0xF9, 0x99, 0xFF, 0xF9
	.byte 0xF9, 0x99, 0x9F, 0xF9, 0xF9, 0x9F, 0xFF, 0xF9, 0x99, 0x99, 0x99, 0x99, 0xCC, 0xCC, 0xCC, 0xCC
	.byte 0x99, 0x99, 0x99, 0x99, 0x9F, 0xFF, 0x9F, 0x99, 0x99, 0xF9, 0x99, 0xF9, 0x99, 0xF9, 0x99, 0x99
	.byte 0x99, 0xF9, 0x99, 0x99, 0x9F, 0xF9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xCC, 0xCC, 0xCC, 0xCC
	.byte 0x99, 0x99, 0x99, 0x0C, 0x99, 0x99, 0x99, 0xC9, 0xFF, 0xFF, 0x9F, 0xC9, 0xFF, 0xFF, 0x99, 0xC9
	.byte 0xF9, 0x9F, 0x99, 0xC9, 0x99, 0x99, 0x99, 0xC9, 0x99, 0x99, 0x99, 0xCC, 0xCC, 0xCC, 0xCC, 0x0C

gEasyChatButtonWindow_Pal: @ 0x085737D4
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.2byte 0x530E, 0x47F7, 0x3793, 0x2ECF, 0x7F56, 0x72D1, 0x562E, 0x0000
	.2byte 0x421F, 0x295D, 0x5BBF, 0x6BFF, 0x39CE, 0x5AF6, 0x6F5B, 0x7FFF
gEasyChatMode_Gfx: @ 0x085737F4
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/easy_chat/mode.4bpp.lz"
	.if (. - gEasyChatMode_Gfx) != 0x311
	.error "gEasyChatMode_Gfx compressed size mismatch"
	.endif
	@ original alignment padding
	.byte 0x00, 0x00, 0x00
gEasyChatButtonWindow_Gfx: @ 0x08573B08
	.incbin "build/graphics/easy_chat/button_window.4bpp.lz"
	.if (. - gEasyChatButtonWindow_Gfx) != 0x208
	.error "gEasyChatButtonWindow_Gfx compressed size mismatch"
	.endif

sRSInterviewFrame_Pal: @ 0x08573D10
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/ui/sRSInterviewFrame_Pal.gbapal"
sRSInterviewFrame_Gfx: @ 0x08573D30
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.incbin "build/graphics/easy_chat/interview_frame.4bpp.lz"
	.if (. - sRSInterviewFrame_Gfx) != 0x133
	.error "sRSInterviewFrame_Gfx compressed size mismatch"
	.endif
	@ original alignment padding
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08573E64: easy_chat.s: sub_0811D814
	.globl gEasyChatMode_Pal
gEasyChatMode_Pal: @ 0x08573E64
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.2byte 0x0000, 0x3AFF, 0x1E3F, 0x19F9, 0x5BBF, 0x6BFF, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x18C5, 0x39CE, 0x5AF6, 0x6F5B, 0x7FFF
	@ pret/pokeemerald-jp direct xref for 0x08573E84: easy_chat.s: sub_0811C868
	.globl gEasyChatWindow_Gfx
gEasyChatWindow_Gfx: @ 0x08573E84
	@ Semantic exact-LZ Easy Chat asset.
	.incbin "build/graphics/easy_chat/window.4bpp.lz"
	.if (. - gEasyChatWindow_Gfx) != 0x260
	.error "gEasyChatWindow_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085740E4: easy_chat.s: sub_0811C868
	.globl gEasyChatWindow_Tilemap
gEasyChatWindow_Tilemap: @ 0x085740E4
	@ Semantic exact-LZ Easy Chat asset.
	.incbin "build/graphics/easy_chat/window.bin.lz"
	.if (. - gEasyChatWindow_Tilemap) != 0x158
	.error "gEasyChatWindow_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0857423C: easy_chat.s: sub_0811D814
	.globl sTextInputFrameOrange_Pal
sTextInputFrameOrange_Pal: @ 0x0857423C
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/ui/sTextInputFrameOrange_Pal.gbapal"

	@ pret/pokeemerald-jp direct xref for 0x0857425C: easy_chat.s: sub_0811D814
	.globl sTextInputFrameGreen_Pal
sTextInputFrameGreen_Pal: @ 0x0857425C
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/ui/sTextInputFrameGreen_Pal.gbapal"
	@ pret/pokeemerald-jp direct xref for 0x0857427C: easy_chat.s: sub_0811C868
	.globl sTextInputFrame_Gfx
sTextInputFrame_Gfx: @ 0x0857427C
	@ Semantic exact-LZ Easy Chat asset.
	.incbin "build/graphics/easy_chat/text_input_frame.4bpp.lz"
	.if (. - sTextInputFrame_Gfx) != 0xC8
	.error "sTextInputFrame_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08574344: easy_chat.s: sub_0811D814
	.globl sTitleText_Pal
sTitleText_Pal: @ 0x08574344
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.2byte 0x0000, 0x0000, 0x7F27, 0x76B5

	@ pret/pokeemerald-jp direct xref for 0x0857434C: easy_chat.s: sub_0811D814
	.globl sText_Pal
sText_Pal: @ 0x0857434C
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.2byte 0x0000, 0x7FFF, 0x318C, 0x6F5B, 0x2628, 0x739C
	@ pret/pokeemerald-jp direct xref for 0x08574358: easy_chat.s
	.globl sPhraseFrameDimensions
sPhraseFrameDimensions: @ 0x08574358
	@ [0] GENERAL_2x2: left=6 top=4 width=18 height=4 footer=0
	.byte 0x86, 0x12, 0x04, 0x00
	@ [1] GENERAL_2x3: left=1 top=4 width=27 height=4 footer=0
	.byte 0x81, 0x1B, 0x04, 0x00
	@ [2] MAIL: left=1 top=2 width=28 height=6 footer=0
	.byte 0x41, 0x1C, 0x06, 0x00
	@ [3] COMBINE_TWO_WORDS: left=6 top=4 width=18 height=2 footer=0
	.byte 0x86, 0x12, 0x02, 0x00
	@ [4] INTERVIEW_SHOW_PERSON: left=16 top=4 width=9 height=2 footer=0
	.byte 0x90, 0x09, 0x02, 0x00
	@ [5] INTERVIEW: left=11 top=4 width=18 height=4 footer=0
	.byte 0x8B, 0x12, 0x04, 0x00
	@ [6] QUIZ_ANSWER: left=10 top=4 width=10 height=2 footer=1
	.byte 0x8A, 0x0A, 0x02, 0x01
	@ [7] QUIZ_QUESTION: left=1 top=6 width=28 height=6 footer=3
	.byte 0xC1, 0x1C, 0x06, 0x03
	@ [8] QUIZ_SET_QUESTION: left=1 top=2 width=28 height=6 footer=2
	.byte 0x41, 0x1C, 0x06, 0x02
	@ pret/pokeemerald-jp direct xref for 0x0857437C: easy_chat.s: sub_0811C868
	.globl sEasyChatBgTemplates
sEasyChatBgTemplates: @ 0x0857437C
	@ BG 0
	.byte 0xC0, 0x01, 0x00, 0x00
	@ BG 1
	.byte 0xDD, 0x11, 0x00, 0x00
	@ BG 2
	.byte 0xE2, 0x21, 0x20, 0x00
	@ BG 3
	.byte 0xFB, 0x31, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0857438C: easy_chat.s: sub_0811C868
	.globl sEasyChatWindowTemplates
sEasyChatWindowTemplates: @ 0x0857438C
	@ TITLE
	.byte 0x01, 0x07, 0x00, 0x10, 0x02, 0x0A, 0x10, 0x00
	@ MSG
	.byte 0x00, 0x04, 0x0F, 0x16, 0x04, 0x0F, 0x0A, 0x00
	@ INPUT_SELECT
	.byte 0x02, 0x01, 0x00, 0x1C, 0x20, 0x03, 0x00, 0x00
	@ DUMMY
	.byte 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085743AC: easy_chat.s: sub_0811DAE4
	.globl sEasyChatYesNoWindowTemplate
sEasyChatYesNoWindowTemplate: @ 0x085743AC
	.byte 0x00, 0x16, 0x09, 0x05, 0x04, 0x0F, 0x62, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085743B4: easy_chat.s: sub_0811CC88
	.globl sEasyChatClearControlText
sEasyChatClearControlText: @ 0x085743B4
	@ Localized control-text bytes; semantic role matches the one-off clear string.
	.byte 0x03, 0x0A, 0x11, 0x11, 0x03, 0x0A, 0x0F, 0x15
	@ pret/pokeemerald-jp direct xref for 0x085743BC: easy_chat.s: sub_0811DF70
	.globl sEasyChatKeyboardRows
sEasyChatKeyboardRows: @ 0x085743BC
	@ Four JP-localized keyboard row strings; target labels remain address-derived.
	.4byte gText_EasyChatKeyboard_JPRow0
	.4byte gText_EasyChatKeyboard_JPRow1
	.4byte gText_EasyChatKeyboard_JPRow2
	.4byte gText_EasyChatKeyboard_JPRow3
	@ pret/pokeemerald-jp direct xref for 0x085743CC: easy_chat.s: sub_0811E6A4
	.globl sSpriteSheets
sSpriteSheets: @ 0x085743CC
	.4byte sTriangleCursor_Gfx
	.2byte 0x0020, 0x0000
	.4byte sScrollIndicator_Gfx
	.2byte 0x0100, 0x0002
	.4byte sStartSelectButtons_Gfx
	.2byte 0x0100, 0x0003
	.4byte 0
	.4byte 0
	@ pret/pokeemerald-jp direct xref for 0x085743EC: easy_chat.s: sub_0811E6A4
	.globl sSpritePalettes
sSpritePalettes: @ 0x085743EC
	.4byte sTriangleCursor_Pal
	.2byte 0x0000, 0x0000
	.4byte gEasyChatRectangleCursor_Pal
	.2byte 0x0001, 0x0000
	.4byte gEasyChatButtonWindow_Pal
	.2byte 0x0002, 0x0000
	.4byte sRSInterviewFrame_Pal
	.2byte 0x0003, 0x0000
	.4byte 0
	.4byte 0
	@ pret/pokeemerald-jp direct xref for 0x08574414: easy_chat.s: sub_0811E6A4
	.globl sCompressedSpriteSheets
sCompressedSpriteSheets: @ 0x08574414
	.4byte sRSInterviewFrame_Gfx
	.2byte 0x0800, 0x0005
	.4byte gEasyChatRectangleCursor_Gfx
	.2byte 0x1000, 0x0001
	.4byte gEasyChatButtonWindow_Gfx
	.2byte 0x0800, 0x0006
	.4byte gEasyChatMode_Gfx
	.2byte 0x1000, 0x0004

sOamData_TriangleCursor: @ 0x08574434
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0857443C: easy_chat.s: sub_0811E6D8, sub_0811E9D0
	.globl sSpriteTemplate_TriangleCursor
sSpriteTemplate_TriangleCursor: @ 0x0857443C
	rodata_sprite_template 0x0000, 0x0000, sOamData_TriangleCursor, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0811E734

sOamData_RectangleCursor: @ 0x08574454
	.byte 0x00, 0x40, 0x00, 0xC0, 0x00, 0x04, 0x00, 0x00

sAnim_RectangleCursor_OnGroup:
	rodata_anim_frame 0, 0
	rodata_anim_end
sAnim_RectangleCursor_OnButton:
	rodata_anim_frame 32, 0
	rodata_anim_end
sAnim_RectangleCursor_OnOthers:
	rodata_anim_frame 64, 0
	rodata_anim_end
sAnim_RectangleCursor_OnLetter:
	rodata_anim_frame 96, 0
	rodata_anim_end
sAnims_RectangleCursor:
	.4byte sAnim_RectangleCursor_OnGroup
	.4byte sAnim_RectangleCursor_OnButton
	.4byte sAnim_RectangleCursor_OnOthers
	.4byte sAnim_RectangleCursor_OnLetter
	@ pret/pokeemerald-jp direct xref for 0x0857448C: easy_chat.s: sub_0811E7D8
	.globl sSpriteTemplate_RectangleCursor
sSpriteTemplate_RectangleCursor: @ 0x0857448C
	rodata_sprite_template 0x0001, 0x0001, sOamData_RectangleCursor, sAnims_RectangleCursor, 0, gDummySpriteAffineAnimTable, sub_0811E734

sOamData_ModeWindow: @ 0x085744A4
	.byte 0x00, 0x40, 0x00, 0xC0, 0x00, 0x04, 0x00, 0x00

sAnim_ModeWindow_Hidden:
	rodata_anim_frame 96, 0
	rodata_anim_end
sAnim_ModeWindow_ToGroup:
	rodata_anim_frame 64, 4
	rodata_anim_frame 32, 4
	rodata_anim_end
sAnim_ModeWindow_ToAlphabet:
	rodata_anim_frame 64, 4
	rodata_anim_frame 0, 4
	rodata_anim_end
sAnim_ModeWindow_ToHidden:
	rodata_anim_frame 64, 4
	rodata_anim_frame 96, 0
	rodata_anim_end
sAnim_ModeWindow_Transition:
	rodata_anim_frame 64, 4
	rodata_anim_end
sAnims_ModeWindow:
	.4byte sAnim_ModeWindow_Hidden
	.4byte sAnim_ModeWindow_ToGroup
	.4byte sAnim_ModeWindow_ToAlphabet
	.4byte sAnim_ModeWindow_ToHidden
	.4byte sAnim_ModeWindow_Transition
	@ pret/pokeemerald-jp direct xref for 0x085744F4: easy_chat.s: sub_0811EAF8
	.globl sSpriteTemplate_ModeWindow
sSpriteTemplate_ModeWindow: @ 0x085744F4
	rodata_sprite_template 0x0004, 0x0002, sOamData_ModeWindow, sAnims_ModeWindow, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy

sOamData_ButtonWindow: @ 0x0857450C
	.byte 0x00, 0x00, 0x00, 0xC0, 0x00, 0x0C, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08574514: easy_chat.s: sub_0811EAF8
	.globl sSpriteTemplate_ButtonWindow
sSpriteTemplate_ButtonWindow: @ 0x08574514
	rodata_sprite_template 0x0006, 0x0002, sOamData_ButtonWindow, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy

sOamData_StartSelectButton: @ 0x0857452C
	.byte 0x00, 0x40, 0x00, 0x40, 0x00, 0x04, 0x00, 0x00
sOamData_ScrollIndicator: @ 0x08574534
	.byte 0x00, 0x00, 0x00, 0x40, 0x00, 0x04, 0x00, 0x00

sAnim_Frame0:
	rodata_anim_frame 0, 0
	rodata_anim_end
sAnim_Frame1:
	rodata_anim_frame 4, 0
	rodata_anim_end
sAnims_TwoFrame:
	.4byte sAnim_Frame0
	.4byte sAnim_Frame1
	@ pret/pokeemerald-jp direct xref for 0x08574554: easy_chat.s: sub_0811EE6C
	.globl sSpriteTemplate_StartSelectButton
sSpriteTemplate_StartSelectButton: @ 0x08574554
	rodata_sprite_template 0x0003, 0x0002, sOamData_StartSelectButton, sAnims_TwoFrame, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x0857456C: easy_chat.s: sub_0811ED20
	.globl sSpriteTemplate_ScrollIndicator
sSpriteTemplate_ScrollIndicator: @ 0x0857456C
	rodata_sprite_template 0x0002, 0x0002, sOamData_ScrollIndicator, sAnims_TwoFrame, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy

sEasyChatJapaneseWordIdTable: @ 0x08574584
	@ ANALYSIS: SEMANTIC_NUMERIC_EASY_CHAT_WORD_ID_TABLE
	@ v105 proof: 202 unique u16 values, no interior xref.
	@ Semantic role remains JP-specific/unproven; keep scalar IDs without guessing a US name.
	.2byte 0x0187, 0x0124, 0x0164, 0x0077, 0x0118, 0x0186, 0x0178, 0x0137
	.2byte 0x0138, 0x004A, 0x0183, 0x00E3, 0x013B, 0x013C, 0x0131, 0x015B
	.2byte 0x0194, 0x0044, 0x007F, 0x013D, 0x0179, 0x0123, 0x0133, 0x0132
	.2byte 0x014A, 0x0115, 0x0135, 0x0082, 0x0026, 0x00CB, 0x0189, 0x00B6
	.2byte 0x00E6, 0x002C, 0x0163, 0x0195, 0x011F, 0x00A9, 0x003F, 0x016E
	.2byte 0x0122, 0x0081, 0x0051, 0x0141, 0x0043, 0x016F, 0x017E, 0x0036
	.2byte 0x017F, 0x0172, 0x012B, 0x00E7, 0x018C, 0x0037, 0x002A, 0x004C
	.2byte 0x004B, 0x018A, 0x0070, 0x006F, 0x0177, 0x00DE, 0x0158, 0x016A
	.2byte 0x014B, 0x017C, 0x001B, 0x001C, 0x0075, 0x017D, 0x0120, 0x0147
	.2byte 0x0117, 0x0116, 0x017A, 0x0199, 0x0079, 0x0029, 0x0130, 0x0168
	.2byte 0x00CA, 0x015D, 0x012C, 0x0074, 0x018B, 0x012A, 0x0155, 0x018E
	.2byte 0x0165, 0x00AA, 0x019B, 0x0167, 0x0166, 0x012D, 0x019A, 0x012E
	.2byte 0x0054, 0x0055, 0x006D, 0x0049, 0x0126, 0x0173, 0x0076, 0x0143
	.2byte 0x0156, 0x0157, 0x0171, 0x00E8, 0x0153, 0x002B, 0x014C, 0x016C
	.2byte 0x0144, 0x012F, 0x011C, 0x00B1, 0x00B2, 0x013F, 0x0159, 0x0140
	.2byte 0x0175, 0x0154, 0x0174, 0x011A, 0x0128, 0x0127, 0x0134, 0x015F
	.2byte 0x017B, 0x0150, 0x0182, 0x0176, 0x0019, 0x00AC, 0x0078, 0x014D
	.2byte 0x0064, 0x0148, 0x0041, 0x0160, 0x0028, 0x00AE, 0x014E, 0x0161
	.2byte 0x0027, 0x0146, 0x0058, 0x0059, 0x00D6, 0x0136, 0x013A, 0x0139
	.2byte 0x018D, 0x0180, 0x011E, 0x0181, 0x0162, 0x00DB, 0x014F, 0x00DA
	.2byte 0x006E, 0x0121, 0x0125, 0x00B7, 0x00B8, 0x0170, 0x0065, 0x011B
	.2byte 0x0149, 0x0190, 0x018F, 0x0048, 0x013E, 0x0142, 0x016D, 0x015A
	.2byte 0x0185, 0x0040, 0x0169, 0x001A, 0x0152, 0x011D, 0x0151, 0x0197
	.2byte 0x0198, 0x0145, 0x002D, 0x0188, 0x00AB, 0x0184, 0x015C, 0x015E
	.2byte 0x0129, 0x0052, 0x0192, 0x0193, 0x0191, 0x0196, 0x0025, 0x016B
	.2byte 0x0119, 0x0042
