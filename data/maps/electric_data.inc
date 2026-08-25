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
