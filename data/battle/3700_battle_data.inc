	@ pret/pokeemerald-jp direct xref for 0x085C6124: field_region_map.s: MCB2_InitRegionMapRegisters
	.globl gFieldRegionMapData_085C6124
gFieldRegionMapData_085C6124: @ 0x085C6124
	@ analyzed canonical ROM range 0x085C6124-0x085C612B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x01F0, 0x0000, 0x2DCA, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C612C: field_region_map.s: MCB2_InitRegionMapRegisters
	.globl gFieldRegionMapData_085C612C
gFieldRegionMapData_085C612C: @ 0x085C612C
	@ analyzed canonical ROM range 0x085C612C-0x085C6143
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x18 entries=12
	.2byte 0x1300, 0x0A11, 0x0F02, 0x0001, 0x1600, 0x0701, 0x0F02, 0x0015
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C6144: battle_anim_special.s: sub_081717D0
	.globl gBattleAnimSpecialData_085C6144
gBattleAnimSpecialData_085C6144: @ 0x085C6144
	@ analyzed canonical ROM range 0x085C6144-0x085C614F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x020A, 0x00FD, 0x000F, 0x00FC, 0x02F6, 0x00FC
	@ pret/pokeemerald-jp direct xref for 0x085C6150: battle_anim_special.s: DestroyBallOpenAnimationParticle, sub_08171B44
	.globl gBallOpenParticleSpriteSheets
gBallOpenParticleSpriteSheets: @ 0x085C6150
	@ analyzed canonical ROM range 0x085C6150-0x085C61AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ struct CompressedSpriteSheet[12] used by ball-open particle loading.
	@ ANALYSIS: SEMANTIC_COMPRESSED_SPRITE_SHEET_TABLE addr=0x085C6150 size=0x60 count=12
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6EC
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6ED
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6EE
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6EF
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6F0
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6F1
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6F2
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6F3
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6F4
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6F5
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6F6
	compressed_sprite_sheet gBattleAnimSpriteGfx_Particles, 0x100, 0xD6F7
	@ pret/pokeemerald-jp direct xref for 0x085C61B0: battle_anim_special.s: DestroyBallOpenAnimationParticle, sub_08171B44
	.globl gBallOpenParticleSpritePalettes
gBallOpenParticleSpritePalettes: @ 0x085C61B0
	@ analyzed canonical ROM range 0x085C61B0-0x085C626F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ struct CompressedSpritePalette[12] paired with ball-open particle sheets.
	@ ANALYSIS: SEMANTIC_COMPRESSED_SPRITE_PALETTE_TABLE addr=0x085C61B0 size=0x60 count=12
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6EC
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6ED
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6EE
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6EF
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6F0
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6F1
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6F2
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6F3
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6F4
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6F5
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6F6
	compressed_sprite_palette gBattleAnimSpritePal_CircleImpact, 0xD6F7
	@ Ball-open particle AnimCmd sequences and animation table.
	@ ANALYSIS: SEMANTIC_ANIM_CMD_TABLE addr=0x085C6210 size=0x60 count=6
sAnim_BallOpenParticles_085C6210: @ 0x085C6210
	rodata_anim_frame 0, 1
	rodata_anim_frame 1, 1
	rodata_anim_frame 2, 1
	rodata_anim_frame 0, 1, 1, 0
	rodata_anim_frame 2, 1
	rodata_anim_frame 1, 1
	rodata_anim_jump 0
sAnim_BallOpenParticles_085C622C: @ 0x085C622C
	rodata_anim_frame 3, 1
	rodata_anim_end
sAnim_BallOpenParticles_085C6234: @ 0x085C6234
	rodata_anim_frame 4, 1
	rodata_anim_end
sAnim_BallOpenParticles_085C623C: @ 0x085C623C
	rodata_anim_frame 5, 1
	rodata_anim_end
sAnim_BallOpenParticles_085C6244: @ 0x085C6244
	rodata_anim_frame 6, 4
	rodata_anim_frame 7, 4
	rodata_anim_jump 0
sAnim_BallOpenParticles_085C6250: @ 0x085C6250
	rodata_anim_frame 7, 4
	rodata_anim_end
sAnims_BallOpenParticles_085C6258: @ 0x085C6258
	.4byte sAnim_BallOpenParticles_085C6210
	.4byte sAnim_BallOpenParticles_085C622C
	.4byte sAnim_BallOpenParticles_085C6234
	.4byte sAnim_BallOpenParticles_085C623C
	.4byte sAnim_BallOpenParticles_085C6244
	.4byte sAnim_BallOpenParticles_085C6250
	@ pret/pokeemerald-jp direct xref for 0x085C6270: battle_anim_special.s: DiveBallOpenParticleAnimation, GreatBallOpenParticleAnimation, MasterBallOpenParticleAnimation, PokeBallOpenParticleAnimation, PremierBallOpenParticleAnimation (+5 more)
	.globl gBattleAnimSpecialData_085C6270
gBattleAnimSpecialData_085C6270: @ 0x085C6270
	@ analyzed canonical ROM range 0x085C6270-0x085C627B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x0000, 0x0500, 0x0201, 0x0302, 0x0505, 0x0404
	.4byte PokeBallOpenParticleAnimation
	.4byte GreatBallOpenParticleAnimation
	.4byte SafariBallOpenParticleAnimation
	.4byte UltraBallOpenParticleAnimation
	.4byte MasterBallOpenParticleAnimation
	.4byte SafariBallOpenParticleAnimation
	.4byte DiveBallOpenParticleAnimation
	.4byte UltraBallOpenParticleAnimation
	.4byte RepeatBallOpenParticleAnimation
	.4byte TimerBallOpenParticleAnimation
	.4byte GreatBallOpenParticleAnimation
	.4byte PremierBallOpenParticleAnimation
	@ pret/pokeemerald-jp direct xref for 0x085C62AC: battle_anim_special.s: DiveBallOpenParticleAnimation, GreatBallOpenParticleAnimation, MasterBallOpenParticleAnimation, PokeBallOpenParticleAnimation, PremierBallOpenParticleAnimation (+4 more)
	.globl gBattleAnimSpecialData_085C62AC
gBattleAnimSpecialData_085C62AC: @ 0x085C62AC
	@ analyzed canonical ROM range 0x085C62AC-0x085C630B
	@ pointer/nullable table
	@ ANALYSIS: U32_TABLE size=0x10 entries=4
	.4byte 0xD6ECD6EC @ +0x0
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x4
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x8
	.4byte 0 @ +0xC
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte SpriteCallbackDummy @ +0x14
	@ ANALYSIS: U32_TABLE size=0x10 entries=4
	.4byte 0xD6EDD6ED @ +0x18
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x1C
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x20
	.4byte 0 @ +0x24
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte SpriteCallbackDummy @ +0x2C
	@ ANALYSIS: U32_TABLE size=0x10 entries=4
	.4byte 0xD6EED6EE @ +0x30
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x34
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x38
	.4byte 0 @ +0x3C
	.4byte gDummySpriteAffineAnimTable @ +0x40
	.4byte SpriteCallbackDummy @ +0x44
	@ ANALYSIS: U32_TABLE size=0x10 entries=4
	.4byte 0xD6EFD6EF @ +0x48
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x4C
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x50
	.4byte 0 @ +0x54
	.4byte gDummySpriteAffineAnimTable @ +0x58
	.4byte SpriteCallbackDummy @ +0x5C
	@ Ball-open particle SpriteTemplate passed directly to CreateSprite by sub_081717D0.
	.globl sSpriteTemplate_BallOpenParticle_085C630C
sSpriteTemplate_BallOpenParticle_085C630C: @ 0x085C630C
	@ ANALYSIS: SEMANTIC_SPRITE_TEMPLATE addr=0x085C630C size=0x18
	rodata_sprite_template 0xD6F0, 0xD6F0, gOamData_AffineOff_ObjNormal_8x8, sAnims_BallOpenParticles_085C6258, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ The following seven 24-byte template-shaped records remain raw until a direct consumer is proved.
	.4byte 0xD6F1D6F1 @ +0x18
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x1C
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x20
	.4byte 0 @ +0x24
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte SpriteCallbackDummy @ +0x2C
	.4byte 0xD6F2D6F2 @ +0x30
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x34
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x38
	.4byte 0 @ +0x3C
	.4byte gDummySpriteAffineAnimTable @ +0x40
	.4byte SpriteCallbackDummy @ +0x44
	.4byte 0xD6F3D6F3 @ +0x48
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x4C
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x50
	.4byte 0 @ +0x54
	.4byte gDummySpriteAffineAnimTable @ +0x58
	.4byte SpriteCallbackDummy @ +0x5C
	.4byte 0xD6F4D6F4 @ +0x60
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x64
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x68
	.4byte 0 @ +0x6C
	.4byte gDummySpriteAffineAnimTable @ +0x70
	.4byte SpriteCallbackDummy @ +0x74
	.4byte 0xD6F5D6F5 @ +0x78
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x7C
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x80
	.4byte 0 @ +0x84
	.4byte gDummySpriteAffineAnimTable @ +0x88
	.4byte SpriteCallbackDummy @ +0x8C
	.4byte 0xD6F6D6F6 @ +0x90
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x94
	.4byte sAnims_BallOpenParticles_085C6258 @ +0x98
	.4byte 0 @ +0x9C
	.4byte gDummySpriteAffineAnimTable @ +0xA0
	.4byte SpriteCallbackDummy @ +0xA4
	.4byte 0xD6F7D6F7 @ +0xA8
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0xAC
	.4byte sAnims_BallOpenParticles_085C6258 @ +0xB0
	.4byte 0 @ +0xB4
	.4byte gDummySpriteAffineAnimTable @ +0xB8
	.4byte SpriteCallbackDummy @ +0xBC
	@ pret/pokeemerald-jp direct xref for 0x085C63CC: battle_anim_special.s: LaunchBallFadeMonTask, sub_08172894, sub_08172974
	.globl gBattleAnimSpecialData_085C63CC
gBattleAnimSpecialData_085C63CC: @ 0x085C63CC
	@ analyzed canonical ROM range 0x085C63CC-0x085C642F
	@ gBallOpenFadeColors followed by the start of gPokeblockSpriteTemplate.
	@ 12 Poké Ball open-fade colors followed by 8 intentional garbage RGB555
	@ values retained by the original Emerald data layout.
	.globl gBallOpenFadeColors
gBallOpenFadeColors: @ 0x085C63CC
	.2byte 0x7ADF @ BALL_POKE    RGB(31, 22, 30)
	.2byte 0x7AF0 @ BALL_GREAT   RGB(16, 23, 30)
	.2byte 0x53D7 @ BALL_SAFARI  RGB(23, 30, 20)
	.2byte 0x3FFF @ BALL_ULTRA   RGB(31, 31, 15)
	.2byte 0x7297 @ BALL_MASTER  RGB(23, 20, 28)
	.2byte 0x67F5 @ BALL_NET     RGB(21, 31, 25)
	.2byte 0x7B2C @ BALL_DIVE    RGB(12, 25, 30)
	.2byte 0x2B7E @ BALL_NEST    RGB(30, 27, 10)
	.2byte 0x431F @ BALL_REPEAT  RGB(31, 24, 16)
	.2byte 0x7BDD @ BALL_TIMER   RGB(29, 30, 30)
	.2byte 0x2A3F @ BALL_LUXURY  RGB(31, 17, 10)
	.2byte 0x293F @ BALL_PREMIER RGB(31, 9, 10)
	.2byte 0x0000 @ garbage: RGB_BLACK
	.2byte 0x0201 @ garbage: RGB(1, 16, 0)
	.2byte 0x0403 @ garbage: RGB(3, 0, 1)
	.2byte 0x0101 @ garbage: RGB(1, 8, 0)
	.2byte 0x0100 @ garbage: RGB(0, 8, 0)
	.2byte 0x0503 @ garbage: RGB(3, 8, 1)
	.2byte 0x0506 @ garbage: RGB(6, 8, 1)
	.2byte 0x0004 @ garbage: RGB(4, 0, 0)

	.globl gPokeblockSpriteTemplate
gPokeblockSpriteTemplate: @ 0x085C63F4
	.2byte 0x281D, 0x281D @ tileTag, paletteTag (ANIM_TAG_POKEBLOCK)
@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085C63F8 size=0x4 source=v54_multi_pointer
	.4byte gOamData_AffineOff_ObjNormal_16x16
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085C63FC size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAnimTable
	@ ANALYSIS: ZERO_BYTES size=0x4 addr=0x085C6400 parent=gBattleAnimSpecialData_085C63CC offset=0x34
	@ ANALYSIS: SOURCE_RANGE addr=0x085C6400 size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085C6404 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAffineAnimTable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085C6408 size=0x4 source=v54_multi_pointer
	.4byte sub_081730F0
	.globl gBattleAnimSpecialSpriteAnim
gBattleAnimSpecialSpriteAnim: @ 0x085C640C
	.2byte 0x0040, 0x0001 @ ANIMCMD_FRAME(0x40, 1)
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

	.globl gBattleAnimSpecialSpriteAnimTable
gBattleAnimSpecialSpriteAnimTable: @ 0x085C6414
	.4byte gBattleAnimSpecialSpriteAnim

	.globl gBattleAnimSpecialSpriteTemplate
gBattleAnimSpecialSpriteTemplate: @ 0x085C6418
	.2byte 0x274A, 0x274A @ tileTag, paletteTag
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ oam
	.4byte gBattleAnimSpecialSpriteAnimTable @ anims
	.4byte 0 @ images = NULL
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte sub_081730F0 @ callback
	@ pret/pokeemerald-jp direct xref for 0x085C6430: hall_of_fame.s: sub_08174EB0
	.globl gHallOfFameData_085C6430
gHallOfFameData_085C6430: @ 0x085C6430
	@ analyzed canonical ROM range 0x085C6430-0x085C643B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x01F8, 0x0000, 0x11E1, 0x0000, 0x31D3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C643C: hall_of_fame.s: sub_08173CC8
	.globl gHallOfFameData_085C643C
gHallOfFameData_085C643C: @ 0x085C643C
	@ analyzed canonical ROM range 0x085C643C-0x085C6443
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0200, 0x0E02, 0x0E06, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x085C6444: hall_of_fame.s: HallOfFame_PrintMonInfo, HallOfFame_PrintWelcomeText
	.globl gHallOfFameData_085C6444
gHallOfFameData_085C6444: @ 0x085C6444
	@ analyzed canonical ROM range 0x085C6444-0x085C6447
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x00, 0x01, 0x02, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C6448: hall_of_fame.s: HallOfFame_PrintPlayerInfo
	.globl gHallOfFameData_085C6448
gHallOfFameData_085C6448: @ 0x085C6448
	@ analyzed canonical ROM range 0x085C6448-0x085C644F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0200, 0x0003, 0x0504, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C6450: hall_of_fame.s: sub_08174E74, sub_08175268
	.globl gHallOfFameData_085C6450
gHallOfFameData_085C6450: @ 0x085C6450
	@ analyzed canonical ROM range 0x085C6450-0x085C645F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0xD4CC, 0x08C2, 0x0220, 0x03E9, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C6460: hall_of_fame.s: sub_08174E74, sub_08175268
	.globl gHallOfFameData_085C6460
gHallOfFameData_085C6460: @ 0x085C6460
	@ analyzed canonical ROM range 0x085C6460-0x085C646F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0xD5EC, 0x08C2, 0x03E9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C6470: hall_of_fame.s: Task_HofPC_DrawSpritesPrintText, Task_Hof_DisplayMon
	.globl gHallOfFameData_085C6470
gHallOfFameData_085C6470: @ 0x085C6470
	@ analyzed canonical ROM range 0x085C6470-0x085C6475
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0x78, 0x00, 0xD2, 0x00, 0x78, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C6476: hall_of_fame.s: Task_HofPC_DrawSpritesPrintText
	.globl gHallOfFameData_085C6476
gHallOfFameData_085C6476: @ 0x085C6476
	@ analyzed canonical ROM range 0x085C6476-0x085C649F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2A bytes=42
	.byte 0x28, 0x00, 0x46, 0x01, 0xDC, 0x00, 0x38, 0x00, 0x28, 0x00, 0xAA, 0xFF, 0xDC, 0x00, 0xB8, 0x00
	.byte 0x28, 0x00, 0x78, 0x00, 0xC2, 0xFF, 0x78, 0x00, 0x58, 0x00, 0xBA, 0xFF, 0xA4, 0xFF, 0xC8, 0x00
	.byte 0x58, 0x00, 0x36, 0x01, 0xA4, 0xFF, 0x28, 0x00, 0x58, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085C64A0: hall_of_fame.s: Task_HofPC_DrawSpritesPrintText, Task_Hof_DisplayMon
	.globl gHallOfFameData_085C64A0
gHallOfFameData_085C64A0: @ 0x085C64A0
	@ analyzed canonical ROM range 0x085C64A0-0x085C64B7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x18 entries=12
	.2byte 0x0078, 0x00EA, 0x0078, 0x0040, 0x0146, 0x00F4, 0x0038, 0x0040
	.2byte 0xFFAA, 0x00F4, 0x00B8, 0x0040
	@ pret/pokeemerald-jp direct xref for 0x085C64B8: hall_of_fame.s: sub_08175268
	.globl gHallOfFameData_085C64B8
gHallOfFameData_085C64B8:
	.globl gHallOfFameData_085C64B8
	@ analyzed canonical ROM range 0x085C64B8-0x085C658B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xD4 entries=106
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x001E, 0xFFFF, 0x0000
	.2byte 0x0001, 0x001E, 0xFFFF, 0x0000, 0x0002, 0x001E, 0xFFFF, 0x0000
	.2byte 0x0003, 0x001E, 0xFFFF, 0x0000, 0x0004, 0x001E, 0xFFFF, 0x0000
	.2byte 0x0005, 0x001E, 0xFFFF, 0x0000, 0x0006, 0x001E, 0xFFFF, 0x0000
	.2byte 0x0007, 0x001E, 0xFFFF, 0x0000, 0x0008, 0x001E, 0xFFFF, 0x0000
	.2byte 0x0009, 0x001E, 0xFFFF, 0x0000, 0x000A, 0x001E, 0xFFFF, 0x0000
	.2byte 0x000B, 0x001E, 0xFFFF, 0x0000, 0x000C, 0x001E, 0xFFFF, 0x0000
	.2byte 0x000D, 0x001E, 0xFFFF, 0x0000, 0x000E, 0x001E, 0xFFFF, 0x0000
	.2byte 0x000F, 0x001E, 0xFFFF, 0x0000, 0x0010, 0x001E, 0xFFFF, 0x0000
	.2byte 0x64C0, 0x085C, 0x64C8, 0x085C, 0x64D0, 0x085C, 0x64D8, 0x085C
	.2byte 0x64E0, 0x085C, 0x64E8, 0x085C, 0x64F0, 0x085C, 0x64F8, 0x085C
	.2byte 0x6500, 0x085C, 0x6508, 0x085C, 0x6510, 0x085C, 0x6518, 0x085C
	.2byte 0x6520, 0x085C, 0x6528, 0x085C, 0x6530, 0x085C, 0x6538, 0x085C
	.2byte 0x6540, 0x085C
	@ pret/pokeemerald-jp direct xref for 0x085C658C: hall_of_fame.s: sub_08175100
	.globl gHallOfFameData_085C658C
gHallOfFameData_085C658C: @ 0x085C658C
	@ analyzed canonical ROM range 0x085C658C-0x085C65A3
sSpriteTemplate_085C658C: @ 0x085C658C
	rodata_sprite_template 0x03E9, 0x03E9, gHallOfFameData_085C64B8, 0x085C6548, 0, gDummySpriteAffineAnimTable, sub_081750A8
	@ pret/pokeemerald-jp direct xref for 0x085C65A4: hall_of_fame.s: ClearVramOamPltt_LoadHofPal
	.globl gHallOfFameData_085C65A4
gHallOfFameData_085C65A4: @ 0x085C65A4
	@ analyzed canonical ROM range 0x085C65A4-0x085C65C3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x20 entries=16
	.2byte 0x0000, 0x0000, 0x63B0, 0x109F, 0x5B6E, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2108, 0x7FFF
	@ pret/pokeemerald-jp direct xref for 0x085C65C4: hall_of_fame.s: sub_08174F28
	.globl sHallOfFame_Gfx
sHallOfFame_Gfx: @ 0x085C65C4
	@ Semantic exact-LZ asset; source: graphics/misc/japanese_hof.png.
	.incbin "build/graphics/final_remaining/hall_of_fame.4bpp.lz"
	.if (. - sHallOfFame_Gfx) != 0x1CC
	.error "sHallOfFame_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C6790: hall_of_fame.s: CB2_DoHallOfFamePC, Task_HofPC_HandlePaletteOnExit
	.globl gHallOfFameData_085C6790
gHallOfFameData_085C6790: @ 0x085C6790
	@ analyzed canonical ROM range 0x085C6790-0x085C67AB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x1C entries=14
	.2byte 0x03EA, 0x03EA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0102, 0x0603, 0x0504, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C67AC: credits.s: sub_0817544C
	.globl gCreditsData_085C67AC
gCreditsData_085C67AC: @ 0x085C67AC
	@ analyzed canonical ROM range 0x085C67AC-0x085C682B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x80 entries=64
	.2byte 0x0000, 0x7FFF, 0x5294, 0x3F9F, 0x155F, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x3F9F, 0x155F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x1110, 0x0002, 0x2221, 0x0021, 0x0021, 0x0021, 0x1212, 0x0022
	.2byte 0x2120, 0x2102, 0x1210, 0x2212, 0x2221, 0x0221, 0x1021, 0x0212
	.2byte 0x2112, 0x2122, 0x2220, 0x2200, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085C682C: credits.s: sub_08176B24
	.globl sCreditsCopyrightEnd_Gfx
sCreditsCopyrightEnd_Gfx: @ 0x085C682C
	@ Semantic exact-LZ asset; source: graphics/credits/the_end_copyright.png.
	.incbin "build/graphics/final_remaining/credits_end.4bpp.lz"
	.if (. - sCreditsCopyrightEnd_Gfx) != 0x43C
	.error "sCreditsCopyrightEnd_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C6C68: credits.s: sub_08176CCC
	.globl gCreditsData_085C6C68
gCreditsData_085C6C68: @ 0x085C6C68
	@ analyzed canonical ROM range 0x085C6C68-0x085C6C76
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xF bytes=15
	.byte 0x00, 0x01, 0x00, 0xFF, 0x01, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x01, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085C6C77: credits.s: sub_08176CCC
	.globl gCreditsData_085C6C77
gCreditsData_085C6C77: @ 0x085C6C77
	@ analyzed canonical ROM range 0x085C6C77-0x085C6C85
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xF bytes=15
	.byte 0x01, 0xFF, 0x01, 0x01, 0xFF, 0x01, 0x01, 0x02, 0x01, 0x01, 0xFF, 0x01, 0x01, 0xFF, 0x01
	@ pret/pokeemerald-jp direct xref for 0x085C6C86: credits.s: sub_08176CCC
	.globl gCreditsData_085C6C86
gCreditsData_085C6C86: @ 0x085C6C86
	@ analyzed canonical ROM range 0x085C6C86-0x085C6C94
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xF bytes=15
	.byte 0x01, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x02, 0x02, 0x01, 0xFF, 0xFF, 0x01, 0x80, 0x80
	@ pret/pokeemerald-jp direct xref for 0x085C6C95: credits.s: sub_08176CCC
	.globl gCreditsData_085C6C95
gCreditsData_085C6C95: @ 0x085C6C95
	@ analyzed canonical ROM range 0x085C6C95-0x085C6CA3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xF bytes=15
	.byte 0x01, 0x03, 0x01, 0x01, 0x04, 0x01, 0x01, 0x05, 0x01, 0x01, 0xC4, 0x01, 0x01, 0xC3, 0x01
	@ pret/pokeemerald-jp direct xref for 0x085C6CA4: credits.s: sub_08176CCC
	.globl gCreditsData_085C6CA4
gCreditsData_085C6CA4: @ 0x085C6CA4
	@ analyzed canonical ROM range 0x085C6CA4-0x085C6CB3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x10 bytes=16
	.byte 0x01, 0x06, 0x07, 0x01, 0x08, 0x09, 0x01, 0xFF, 0x01, 0x01, 0x88, 0x89, 0x01, 0x86, 0x87, 0xFF
