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
