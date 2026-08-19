	@ pret/pokeemerald-jp direct xref for 0x08570C04: water.s: AnimTask_CreateRaindrops
	@ semantic battle-animation reconstruction: water
	@ ROM range 0x08570C04-0x08571197
.Lsemantic_range_08570C04:
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
sAnim_AuroraBeamRing_0_08570C64: @ 0x08570C64
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_AuroraBeamRing_1_08570C6C: @ 0x08570C6C
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_AuroraBeamRing_08570C74: @ 0x08570C74
	@ AnimCmd pointer table
	.4byte sAnim_AuroraBeamRing_0_08570C64 @ [0]
	.4byte sAnim_AuroraBeamRing_1_08570C6C @ [1]

sAffineAnim_AuroraBeamRing_0_08570C7C: @ 0x08570C7C
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0100, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x0060, 0x0060, 0x0100, 0x0000 @ AFFINE_FRAME(96, 96, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_AuroraBeamRing_08570C94: @ 0x08570C94
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_AuroraBeamRing_0_08570C7C @ [0]

gAuroraBeamRingSpriteTemplate: @ 0x08570C98
	@ SpriteTemplate: tileTag=0x279C, paletteTag=0x279C
	.2byte 0x279C, 0x279C
	.4byte gOamData_AffineDouble_ObjNormal_8x16 @ oam
	.4byte sAnims_AuroraBeamRing_08570C74 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_AuroraBeamRing_08570C94 @ affineAnims
	.4byte AnimAuroraBeamRings @ callback
sAnim_HydroPumpOrb_0_08570CB0: @ 0x08570CB0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0x000C, 0x0001 @ ANIMCMD_FRAME(12, 1)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_HydroPumpOrb_08570CC4: @ 0x08570CC4
	@ AnimCmd pointer table
	.4byte sAnim_HydroPumpOrb_0_08570CB0 @ [0]

gHydroPumpOrbSpriteTemplate: @ 0x08570CC8
	@ SpriteTemplate: tileTag=0x27A5, paletteTag=0x27A5
	.2byte 0x27A5, 0x27A5
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte sAnims_HydroPumpOrb_08570CC4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimToTargetInSinWave @ callback
gMudShotOrbSpriteTemplate: @ 0x08570CE0
	@ SpriteTemplate: tileTag=0x2813, paletteTag=0x2813
	.2byte 0x2813, 0x2813
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte sAnims_HydroPumpOrb_08570CC4 @ anims
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
sAnim_FlamethrowerFlame_0_08570D28: @ 0x08570D28
	@ union AnimCmd stream
	.2byte 0x0010, 0x0002 @ ANIMCMD_FRAME(16, 2)
	.2byte 0x0020, 0x0002 @ ANIMCMD_FRAME(32, 2)
	.2byte 0x0030, 0x0002 @ ANIMCMD_FRAME(48, 2)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_FlamethrowerFlame_08570D38: @ 0x08570D38
	@ AnimCmd pointer table
	.4byte sAnim_FlamethrowerFlame_0_08570D28 @ [0]

gFlamethrowerFlameSpriteTemplate: @ 0x08570D3C
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_FlamethrowerFlame_08570D38 @ anims
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
sAffineAnim_HydroCannonCharge_0_08570D6C: @ 0x08570D6C
	@ union AffineAnimCmd stream
	.2byte 0x0003, 0x0003, 0x320A, 0x0000 @ AFFINE_FRAME(3, 3, rot=0x00, duration=0)
	.2byte 0x0000, 0x0000, 0x0A00, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0xFFEC, 0xFFEC, 0x14F6, 0x0000 @ AFFINE_FRAME(-20, -20, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_HydroCannonBeam_0_08570D8C: @ 0x08570D8C
	@ union AffineAnimCmd stream
	.2byte 0x0150, 0x0150, 0x0000, 0x0000 @ AFFINE_FRAME(336, 336, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_HydroCannonCharge_08570D9C: @ 0x08570D9C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_HydroCannonCharge_0_08570D6C @ [0]

sAffineAnims_HydroCannonBeam_08570DA0: @ 0x08570DA0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_HydroCannonBeam_0_08570D8C @ [0]

gHydroCannonChargeSpriteTemplate: @ 0x08570DA4
	@ SpriteTemplate: tileTag=0x27A5, paletteTag=0x27A5
	.2byte 0x27A5, 0x27A5
	.4byte gOamData_AffineDouble_ObjBlend_16x16 @ oam
	.4byte sAnims_HydroPumpOrb_08570CC4 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_HydroCannonCharge_08570D9C @ affineAnims
	.4byte AnimHydroCannonCharge @ callback
gHydroCannonBeamSpriteTemplate: @ 0x08570DBC
	@ SpriteTemplate: tileTag=0x27A5, paletteTag=0x27A5
	.2byte 0x27A5, 0x27A5
	.4byte gOamData_AffineDouble_ObjBlend_16x16 @ oam
	.4byte sAnims_HydroPumpOrb_08570CC4 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_HydroCannonBeam_08570DA0 @ affineAnims
	.4byte AnimHydroCannonBeam @ callback
sAnim_WaterGunProjectile_0_08570DD4: @ 0x08570DD4
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_WaterGunDroplet_0_08570DDC: @ 0x08570DDC
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_WaterGunProjectile_08570DE4: @ 0x08570DE4
	@ AnimCmd pointer table
	.4byte sAnim_WaterGunProjectile_0_08570DD4 @ [0]

sAnims_WaterGunDroplet_08570DE8: @ 0x08570DE8
	@ AnimCmd pointer table
	.4byte sAnim_WaterGunDroplet_0_08570DDC @ [0]

gWaterGunProjectileSpriteTemplate: @ 0x08570DEC
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte sAnims_WaterGunProjectile_08570DE4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimThrowProjectile @ callback
gWaterGunDropletSpriteTemplate: @ 0x08570E04
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gOamData_AffineDouble_ObjBlend_16x16 @ oam
	.4byte sAnims_WaterGunDroplet_08570DE8 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_WaterGunDroplet_08571DEC @ affineAnims
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
sAnim_WaterPulseBubble_0_08570E64: @ 0x08570E64
	@ union AnimCmd stream
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_WaterPulseBubble_1_08570E6C: @ 0x08570E6C
	@ union AnimCmd stream
	.2byte 0x0009, 0x0001 @ ANIMCMD_FRAME(9, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag27AB_08570F0C_0_08570E74: @ 0x08570E74
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_WaterPulseBubble_08570E7C: @ 0x08570E7C
	@ AnimCmd pointer table
	.4byte sAnim_WaterPulseBubble_0_08570E64 @ [0]
	.4byte sAnim_WaterPulseBubble_1_08570E6C @ [1]

sAnims_Tag27AB_08570F0C_08570E84: @ 0x08570E84
	@ AnimCmd pointer table
	.4byte sAnim_Tag27AB_08570F0C_0_08570E74 @ [0]

sAffineAnim_WaterPulseRingBubble_0_08570E88: @ 0x08570E88
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFF6, 0xFFF6, 0x0F00, 0x0000 @ AFFINE_FRAME(-10, -10, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_WaterPulseRingBubble_1_08570EA0: @ 0x08570EA0
	@ union AffineAnimCmd stream
	.2byte 0x00E0, 0x00E0, 0x0000, 0x0000 @ AFFINE_FRAME(224, 224, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0F00, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag27AB_08570F0C_0_08570EB8: @ 0x08570EB8
	@ union AffineAnimCmd stream
	.2byte 0x0150, 0x0150, 0x0000, 0x0000 @ AFFINE_FRAME(336, 336, rot=0x00, duration=0)
	.2byte 0x0000, 0x0000, 0x0F00, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_WaterPulseRingBubble_08570ED0: @ 0x08570ED0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_WaterPulseRingBubble_0_08570E88 @ [0]
	.4byte sAffineAnim_WaterPulseRingBubble_1_08570EA0 @ [1]

sAffineAnims_Tag27AB_08570F0C_08570ED8: @ 0x08570ED8
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27AB_08570F0C_0_08570EB8 @ [0]

gWaterPulseBubbleSpriteTemplate: @ 0x08570EDC
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte sAnims_WaterPulseBubble_08570E7C @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWaterPulseBubble @ callback
	.globl gWaterPulseRingBubbleSpriteTemplate
gWaterPulseRingBubbleSpriteTemplate: @ 0x08570EF4
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gOamData_AffineNormal_ObjNormal_8x8 @ oam
	.4byte sAnims_WaterPulseBubble_08570E7C @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_WaterPulseRingBubble_08570ED0 @ affineAnims
	.4byte AnimWaterPulseRingBubble @ callback
sSpriteTemplate_Tag27AB_08570F0C: @ 0x08570F0C
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte sAnims_Tag27AB_08570F0C_08570E84 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27AB_08570F0C_08570ED8 @ affineAnims
	.4byte 0x080A87AD @ callback (sub_080A87AC)

sAnim_Tag272D_08570F4C_0_08570F24: @ 0x08570F24
	@ union AnimCmd stream
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnim_Tag272D_08570F4C_1_08570F34: @ 0x08570F34
	@ union AnimCmd stream
	.2byte 0x0010, 0x00C4 @ ANIMCMD_FRAME(16, 196)
	.2byte 0x0020, 0x00C4 @ ANIMCMD_FRAME(32, 196)
	.2byte 0x0030, 0x00C4 @ ANIMCMD_FRAME(48, 196)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag272D_08570F4C_08570F44: @ 0x08570F44
	@ AnimCmd pointer table
	.4byte sAnim_Tag272D_08570F4C_0_08570F24 @ [0]
	.4byte sAnim_Tag272D_08570F4C_1_08570F34 @ [1]

sSpriteTemplate_Tag272D_08570F4C: @ 0x08570F4C
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_08570F4C_08570F44 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08109719 @ callback (sub_08109718)

sSpriteTemplate_Tag272D_08570F64: @ 0x08570F64
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_08570F4C_08570F44 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08109759 @ callback (sub_08109758)

sAnim_Tag2731_08570FDC_0_08570F7C: @ 0x08570F7C
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

sAnims_Tag2731_08570FDC_08570FA0: @ 0x08570FA0
	@ AnimCmd pointer table
	.4byte sAnim_Tag2731_08570FDC_0_08570F7C @ [0]

sAnim_Tag2733_0857100C_0_08570FA4: @ 0x08570FA4
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0010, 0x0005 @ ANIMCMD_FRAME(16, 5)
	.2byte 0x0020, 0x0005 @ ANIMCMD_FRAME(32, 5)
	.2byte 0x0030, 0x0005 @ ANIMCMD_FRAME(48, 5)
	.2byte 0x0040, 0x0005 @ ANIMCMD_FRAME(64, 5)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag2733_0857100C_08570FBC: @ 0x08570FBC
	@ AnimCmd pointer table
	.4byte sAnim_Tag2733_0857100C_0_08570FA4 @ [0]

sAffineAnim_Tag2731_08570FDC_0_08570FC0: @ 0x08570FC0
	@ union AffineAnimCmd stream
	.2byte 0x0032, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(50, 256, rot=0x00, duration=0)
	.2byte 0x0020, 0x0000, 0x0700, 0x0000 @ AFFINE_FRAME(32, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag2731_08570FDC_08570FD8: @ 0x08570FD8
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag2731_08570FDC_0_08570FC0 @ [0]

sSpriteTemplate_Tag2731_08570FDC: @ 0x08570FDC
	@ SpriteTemplate: tileTag=0x2731, paletteTag=0x2731
	.2byte 0x2731, 0x2731
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_Tag2731_08570FDC_08570FA0 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag2731_08570FDC_08570FD8 @ affineAnims
	.4byte AnimLargeFlame @ callback
sSpriteTemplate_Tag2731_08570FF4: @ 0x08570FF4
	@ SpriteTemplate: tileTag=0x2731, paletteTag=0x2731
	.2byte 0x2731, 0x2731
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag2731_08570FDC_08570FA0 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimLargeFlame @ callback
sSpriteTemplate_Tag2733_0857100C: @ 0x0857100C
	@ SpriteTemplate: tileTag=0x2733, paletteTag=0x2733
	.2byte 0x2733, 0x2733
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag2733_0857100C_08570FBC @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810979D @ callback (sub_0810979C)

sSpriteTemplate_Tag272D_08571024: @ 0x08571024
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag2733_0857100C_08570FBC @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810979D @ callback (sub_0810979C)

sAnim_Tag272D_08571050_0_0857103C: @ 0x0857103C
	@ union AnimCmd stream
	.2byte 0x0010, 0x0006 @ ANIMCMD_FRAME(16, 6)
	.2byte 0x0020, 0x0006 @ ANIMCMD_FRAME(32, 6)
	.2byte 0x0030, 0x0006 @ ANIMCMD_FRAME(48, 6)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag272D_08571050_0857104C: @ 0x0857104C
	@ AnimCmd pointer table
	.4byte sAnim_Tag272D_08571050_0_0857103C @ [0]

sSpriteTemplate_Tag272D_08571050: @ 0x08571050
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_08571050_0857104C @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x081098B5 @ callback (sub_081098B4)

sAffineAnim_Tag27AD_08571084_0_08571068: @ 0x08571068
	@ union AffineAnimCmd stream
	.2byte 0x0050, 0x0050, 0x0000, 0x0000 @ AFFINE_FRAME(80, 80, rot=0x00, duration=0)
	.2byte 0x0002, 0x0002, 0x010A, 0x0000 @ AFFINE_FRAME(2, 2, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_Tag27AD_08571084_08571080: @ 0x08571080
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27AD_08571084_0_08571068 @ [0]

sSpriteTemplate_Tag27AD_08571084: @ 0x08571084
	@ SpriteTemplate: tileTag=0x27AD, paletteTag=0x27AD
	.2byte 0x27AD, 0x27AD
	.4byte gBattleAnimOam_084FD1A0 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27AD_08571084_08571080 @ affineAnims
	.4byte AnimSunlight @ callback
sAnim_Tag272D_085710D0_0_0857109C: @ 0x0857109C
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0x0040, 0x0004 @ ANIMCMD_FRAME(64, 4)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag272D_085710D0_085710B4: @ 0x085710B4
	@ AnimCmd pointer table
	.4byte sAnim_Tag272D_085710D0_0_0857109C @ [0]

sSpriteTemplate_Tag272D_085710B8: @ 0x085710B8
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte TranslateAnimSpriteToTargetMonLocation @ callback
sSpriteTemplate_Tag272D_085710D0: @ 0x085710D0
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_085710D0_085710B4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimEmberFlare @ callback
sSpriteTemplate_Tag272D_085710E8: @ 0x085710E8
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_085710D0_085710B4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08109A51 @ callback (sub_08109A50)

sSpriteTemplate_Tag272D_08571100: @ 0x08571100
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_085710D0_085710B4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFireRing @ callback
sAnim_Tag272D_08571150_0_08571118: @ 0x08571118
	@ union AnimCmd stream
	.2byte 0x0020, 0x0006 @ ANIMCMD_FRAME(32, 6)
	.2byte 0x0030, 0x0006 @ ANIMCMD_FRAME(48, 6)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag272D_08571150_08571124: @ 0x08571124
	@ AnimCmd pointer table
	.4byte sAnim_Tag272D_08571150_0_08571118 @ [0]

	@ semanticized v110: canonical static data at 0x08571128, size=0x10
sAffineAnim_FireBlastUnused_0:
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x01
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 1)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	@ semanticized v110: canonical static data at 0x08571138, size=0x18
sAffineAnim_FireBlastUnused_1:
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
	.4byte sAnims_Tag272D_08571150_08571124 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFireCross @ callback
sSpriteTemplate_Tag272D_08571168: @ 0x08571168
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_085710D0_085710B4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08109BF5 @ callback (sub_08109BF4)

sSpriteTemplate_Tag272D_08571180: @ 0x08571180
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_085710D0_085710B4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x080A87AD @ callback (sub_080A87AC)

	.if (. - .Lsemantic_range_08570C04) != 0x594
	.error "semantic range 0x08570C04 size mismatch"
	.endif
	.globl gFireData_08571198
gFireData_08571198: @ 0x08571198
	@ analyzed canonical ROM range 0x08571198-0x085711AF
sSpriteTemplate_08571198: @ 0x08571198
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
sSpriteTemplate_Fire_085711CC: @ 0x085711CC
	@ ANALYSIS: SEMANTIC_SPRITE_TEMPLATE addr=0x085711CC size=0x18
	rodata_sprite_template 0x27D9, 0x27D9, gOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810A260
	@ Fire AnimCmd sequences used by sSpriteTemplate_Fire_08571220.
	@ ANALYSIS: SEMANTIC_ANIM_CMD_TABLE addr=0x085711E4 size=0x3C count=4
sAnim_Fire_085711E4: @ 0x085711E4
	rodata_anim_frame 0, 5
	rodata_anim_frame 4, 5
	rodata_anim_frame 8, 5
	rodata_anim_frame 12, 5
	rodata_anim_jump 0
sAnim_Fire_085711F8: @ 0x085711F8
	rodata_anim_frame 16, 5
	rodata_anim_end
sAnim_Fire_08571200: @ 0x08571200
	rodata_anim_frame 20, 5
	rodata_anim_end
sAnim_Fire_08571208: @ 0x08571208
	rodata_anim_frame 20, 5
	rodata_anim_end
sAnims_Fire_08571210: @ 0x08571210
	.4byte sAnim_Fire_085711E4
	.4byte sAnim_Fire_085711F8
	.4byte sAnim_Fire_08571200
	.4byte sAnim_Fire_08571208
sSpriteTemplate_Fire_08571220: @ 0x08571220
	@ ANALYSIS: SEMANTIC_SPRITE_TEMPLATE addr=0x08571220 size=0x18
	rodata_sprite_template 0x27F7, 0x27F7, gOamData_AffineOff_ObjNormal_16x16, sAnims_Fire_08571210, 0, gDummySpriteAffineAnimTable, sub_0810A34C
	@ Fire AnimCmd sequence used by sSpriteTemplate_Fire_08571250.
	@ ANALYSIS: SEMANTIC_ANIM_CMD_TABLE addr=0x08571238 size=0x18 count=1
sAnim_Fire_08571238: @ 0x08571238
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 5
	rodata_anim_frame 48, 5
	rodata_anim_jump 0
sAnims_Fire_0857124C: @ 0x0857124C
	.4byte sAnim_Fire_08571238
sSpriteTemplate_Fire_08571250: @ 0x08571250
	@ ANALYSIS: SEMANTIC_SPRITE_TEMPLATE addr=0x08571250 size=0x18
	rodata_sprite_template 0x27F8, 0x27F8, gOamData_AffineOff_ObjNormal_32x32, sAnims_Fire_0857124C, 0, gDummySpriteAffineAnimTable, sub_0810A500
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
sAnim_ElectricSpark_08571288: @ 0x08571288
	rodata_anim_frame 0, 5
	rodata_anim_frame 16, 5
	rodata_anim_frame 32, 8
	rodata_anim_frame 48, 5
	rodata_anim_frame 64, 5
	rodata_anim_end
sAnims_ElectricSpark_085712A0: @ 0x085712A0
	.4byte sAnim_ElectricSpark_08571288
	@ pret/pokeemerald-jp direct xref for 0x085712A4: electric.s: sub_0810BE64
	.globl gBattleAnimSpriteTemplate_ElectricSpark
gBattleAnimSpriteTemplate_ElectricSpark: @ 0x085712A4
	@ analyzed canonical ROM range 0x085712A4-0x0857140B
	@ pointer/nullable table
	.4byte 0x27352735 @ +0x0
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x4
	.4byte sAnims_ElectricSpark_085712A0 @ +0x8
	.4byte 0 @ +0xC
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte sub_0810A9F8 @ +0x14
sAffineAnim_UnusedSpinningFist:
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
	.globl gElectricData_0857140C
gElectricData_0857140C: @ 0x0857140C
	@ analyzed canonical ROM range 0x0857140C-0x08571423
sSpriteTemplate_0857140C: @ 0x0857140C
	rodata_sprite_template 0x2711, 0x2711, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810B22C
	@ pret/pokeemerald-jp direct xref for 0x08571424: electric.s: sub_0810B27C
	.globl gElectricData_08571424
gElectricData_08571424:
	@ analyzed canonical ROM range 0x08571424-0x0857143B
	.globl sSpriteTemplate_08571424
sSpriteTemplate_08571424: @ 0x08571424
	rodata_sprite_template 0x27BD, 0x27BD, gOamData_AffineOff_ObjNormal_32x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0810B27C
	@ pret/pokeemerald-jp direct xref for 0x0857143C: electric.s: sub_0810B3C8
	@ semantic battle-animation reconstruction: electric
	@ ROM range 0x0857143C-0x0857174B
.Lsemantic_range_0857143C:
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

sAnim_ElectricData_0857148C_0_0857145C: @ 0x0857145C
	@ union AnimCmd stream
	.2byte 0x0003, 0x0001 @ ANIMCMD_FRAME(3, 1)
	.2byte 0x0002, 0x0001 @ ANIMCMD_FRAME(2, 1)
	.2byte 0x0001, 0x0001 @ ANIMCMD_FRAME(1, 1)
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_ElectricData_0857148C_1_08571470: @ 0x08571470
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0001, 0x0005 @ ANIMCMD_FRAME(1, 5)
	.2byte 0x0002, 0x0005 @ ANIMCMD_FRAME(2, 5)
	.2byte 0x0003, 0x0005 @ ANIMCMD_FRAME(3, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_ElectricData_0857148C_08571484: @ 0x08571484
	@ AnimCmd pointer table
	.4byte sAnim_ElectricData_0857148C_0_0857145C @ [0]
	.4byte sAnim_ElectricData_0857148C_1_08571470 @ [1]

	.globl gElectricData_0857148C
gElectricData_0857148C: @ 0x0857148C
	@ SpriteTemplate: tileTag=0x27E3, paletteTag=0x27E3
	.2byte 0x27E3, 0x27E3
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte sAnims_ElectricData_0857148C_08571484 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte gPriorityABattleAnimSpriteCallbackDummy @ callback (SpriteCallbackDummy)

sAffineAnim_Tag27E4_08571540_0_085714A4: @ 0x085714A4
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x3C00, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(0)
	.2byte 0xFFFC, 0xFFFC, 0x0500, 0x0000 @ AFFINE_FRAME(-4, -4, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x0500, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x000A, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(10)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag27E4_08571540_1_085714E4: @ 0x085714E4
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x1E00, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFFC, 0xFFFC, 0x0500, 0x0000 @ AFFINE_FRAME(-4, -4, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x0500, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0003, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(3)

sAffineAnim_Tag27E4_08571540_2_08571514: @ 0x08571514
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x1E00, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x1E00, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27E4_08571540_08571534: @ 0x08571534
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27E4_08571540_0_085714A4 @ [0]
	.4byte sAffineAnim_Tag27E4_08571540_1_085714E4 @ [1]
	.4byte sAffineAnim_Tag27E4_08571540_2_08571514 @ [2]

sSpriteTemplate_Tag27E4_08571540: @ 0x08571540
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27E4_08571540_08571534 @ affineAnims
	.4byte 0x0810B529 @ callback (sub_0810B528)

sAnim_Tag27E5_08571570_0_08571558: @ 0x08571558
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag27E5_08571570_0857156C: @ 0x0857156C
	@ AnimCmd pointer table
	.4byte sAnim_Tag27E5_08571570_0_08571558 @ [0]

sSpriteTemplate_Tag27E5_08571570: @ 0x08571570
	@ SpriteTemplate: tileTag=0x27E5, paletteTag=0x27E5
	.2byte 0x27E5, 0x27E5
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag27E5_08571570_0857156C @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimElectricPuff @ callback
sSpriteTemplate_Tag27E4_08571588: @ 0x08571588
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27E4_08571540_08571534 @ affineAnims
	.4byte 0x0810B5E9 @ callback (sub_0810B5E8)

sAnim_ElectricData_085715E4_0_085715A0: @ 0x085715A0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_ElectricData_085715E4_1_085715A8: @ 0x085715A8
	@ union AnimCmd stream
	.2byte 0x0002, 0x0003 @ ANIMCMD_FRAME(2, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_ElectricData_085715E4_2_085715B0: @ 0x085715B0
	@ union AnimCmd stream
	.2byte 0x0004, 0x0003 @ ANIMCMD_FRAME(4, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_ElectricData_085715E4_3_085715B8: @ 0x085715B8
	@ union AnimCmd stream
	.2byte 0x0006, 0x0003 @ ANIMCMD_FRAME(6, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_ElectricData_085715E4_085715C0: @ 0x085715C0
	@ AnimCmd pointer table
	.4byte sAnim_ElectricData_085715E4_0_085715A0 @ [0]
	.4byte sAnim_ElectricData_085715E4_1_085715A8 @ [1]
	.4byte sAnim_ElectricData_085715E4_2_085715B0 @ [2]
	.4byte sAnim_ElectricData_085715E4_3_085715B8 @ [3]

sAffineAnim_ElectricData_085715E4_0_085715D0: @ 0x085715D0
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0040, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_ElectricData_085715E4_085715E0: @ 0x085715E0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_ElectricData_085715E4_0_085715D0 @ [0]

	.globl gElectricData_085715E4
gElectricData_085715E4: @ 0x085715E4
	@ SpriteTemplate: tileTag=0x2711, paletteTag=0x2711
	.2byte 0x2711, 0x2711
	.4byte gOamData_AffineDouble_ObjNormal_8x16 @ oam
	.4byte sAnims_ElectricData_085715E4_085715C0 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_ElectricData_085715E4_085715E0 @ affineAnims
	.4byte 0x0810BA41 @ callback (sub_0810BA40)

sSpriteTemplate_Tag27E4_085715FC: @ 0x085715FC
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27E4_08571540_08571534 @ affineAnims
	.4byte 0x0810BA8D @ callback (sub_0810BA8C)

	.globl gElectricData_08571614
gElectricData_08571614: @ 0x08571614
	@ SpriteTemplate: tileTag=0x2711, paletteTag=0x2711
	.2byte 0x2711, 0x2711
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810BD6D @ callback (sub_0810BD6C)

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

	.if (. - .Lsemantic_range_0857143C) != 0x310
	.error "semantic range 0x0857143C size mismatch"
	.endif
	.globl gIceData_0857174C
gIceData_0857174C:
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
.Lsemantic_range_08571840:
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

sAffineAnim_IceData_08571910_0_085718C0: @ 0x085718C0
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_IceData_08571910_1_085718D0: @ 0x085718D0
	@ union AffineAnimCmd stream
	.2byte 0x00F0, 0x00F0, 0x0000, 0x0000 @ AFFINE_FRAME(240, 240, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_IceData_08571910_2_085718E0: @ 0x085718E0
	@ union AffineAnimCmd stream
	.2byte 0x00E0, 0x00E0, 0x0000, 0x0000 @ AFFINE_FRAME(224, 224, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag2817_08571928_0_085718F0: @ 0x085718F0
	@ union AffineAnimCmd stream
	.2byte 0x0150, 0x0150, 0x0000, 0x0000 @ AFFINE_FRAME(336, 336, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_IceData_08571910_08571900: @ 0x08571900
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_IceData_08571910_0_085718C0 @ [0]
	.4byte sAffineAnim_IceData_08571910_1_085718D0 @ [1]
	.4byte sAffineAnim_IceData_08571910_2_085718E0 @ [2]

sAffineAnims_Tag2817_08571928_0857190C: @ 0x0857190C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag2817_08571928_0_085718F0 @ [0]

	.globl gIceData_08571910
gIceData_08571910: @ 0x08571910
	@ SpriteTemplate: tileTag=0x2817, paletteTag=0x2817
	.2byte 0x2817, 0x2817
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_IceData_08571910_08571900 @ affineAnims
	.4byte AnimHailBegin @ callback
sSpriteTemplate_Tag2817_08571928: @ 0x08571928
	@ SpriteTemplate: tileTag=0x2817, paletteTag=0x2817
	.2byte 0x2817, 0x2817
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag2817_08571928_0857190C @ affineAnims
	.4byte 0x080A87AD @ callback (sub_080A87AC)

sAnim_Tag273B_085719C8_0_08571940: @ 0x08571940
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag273B_085719C8_1_08571948: @ 0x08571948
	@ union AnimCmd stream
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0x0040, 0x0004 @ ANIMCMD_FRAME(64, 4)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag273B_085719C8_0857195C: @ 0x0857195C
	@ AnimCmd pointer table
	.4byte sAnim_Tag273B_085719C8_0_08571940 @ [0]
	.4byte sAnim_Tag273B_085719C8_1_08571948 @ [1]

sAffineAnim_Tag273B_085719C8_0_08571964: @ 0x08571964
	@ union AffineAnimCmd stream
	.2byte 0x00E0, 0x00E0, 0x0000, 0x0000 @ AFFINE_FRAME(224, 224, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag273B_085719C8_1_08571974: @ 0x08571974
	@ union AffineAnimCmd stream
	.2byte 0x0118, 0x0118, 0x0000, 0x0000 @ AFFINE_FRAME(280, 280, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag273B_085719C8_2_08571984: @ 0x08571984
	@ union AffineAnimCmd stream
	.2byte 0x0150, 0x0150, 0x0000, 0x0000 @ AFFINE_FRAME(336, 336, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag273B_085719C8_3_08571994: @ 0x08571994
	@ union AffineAnimCmd stream
	.2byte 0x0180, 0x0180, 0x0000, 0x0000 @ AFFINE_FRAME(384, 384, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag273B_085719C8_4_085719A4: @ 0x085719A4
	@ union AffineAnimCmd stream
	.2byte 0x01C0, 0x01C0, 0x0000, 0x0000 @ AFFINE_FRAME(448, 448, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag273B_085719C8_085719B4: @ 0x085719B4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag273B_085719C8_0_08571964 @ [0]
	.4byte sAffineAnim_Tag273B_085719C8_1_08571974 @ [1]
	.4byte sAffineAnim_Tag273B_085719C8_2_08571984 @ [2]
	.4byte sAffineAnim_Tag273B_085719C8_3_08571994 @ [3]
	.4byte sAffineAnim_Tag273B_085719C8_4_085719A4 @ [4]

sSpriteTemplate_Tag273B_085719C8: @ 0x085719C8
	@ SpriteTemplate: tileTag=0x273B, paletteTag=0x273B
	.2byte 0x273B, 0x273B
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_Tag273B_085719C8_0857195C @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag273B_085719C8_085719B4 @ affineAnims
	.4byte InitIceBallAnim @ callback
sSpriteTemplate_Tag279D_085719E0: @ 0x085719E0
	@ SpriteTemplate: tileTag=0x279D, paletteTag=0x279D
	.2byte 0x279D, 0x279D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte sAnims_IceCrystalSmall @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte InitIceBallParticle @ callback
sSpriteTemplate_Tag2742_085719F8: @ 0x085719F8
	@ SpriteTemplate: tileTag=0x2742, paletteTag=0x2742
	.2byte 0x2742, 0x2742
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedHumanoidFoot @ callback
sAnim_Tag279F_08571A4C_0_08571A10: @ 0x08571A10
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag279F_08571AC4_0_08571A18: @ 0x08571A18
	@ union AnimCmd stream
	.2byte 0x0010, 0x0001 @ ANIMCMD_FRAME(16, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag279F_08571AC4_1_08571A20: @ 0x08571A20
	@ union AnimCmd stream
	.2byte 0x0020, 0x0001 @ ANIMCMD_FRAME(32, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag279F_08571AAC_0_08571A28: @ 0x08571A28
	@ union AnimCmd stream
	.2byte 0x0030, 0x0001 @ ANIMCMD_FRAME(48, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag279F_08571AAC_1_08571A30: @ 0x08571A30
	@ union AnimCmd stream
	.2byte 0x0030, 0x0041 @ ANIMCMD_FRAME(48, 65)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag279F_08571A4C_08571A38: @ 0x08571A38
	@ AnimCmd pointer table
	.4byte sAnim_Tag279F_08571A4C_0_08571A10 @ [0]

sAnims_Tag279F_08571AC4_08571A3C: @ 0x08571A3C
	@ AnimCmd pointer table
	.4byte sAnim_Tag279F_08571AC4_0_08571A18 @ [0]
	.4byte sAnim_Tag279F_08571AC4_1_08571A20 @ [1]

sAnims_Tag279F_08571AAC_08571A44: @ 0x08571A44
	@ AnimCmd pointer table
	.4byte sAnim_Tag279F_08571AAC_0_08571A28 @ [0]
	.4byte sAnim_Tag279F_08571AAC_1_08571A30 @ [1]

sSpriteTemplate_Tag279F_08571A4C: @ 0x08571A4C
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag279F_08571A4C_08571A38 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810D6B9 @ callback (sub_0810D6B8)

sSpriteTemplate_Tag279F_08571A64: @ 0x08571A64
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag279F_08571A4C_08571A38 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810D705 @ callback (sub_0810D704)

sSpriteTemplate_Tag279F_08571A7C: @ 0x08571A7C
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag279F_08571A4C_08571A38 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBasicFistOrFoot @ callback
sSpriteTemplate_Tag279F_08571A94: @ 0x08571A94
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag279F_08571A4C_08571A38 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810D781 @ callback (sub_0810D780)

sSpriteTemplate_Tag279F_08571AAC: @ 0x08571AAC
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag279F_08571AAC_08571A44 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810D95D @ callback (sub_0810D95C)

sSpriteTemplate_Tag279F_08571AC4: @ 0x08571AC4
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag279F_08571AC4_08571A3C @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810DA05 @ callback (sub_0810DA04)

sAffineAnim_Tag279F_08571AF8_0_08571ADC: @ 0x08571ADC
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0114, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_Tag279F_08571AF8_08571AF4: @ 0x08571AF4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag279F_08571AF8_0_08571ADC @ [0]

sSpriteTemplate_Tag279F_08571AF8: @ 0x08571AF8
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_Tag279F_08571A4C_08571A38 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag279F_08571AF8_08571AF4 @ affineAnims
	.4byte AnimSpinningKickOrPunch @ callback
sAffineAnim_Tag279F_08571B2C_0_08571B10: @ 0x08571B10
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFFC, 0xFFFC, 0x0114, 0x0000 @ AFFINE_FRAME(-4, -4, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_Tag279F_08571B2C_08571B28: @ 0x08571B28
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag279F_08571B2C_0_08571B10 @ [0]

sSpriteTemplate_Tag279F_08571B2C: @ 0x08571B2C
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_Tag279F_08571A4C_08571A38 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag279F_08571B2C_08571B28 @ affineAnims
	.4byte AnimSpinningKickOrPunch @ callback
sSpriteTemplate_Tag279F_08571B44: @ 0x08571B44
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag279F_08571AC4_08571A3C @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimStompFoot @ callback
sSpriteTemplate_Tag2759_08571B5C: @ 0x08571B5C
	@ SpriteTemplate: tileTag=0x2759, paletteTag=0x2759
	.2byte 0x2759, 0x2759
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDizzyPunchDuck @ callback
sSpriteTemplate_Tag27B7_08571B74: @ 0x08571B74
	@ SpriteTemplate: tileTag=0x27B7, paletteTag=0x27B7
	.2byte 0x27B7, 0x27B7
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBrickBreakWall @ callback
sSpriteTemplate_Tag27E0_08571B8C: @ 0x08571B8C
	@ SpriteTemplate: tileTag=0x27E0, paletteTag=0x27E0
	.2byte 0x27E0, 0x27E0
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBrickBreakWallShard @ callback
sAffineAnim_Tag27E4_08571BD0_0_08571BA4: @ 0x08571BA4
	@ union AffineAnimCmd stream
	.2byte 0x0020, 0x0020, 0x0000, 0x0000 @ AFFINE_FRAME(32, 32, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x4000, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0xFFFA, 0xFFFA, 0x0800, 0x0000 @ AFFINE_FRAME(-6, -6, rot=0x00, duration=0)
	.2byte 0x0006, 0x0006, 0x0800, 0x0000 @ AFFINE_FRAME(6, 6, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0002, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(2)

sAffineAnims_Tag27E4_08571BD0_08571BCC: @ 0x08571BCC
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27E4_08571BD0_0_08571BA4 @ [0]

sSpriteTemplate_Tag27E4_08571BD0: @ 0x08571BD0
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD208 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27E4_08571BD0_08571BCC @ affineAnims
	.4byte AnimSuperpowerOrb @ callback
sSpriteTemplate_Tag2811_08571BE8: @ 0x08571BE8
	@ SpriteTemplate: tileTag=0x2811, paletteTag=0x2811
	.2byte 0x2811, 0x2811
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSuperpowerRock @ callback
sSpriteTemplate_Tag2810_08571C00: @ 0x08571C00
	@ SpriteTemplate: tileTag=0x2810, paletteTag=0x2810
	.2byte 0x2810, 0x2810
	.4byte gOamData_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSuperpowerFireball @ callback
sSpriteTemplate_Tag279F_08571C18: @ 0x08571C18
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag279F_08571A4C_08571A38 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810E1D5 @ callback (sub_0810E1D4)

sAnim_Tag2805_08571C6C_0_08571C30: @ 0x08571C30
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag2805_08571C6C_1_08571C40: @ 0x08571C40
	@ union AnimCmd stream
	.2byte 0x0000, 0x0084 @ ANIMCMD_FRAME(0, 132)
	.2byte 0x0010, 0x0084 @ ANIMCMD_FRAME(16, 132)
	.2byte 0x0020, 0x0084 @ ANIMCMD_FRAME(32, 132)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag2805_08571C6C_2_08571C50: @ 0x08571C50
	@ union AnimCmd stream
	.2byte 0x0000, 0x0044 @ ANIMCMD_FRAME(0, 68)
	.2byte 0x0010, 0x0044 @ ANIMCMD_FRAME(16, 68)
	.2byte 0x0020, 0x0044 @ ANIMCMD_FRAME(32, 68)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag2805_08571C6C_08571C60: @ 0x08571C60
	@ AnimCmd pointer table
	.4byte sAnim_Tag2805_08571C6C_0_08571C30 @ [0]
	.4byte sAnim_Tag2805_08571C6C_1_08571C40 @ [1]
	.4byte sAnim_Tag2805_08571C6C_2_08571C50 @ [2]

sSpriteTemplate_Tag2805_08571C6C: @ 0x08571C6C
	@ SpriteTemplate: tileTag=0x2805, paletteTag=0x2805
	.2byte 0x2805, 0x2805
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag2805_08571C6C_08571C60 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRevengeScratch @ callback
sAnim_Tag2806_08571CB4_0_08571C84: @ 0x08571C84
	@ union AnimCmd stream
	.2byte 0x0000, 0x0006 @ ANIMCMD_FRAME(0, 6)
	.2byte 0x0040, 0x0006 @ ANIMCMD_FRAME(64, 6)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag2806_08571CB4_1_08571C90: @ 0x08571C90
	@ union AnimCmd stream
	.2byte 0x0000, 0x00C6 @ ANIMCMD_FRAME(0, 198)
	.2byte 0x0040, 0x00C6 @ ANIMCMD_FRAME(64, 198)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag2806_08571CB4_2_08571C9C: @ 0x08571C9C
	@ union AnimCmd stream
	.2byte 0x0000, 0x0046 @ ANIMCMD_FRAME(0, 70)
	.2byte 0x0040, 0x0046 @ ANIMCMD_FRAME(64, 70)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag2806_08571CB4_08571CA8: @ 0x08571CA8
	@ AnimCmd pointer table
	.4byte sAnim_Tag2806_08571CB4_0_08571C84 @ [0]
	.4byte sAnim_Tag2806_08571CB4_1_08571C90 @ [1]
	.4byte sAnim_Tag2806_08571CB4_2_08571C9C @ [2]

sSpriteTemplate_Tag2806_08571CB4: @ 0x08571CB4
	@ SpriteTemplate: tileTag=0x2806, paletteTag=0x2806
	.2byte 0x2806, 0x2806
	.4byte gOamData_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_Tag2806_08571CB4_08571CA8 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRevengeScratch @ callback
sAffineAnim_Tag279F_08571CE8_0_08571CCC: @ 0x08571CCC
	@ union AffineAnimCmd stream
	.2byte 0x0200, 0x0200, 0x0000, 0x0000 @ AFFINE_FRAME(512, 512, rot=0x00, duration=0)
	.2byte 0xFFE0, 0xFFE0, 0x0800, 0x0000 @ AFFINE_FRAME(-32, -32, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag279F_08571CE8_08571CE4: @ 0x08571CE4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag279F_08571CE8_0_08571CCC @ [0]

sSpriteTemplate_Tag279F_08571CE8: @ 0x08571CE8
	@ SpriteTemplate: tileTag=0x279F, paletteTag=0x279F
	.2byte 0x279F, 0x279F
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_Tag279F_08571A4C_08571A38 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag279F_08571CE8_08571CE4 @ affineAnims
	.4byte 0x0810E2CD @ callback (sub_0810E2CC)

sAnim_Tag27A7_08571D18_0_08571D00: @ 0x08571D00
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0008, 0x0005 @ ANIMCMD_FRAME(8, 5)
	.2byte 0x0010, 0x0005 @ ANIMCMD_FRAME(16, 5)
	.2byte 0x0018, 0x0005 @ ANIMCMD_FRAME(24, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag27A7_08571D18_08571D14: @ 0x08571D14
	@ AnimCmd pointer table
	.4byte sAnim_Tag27A7_08571D18_0_08571D00 @ [0]

sSpriteTemplate_Tag27A7_08571D18: @ 0x08571D18
	@ SpriteTemplate: tileTag=0x27A7, paletteTag=0x27A7
	.2byte 0x27A7, 0x27A7
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte sAnims_Tag27A7_08571D18_08571D14 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSpriteOnMonPos @ callback
sAnim_Tag27A6_08571D8C_0_08571D30: @ 0x08571D30
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag27A6_08571DF0_0_08571D38: @ 0x08571D38
	@ union AnimCmd stream
	.2byte 0x0004, 0x0001 @ ANIMCMD_FRAME(4, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag27A6_08571DBC_0_08571D40: @ 0x08571D40
	@ union AnimCmd stream
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag27A6_08571D8C_08571D48: @ 0x08571D48
	@ AnimCmd pointer table
	.4byte sAnim_Tag27A6_08571D8C_0_08571D30 @ [0]

sAnims_Tag27A6_08571DF0_08571D4C: @ 0x08571D4C
	@ AnimCmd pointer table
	.4byte sAnim_Tag27A6_08571DF0_0_08571D38 @ [0]

sAnims_Tag27A6_08571DBC_08571D50: @ 0x08571D50
	@ AnimCmd pointer table
	.4byte sAnim_Tag27A6_08571DBC_0_08571D40 @ [0]

sAffineAnim_Tag27A6_08571D8C_0_08571D54: @ 0x08571D54
	@ union AffineAnimCmd stream
	.2byte 0x0160, 0x0160, 0x0000, 0x0000 @ AFFINE_FRAME(352, 352, rot=0x00, duration=0)
	.2byte 0xFFF6, 0xFFF6, 0x0A00, 0x0000 @ AFFINE_FRAME(-10, -10, rot=0x00, duration=0)
	.2byte 0x000A, 0x000A, 0x0A00, 0x0000 @ AFFINE_FRAME(10, 10, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnim_Tag27A6_08571DBC_0_08571D74: @ 0x08571D74
	@ union AffineAnimCmd stream
	.2byte 0x00EC, 0x00EC, 0x0000, 0x0000 @ AFFINE_FRAME(236, 236, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27A6_08571D8C_08571D84: @ 0x08571D84
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27A6_08571D8C_0_08571D54 @ [0]

sAffineAnims_Tag27A6_08571DBC_08571D88: @ 0x08571D88
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27A6_08571DBC_0_08571D74 @ [0]

sSpriteTemplate_Tag27A6_08571D8C: @ 0x08571D8C
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_AffineDouble_ObjNormal_16x16 @ oam
	.4byte sAnims_Tag27A6_08571D8C_08571D48 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27A6_08571D8C_08571D84 @ affineAnims
	.4byte 0x0810E3FD @ callback (sub_0810E3FC)

sSpriteTemplate_Tag27A6_08571DA4: @ 0x08571DA4
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_AffineDouble_ObjNormal_16x16 @ oam
	.4byte sAnims_Tag27A6_08571D8C_08571D48 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27A6_08571D8C_08571D84 @ affineAnims
	.4byte 0x0810E47D @ callback (sub_0810E47C)

sSpriteTemplate_Tag27A6_08571DBC: @ 0x08571DBC
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte sAnims_Tag27A6_08571DBC_08571D50 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27A6_08571DBC_08571D88 @ affineAnims
	.4byte 0x0810E521 @ callback (sub_0810E520)

sAffineAnim_WaterGunDroplet_0_08571DD4: @ 0x08571DD4
	@ union AffineAnimCmd stream
	.2byte 0xFFF0, 0x0010, 0x0600, 0x0000 @ AFFINE_FRAME(-16, 16, rot=0x00, duration=0)
	.2byte 0x0010, 0xFFF0, 0x0600, 0x0000 @ AFFINE_FRAME(16, -16, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_WaterGunDroplet_08571DEC: @ 0x08571DEC
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_WaterGunDroplet_0_08571DD4 @ [0]

sSpriteTemplate_Tag27A6_08571DF0: @ 0x08571DF0
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_AffineDouble_ObjNormal_16x16 @ oam
	.4byte sAnims_Tag27A6_08571DF0_08571D4C @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_WaterGunDroplet_08571DEC @ affineAnims
	.4byte 0x0810E5A1 @ callback (sub_0810E5A0)

sAffineAnim_Tag27A6_08571E24_0_08571E08: @ 0x08571E08
	@ union AffineAnimCmd stream
	.2byte 0x009C, 0x009C, 0x0000, 0x0000 @ AFFINE_FRAME(156, 156, rot=0x00, duration=0)
	.2byte 0x0005, 0x0005, 0x1400, 0x0000 @ AFFINE_FRAME(5, 5, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27A6_08571E24_08571E20: @ 0x08571E20
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27A6_08571E24_0_08571E08 @ [0]

sSpriteTemplate_Tag27A6_08571E24: @ 0x08571E24
	@ SpriteTemplate: tileTag=0x27A6, paletteTag=0x27A6
	.2byte 0x27A6, 0x27A6
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte sAnims_Tag27A6_08571D8C_08571D48 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27A6_08571E24_08571E20 @ affineAnims
	.4byte AnimBubbleEffect @ callback
sSpriteTemplate_Tag27AB_08571E3C: @ 0x08571E3C
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_AffineOn_ObjBlend_8x8 @ oam
	.4byte sAnims_WaterGunProjectile_08570DE4 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27A6_08571E24_08571E20 @ affineAnims
	.4byte AnimBubbleEffect @ callback
sSpriteTemplate_Tag2719_08571E54: @ 0x08571E54
	@ SpriteTemplate: tileTag=0x2719, paletteTag=0x2719
	.2byte 0x2719, 0x2719
	.4byte gOamData_AffineOff_ObjNormal_32x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x0810E6C1 @ callback (sub_0810E6C0)

sAffineAnim_Tag2719_08571E88_0_08571E6C: @ 0x08571E6C
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(16, 256, rot=0x00, duration=0)
	.2byte 0x000A, 0x0000, 0x1800, 0x0000 @ AFFINE_FRAME(10, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag2719_08571E88_08571E84: @ 0x08571E84
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag2719_08571E88_0_08571E6C @ [0]

sSpriteTemplate_Tag2719_08571E88: @ 0x08571E88
	@ SpriteTemplate: tileTag=0x2719, paletteTag=0x2719
	.2byte 0x2719, 0x2719
	.4byte gBattleAnimOam_084FD0C8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag2719_08571E88_08571E84 @ affineAnims
	.4byte 0x0810E7F9 @ callback (sub_0810E7F8)

sAnim_Tag27AA_08571EB8_0_08571EA0: @ 0x08571EA0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0000, 0x0043 @ ANIMCMD_FRAME(0, 67)
	.2byte 0x0000, 0x0083 @ ANIMCMD_FRAME(0, 131)
	.2byte 0x0000, 0x00C3 @ ANIMCMD_FRAME(0, 195)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag27AA_08571EB8_08571EB4: @ 0x08571EB4
	@ AnimCmd pointer table
	.4byte sAnim_Tag27AA_08571EB8_0_08571EA0 @ [0]

sSpriteTemplate_Tag27AA_08571EB8: @ 0x08571EB8
	@ SpriteTemplate: tileTag=0x27AA, paletteTag=0x27AA
	.2byte 0x27AA, 0x27AA
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x16 @ oam
	.4byte sAnims_Tag27AA_08571EB8_08571EB4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimAirWaveCrescent @ callback
sAffineAnim_Tag27AC_08571F24_0_08571ED0: @ 0x08571ED0
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(16, 256, rot=0x00, duration=0)
	.2byte 0x0028, 0x0000, 0x0600, 0x0000 @ AFFINE_FRAME(40, 0, rot=0x00, duration=0)
	.2byte 0x0000, 0xFFE0, 0x0500, 0x0000 @ AFFINE_FRAME(0, -32, rot=0x00, duration=0)
	.2byte 0xFFF0, 0x0020, 0x0A00, 0x0000 @ AFFINE_FRAME(-16, 32, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27AC_08571F24_08571EF8: @ 0x08571EF8
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27AC_08571F24_0_08571ED0 @ [0]

sAffineAnim_Tag27AC_08571F3C_0_08571EFC: @ 0x08571EFC
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0132, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag27AC_08571F3C_1_08571F0C: @ 0x08571F0C
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01D8, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27AC_08571F3C_08571F1C: @ 0x08571F1C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27AC_08571F3C_0_08571EFC @ [0]
	.4byte sAffineAnim_Tag27AC_08571F3C_1_08571F0C @ [1]

sSpriteTemplate_Tag27AC_08571F24: @ 0x08571F24
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27AC_08571F24_08571EF8 @ affineAnims
	.4byte 0x0810E98D @ callback (sub_0810E98C)

sSpriteTemplate_Tag27AC_08571F3C: @ 0x08571F3C
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gOamData_AffineNormal_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27AC_08571F3C_08571F1C @ affineAnims
	.4byte 0x0810EA19 @ callback (sub_0810EA18)

sAnim_Tag281E_08571F6C_0_08571F54: @ 0x08571F54
	@ union AnimCmd stream
	.2byte 0x0000, 0x0000 @ ANIMCMD_FRAME(0, 0)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag281E_08571F6C_1_08571F5C: @ 0x08571F5C
	@ union AnimCmd stream
	.2byte 0x0010, 0x0040 @ ANIMCMD_FRAME(16, 64)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag281E_08571F6C_08571F64: @ 0x08571F64
	@ AnimCmd pointer table
	.4byte sAnim_Tag281E_08571F6C_0_08571F54 @ [0]
	.4byte sAnim_Tag281E_08571F6C_1_08571F5C @ [1]

sSpriteTemplate_Tag281E_08571F6C: @ 0x08571F6C
	@ SpriteTemplate: tileTag=0x281E, paletteTag=0x281E
	.2byte 0x281E, 0x281E
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_Tag281E_08571F6C_08571F64 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFallingFeather @ callback
sSpriteTemplate_Tag27AB_08571F84: @ 0x08571F84
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedBubbleThrow @ callback
sAnim_Tag27B2_08571FB8_0_08571F9C: @ 0x08571F9C
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0x0008, 0x0001 @ ANIMCMD_FRAME(8, 1)
	.2byte 0x0010, 0x0001 @ ANIMCMD_FRAME(16, 1)
	.2byte 0x0008, 0x0041 @ ANIMCMD_FRAME(8, 65)
	.2byte 0x0000, 0x0041 @ ANIMCMD_FRAME(0, 65)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag27B2_08571FB8_08571FB4: @ 0x08571FB4
	@ AnimCmd pointer table
	.4byte sAnim_Tag27B2_08571FB8_0_08571F9C @ [0]

sSpriteTemplate_Tag27B2_08571FB8: @ 0x08571FB8
	@ SpriteTemplate: tileTag=0x27B2, paletteTag=0x27B2
	.2byte 0x27B2, 0x27B2
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x16 @ oam
	.4byte sAnims_Tag27B2_08571FB8_08571FB4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWhirlwindLine @ callback
sAffineAnim_Tag27AC_08572004_0_08571FD0: @ 0x08571FD0
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(16, 256, rot=0x00, duration=0)
	.2byte 0x0028, 0x0000, 0x0600, 0x0000 @ AFFINE_FRAME(40, 0, rot=0x00, duration=0)
	.2byte 0x0000, 0xFFE0, 0x0500, 0x0000 @ AFFINE_FRAME(0, -32, rot=0x00, duration=0)
	.2byte 0xFFEC, 0x0000, 0x0700, 0x0000 @ AFFINE_FRAME(-20, 0, rot=0x00, duration=0)
	.2byte 0xFFEC, 0xFFEC, 0x0500, 0x0000 @ AFFINE_FRAME(-20, -20, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27AC_08572004_08572000: @ 0x08572000
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27AC_08572004_0_08571FD0 @ [0]

sSpriteTemplate_Tag27AC_08572004: @ 0x08572004
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27AC_08572004_08572000 @ affineAnims
	.4byte 0x0810F485 @ callback (sub_0810F484)

sAffineAnim_Tag27AC_08572030_0_0857201C: @ 0x0857201C
	@ union AffineAnimCmd stream
	.2byte 0x00A0, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(160, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27AC_08572030_0857202C: @ 0x0857202C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27AC_08572030_0_0857201C @ [0]

sSpriteTemplate_Tag27AC_08572030: @ 0x08572030
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27AC_08572030_0857202C @ affineAnims
	.4byte 0x0810F4E5 @ callback (sub_0810F4E4)

sAffineAnim_Tag27AC_08572074_0_08572048: @ 0x08572048
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(16, 256, rot=0x00, duration=0)
	.2byte 0x0028, 0x0000, 0x0600, 0x0000 @ AFFINE_FRAME(40, 0, rot=0x00, duration=0)
	.2byte 0x0000, 0xFFE0, 0x0500, 0x0000 @ AFFINE_FRAME(0, -32, rot=0x00, duration=0)
	.2byte 0xFFF0, 0x0020, 0x0A00, 0x0000 @ AFFINE_FRAME(-16, 32, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27AC_08572074_08572070: @ 0x08572070
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27AC_08572074_0_08572048 @ [0]

sSpriteTemplate_Tag27AC_08572074: @ 0x08572074
	@ SpriteTemplate: tileTag=0x27AC, paletteTag=0x27AC
	.2byte 0x27AC, 0x27AC
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27AC_08572074_08572070 @ affineAnims
	.4byte 0x0810F579 @ callback (sub_0810F578)

	@ semanticized v110: canonical static data at 0x0857208C, size=0x24
sAffineAnim_UnusedFlyBallStretch:
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
sSpriteTemplate_Tag2821_085720C8: @ 0x085720C8
	@ SpriteTemplate: tileTag=0x2821, paletteTag=0x2821
	.2byte 0x2821, 0x2821
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSprayWaterDroplet @ callback
sSpriteTemplate_Tag27E4_085720E0: @ 0x085720E0
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedFlashingLight @ callback
sSpriteTemplate_Tag282C_085720F8: @ 0x085720F8
	@ SpriteTemplate: tileTag=0x282C, paletteTag=0x282C
	.2byte 0x282C, 0x282C
	.4byte gBattleAnimOam_084FD0E8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSkyAttackBird @ callback
sAffineAnim_Tag27D4_0857212C_0_08572110: @ 0x08572110
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0xFFFE, 0xFFFE, 0x78F6, 0x0000 @ AFFINE_FRAME(-2, -2, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27D4_0857212C_08572128: @ 0x08572128
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27D4_0857212C_0_08572110 @ [0]

sSpriteTemplate_Tag27D4_0857212C: @ 0x0857212C
	@ SpriteTemplate: tileTag=0x27D4, paletteTag=0x27D4
	.2byte 0x27D4, 0x27D4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27D4_0857212C_08572128 @ affineAnims
	.4byte AnimSpriteOnMonPos @ callback
sSpriteTemplate_Tag27B6_08572144: @ 0x08572144
	@ SpriteTemplate: tileTag=0x27B6, paletteTag=0x27B6
	.2byte 0x27B6, 0x27B6
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sSpriteTemplate_Tag27B7_0857215C: @ 0x0857215C
	@ SpriteTemplate: tileTag=0x27B7, paletteTag=0x27B7
	.2byte 0x27B7, 0x27B7
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sSpriteTemplate_Tag27B8_08572174: @ 0x08572174
	@ SpriteTemplate: tileTag=0x27B8, paletteTag=0x27B8
	.2byte 0x27B8, 0x27B8
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sSpriteTemplate_Tag27B9_0857218C: @ 0x0857218C
	@ SpriteTemplate: tileTag=0x27B9, paletteTag=0x27B9
	.2byte 0x27B9, 0x27B9
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sSpriteTemplate_Tag27BA_085721A4: @ 0x085721A4
	@ SpriteTemplate: tileTag=0x27BA, paletteTag=0x27BA
	.2byte 0x27BA, 0x27BA
	.4byte gBattleAnimOam_084FD148 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDefensiveWall @ callback
sAnim_Tag2757_085721D8_0_085721BC: @ 0x085721BC
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0x0040, 0x0003 @ ANIMCMD_FRAME(64, 3)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag2757_085721D8_085721D4: @ 0x085721D4
	@ AnimCmd pointer table
	.4byte sAnim_Tag2757_085721D8_0_085721BC @ [0]

sSpriteTemplate_Tag2757_085721D8: @ 0x085721D8
	@ SpriteTemplate: tileTag=0x2757, paletteTag=0x2757
	.2byte 0x2757, 0x2757
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag2757_085721D8_085721D4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWallSparkle @ callback
sAnim_Tag2756_08572208_0_085721F0: @ 0x085721F0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0004, 0x0005 @ ANIMCMD_FRAME(4, 5)
	.2byte 0x0008, 0x0005 @ ANIMCMD_FRAME(8, 5)
	.2byte 0x000C, 0x0005 @ ANIMCMD_FRAME(12, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag2756_08572208_08572204: @ 0x08572204
	@ AnimCmd pointer table
	.4byte sAnim_Tag2756_08572208_0_085721F0 @ [0]

sSpriteTemplate_Tag2756_08572208: @ 0x08572208
	@ SpriteTemplate: tileTag=0x2756, paletteTag=0x2756
	.2byte 0x2756, 0x2756
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte sAnims_Tag2756_08572208_08572204 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimWallSparkle @ callback
sSpriteTemplate_Tag27B3_08572220: @ 0x08572220
	@ SpriteTemplate: tileTag=0x27B3, paletteTag=0x27B3
	.2byte 0x27B3, 0x27B3
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte TranslateAnimSpriteToTargetMonLocation @ callback
sAnim_Tag2771_085722C0_0_08572238: @ 0x08572238
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

sAnim_Tag2771_085722C0_1_08572278: @ 0x08572278
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

sAnims_Tag2771_085722C0_085722B8: @ 0x085722B8
	@ AnimCmd pointer table
	.4byte sAnim_Tag2771_085722C0_0_08572238 @ [0]
	.4byte sAnim_Tag2771_085722C0_1_08572278 @ [1]

sSpriteTemplate_Tag2771_085722C0: @ 0x085722C0
	@ SpriteTemplate: tileTag=0x2771, paletteTag=0x2771
	.2byte 0x2771, 0x2771
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte sAnims_Tag2771_085722C0_085722B8 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimBentSpoon @ callback
sAnim_Tag276D_08572328_0_085722D8: @ 0x085722D8
	@ union AnimCmd stream
	.2byte 0x0000, 0x0006 @ ANIMCMD_FRAME(0, 6)
	.2byte 0x0010, 0x0006 @ ANIMCMD_FRAME(16, 6)
	.2byte 0x0020, 0x0006 @ ANIMCMD_FRAME(32, 6)
	.2byte 0x0030, 0x0006 @ ANIMCMD_FRAME(48, 6)
	.2byte 0x0040, 0x0006 @ ANIMCMD_FRAME(64, 6)
	.2byte 0x0050, 0x0006 @ ANIMCMD_FRAME(80, 6)
	.2byte 0x0060, 0x0012 @ ANIMCMD_FRAME(96, 18)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag276D_08572328_085722F8: @ 0x085722F8
	@ AnimCmd pointer table
	.4byte sAnim_Tag276D_08572328_0_085722D8 @ [0]

	@ semanticized v110: canonical static data at 0x085722FC, size=0x28
sAffineAnim_QuestionMark:
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

	.if (. - .Lsemantic_range_08571840) != 0xAE4
	.error "semantic range 0x08571840 size mismatch"
	.endif
	@ semantic battle-animation reconstruction: psychic
	@ ROM range 0x08572324-0x085727A3
.Lsemantic_range_08572324:
	@ semanticized v110: canonical static data at 0x08572324, size=0x4
	.globl sAffineAnims_QuestionMark
sAffineAnims_QuestionMark:
	.4byte sAffineAnim_QuestionMark

gQuestionMarkSpriteTemplate:
	@ SpriteTemplate: tileTag=0x276D, paletteTag=0x276D
	.2byte 0x276D, 0x276D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag276D_08572328_085722F8 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimQuestionMark @ callback
	@ semanticized v110: canonical static data at 0x08572340, size=0x20
	.globl sAffineAnim_MeditateStretchAttacker
sAffineAnim_MeditateStretchAttacker:
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
	.2byte 0x0040, 0xFFFC
	.byte 0x00, 0x14
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(64, -4, 0, 20)
	.2byte 0x0000, 0x0000
	.byte 0x00, 0xC8
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, -56)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	.globl gPsychicData_08572378
gPsychicData_08572378: @ 0x08572378
	@ SpriteTemplate: tileTag=0x2809, paletteTag=0x2809
	.2byte 0x2809, 0x2809
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte gPriorityABattleAnimSpriteCallbackDummy @ callback (SpriteCallbackDummy)

sSpriteTemplate_Tag280A_08572390: @ 0x08572390
	@ SpriteTemplate: tileTag=0x280A, paletteTag=0x280A
	.2byte 0x280A, 0x280A
	.4byte gOamData_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimRedX @ callback
sAffineAnim_PsychicData_08572448_0_085723A8: @ 0x085723A8
	@ union AffineAnimCmd stream
	.2byte 0xFFF8, 0xFFF8, 0x0800, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0800, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnim_PsychicData_08572448_1_085723C0: @ 0x085723C0
	@ union AffineAnimCmd stream
	.2byte 0x00F0, 0x00F0, 0x0000, 0x0000 @ AFFINE_FRAME(240, 240, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0600, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0800, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0200, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnim_PsychicData_08572448_2_085723E8: @ 0x085723E8
	@ union AffineAnimCmd stream
	.2byte 0x00D0, 0x00D0, 0x0000, 0x0000 @ AFFINE_FRAME(208, 208, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0400, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0800, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0400, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnim_PsychicData_08572448_3_08572410: @ 0x08572410
	@ union AffineAnimCmd stream
	.2byte 0x00B0, 0x00B0, 0x0000, 0x0000 @ AFFINE_FRAME(176, 176, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0200, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x0800, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0xFFF8, 0xFFF8, 0x0600, 0x0000 @ AFFINE_FRAME(-8, -8, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_PsychicData_08572448_08572438: @ 0x08572438
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_PsychicData_08572448_0_085723A8 @ [0]
	.4byte sAffineAnim_PsychicData_08572448_1_085723C0 @ [1]
	.4byte sAffineAnim_PsychicData_08572448_2_085723E8 @ [2]
	.4byte sAffineAnim_PsychicData_08572448_3_08572410 @ [3]

	.globl gPsychicData_08572448
gPsychicData_08572448: @ 0x08572448
	@ SpriteTemplate: tileTag=0x280B, paletteTag=0x280B
	.2byte 0x280B, 0x280B
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_PsychicData_08572448_08572438 @ affineAnims
	.4byte AnimSkillSwapOrb @ callback
sAffineAnim_Tag281B_0857247C_0_08572460: @ 0x08572460
	@ union AffineAnimCmd stream
	.2byte 0x0020, 0x0020, 0x0000, 0x0000 @ AFFINE_FRAME(32, 32, rot=0x00, duration=0)
	.2byte 0x0004, 0x0004, 0x7800, 0x0000 @ AFFINE_FRAME(4, 4, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag281B_0857247C_08572478: @ 0x08572478
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag281B_0857247C_0_08572460 @ [0]

sSpriteTemplate_Tag281B_0857247C: @ 0x0857247C
	@ SpriteTemplate: tileTag=0x281B, paletteTag=0x281B
	.2byte 0x281B, 0x281B
	.4byte gBattleAnimOam_084FD208 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag281B_0857247C_08572478 @ affineAnims
	.4byte AnimSpriteOnMonPos @ callback
sAffineAnim_Tag27E4_08572504_0_08572494: @ 0x08572494
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

sAffineAnim_Tag27E4_08572504_1_085724EC: @ 0x085724EC
	@ union AffineAnimCmd stream
	.2byte 0xFFEC, 0x0018, 0x0F00, 0x0000 @ AFFINE_FRAME(-20, 24, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27E4_08572504_085724FC: @ 0x085724FC
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27E4_08572504_0_08572494 @ [0]
	.4byte sAffineAnim_Tag27E4_08572504_1_085724EC @ [1]

sSpriteTemplate_Tag27E4_08572504: @ 0x08572504
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD208 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27E4_08572504_085724FC @ affineAnims
	.4byte AnimPsychoBoost @ callback
sAffineAnim_Tag27A9_08572558_0_0857251C: @ 0x0857251C
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x001E, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag27A9_08572558_1_0857252C: @ 0x0857252C
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x009D, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag27A9_08572558_2_0857253C: @ 0x0857253C
	@ union AffineAnimCmd stream
	.2byte 0x0100, 0x0100, 0x005E, 0x0000 @ AFFINE_FRAME(256, 256, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27A9_08572558_0857254C: @ 0x0857254C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27A9_08572558_0_0857251C @ [0]
	.4byte sAffineAnim_Tag27A9_08572558_1_0857252C @ [1]
	.4byte sAffineAnim_Tag27A9_08572558_2_0857253C @ [2]

sSpriteTemplate_Tag27A9_08572558: @ 0x08572558
	@ SpriteTemplate: tileTag=0x27A9, paletteTag=0x27A9
	.2byte 0x27A9, 0x27A9
	.4byte gOamData_AffineDouble_ObjNormal_32x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27A9_08572558_0857254C @ affineAnims
	.4byte AnimMegahornHorn @ callback
sAffineAnim_Tag27B1_085725AC_0_08572570: @ 0x08572570
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01DF, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag27B1_085725AC_1_08572580: @ 0x08572580
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0160, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag27B1_085725AC_2_08572590: @ 0x08572590
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01A0, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27B1_085725AC_085725A0: @ 0x085725A0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27B1_085725AC_0_08572570 @ [0]
	.4byte sAffineAnim_Tag27B1_085725AC_1_08572580 @ [1]
	.4byte sAffineAnim_Tag27B1_085725AC_2_08572590 @ [2]

sSpriteTemplate_Tag27B1_085725AC: @ 0x085725AC
	@ SpriteTemplate: tileTag=0x27B1, paletteTag=0x27B1
	.2byte 0x27B1, 0x27B1
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27B1_085725AC_085725A0 @ affineAnims
	.4byte 0x08110C89 @ callback (sub_08110C88)

sSpriteTemplate_Tag27C4_085725C4: @ 0x085725C4
	@ SpriteTemplate: tileTag=0x27C4, paletteTag=0x27C4
	.2byte 0x27C4, 0x27C4
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimTranslateWebThread @ callback
sSpriteTemplate_Tag27C3_085725DC: @ 0x085725DC
	@ SpriteTemplate: tileTag=0x27C3, paletteTag=0x27C3
	.2byte 0x27C3, 0x27C3
	.4byte gOamData_AffineOff_ObjNormal_64x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimStringWrap @ callback
sAffineAnim_Tag27C5_08572610_0_085725F4: @ 0x085725F4
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0006, 0x0006, 0x0100, 0x0000 @ AFFINE_FRAME(6, 6, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_Tag27C5_08572610_0857260C: @ 0x0857260C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27C5_08572610_0_085725F4 @ [0]

sSpriteTemplate_Tag27C5_08572610: @ 0x08572610
	@ SpriteTemplate: tileTag=0x27C5, paletteTag=0x27C5
	.2byte 0x27C5, 0x27C5
	.4byte gBattleAnimOam_084FD208 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27C5_08572610_0857260C @ affineAnims
	.4byte AnimSpiderWeb @ callback
sSpriteTemplate_Tag27B1_08572628: @ 0x08572628
	@ SpriteTemplate: tileTag=0x27B1, paletteTag=0x27B1
	.2byte 0x27B1, 0x27B1
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimTranslateStinger @ callback
sSpriteTemplate_Tag27B1_08572640: @ 0x08572640
	@ SpriteTemplate: tileTag=0x27B1, paletteTag=0x27B1
	.2byte 0x27B1, 0x27B1
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimMissileArc @ callback
sSpriteTemplate_Tag2816_08572658: @ 0x08572658
	@ SpriteTemplate: tileTag=0x2816, paletteTag=0x2816
	.2byte 0x2816, 0x2816
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimMissileArc @ callback
sAffineAnim_Tag27E4_085726AC_0_08572670: @ 0x08572670
	@ union AffineAnimCmd stream
	.2byte 0x0010, 0x0010, 0x0000, 0x0000 @ AFFINE_FRAME(16, 16, rot=0x00, duration=0)
	.2byte 0x0008, 0x0008, 0x1200, 0x0000 @ AFFINE_FRAME(8, 8, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(0)
	.2byte 0xFFFB, 0xFFFB, 0x0800, 0x0000 @ AFFINE_FRAME(-5, -5, rot=0x00, duration=0)
	.2byte 0x0005, 0x0005, 0x0800, 0x0000 @ AFFINE_FRAME(5, 5, rot=0x00, duration=0)
	.2byte 0x7FFD, 0x0005, 0x0000, 0x0000 @ AFFINEANIMCMD_LOOP(5)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27E4_085726AC_085726A8: @ 0x085726A8
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27E4_085726AC_0_08572670 @ [0]

sSpriteTemplate_Tag27E4_085726AC: @ 0x085726AC
	@ SpriteTemplate: tileTag=0x27E4, paletteTag=0x27E4
	.2byte 0x27E4, 0x27E4
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27E4_085726AC_085726A8 @ affineAnims
	.4byte AnimTailGlowOrb @ callback
sAnim_Tag274A_085726E8_0_085726C4: @ 0x085726C4
	@ union AnimCmd stream
	.2byte 0x0020, 0x0001 @ ANIMCMD_FRAME(32, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag274A_085726E8_1_085726CC: @ 0x085726CC
	@ union AnimCmd stream
	.2byte 0x0030, 0x0001 @ ANIMCMD_FRAME(48, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag274A_085726E8_2_085726D4: @ 0x085726D4
	@ union AnimCmd stream
	.2byte 0x0040, 0x0001 @ ANIMCMD_FRAME(64, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag274A_085726E8_085726DC: @ 0x085726DC
	@ AnimCmd pointer table
	.4byte sAnim_Tag274A_085726E8_0_085726C4 @ [0]
	.4byte sAnim_Tag274A_085726E8_1_085726CC @ [1]
	.4byte sAnim_Tag274A_085726E8_2_085726D4 @ [2]

sSpriteTemplate_Tag274A_085726E8: @ 0x085726E8
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag274A_085726E8_085726DC @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08111241 @ callback (sub_08111240)

sSpriteTemplate_Tag274A_08572700: @ 0x08572700
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag274A_085726E8_085726DC @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08111305 @ callback (sub_08111304)

sSpriteTemplate_Tag275A_08572718: @ 0x08572718
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08111389 @ callback (sub_08111388)

sAffineAnim_Tag27A5_08572754_0_08572730: @ 0x08572730
	@ union AffineAnimCmd stream
	.2byte 0x00C0, 0x00C0, 0x0000, 0x0000 @ AFFINE_FRAME(192, 192, rot=0x00, duration=0)
	.2byte 0x0002, 0xFFFD, 0x0500, 0x0000 @ AFFINE_FRAME(2, -3, rot=0x00, duration=0)
	.2byte 0xFFFE, 0x0003, 0x0500, 0x0000 @ AFFINE_FRAME(-2, 3, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnims_Tag27A5_08572754_08572750: @ 0x08572750
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27A5_08572754_0_08572730 @ [0]

sSpriteTemplate_Tag27A5_08572754: @ 0x08572754
	@ SpriteTemplate: tileTag=0x27A5, paletteTag=0x27A5
	.2byte 0x27A5, 0x27A5
	.4byte gBattleAnimOam_AffineOn_ObjBlend_8x8 @ oam
	.4byte sAnims_HydroPumpOrb_08570CC4 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27A5_08572754_08572750 @ affineAnims
	.4byte 0x08111389 @ callback (sub_08111388)

sSpriteTemplate_Tag272D_0857276C: @ 0x0857276C
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_085710D0_085710B4 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08111389 @ callback (sub_08111388)

sSpriteTemplate_Tag2815_08572784: @ 0x08572784
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

	.if (. - .Lsemantic_range_08572324) != 0x480
	.error "semantic range 0x08572324 size mismatch"
	.endif
	@ semantic battle-animation reconstruction: rock_a
	@ ROM range 0x085727A4-0x085727F3
.Lsemantic_range_085727A4:
	@ semanticized v110: canonical static data at 0x085727A4, size=0x8
	.globl sFlyingSandSubspriteTable
sFlyingSandSubspriteTable:
	.byte 2, 0, 0, 0 @ subspriteCount + ABI padding
	.4byte sFlyingSandSubsprites

sAnim_Tag274A_0857283C_0_085727AC: @ 0x085727AC
	@ union AnimCmd stream
	.2byte 0x0000, 0x0001 @ ANIMCMD_FRAME(0, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag274A_0857283C_1_085727B4: @ 0x085727B4
	@ union AnimCmd stream
	.2byte 0x0010, 0x0001 @ ANIMCMD_FRAME(16, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag274A_085728C4_0_085727BC: @ 0x085727BC
	@ union AnimCmd stream
	.2byte 0x0020, 0x0001 @ ANIMCMD_FRAME(32, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag274A_085728C4_1_085727C4: @ 0x085727C4
	@ union AnimCmd stream
	.2byte 0x0030, 0x0001 @ ANIMCMD_FRAME(48, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag274A_085728AC_0_085727CC: @ 0x085727CC
	@ union AnimCmd stream
	.2byte 0x0040, 0x0001 @ ANIMCMD_FRAME(64, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag274A_085728AC_1_085727D4: @ 0x085727D4
	@ union AnimCmd stream
	.2byte 0x0050, 0x0001 @ ANIMCMD_FRAME(80, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_BasicRock: @ 0x085727DC
	@ AnimCmd pointer table
	.4byte sAnim_Tag274A_0857283C_0_085727AC @ [0]
	.4byte sAnim_Tag274A_0857283C_1_085727B4 @ [1]

sAnims_Tag274A_085728C4_085727E4: @ 0x085727E4
	@ AnimCmd pointer table
	.4byte sAnim_Tag274A_085728C4_0_085727BC @ [0]
	.4byte sAnim_Tag274A_085728C4_1_085727C4 @ [1]

sAnims_Tag274A_085728AC_085727EC: @ 0x085727EC
	@ AnimCmd pointer table
	.4byte sAnim_Tag274A_085728AC_0_085727CC @ [0]
	.4byte sAnim_Tag274A_085728AC_1_085727D4 @ [1]

	.if (. - .Lsemantic_range_085727A4) != 0x50
	.error "semantic range 0x085727A4 size mismatch"
	.endif
	.globl gIntroData_085727F4
gIntroData_085727F4:
	@ analyzed canonical ROM range 0x085727F4-0x0857280B
	.globl gAncientPowerRockSpriteTemplate
gAncientPowerRockSpriteTemplate: @ 0x085727F4
	rodata_sprite_template 0x274A, 0x274A, gOamData_AffineOff_ObjNormal_32x32, sAnims_BasicRock, 0, gDummySpriteAffineAnimTable, AnimRaiseSprite
	@ pret/pokeemerald-jp direct xref for 0x0857280C: rock.s: sub_08111A64
	.globl gRockData_0857280C
gRockData_0857280C: @ 0x0857280C
	@ analyzed canonical ROM range 0x0857280C-0x08572823
sSpriteTemplate_0857280C: @ 0x0857280C
	rodata_sprite_template 0x275A, 0x275A, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_08111B6C
	@ pret/pokeemerald-jp direct xref for 0x08572824: rock.s: sub_08111A64
	@ semantic battle-animation reconstruction: rock_b
	@ ROM range 0x08572824-0x0857299B
.Lsemantic_range_08572824:
	.globl gRockData_08572824
gRockData_08572824: @ 0x08572824
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08111B6D @ callback (sub_08111B6C)

sSpriteTemplate_Tag274A_0857283C: @ 0x0857283C
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_BasicRock @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08111BD9 @ callback (sub_08111BD8)

sAffineAnim_Tag274A_0857287C_0_08572854: @ 0x08572854
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x05FB, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnim_Tag274A_0857287C_1_08572864: @ 0x08572864
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0505, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_Tag274A_0857287C_08572874: @ 0x08572874
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag274A_0857287C_0_08572854 @ [0]
	.4byte sAffineAnim_Tag274A_0857287C_1_08572864 @ [1]

sSpriteTemplate_Tag274A_0857287C: @ 0x0857287C
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_BasicRock @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag274A_0857287C_08572874 @ affineAnims
	.4byte 0x08111C69 @ callback (sub_08111C68)

sSpriteTemplate_Tag274A_08572894: @ 0x08572894
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_BasicRock @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag274A_0857287C_08572874 @ affineAnims
	.4byte 0x08111C95 @ callback (sub_08111C94)

sSpriteTemplate_Tag274A_085728AC: @ 0x085728AC
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag274A_085728AC_085727EC @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag274A_0857287C_08572874 @ affineAnims
	.4byte AnimMoveTwisterParticle @ callback
sSpriteTemplate_Tag274A_085728C4: @ 0x085728C4
	@ SpriteTemplate: tileTag=0x274A, paletteTag=0x274A
	.2byte 0x274A, 0x274A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte sAnims_Tag274A_085728C4_085727E4 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag274A_0857287C_08572874 @ affineAnims
	.4byte 0x080A87AD @ callback (sub_080A87AC)

sAffineAnim_Tag271D_085728F8_0_085728DC: @ 0x085728DC
	@ union AffineAnimCmd stream
	.2byte 0x001E, 0x001E, 0x050A, 0x0000 @ AFFINE_FRAME(30, 30, rot=0x00, duration=0)
	.2byte 0xFFE2, 0xFFE2, 0x050A, 0x0000 @ AFFINE_FRAME(-30, -30, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_Tag271D_085728F8_085728F4: @ 0x085728F4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag271D_085728F8_0_085728DC @ [0]

sSpriteTemplate_Tag271D_085728F8: @ 0x085728F8
	@ SpriteTemplate: tileTag=0x271D, paletteTag=0x271D
	.2byte 0x271D, 0x271D
	.4byte gBattleAnimOam_AffineDouble_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag271D_085728F8_085728F4 @ affineAnims
	.4byte 0x08111E5D @ callback (sub_08111E5C)

sSpriteTemplate_Tag271D_08572910: @ 0x08572910
	@ SpriteTemplate: tileTag=0x271D, paletteTag=0x271D
	.2byte 0x271D, 0x271D
	.4byte gOamData_AffineOff_ObjBlend_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08112045 @ callback (sub_08112044)

sAffineAnim_Tag27C0_0857293C_0_08572928: @ 0x08572928
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x010A, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_Tag27C0_0857293C_08572938: @ 0x08572938
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27C0_0857293C_0_08572928 @ [0]

sSpriteTemplate_Tag27C0_0857293C: @ 0x0857293C
	@ SpriteTemplate: tileTag=0x27C0, paletteTag=0x27C0
	.2byte 0x27C0, 0x27C0
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27C0_0857293C_08572938 @ affineAnims
	.4byte InitAnimShadowBall @ callback
sAnim_Tag27C1_08572970_0_08572954: @ 0x08572954
	@ union AnimCmd stream
	.2byte 0x0000, 0x0002 @ ANIMCMD_FRAME(0, 2)
	.2byte 0x0008, 0x0002 @ ANIMCMD_FRAME(8, 2)
	.2byte 0x0010, 0x0002 @ ANIMCMD_FRAME(16, 2)
	.2byte 0x0018, 0x0002 @ ANIMCMD_FRAME(24, 2)
	.2byte 0x0020, 0x0002 @ ANIMCMD_FRAME(32, 2)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag27C1_08572970_0857296C: @ 0x0857296C
	@ AnimCmd pointer table
	.4byte sAnim_Tag27C1_08572970_0_08572954 @ [0]

sSpriteTemplate_Tag27C1_08572970: @ 0x08572970
	@ SpriteTemplate: tileTag=0x27C1, paletteTag=0x27C1
	.2byte 0x27C1, 0x27C1
	.4byte gBattleAnimOam_084FD060 @ oam
	.4byte sAnims_Tag27C1_08572970_0857296C @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimLick @ callback
	@ semanticized v110: canonical static data at 0x08572988, size=0x14
sAffineAnim_GhostUnused:
	.2byte 0x0200, 0x0200
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(512, 512, 0, 0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END
sAffineAnims_GhostUnused: @ 0x08572998
	.4byte sAffineAnim_GhostUnused

	.if (. - .Lsemantic_range_08572824) != 0x178
	.error "semantic range 0x08572824 size mismatch"
	.endif
	@ semantic battle-animation reconstruction: ghost
	@ ROM range 0x0857299C-0x08572F3B
.Lsemantic_range_0857299C:
	.globl gGhostData_0857299C
gGhostData_0857299C: @ 0x0857299C
	@ SpriteTemplate: tileTag=0x27CC, paletteTag=0x27CC
	.2byte 0x27CC, 0x27CC
	.4byte gOamData_AffineOff_ObjBlend_64x32 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDestinyBondWhiteShadow @ callback
sSpriteTemplate_Tag27D7_085729B4: @ 0x085729B4
	@ SpriteTemplate: tileTag=0x27D7, paletteTag=0x27D7
	.2byte 0x27D7, 0x27D7
	.4byte gBattleAnimOam_084FD160 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimCurseNail @ callback
sSpriteTemplate_Tag27D8_085729CC: @ 0x085729CC
	@ SpriteTemplate: tileTag=0x27D8, paletteTag=0x27D8
	.2byte 0x27D8, 0x27D8
	.4byte gBattleAnimOam_084FD140 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimGhostStatusSprite @ callback
sSpriteTemplate_Tag27ED_085729E4: @ 0x085729E4
	@ SpriteTemplate: tileTag=0x27ED, paletteTag=0x27ED
	.2byte 0x27ED, 0x27ED
	.4byte gBattleAnimOam_084FD140 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimGhostStatusSprite @ callback
sAnim_GhostData_08572A14_0_085729FC: @ 0x085729FC
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0008, 0x0004 @ ANIMCMD_FRAME(8, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0018, 0x0004 @ ANIMCMD_FRAME(24, 4)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_GhostData_08572A14_08572A10: @ 0x08572A10
	@ AnimCmd pointer table
	.4byte sAnim_GhostData_08572A14_0_085729FC @ [0]

	.globl gGhostData_08572A14
gGhostData_08572A14: @ 0x08572A14
	@ SpriteTemplate: tileTag=0x280D, paletteTag=0x280D
	.2byte 0x280D, 0x280D
	.4byte gOamData_AffineOff_ObjBlend_16x32 @ oam
	.4byte sAnims_GhostData_08572A14_08572A10 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimGrudgeFlame @ callback
sSpriteTemplate_Tag0000_08572A2C: @ 0x08572A2C
	@ SpriteTemplate: tileTag=0x0000, paletteTag=0x0000
	.2byte 0x0000, 0x0000
	.4byte gDummyOamData @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimMonMoveCircular @ callback
sAnim_Tag272D_08572A60_0_08572A44: @ 0x08572A44
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0x0040, 0x0004 @ ANIMCMD_FRAME(64, 4)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag272D_08572A60_08572A5C: @ 0x08572A5C
	@ AnimCmd pointer table
	.4byte sAnim_Tag272D_08572A60_0_08572A44 @ [0]

sSpriteTemplate_Tag272D_08572A60: @ 0x08572A60
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_08572A60_08572A5C @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x081138B5 @ callback (sub_081138B4)

sAnim_Tag272D_08572AD8_0_08572A78: @ 0x08572A78
	@ union AnimCmd stream
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnim_Tag272D_08572AD8_1_08572A88: @ 0x08572A88
	@ union AnimCmd stream
	.2byte 0x0010, 0x00C3 @ ANIMCMD_FRAME(16, 195)
	.2byte 0x0020, 0x00C3 @ ANIMCMD_FRAME(32, 195)
	.2byte 0x0030, 0x00C3 @ ANIMCMD_FRAME(48, 195)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag272D_08572AD8_08572A98: @ 0x08572A98
	@ AnimCmd pointer table
	.4byte sAnim_Tag272D_08572AD8_0_08572A78 @ [0]
	.4byte sAnim_Tag272D_08572AD8_1_08572A88 @ [1]

sAffineAnim_Tag272D_08572AD8_0_08572AA0: @ 0x08572AA0
	@ union AffineAnimCmd stream
	.2byte 0x0050, 0x0050, 0x007F, 0x0000 @ AFFINE_FRAME(80, 80, rot=0x00, duration=0)
	.2byte 0x000D, 0x000D, 0x6400, 0x0000 @ AFFINE_FRAME(13, 13, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag272D_08572AD8_1_08572AB8: @ 0x08572AB8
	@ union AffineAnimCmd stream
	.2byte 0x0050, 0x0050, 0x0000, 0x0000 @ AFFINE_FRAME(80, 80, rot=0x00, duration=0)
	.2byte 0x000D, 0x000D, 0x6400, 0x0000 @ AFFINE_FRAME(13, 13, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag272D_08572AD8_08572AD0: @ 0x08572AD0
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag272D_08572AD8_0_08572AA0 @ [0]
	.4byte sAffineAnim_Tag272D_08572AD8_1_08572AB8 @ [1]

sSpriteTemplate_Tag272D_08572AD8: @ 0x08572AD8
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_Tag272D_08572AD8_08572A98 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag272D_08572AD8_08572AD0 @ affineAnims
	.4byte 0x08113A75 @ callback (sub_08113A74)

sAnim_Tag2733_08572B0C_0_08572AF0: @ 0x08572AF0
	@ union AnimCmd stream
	.2byte 0x0000, 0x0005 @ ANIMCMD_FRAME(0, 5)
	.2byte 0x0010, 0x0005 @ ANIMCMD_FRAME(16, 5)
	.2byte 0x0020, 0x0005 @ ANIMCMD_FRAME(32, 5)
	.2byte 0x0030, 0x0005 @ ANIMCMD_FRAME(48, 5)
	.2byte 0x0040, 0x0005 @ ANIMCMD_FRAME(64, 5)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag2733_08572B0C_08572B08: @ 0x08572B08
	@ AnimCmd pointer table
	.4byte sAnim_Tag2733_08572B0C_0_08572AF0 @ [0]

sSpriteTemplate_Tag2733_08572B0C: @ 0x08572B0C
	@ SpriteTemplate: tileTag=0x2733, paletteTag=0x2733
	.2byte 0x2733, 0x2733
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag2733_08572B0C_08572B08 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDragonRageFirePlume @ callback
sAnim_Tag272D_08572B64_0_08572B24: @ 0x08572B24
	@ union AnimCmd stream
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag272D_08572B64_08572B34: @ 0x08572B34
	@ AnimCmd pointer table
	.4byte sAnim_Tag272D_08572B64_0_08572B24 @ [0]
	.4byte sAnim_Tag272D_08572B64_0_08572B24 @ [1]

sAffineAnim_Tag272D_08572B64_0_08572B3C: @ 0x08572B3C
	@ union AffineAnimCmd stream
	.2byte 0x0064, 0x0064, 0x017F, 0x0000 @ AFFINE_FRAME(100, 100, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag272D_08572B64_1_08572B4C: @ 0x08572B4C
	@ union AffineAnimCmd stream
	.2byte 0x0064, 0x0064, 0x0100, 0x0000 @ AFFINE_FRAME(100, 100, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag272D_08572B64_08572B5C: @ 0x08572B5C
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag272D_08572B64_0_08572B3C @ [0]
	.4byte sAffineAnim_Tag272D_08572B64_1_08572B4C @ [1]

sSpriteTemplate_Tag272D_08572B64: @ 0x08572B64
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_084FD0E0 @ oam
	.4byte sAnims_Tag272D_08572B64_08572B34 @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag272D_08572B64_08572B5C @ affineAnims
	.4byte 0x08113A75 @ callback (sub_08113A74)

sSpriteTemplate_Tag2809_08572B7C: @ 0x08572B7C
	@ SpriteTemplate: tileTag=0x2809, paletteTag=0x2809
	.2byte 0x2809, 0x2809
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDragonDanceOrb @ callback
sSpriteTemplate_Tag272D_08572B94: @ 0x08572B94
	@ SpriteTemplate: tileTag=0x272D, paletteTag=0x272D
	.2byte 0x272D, 0x272D
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag272D_08572A60_08572A5C @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x08113E3D @ callback (sub_08113E3C)

sSpriteTemplate_Tag271F_08572BAC: @ 0x08572BAC
	@ SpriteTemplate: tileTag=0x271F, paletteTag=0x271F
	.2byte 0x271F, 0x271F
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimUnusedBagSteal @ callback
sAffineAnim_Tag279B_08572C64_0_08572BC4: @ 0x08572BC4
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0100, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag279B_08572C64_1_08572BD4: @ 0x08572BD4
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0120, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag279B_08572C64_2_08572BE4: @ 0x08572BE4
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0140, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag279B_08572C64_3_08572BF4: @ 0x08572BF4
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0160, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag279B_08572C64_4_08572C04: @ 0x08572C04
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0180, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag279B_08572C64_5_08572C14: @ 0x08572C14
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01A0, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag279B_08572C64_6_08572C24: @ 0x08572C24
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01C0, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag279B_08572C64_7_08572C34: @ 0x08572C34
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x01E0, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

gAffineAnims_Bite: @ 0x08572C44
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag279B_08572C64_0_08572BC4 @ [0]
	.4byte sAffineAnim_Tag279B_08572C64_1_08572BD4 @ [1]
	.4byte sAffineAnim_Tag279B_08572C64_2_08572BE4 @ [2]
	.4byte sAffineAnim_Tag279B_08572C64_3_08572BF4 @ [3]
	.4byte sAffineAnim_Tag279B_08572C64_4_08572C04 @ [4]
	.4byte sAffineAnim_Tag279B_08572C64_5_08572C14 @ [5]
	.4byte sAffineAnim_Tag279B_08572C64_6_08572C24 @ [6]
	.4byte sAffineAnim_Tag279B_08572C64_7_08572C34 @ [7]

sSpriteTemplate_Tag279B_08572C64: @ 0x08572C64
	@ SpriteTemplate: tileTag=0x279B, paletteTag=0x279B
	.2byte 0x279B, 0x279B
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gAffineAnims_Bite @ affineAnims
	.4byte AnimBite @ callback
sSpriteTemplate_Tag27A1_08572C7C: @ 0x08572C7C
	@ SpriteTemplate: tileTag=0x27A1, paletteTag=0x27A1
	.2byte 0x27A1, 0x27A1
	.4byte gBattleAnimOam_084FD1A8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gAffineAnims_Bite @ affineAnims
	.4byte AnimBite @ callback
sAffineAnim_Tag27AB_08572CCC_0_08572C94: @ 0x08572C94
	@ union AffineAnimCmd stream
	.2byte 0x00C0, 0x00C0, 0x0050, 0x0000 @ AFFINE_FRAME(192, 192, rot=0x00, duration=0)
	.2byte 0x0000, 0x0000, 0x08FE, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Tag27AB_08572CCC_1_08572CAC: @ 0x08572CAC
	@ union AffineAnimCmd stream
	.2byte 0x00C0, 0x00C0, 0x00B0, 0x0000 @ AFFINE_FRAME(192, 192, rot=0x00, duration=0)
	.2byte 0x0000, 0x0000, 0x0802, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnims_Tag27AB_08572CCC_08572CC4: @ 0x08572CC4
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag27AB_08572CCC_0_08572C94 @ [0]
	.4byte sAffineAnim_Tag27AB_08572CCC_1_08572CAC @ [1]

sSpriteTemplate_Tag27AB_08572CCC: @ 0x08572CCC
	@ SpriteTemplate: tileTag=0x27AB, paletteTag=0x27AB
	.2byte 0x27AB, 0x27AB
	.4byte gBattleAnimOam_084FD078 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag27AB_08572CCC_08572CC4 @ affineAnims
	.4byte AnimTearDrop @ callback
sAnim_Tag2737_08572D1C_0_08572CE4: @ 0x08572CE4
	@ union AnimCmd stream
	.2byte 0x0000, 0x0004 @ ANIMCMD_FRAME(0, 4)
	.2byte 0x0010, 0x0004 @ ANIMCMD_FRAME(16, 4)
	.2byte 0x0020, 0x0004 @ ANIMCMD_FRAME(32, 4)
	.2byte 0x0030, 0x0004 @ ANIMCMD_FRAME(48, 4)
	.2byte 0x0040, 0x0004 @ ANIMCMD_FRAME(64, 4)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_Tag2737_08572D1C_1_08572CFC: @ 0x08572CFC
	@ union AnimCmd stream
	.2byte 0x0000, 0x0044 @ ANIMCMD_FRAME(0, 68)
	.2byte 0x0010, 0x0044 @ ANIMCMD_FRAME(16, 68)
	.2byte 0x0020, 0x0044 @ ANIMCMD_FRAME(32, 68)
	.2byte 0x0030, 0x0044 @ ANIMCMD_FRAME(48, 68)
	.2byte 0x0040, 0x0044 @ ANIMCMD_FRAME(64, 68)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag2737_08572D1C_08572D14: @ 0x08572D14
	@ AnimCmd pointer table
	.4byte sAnim_Tag2737_08572D1C_0_08572CE4 @ [0]
	.4byte sAnim_Tag2737_08572D1C_1_08572CFC @ [1]

sSpriteTemplate_Tag2737_08572D1C: @ 0x08572D1C
	@ SpriteTemplate: tileTag=0x2737, paletteTag=0x2737
	.2byte 0x2737, 0x2737
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag2737_08572D1C_08572D14 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimClawSlash @ callback
sAffineAnim_Tag2710_08572D5C_0_08572D34: @ 0x08572D34
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x010F, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnim_Tag2710_08572D74_0_08572D44: @ 0x08572D44
	@ union AffineAnimCmd stream
	.2byte 0x0000, 0x0000, 0x0114, 0x0000 @ AFFINE_FRAME(0, 0, rot=0x00, duration=0)
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(0)

sAffineAnims_Tag2710_08572D5C_08572D54: @ 0x08572D54
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag2710_08572D5C_0_08572D34 @ [0]

sAffineAnims_Tag2710_08572D74_08572D58: @ 0x08572D58
	@ AffineAnimCmd pointer table
	.4byte sAffineAnim_Tag2710_08572D74_0_08572D44 @ [0]

sSpriteTemplate_Tag2710_08572D5C: @ 0x08572D5C
	@ SpriteTemplate: tileTag=0x2710, paletteTag=0x2710
	.2byte 0x2710, 0x2710
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag2710_08572D5C_08572D54 @ affineAnims
	.4byte AnimBonemerangProjectile @ callback
sSpriteTemplate_Tag2710_08572D74: @ 0x08572D74
	@ SpriteTemplate: tileTag=0x2710, paletteTag=0x2710
	.2byte 0x2710, 0x2710
	.4byte gBattleAnimOam_AffineOff_ObjNormal_64x64 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte sAffineAnims_Tag2710_08572D74_08572D58 @ affineAnims
	.4byte AnimBoneHitProjectile @ callback
sSpriteTemplate_Tag275A_08572D8C: @ 0x08572D8C
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDirtScatter @ callback
sAnim_Tag275A_08572DB0_0_08572DA4: @ 0x08572DA4
	@ union AnimCmd stream
	.2byte 0x0001, 0x0001 @ ANIMCMD_FRAME(1, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnims_Tag275A_08572DB0_08572DAC: @ 0x08572DAC
	@ AnimCmd pointer table
	.4byte sAnim_Tag275A_08572DB0_0_08572DA4 @ [0]

sSpriteTemplate_Tag275A_08572DB0: @ 0x08572DB0
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte sAnims_Tag275A_08572DB0_08572DAC @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDirtScatter @ callback
sSpriteTemplate_Tag275A_08572DC8: @ 0x08572DC8
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimMudSportDirt @ callback
sSpriteTemplate_Tag275A_08572DE0: @ 0x08572DE0
	@ SpriteTemplate: tileTag=0x275A, paletteTag=0x275A
	.2byte 0x275A, 0x275A
	.4byte gBattleAnimOam_AffineOff_ObjNormal_8x8 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimFissureDirtPlumeParticle @ callback
sSpriteTemplate_Tag2829_08572DF8: @ 0x08572DF8
	@ SpriteTemplate: tileTag=0x2829, paletteTag=0x2829
	.2byte 0x2829, 0x2829
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x16 @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimDigDirtMound @ callback
sAnim_Tag2759_08572E40_0_08572E10: @ 0x08572E10
	@ union AnimCmd stream
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0x0004, 0x0008 @ ANIMCMD_FRAME(4, 8)
	.2byte 0x0000, 0x0048 @ ANIMCMD_FRAME(0, 72)
	.2byte 0x0008, 0x0008 @ ANIMCMD_FRAME(8, 8)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnim_Tag2759_08572E40_1_08572E24: @ 0x08572E24
	@ union AnimCmd stream
	.2byte 0x0000, 0x0048 @ ANIMCMD_FRAME(0, 72)
	.2byte 0x0004, 0x0008 @ ANIMCMD_FRAME(4, 8)
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0x0008, 0x0008 @ ANIMCMD_FRAME(8, 8)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag2759_08572E40_08572E38: @ 0x08572E38
	@ AnimCmd pointer table
	.4byte sAnim_Tag2759_08572E40_0_08572E10 @ [0]
	.4byte sAnim_Tag2759_08572E40_1_08572E24 @ [1]

sSpriteTemplate_Tag2759_08572E40: @ 0x08572E40
	@ SpriteTemplate: tileTag=0x2759, paletteTag=0x2759
	.2byte 0x2759, 0x2759
	.4byte gBattleAnimOam_AffineOff_ObjNormal_16x16 @ oam
	.4byte sAnims_Tag2759_08572E40_08572E38 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimConfusionDuck @ callback
sSpriteTemplate_Tag0000_08572E58: @ 0x08572E58
	@ SpriteTemplate: tileTag=0x0000, paletteTag=0x0000
	.2byte 0x0000, 0x0000
	.4byte gDummyOamData @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimSimplePaletteBlend @ callback
sSpriteTemplate_Tag0000_08572E70: @ 0x08572E70
	@ SpriteTemplate: tileTag=0x0000, paletteTag=0x0000
	.2byte 0x0000, 0x0000
	.4byte gDummyOamData @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x081160F5 @ callback (sub_081160F4)

sAnim_Tag2757_08572EA4_0_08572E88: @ 0x08572E88
	@ union AnimCmd stream
	.2byte 0x0000, 0x0003 @ ANIMCMD_FRAME(0, 3)
	.2byte 0x0010, 0x0003 @ ANIMCMD_FRAME(16, 3)
	.2byte 0x0020, 0x0003 @ ANIMCMD_FRAME(32, 3)
	.2byte 0x0030, 0x0003 @ ANIMCMD_FRAME(48, 3)
	.2byte 0x0040, 0x0003 @ ANIMCMD_FRAME(64, 3)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)

sAnims_Tag2757_08572EA4_08572EA0: @ 0x08572EA0
	@ AnimCmd pointer table
	.4byte sAnim_Tag2757_08572EA4_0_08572E88 @ [0]

sSpriteTemplate_Tag2757_08572EA4: @ 0x08572EA4
	@ SpriteTemplate: tileTag=0x2757, paletteTag=0x2757
	.2byte 0x2757, 0x2757
	.4byte gBattleAnimOam_AffineOff_ObjNormal_32x32 @ oam
	.4byte sAnims_Tag2757_08572EA4_08572EA0 @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte AnimCirclingSparkle @ callback
sSpriteTemplate_Tag0000_08572EBC: @ 0x08572EBC
	@ SpriteTemplate: tileTag=0x0000, paletteTag=0x0000
	.2byte 0x0000, 0x0000
	.4byte gDummyOamData @ oam
	.4byte gDummySpriteAnimTable @ anims
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte 0x081168F5 @ callback (sub_081168F4)

	@ semanticized v110: canonical static data at 0x08572ED4, size=0x10
sAffineAnim_HitSplat_0:
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 8)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	@ semanticized v110: canonical static data at 0x08572EE4, size=0x18
sAffineAnim_HitSplat_1:
	.2byte 0x00D8, 0x00D8
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(216, 216, 0, 0)
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 8)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	@ semanticized v110: canonical static data at 0x08572EFC, size=0x18
sAffineAnim_HitSplat_2:
	.2byte 0x00B0, 0x00B0
	.byte 0x00, 0x00
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(176, 176, 0, 0)
	.2byte 0x0000, 0x0000
	.byte 0x00, 0x08
	.2byte 0x0000 @ AFFINEANIMCMD_FRAME(0, 0, 0, 8)
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	@ semanticized v110: canonical static data at 0x08572F14, size=0x28
sAffineAnim_HitSplat_3:
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

	.if (. - .Lsemantic_range_0857299C) != 0x5A0
	.error "semantic range 0x0857299C size mismatch"
	.endif
	.globl gFightData_08572F3C
gFightData_08572F3C:
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
	.globl gMapU32Table_Rom_573008
gMapU32Table_Rom_573008: @ 0x08573008
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
	.globl gMapU32Table_Rom_573030
gMapU32Table_Rom_573030: @ 0x08573030
sMachBikeTransitions:
	.4byte MachBikeTransition_FaceDirection
	.4byte MachBikeTransition_TurnDirection
	.4byte MachBikeTransition_TrySpeedUp
	.4byte MachBikeTransition_TrySlowDown
	.globl gMapU32Table_Rom_573040
gMapU32Table_Rom_573040: @ 0x08573040
sMachBikeSpeedCallbacks:
	.4byte PlayerGoSpeed1
	.4byte PlayerGoSpeed2
	.4byte PlayerGoSpeed4
	.globl gMapPointerTable_Rom_57304C
gMapPointerTable_Rom_57304C: @ 0x0857304C
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
	.globl gMapU32Table_Rom_573080
gMapU32Table_Rom_573080: @ 0x08573080
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
	@ Four BikeHistoryInputInfo records; field semantics follow bike.c.
	@ trick 0: direction=1 key=0x2 masks=0xF/0xF
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x0000000F
	.4byte 0x0000000F
	.4byte sAcroBikeJumpTimerList
	.4byte sAcroBikeJumpTimerList
	.4byte 0x00000001
	@ trick 1: direction=2 key=0x2 masks=0xF/0xF
	.4byte 0x00000002
	.4byte 0x00000002
	.4byte 0x0000000F
	.4byte 0x0000000F
	.4byte sAcroBikeJumpTimerList
	.4byte sAcroBikeJumpTimerList
	.4byte 0x00000002
	@ trick 2: direction=3 key=0x2 masks=0xF/0xF
	.4byte 0x00000003
	.4byte 0x00000002
	.4byte 0x0000000F
	.4byte 0x0000000F
	.4byte sAcroBikeJumpTimerList
	.4byte sAcroBikeJumpTimerList
	.4byte 0x00000003
	@ trick 3: direction=4 key=0x2 masks=0xF/0xF
	.4byte 0x00000004
	.4byte 0x00000002
	.4byte 0x0000000F
	.4byte 0x0000000F
	.4byte sAcroBikeJumpTimerList
	.4byte sAcroBikeJumpTimerList
	.4byte 0x00000004
	.globl gMapU32Table_Rom_573114
gMapU32Table_Rom_573114: @ 0x08573114
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
	@ 21 x EasyChatScreenTemplate, stride 0x18.
	@ [00] PROFILE
	.byte 0x00, 0x02, 0x02, 0x00
	.4byte gText_Rom_5CBBB7
	.4byte gText_Rom_5CB867
	.4byte gText_Rom_5CB877
	.4byte gText_Rom_5CB916
	.4byte gText_Rom_5CB9B3
	@ [01] BATTLE_START
	.byte 0x01, 0x03, 0x02, 0x01
	.4byte gText_Rom_5CBBBE
	@ Easy Chat semantic aliases.
	@ The first two roles match pinned sEasyChatScreenTemplates.
	@ Keyboard rows are JP-localized; keep neutral JP row names rather than US alphabet names.
	@ These .set directives emit no ROM bytes.
	.set gText_CombineSixWordsOrPhrases, gText_Rom_5CB877 + 0xE
	.set gText_AndMakeAMessage, gText_Rom_5CB88E + 0xD
	.set gText_EasyChatKeyboard_JPRow0, gText_Rom_5CBC22 + 0x6
	.set gText_EasyChatKeyboard_JPRow1, gText_Rom_5CBC22 + 0x18
	.set gText_EasyChatKeyboard_JPRow2, gText_Rom_5CBC22 + 0x28
	.set gText_EasyChatKeyboard_JPRow3, gText_Rom_5CBC50 + 0x6

	.4byte gText_CombineSixWordsOrPhrases
	.4byte gText_AndMakeAMessage
	.4byte gText_Rom_5CB91E
	.4byte gText_Rom_5CB9B3
	@ [02] BATTLE_WON
	.byte 0x02, 0x03, 0x02, 0x01
	.4byte gText_Rom_5CBBCB
	.4byte gText_CombineSixWordsOrPhrases
	.4byte gText_AndMakeAMessage
	.4byte gText_Rom_5CB931
	.4byte gText_Rom_5CB9B3
	@ [03] BATTLE_LOST
	.byte 0x03, 0x03, 0x02, 0x01
	.4byte gText_Rom_5CBBD7
	.4byte gText_CombineSixWordsOrPhrases
	.4byte gText_AndMakeAMessage
	.4byte gText_Rom_5CB944
	.4byte gText_Rom_5CB9B3
	@ [04] MAIL
	.byte 0x04, 0x03, 0x03, 0x02
	.4byte 0
	.4byte gText_Rom_5CB8D6
	.4byte gText_Rom_5CB8E6
	.4byte gText_Rom_5CB95C
	.4byte gText_Rom_5CB9B3
	@ [05] INTERVIEW
	.byte 0x05, 0x02, 0x02, 0x05
	.4byte gText_Rom_5CBBF6
	.4byte gText_Rom_5CB867
	.4byte gText_Rom_5CBA98
	.4byte gText_Rom_5CB957
	.4byte gText_Rom_5CB9B3
	@ [06] BARD_SONG
	.byte 0x06, 0x03, 0x02, 0x01
	.4byte gText_Rom_5CBBE3
	.4byte gText_Rom_5CB8F3
	.4byte gText_Rom_5CB903
	.4byte gText_Rom_5CB97B
	.4byte gText_Rom_5CB9B3
	@ [07] FAN_CLUB
	.byte 0x07, 0x01, 0x01, 0x04
	.4byte gText_Rom_5CBBF6
	.4byte gText_Rom_5CB8B1
	.4byte gText_Rom_5CB8C1
	.4byte gText_Rom_5CB957
	.4byte gText_Rom_5CB9B3
	@ [08] TRENDY_PHRASE
	.byte 0x09, 0x02, 0x01, 0x03
	.4byte gText_Rom_5CBBEA
	.4byte gText_Rom_5CB985
	.4byte gText_Rom_5CB995
	.4byte gText_Rom_5CB9A7
	.4byte gText_Rom_5CB9B3
	@ [09] QUIZ_QUESTION
	.byte 0x10, 0x03, 0x03, 0x87
	.4byte 0
	.4byte gText_Rom_5CBC89
	.4byte gText_Rom_5CBC94
	.4byte 0
	.4byte 0
	@ [10] QUIZ_ANSWER
	.byte 0x0F, 0x01, 0x01, 0x86
	.4byte gText_Rom_5CBCA0
	.4byte gText_Rom_5CBA05
	.4byte gText_Rom_5CBA0F
	.4byte gText_Rom_5CBA4E
	.4byte gText_Rom_5CB9B3
	@ [11] QUIZ_SET_QUESTION
	.byte 0x11, 0x03, 0x03, 0x88
	.4byte 0
	.4byte gText_Rom_5CB8D6
	.4byte gText_Rom_5CBA1F
	.4byte gText_Rom_5CBCC0
	.4byte 0
	@ [12] QUIZ_SET_ANSWER
	.byte 0x12, 0x01, 0x01, 0x86
	.4byte gText_Rom_5CBCA0
	.4byte gText_Rom_5CBA2A
	.4byte gText_Rom_5CBA3E
	.4byte gText_Rom_5CBCC0
	.4byte 0
	@ [13] BARD_SONG_ALT
	.byte 0x06, 0x03, 0x02, 0x01
	.4byte gText_Rom_5CBBE3
	.4byte gText_Rom_5CB8F3
	.4byte gText_Rom_5CB903
	.4byte gText_Rom_5CB97B
	.4byte gText_Rom_5CB9B3
	@ [14] APPRENTICE
	.byte 0x13, 0x03, 0x02, 0x01
	.4byte gText_Rom_5CBC18
	.4byte gText_Rom_5CB9E0
	.4byte gText_Rom_5CB9ED
	.4byte gText_Rom_5CBA58
	.4byte gText_Rom_5CB9B3
	@ [15] GOOD_SAYING
	.byte 0x0D, 0x02, 0x01, 0x03
	.4byte gText_Rom_5CBBFD
	.4byte gText_Rom_5CB9BE
	.4byte gText_Rom_5CB9CE
	.4byte gText_Rom_5CB957
	.4byte gText_Rom_5CB9B3
	@ [16] GABBY_AND_TY
	.byte 0x0A, 0x01, 0x01, 0x04
	.4byte gText_Rom_5CBBF6
	.4byte gText_Rom_5CB8B1
	.4byte gText_Rom_5CB8C1
	.4byte gText_Rom_5CB957
	.4byte gText_Rom_5CB9B3
	@ [17] BATTLE_TOWER_INTERVIEW
	.byte 0x0C, 0x01, 0x01, 0x04
	.4byte gText_Rom_5CBBF6
	.4byte gText_Rom_5CB8B1
	.4byte gText_Rom_5CB8C1
	.4byte gText_Rom_5CB957
	.4byte gText_Rom_5CB9B3
	@ [18] CONTEST_INTERVIEW
	.byte 0x0B, 0x01, 0x01, 0x04
	.4byte gText_Rom_5CBBF6
	.4byte gText_Rom_5CB8B1
	.4byte gText_Rom_5CB8C1
	.4byte gText_Rom_5CB957
	.4byte gText_Rom_5CB9B3
	@ [19] FAN_QUESTION
	.byte 0x0E, 0x01, 0x01, 0x04
	.4byte gText_Rom_5CBC04
	.4byte gText_Rom_5CB9E0
	.4byte gText_Rom_5CB9ED
	.4byte gText_Rom_5CB9FF
	.4byte gText_Rom_5CB9B3
	@ [20] QUESTIONNAIRE
	.byte 0x14, 0x02, 0x02, 0x00
	.4byte gText_Rom_5CBC22
	.4byte gText_Rom_5CB867
	.4byte gText_Rom_5CBA84
	.4byte gText_Rom_5CB957
	.4byte gText_Rom_5CB9B3
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
	.2byte 0x4BFF, 0x4B1F, 0x2E3D, 0x1577, 0x6B5F, 0x5ADE, 0x4218, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x18C5, 0x318C, 0x5AF6, 0x6F5B, 0x7FFF

gEasyChatRectangleCursor_Pal: @ 0x08573370
	.2byte 0x028E, 0x001F, 0x109F, 0x253F, 0x35BF, 0x4A5F, 0x5ADF, 0x6F7F
	.2byte 0x7FFF, 0x7FFF, 0x67FF, 0x67FF, 0x0000, 0x0000, 0x0000, 0x0000

sTriangleCursor_Gfx: @ 0x08573390
	@ uncompressed 8x8 4bpp cursor tile
	.byte 0xC0, 0xCC, 0x00, 0x00, 0xC0, 0xDD, 0x0C, 0x00, 0xC0, 0xDD, 0xCD, 0x00, 0xC0, 0xDD, 0xDD, 0x0C
	.byte 0xC0, 0xDD, 0xDD, 0x0C, 0xC0, 0xDD, 0xCD, 0x00, 0xC0, 0xDD, 0x0C, 0x00, 0xC0, 0xCC, 0x00, 0x00

sEasyChatUnreferencedPalette_085733B0: @ 0x085733B0
	@ v105: palette-like 16-color data, but no exact xref. Name intentionally neutral.
	.2byte 0x4BFF, 0x001F, 0x001F, 0x109F, 0x1CFF, 0x253F, 0x2D7F, 0x39DF
	.2byte 0x421F, 0x4E7F, 0x56BF, 0x5EFF, 0x6B5F, 0x739F, 0x7FFF, 0x0000
gEasyChatRectangleCursor_Gfx: @ 0x085733D0
	.incbin "build/graphics/easy_chat/rectangle_cursor.4bpp.lz"
	.if (. - gEasyChatRectangleCursor_Gfx) != 0x201
	.error "gEasyChatRectangleCursor_Gfx compressed size mismatch"
	.endif
	@ original alignment padding
	.byte 0x00, 0x00, 0x00

sScrollIndicator_Gfx: @ 0x085735D4
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
	.2byte 0x530E, 0x47F7, 0x3793, 0x2ECF, 0x7F56, 0x72D1, 0x562E, 0x0000
	.2byte 0x421F, 0x295D, 0x5BBF, 0x6BFF, 0x39CE, 0x5AF6, 0x6F5B, 0x7FFF
gEasyChatMode_Gfx: @ 0x085737F4
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
	.2byte 0x0000, 0x5FFF, 0x67BD, 0x4B1A, 0x6FFF, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
sRSInterviewFrame_Gfx: @ 0x08573D30
	.incbin "build/graphics/easy_chat/interview_frame.4bpp.lz"
	.if (. - sRSInterviewFrame_Gfx) != 0x133
	.error "sRSInterviewFrame_Gfx compressed size mismatch"
	.endif
	@ original alignment padding
	.byte 0x00
	@ pret/pokeemerald-jp direct xref for 0x08573E64: easy_chat.s: sub_0811D814
	.globl gEasyChatMode_Pal
gEasyChatMode_Pal: @ 0x08573E64
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
	.2byte 0x530E, 0x3AFF, 0x1E3F, 0x0199, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x5BBF, 0x6BFF, 0x39CE, 0x5AF6, 0x6F5B, 0x7FFF

	@ pret/pokeemerald-jp direct xref for 0x0857425C: easy_chat.s: sub_0811D814
	.globl sTextInputFrameGreen_Pal
sTextInputFrameGreen_Pal: @ 0x0857425C
	.2byte 0x530E, 0x47F7, 0x3793, 0x2ECF, 0x7F56, 0x72D1, 0x562E, 0x0000
	.2byte 0x421F, 0x295D, 0x5BBF, 0x6BFF, 0x39CE, 0x5AF6, 0x6F5B, 0x7FFF
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
	.2byte 0x0000, 0x0000, 0x7F27, 0x76B5

	@ pret/pokeemerald-jp direct xref for 0x0857434C: easy_chat.s: sub_0811D814
	.globl sText_Pal
sText_Pal: @ 0x0857434C
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

sEasyChatJapaneseWordIdTable_08574584: @ 0x08574584
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
