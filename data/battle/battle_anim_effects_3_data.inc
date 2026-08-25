	@ pret/pokeemerald-jp direct xref for 0x085AD1A8: battle_anim_effects_3.s: AnimMeteorMashStarStep, sub_0815B410; battle_anim_special.s: sub_08172DD0
	.globl sSpriteTemplate_085AD1A8
	@ analyzed canonical ROM range 0x085AD1A8-0x085AD1BF
sSpriteTemplate_085AD1A8: @ 0x085AD1A8
	rodata_sprite_template 0x27F9, 0x27F9, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, AnimMiniTwinklingStar
	@ pret/pokeemerald-jp direct xref for 0x085AD1C0: battle_anim_effects_3.s: sub_0815B598
	.globl gBattleAnimEffects3Data_085AD1C0
gBattleAnimEffects3Data_085AD1C0: @ 0x085AD1C0
	@ analyzed canonical ROM range 0x085AD1C0-0x085AD1E7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x28 entries=20
	.2byte 0x0008, 0xFFF8, 0x0C00, 0x0000, 0xFFF0, 0x0010, 0x0C00, 0x0000
	.2byte 0x0008, 0xFFF8, 0x0C00, 0x0000, 0x7FFD, 0x0001, 0x0000, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000
	.globl gSpitUpDeformMonAffineAnimCmds
gSpitUpDeformMonAffineAnimCmds: @ 0x085AD1E8
	.2byte 0x0000, 0x0006, 0x1400, 0x0000
	.2byte 0x0000, 0x0000, 0x1400, 0x0000
	.2byte 0x0000, 0xFFEE, 0x0600, 0x0000
	.2byte 0xFFEE, 0xFFEE, 0x0300, 0x0000
	.2byte 0x0000, 0x0000, 0x0F00, 0x0000
	.2byte 0x0004, 0x0004, 0x0D00, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl gSwallowBlueOrbSpriteTemplate
gSwallowBlueOrbSpriteTemplate: @ 0x085AD220
	.2byte 0x27FC, 0x27FC
	.4byte gOamData_AffineOff_ObjNormal_8x8
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte sub_0815B648
	@ pret/pokeemerald-jp direct xref for 0x085AD238: battle_anim_effects_3.s: sub_0815B6B4
	.globl gBattleAnimEffects3Data_085AD238
gBattleAnimEffects3Data_085AD238: @ 0x085AD238
	@ analyzed canonical ROM range 0x085AD238-0x085AD267
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x30 entries=24
	.2byte 0x0000, 0x0006, 0x1400, 0x0000, 0x0000, 0x0000, 0x1400, 0x0000
	.2byte 0x0007, 0xFFE2, 0x0600, 0x0000, 0x0000, 0x0000, 0x1400, 0x0000
	.2byte 0xFFFE, 0x0003, 0x1400, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085AD268: battle_anim_effects_3.s: sub_0815BAC0
	.globl gBattleAnimEffects3Data_085AD268
gBattleAnimEffects3Data_085AD268: @ 0x085AD268
	@ analyzed canonical ROM range 0x085AD268-0x085AD293
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x2C entries=22
	.2byte 0x18E8, 0x00FC, 0x0000, 0x0006, 0x0004, 0x0006, 0xFFFE, 0x0000
	.2byte 0x0008, 0x0006, 0xFFFF, 0x0000, 0x000C, 0x0006, 0xFFFF, 0x0000
	.2byte 0xD26C, 0x085A, 0xD278, 0x085A, 0xD280, 0x085A
	@ pret/pokeemerald-jp direct xref for 0x085AD294: battle_anim_effects_3.s: sub_0815BD40
	.globl gBattleAnimEffects3Data_085AD294
gBattleAnimEffects3Data_085AD294:
	@ analyzed canonical ROM range 0x085AD294-0x085AD2AB
	.globl sSpriteTemplate_085AD294
sSpriteTemplate_085AD294: @ 0x085AD294
	rodata_sprite_template 0x2801, 0x2801, gOamData_AffineOff_ObjNormal_16x16, 0x085AD288, 0, gDummySpriteAffineAnimTable, sub_0815BD40
	@ pret/pokeemerald-jp direct xref for 0x085AD2AC: battle_anim_effects_3.s: sub_0815BFE0
	.globl gBattleAnimEffects3Data_085AD2AC
gBattleAnimEffects3Data_085AD2AC: @ 0x085AD2AC
	@ analyzed canonical ROM range 0x085AD2AC-0x085AD2AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x78, 0x50, 0x28, 0x00
	@ Resolved pointer table; original ROM range 0x5AD2B0..0x5AD2B7.
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte ABILITY_RUN_AWAY
	.globl gStrongFrustrationAffineAnimCmds
gStrongFrustrationAffineAnimCmds: @ 0x085AD2B8
	.2byte 0x0000, 0xFFF1, 0x0700, 0x0000
	.2byte 0x0000, 0x000F, 0x0700, 0x0000
	.2byte 0x7FFD, 0x0002, 0x0000, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl gWeakFrustrationAngerMarkSpriteTemplate
gWeakFrustrationAngerMarkSpriteTemplate: @ 0x085AD2D8
	.2byte 0x2767, 0x2767
	.4byte gOamData_AffineOff_ObjNormal_16x16
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimWeakFrustrationAngerMark
	.globl gSweetScentPetalAnimCmds1
gSweetScentPetalAnimCmds1: @ 0x085AD2F0
	.2byte 0x0000, 0x0008, 0x0001, 0x0008
	.2byte 0x0002, 0x0008, 0x0003, 0x0008
	.2byte 0x0003, 0x0088, 0x0002, 0x0088
	.2byte 0x0000, 0x0088, 0x0001, 0x0088
	.2byte 0xFFFE, 0x0000

	.globl gSweetScentPetalAnimCmds2
gSweetScentPetalAnimCmds2: @ 0x085AD314
	.2byte 0x0000, 0x0048, 0x0001, 0x0048
	.2byte 0x0002, 0x0048, 0x0003, 0x0048
	.2byte 0x0003, 0x00C8, 0x0002, 0x00C8
	.2byte 0x0000, 0x00C8, 0x0001, 0x00C8
	.2byte 0xFFFE, 0x0000

	.globl gSweetScentPetalAnimCmds3
gSweetScentPetalAnimCmds3: @ 0x085AD338
	.2byte 0x0000, 0x0008
	.2byte 0xFFFF, 0x0000

	.globl gSweetScentPetalAnimCmdTable
gSweetScentPetalAnimCmdTable: @ 0x085AD340
	.4byte gSweetScentPetalAnimCmds1
	.4byte gSweetScentPetalAnimCmds2
	.4byte gSweetScentPetalAnimCmds3

	.globl gSweetScentPetalSpriteTemplate
gSweetScentPetalSpriteTemplate: @ 0x085AD34C
	.2byte 0x27FE, 0x27FE
	.4byte gOamData_AffineOff_ObjNormal_8x8
	.4byte gSweetScentPetalAnimCmdTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimSweetScentPetal
	@ Unused 16-color palette retained in the original layout immediately
	@ before the Pain Split animation data.
	.globl gPainSplitUnusedPalette
gPainSplitUnusedPalette: @ 0x085AD364
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/battle_anim/gPainSplitUnusedPalette.gbapal"

	.globl gPainSplitAnimCmds
gPainSplitAnimCmds: @ 0x085AD384
	.2byte 0x0000, 0x0005
	.2byte 0x0004, 0x0009
	.2byte 0x0008, 0x0005
	.2byte 0xFFFF, 0x0000

	.globl gPainSplitAnimCmdTable
gPainSplitAnimCmdTable: @ 0x085AD394
	.4byte gPainSplitAnimCmds

	.globl gPainSplitProjectileSpriteTemplate
gPainSplitProjectileSpriteTemplate: @ 0x085AD398
	.2byte 0x27FF, 0x27FF
	.4byte gOamData_AffineOff_ObjNormal_16x16
	.4byte gPainSplitAnimCmdTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimPainSplitProjectile
	@ struct SpriteTemplate gFlatterConfettiSpriteTemplate (24 bytes total).
	.globl gFlatterConfettiSpriteTemplate
gFlatterConfettiSpriteTemplate:
	.2byte 0x2800, 0x2800 @ +0x0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3B4 size=0x4 source=v54_multi_pointer
	.4byte gOamData_AffineOff_ObjNormal_8x8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3B8 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAnimTable
	.4byte 0 @ images = NULL
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3C0 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAffineAnimTable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3C4 size=0x4 source=v54_multi_pointer
	.4byte AnimFlatterConfetti
	@ struct SpriteTemplate gFlatterSpotlightSpriteTemplate (24 bytes total).
	.globl gFlatterSpotlightSpriteTemplate
gFlatterSpotlightSpriteTemplate:
	.2byte 0x27F3, 0x27F3 @ +0x0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3CC size=0x4 source=v54_multi_pointer
	.4byte gOamData_AffineDouble_ObjNormal_64x64
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3D0 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAnimTable
	.4byte 0 @ images = NULL
	.4byte gBattleControllerSafariData_085ACD28 + 0x304 @ affineAnims; JP-local numeric pointer preserved
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3DC size=0x4 source=v54_multi_pointer
	.4byte AnimFlatterSpotlight
	@ struct SpriteTemplate gReversalOrbSpriteTemplate (24 bytes total).
	.globl gReversalOrbSpriteTemplate
gReversalOrbSpriteTemplate:
	.2byte 0x27FC, 0x27FC @ +0x0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3E4 size=0x4 source=v54_multi_pointer
	.4byte gOamData_AffineOff_ObjNormal_8x8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3E8 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAnimTable
	.4byte 0 @ images = NULL
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3F0 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAffineAnimTable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3F4 size=0x4 source=v54_multi_pointer
	.4byte AnimReversalOrb
	.globl gDeepInhaleAffineAnimCmds
gDeepInhaleAffineAnimCmds: @ 0x085AD3F8
	.2byte 0x0010, 0x0000, 0x0400, 0x0000
	.2byte 0x0000, 0xFFFD, 0x1000, 0x0000
	.2byte 0x0004, 0x0000, 0x0400, 0x0000
	.2byte 0x0000, 0x0000, 0x1800, 0x0000
	.2byte 0xFFFB, 0x0003, 0x1000, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl gYawnCloudAffineAnimCmds1
gYawnCloudAffineAnimCmds1: @ 0x085AD428
	.2byte 0x0080, 0x0080, 0x0000, 0x0000
	.2byte 0xFFF8, 0xFFF8, 0x0800, 0x0000
	.2byte 0x0008, 0x0008, 0x0800, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gYawnCloudAffineAnimCmds2
gYawnCloudAffineAnimCmds2: @ 0x085AD448
	.2byte 0x00C0, 0x00C0, 0x0000, 0x0000
	.2byte 0x0008, 0x0008, 0x0800, 0x0000
	.2byte 0xFFF8, 0xFFF8, 0x0800, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gYawnCloudAffineAnimCmds3
gYawnCloudAffineAnimCmds3: @ 0x085AD468
	.2byte 0x0100, 0x0100, 0x0000, 0x0000
	.2byte 0x0008, 0x0008, 0x0800, 0x0000
	.2byte 0xFFF8, 0xFFF8, 0x0800, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gYawnCloudAffineAnimTable
gYawnCloudAffineAnimTable: @ 0x085AD488
	.4byte gYawnCloudAffineAnimCmds1
	.4byte gYawnCloudAffineAnimCmds2
	.4byte gYawnCloudAffineAnimCmds3

	.globl gYawnCloudSpriteTemplate
gYawnCloudSpriteTemplate: @ 0x085AD494
	.2byte 0x2802, 0x2802
	.4byte gOamData_AffineNormal_ObjNormal_32x32
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gYawnCloudAffineAnimTable
	.4byte AnimYawnCloud
	.globl gSmokeBallEscapeCloudAffineAnimCmds1
gSmokeBallEscapeCloudAffineAnimCmds1: @ 0x085AD4AC
	.2byte 0x0080, 0x0080, 0x0000, 0x0000
	.2byte 0xFFFC, 0xFFFA, 0x1000, 0x0000
	.2byte 0x0004, 0x0006, 0x1000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gSmokeBallEscapeCloudAffineAnimCmds2
gSmokeBallEscapeCloudAffineAnimCmds2: @ 0x085AD4CC
	.2byte 0x00C0, 0x00C0, 0x0000, 0x0000
	.2byte 0x0004, 0x0006, 0x1000, 0x0000
	.2byte 0xFFFC, 0xFFFA, 0x1000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gSmokeBallEscapeCloudAffineAnimCmds3
gSmokeBallEscapeCloudAffineAnimCmds3: @ 0x085AD4EC
	.2byte 0x0100, 0x0100, 0x0000, 0x0000
	.2byte 0x0004, 0x0006, 0x1000, 0x0000
	.2byte 0xFFFC, 0xFFFA, 0x1000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gSmokeBallEscapeCloudAffineAnimCmds4
gSmokeBallEscapeCloudAffineAnimCmds4: @ 0x085AD50C
	.2byte 0x0100, 0x0100, 0x0000, 0x0000
	.2byte 0x0008, 0x000A, 0x1E00, 0x0000
	.2byte 0xFFF8, 0xFFF6, 0x1000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gSmokeBallEscapeCloudAffineAnimTable
gSmokeBallEscapeCloudAffineAnimTable: @ 0x085AD52C
	.4byte gSmokeBallEscapeCloudAffineAnimCmds1
	.4byte gSmokeBallEscapeCloudAffineAnimCmds2
	.4byte gSmokeBallEscapeCloudAffineAnimCmds3
	.4byte gSmokeBallEscapeCloudAffineAnimCmds4

	.globl gSmokeBallEscapeCloudSpriteTemplate
gSmokeBallEscapeCloudSpriteTemplate: @ 0x085AD53C
	.2byte 0x2802, 0x2802
	.4byte gOamData_AffineDouble_ObjNormal_32x32
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gSmokeBallEscapeCloudAffineAnimTable
	.4byte AnimSmokeBallEscapeCloud
	@ pret/pokeemerald-jp direct xref for 0x085AD554: battle_anim_effects_3.s: AnimTask_SquishAndSweatDroplets, AnimTask_SquishAndSweatDropletsStep
	.globl gBattleAnimEffects3Data_085AD554
gBattleAnimEffects3Data_085AD554: @ 0x085AD554
	@ analyzed canonical ROM range 0x085AD554-0x085AD573
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x20 entries=16
	.2byte 0xFFF0, 0x0010, 0x0600, 0x0000, 0x0010, 0xFFF0, 0x0C00, 0x0000
	.2byte 0xFFF0, 0x0010, 0x0600, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085AD574: battle_anim_effects_3.s: CreateSweatDroplets
	.globl gBattleAnimEffects3Data_085AD574
gBattleAnimEffects3Data_085AD574: @ 0x085AD574
	@ analyzed canonical ROM range 0x085AD574-0x085AD58B
sSpriteTemplate_085AD574: @ 0x085AD574
	rodata_sprite_template 0x2803, 0x2803, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0815DDF8
	.globl gFacadeBlendColors
gFacadeBlendColors: @ 0x085AD58C
	.2byte 0x073C, 0x16BC, 0x225B, 0x2DDB
	.2byte 0x3D5A, 0x48FA, 0x5479, 0x6419
	.2byte 0x5C19, 0x5019, 0x4019, 0x3419
	.2byte 0x281A, 0x181A, 0x0C1A, 0x001B
	.2byte 0x003B, 0x00BB, 0x013B, 0x019B
	.2byte 0x021C, 0x027C, 0x02FC, 0x037D

	.globl gRoarNoiseLineAnimCmds1
gRoarNoiseLineAnimCmds1: @ 0x085AD5BC
	.2byte 0x0000, 0x0003
	.2byte 0x0010, 0x0003
	.2byte 0xFFFE, 0x0000

	.globl gRoarNoiseLineAnimCmds2
gRoarNoiseLineAnimCmds2: @ 0x085AD5C8
	.2byte 0x0020, 0x0003
	.2byte 0x0030, 0x0003
	.2byte 0xFFFE, 0x0000

	.globl gRoarNoiseLineAnimTable
gRoarNoiseLineAnimTable: @ 0x085AD5D4
	.4byte gRoarNoiseLineAnimCmds1
	.4byte gRoarNoiseLineAnimCmds2

	.globl gRoarNoiseLineSpriteTemplate
gRoarNoiseLineSpriteTemplate: @ 0x085AD5DC
	.2byte 0x2745, 0x2745
	.4byte gOamData_AffineOff_ObjNormal_32x32
	.4byte gRoarNoiseLineAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimRoarNoiseLine
	@ pret/pokeemerald-jp direct xref for 0x085AD5F4: battle_anim_effects_3.s: AnimTask_GlareEyeDotsStep
	.globl gBattleAnimEffects3Data_085AD5F4
gBattleAnimEffects3Data_085AD5F4: @ 0x085AD5F4
	@ analyzed canonical ROM range 0x085AD5F4-0x085AD653
	@ pointer/nullable table
	.4byte 0x28082808 @ +0x0
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte AnimGlareEyeDot @ +0x14
	.4byte 0x280C280C @ +0x18
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte AnimAssistPawprint @ +0x2C
	.4byte 0 @ +0x30
	.4byte 0x000018FC @ +0x34
	.4byte 0x00007FFF @ +0x38
	.4byte 0 @ +0x3C
	.4byte 0x01000100 @ +0x40
	.4byte 0x000000C0 @ +0x44
	.4byte 0 @ +0x48
	.4byte 0x00001804 @ +0x4C
	.4byte 0x00007FFF @ +0x50
	.4byte 0 @ +0x54
	.4byte gBattleAnimEffects3Data_085AD5F4 + 0x30 @ +0x58
	.4byte gBattleAnimEffects3Data_085AD5F4 + 0x40 @ +0x5C
	@ pret/pokeemerald-jp direct xref for 0x085AD654: battle_anim_effects_3.s: AnimTask_BarrageBall
	.globl gBattleAnimEffects3Data_085AD654
gBattleAnimEffects3Data_085AD654: @ 0x085AD654
	@ analyzed canonical ROM range 0x085AD654-0x085AD683
	@ pointer/nullable table
	.4byte 0x280E280E @ +0x0
	.4byte gOamData_AffineNormal_ObjNormal_32x32 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	.4byte 0 @ +0xC
	.4byte gBattleAnimEffects3Data_085AD5F4 + 0x58 @ +0x10
	.4byte SpriteCallbackDummy @ +0x14
	.4byte 0x28072807 @ +0x18
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte AnimSmellingSaltsHand @ +0x2C
	@ pret/pokeemerald-jp direct xref for 0x085AD684: battle_anim_effects_3.s: AnimTask_SmellingSaltsSquish, AnimTask_SmellingSaltsSquishStep
	.globl gBattleAnimEffects3Data_085AD684
gBattleAnimEffects3Data_085AD684: @ 0x085AD684
	@ analyzed canonical ROM range 0x085AD684-0x085AD7CF
	@ pointer/nullable table
	.4byte 0xFFF00000 @ +0x0
	.4byte 0x00000600 @ +0x4
	.4byte 0x00100000 @ +0x8
	.4byte 0x00000600 @ +0xC
	.4byte 0x00007FFF @ +0x10
	.4byte 0 @ +0x14
	.4byte 0x280F280F @ +0x18
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte AnimSmellingSaltExclamation @ +0x2C
	.4byte 0x28072807 @ +0x30
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x34
	.4byte gDummySpriteAnimTable @ +0x38
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x40
	.4byte AnimHelpingHandClap @ +0x44
	.4byte 0x28122812 @ +0x48
	.4byte gOamData_AffineOff_ObjBlend_32x32 @ +0x4C
	.4byte gDummySpriteAnimTable @ +0x50
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x58
	.4byte AnimForesightMagnifyingGlass @ +0x5C
	.4byte 0x27F927F9 @ +0x60
	.4byte gOamData_AffineOff_ObjNormal_16x16 @ +0x64
	.4byte gDummySpriteAnimTable @ +0x68
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x70
	.4byte AnimMeteorMashStar @ +0x74
	.4byte 0x27F927F9 @ +0x78
	.4byte gOamData_AffineOff_ObjNormal_16x16 @ +0x7C
	.4byte gDummySpriteAnimTable @ +0x80
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x88
	.4byte sub_08106A14 @ +0x8C
	.4byte 0x280A280A @ +0x90
	.4byte gOamData_AffineOff_ObjNormal_64x64 @ +0x94
	.4byte gDummySpriteAnimTable @ +0x98
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0xA0
	.4byte AnimBlockX @ +0xA4
	.4byte 0x27F027F0 @ +0xA8
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0xAC
	.4byte gDummySpriteAnimTable @ +0xB0
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0xB8
	.4byte sub_0815FDB8 @ +0xBC
	.4byte 0x00040000 @ +0xC0
	.4byte 0x00040040 @ +0xC4
	.4byte 0x0000FFFF @ +0xC8
	.4byte gBattleAnimEffects3Data_085AD684 + 0xC0 @ +0xCC
	.4byte 0x01000100 @ +0xD0
	.4byte 0 @ +0xD4
	.4byte 0 @ +0xD8
	.4byte 0x000008FC @ +0xDC
	.4byte 0x00007FFF @ +0xE0
	.4byte 0 @ +0xE4
	.4byte 0x0100FF00 @ +0xE8
	.4byte 0 @ +0xEC
	.4byte 0 @ +0xF0
	.4byte 0x00000804 @ +0xF4
	.4byte 0x00007FFF @ +0xF8
	.4byte 0 @ +0xFC
	.4byte gBattleAnimEffects3Data_085AD684 + 0xD0 @ +0x100
	.4byte gBattleAnimEffects3Data_085AD684 + 0xE8 @ +0x104
	.4byte 0x28252825 @ +0x108
	.4byte gOamData_AffineNormal_ObjNormal_64x64 @ +0x10C
	.4byte gBattleAnimEffects3Data_085AD684 + 0xCC @ +0x110
	.4byte 0 @ +0x114
	.4byte gBattleAnimEffects3Data_085AD684 + 0x100 @ +0x118
	.4byte AnimKnockOffStrike @ +0x11C
	.4byte 0 @ +0x120
	.4byte 0x000040FC @ +0x124
	.4byte 0x00007FFE @ +0x128
	.4byte 0 @ +0x12C
	.4byte gBattleAnimEffects3Data_085AD684 + 0x120 @ +0x130
	.4byte 0x28262826 @ +0x134
	.4byte gOamData_AffineNormal_ObjBlend_64x64 @ +0x138
	.4byte gDummySpriteAnimTable @ +0x13C
	.4byte 0 @ +0x140
	.4byte gBattleAnimEffects3Data_085AD684 + 0x130 @ +0x144
	.4byte AnimRecycle @ +0x148
	@ pret/pokeemerald-jp direct xref for 0x085AD7D0: battle_anim_effects_3.s: AnimTask_SlackOffSquish
	.globl gBattleAnimEffects3Data_085AD7D0
gBattleAnimEffects3Data_085AD7D0: @ 0x085AD7D0
	@ analyzed canonical ROM range 0x085AD7D0-0x085AD99F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x1D0 entries=232
	.2byte 0x0000, 0x0010, 0x0400, 0x0000, 0xFFFE, 0x0000, 0x0800, 0x0000
	.2byte 0x0000, 0x0004, 0x0400, 0x0000, 0x0000, 0x0000, 0x1800, 0x0000
	.2byte 0x0001, 0xFFFB, 0x1000, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000
	.2byte 0x03E0, 0x001F, 0x001C, 0x001A, 0x0018, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6318, 0x0000, 0x7FFF
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0EE0, 0x0000
	.2byte 0xE2E0, 0x0000, 0x22E0, 0x000E, 0x22E0, 0x00E2, 0x22E0, 0x0E22
	.2byte 0x22E0, 0xDE22, 0x22E0, 0x0DE2, 0x22E0, 0x00DE, 0xE2E0, 0x000D
	.2byte 0xDEE0, 0x0000, 0x0D00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00EE
	.2byte 0xE000, 0x0DE2, 0x2E00, 0x0DE2, 0x22E0, 0x0DE2, 0x222E, 0x0DE2
	.2byte 0x222E, 0x0DE2, 0x22E0, 0x0DE2, 0x2E00, 0x0DE2, 0xE000, 0x0DE2
	.2byte 0x0000, 0x0DEE, 0x0000, 0x0DD0, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0xE000, 0xEEEE, 0xE000, 0x2222, 0x0000, 0x222E
	.2byte 0x0000, 0x22E0, 0x0000, 0x2E00, 0x0000, 0xE000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0xEEEE, 0x000E, 0x2222, 0x00DE, 0xE222, 0x000D
	.2byte 0xDE22, 0x0000, 0x0DE2, 0x0000, 0x00DE, 0x0000, 0x000D, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0xE000, 0x0000, 0x2E00, 0x0000, 0x22E0
	.2byte 0x0000, 0x222E, 0xE000, 0x2222, 0xE000, 0xEEEE, 0x0000, 0xDDDD
	.2byte 0x0000, 0x0000, 0x000E, 0x0000, 0x00E2, 0x0000, 0x0E22, 0x0000
	.2byte 0xE222, 0x0000, 0x2222, 0x000E, 0xEEEE, 0x00DE, 0xDDDD, 0x00DD
	.2byte 0x0000, 0x0000, 0x0220, 0x0022, 0x2DD2, 0x020D, 0x00D2, 0x0200
	.2byte 0x00D2, 0x0200, 0x0020, 0x0D20, 0x0200, 0x00D2, 0x2000, 0x000D
	.2byte 0x0000, 0x0000, 0x0220, 0x0022, 0x2222, 0x0222, 0x2222, 0x0222
	.2byte 0x2222, 0x0222, 0x2220, 0x0D22, 0x2200, 0x00D2, 0x2000, 0x000D
	.2byte 0x0000, 0x0000, 0x0CC0, 0x00CC, 0xCDDC, 0x0C0D, 0x00DC, 0x0C00
	.2byte 0x00DC, 0x0C00, 0x00C0, 0x0DC0, 0x0C00, 0x00DC, 0xC000, 0x000D
	.2byte 0x0000, 0x0000, 0x0CC0, 0x00CC, 0xCCCC, 0x0CCC, 0xCCCC, 0x0CCC
	.2byte 0xCCCC, 0x0CCC, 0xCCC0, 0x0DCC, 0xCC00, 0x00DC, 0xC000, 0x000D
	.globl gText_Rom_5AD9A0
