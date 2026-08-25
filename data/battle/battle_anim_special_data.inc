.if .L__inc_fragment_select_dc7866d6dd89 == 1
	@ pret/pokeemerald-jp direct xref for 0x085AD190: battle_anim_special.s: sub_08172DD0
	.globl gBattleAnimSpecialData_085AD190
gBattleAnimSpecialData_085AD190:
	@ analyzed canonical ROM range 0x085AD190-0x085AD1A7
	.globl sSpriteTemplate_085AD190
sSpriteTemplate_085AD190: @ 0x085AD190
	rodata_sprite_template 0x27F9, 0x27F9, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0815B3D8
.elseif .L__inc_fragment_select_dc7866d6dd89 == 2
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
.endif
