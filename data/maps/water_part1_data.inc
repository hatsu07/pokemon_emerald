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
