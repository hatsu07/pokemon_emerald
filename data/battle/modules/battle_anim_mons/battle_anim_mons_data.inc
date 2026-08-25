	.globl sBattlerCoords
sBattlerCoords: @ 0x084FE664
	@ Single battle.
	semantic_ucoords8 72, 80
	semantic_ucoords8 176, 40
	semantic_ucoords8 48, 40
	semantic_ucoords8 112, 80
	@ Double battle.
	semantic_ucoords8 32, 80
	semantic_ucoords8 200, 40
	semantic_ucoords8 90, 88
	semantic_ucoords8 152, 32
	.if (. - sBattlerCoords) != 0x20
	.error "sBattlerCoords size mismatch"
	.endif
	.globl gBattleAnimMonsData_084FE664
	.set gBattleAnimMonsData_084FE664, sBattlerCoords

	@ Castform front-sprite dimensions and Y offsets for Normal/Fire/Water/Ice.
	.globl gCastformFrontSpriteCoords
gCastformFrontSpriteCoords: @ 0x084FE684
	semantic_mon_coords 32, 32, 17
	semantic_mon_coords 48, 48, 9
	semantic_mon_coords 32, 48, 9
	semantic_mon_coords 64, 48, 8
	.if (. - gCastformFrontSpriteCoords) != 0x10
	.error "gCastformFrontSpriteCoords size mismatch"
	.endif

	@ Castform opponent-side sprite elevation for Normal/Fire/Water/Ice.
	.globl sCastformElevations
sCastformElevations: @ 0x084FE694
	.byte 13, 14, 13, 13
	.if (. - sCastformElevations) != 0x4
	.error "sCastformElevations size mismatch"
	.endif
	.globl gBattleAnimMonsData_084FE694
	.set gBattleAnimMonsData_084FE694, sCastformElevations

	@ Castform back-sprite Y offsets for Normal/Fire/Water/Ice.
	.globl sCastformBackSpriteYCoords
sCastformBackSpriteYCoords: @ 0x084FE698
	.byte 0, 0, 0, 0
	.if (. - sCastformBackSpriteYCoords) != 0x4
	.error "sCastformBackSpriteYCoords size mismatch"
	.endif
	.globl gMenuRecord_Rom_4FE698
	.set gMenuRecord_Rom_4FE698, sCastformBackSpriteYCoords

	@ Placeholders for Pokemon sprites created by move effects such as Role Play / Snatch.
	.set TAG_MOVE_EFFECT_MON_1, 55125
	.set TAG_MOVE_EFFECT_MON_2, 55126
	.globl sSpriteTemplates_MoveEffectMons
sSpriteTemplates_MoveEffectMons: @ 0x084FE69C
	semantic_sprite_template TAG_MOVE_EFFECT_MON_1, TAG_MOVE_EFFECT_MON_1, gOamData_AffineNormal_ObjNormal_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	semantic_sprite_template TAG_MOVE_EFFECT_MON_2, TAG_MOVE_EFFECT_MON_2, gOamData_AffineNormal_ObjNormal_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.if (. - sSpriteTemplates_MoveEffectMons) != 0x30
	.error "sSpriteTemplates_MoveEffectMons size mismatch"
	.endif
	.globl gBattleAnimMonsData_084FE69C
	.set gBattleAnimMonsData_084FE69C, sSpriteTemplates_MoveEffectMons
	@ pret/pokeemerald-jp direct xref for 0x084FE6CC: battle_anim_mons.s: sub_080A7C5C
.include "asm/macros/semantic_raw_structs.inc"

@ Semantic aliases for empty MapEvents retained as raw zero blocks
@ Each alias points at an existing 0x14-byte all-zero MapEvents block.
@ Underlying raw bytes are intentionally left unchanged in this pass.
	.globl sSpriteSheets_MoveEffectMons
sSpriteSheets_MoveEffectMons: @ 0x084FE6CC
	@ analyzed canonical ROM range 0x084FE6CC-0x0851769B
	@ semantic recovery: rodata; byte-verified against linked ROM
	@ struct SpriteSheet sSpriteSheets_MoveEffectMons[2]
	@ 0x0800 = MON_PIC_SIZE, 55125/55126 = TAG_MOVE_EFFECT_MON_1/2
	semantic_sprite_sheet gMiscBlank_Gfx, 0x0800, 55125
	semantic_sprite_sheet gMiscBlank_Gfx, 0x0800, 55126
