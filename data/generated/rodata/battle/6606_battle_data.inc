	.globl gContestLadyCategoryTextPointers
	.globl gUnknown_85D3DDC
gContestLadyCategoryTextPointers:
gUnknown_85D3DDC: @ 0x085D3DDC
	.4byte gText_ContestLadyCategory_Cool
	.4byte gText_ContestLadyCategory_Beauty
	.4byte gText_ContestLadyCategory_Cute
	.4byte gText_ContestLadyCategory_Smart
	.4byte gText_ContestLadyCategory_Tough
	.globl gContestLadyMonSpecies
	.globl gUnknown_85D3DF0
gContestLadyMonSpecies:
gUnknown_85D3DF0: @ 0x085D3DF0
	.2byte SPECIES_ZIGZAGOON @ CONTEST_COOL
	.2byte SPECIES_SKITTY    @ CONTEST_BEAUTY
	.2byte SPECIES_POOCHYENA @ CONTEST_CUTE
	.2byte SPECIES_KECLEON   @ CONTEST_SMART
	.2byte SPECIES_PIKACHU   @ CONTEST_TOUGH
	.2byte SPECIES_NONE      @ padding
	.globl gBattleDomeMovePoints
	.globl gUnknown_85D3DFC
gBattleDomeMovePoints:
gUnknown_85D3DFC: @ 0x085D3DFC
	.include "data/battle_frontier/battle_dome/move_points.inc"
	.globl gBattleDomeStyleThresholds
	.globl gUnknown_85D542C
gBattleDomeStyleThresholds:
gUnknown_85D542C: @ 0x085D542C
	battle_dome_style_threshold DOME_BATTLE_STYLE_RISKY,           0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STALL,           0, 0, 0, 0, 2, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_VARIED,          1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_COMBO_HIGH,      3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_RARE_MOVES,      0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_RARE_MOVE,       0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_HP,              0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STORE_POWER,     0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ENFEEBLE_LOW,    0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_LUCK,            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_REGAL,           0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_LOW_PP,          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STATUS_ATK,      0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ENDURE,          0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STATUS,          0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_STRAIGHTFORWARD, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_AGGRESSIVE,      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_DEF,             0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ENFEEBLE_HIGH,   0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_POPULAR_POWER,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_COMBO_LOW,       2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ACCURATE,        0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_POWERFUL,        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_ATK_OVER_DEF,    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_DEF_OVER_ATK,    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_POPULAR_STRONG,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 4, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_EFFECTS,         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4
	battle_dome_style_threshold DOME_BATTLE_STYLE_BALANCED,        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_UNUSED1,         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_UNUSED2,         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	battle_dome_style_threshold DOME_BATTLE_STYLE_UNUSED3,         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

	.globl gBattleDomeUnusedArray
gBattleDomeUnusedArray: @ 0x085D561C
	.byte 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	.byte 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0
	.byte 0, 0, 3, 0, 0, 0, 0, 0, 3, 2, 0, 0, 0, 0, 0, 2
	.byte 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0
	.byte 0, 2, 253, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 253, 0
	.byte 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 253, 254, 0, 0, 0, 0
	.byte 0, 254, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 254, 0, 0
	.byte 0, 0, 0, 254, 0, 0, 0, 0, 0
	.globl gBattleDomeTourneyTreeCursorMovementMap
	.globl gUnknown_85D5695
gBattleDomeTourneyTreeCursorMovementMap:
gUnknown_85D5695: @ 0x085D5695
	battle_dome_cursor_moves 0,  7, 1, 8, 16,  7, 1, 8, 16,  7, 1, 8, 16,  7, 1, 8, 16,  7, 1, 8, 16
	battle_dome_cursor_moves 1,  0, 2, 9, 16,  0, 2, 9, 16,  0, 2, 9, 16,  0, 2, 9, 16,  0, 2, 9, 16
	battle_dome_cursor_moves 2,  1, 3, 10, 17,  1, 3, 10, 17,  1, 3, 10, 17,  1, 3, 10, 17,  1, 3, 10, 17
	battle_dome_cursor_moves 3,  2, 4, 11, 17,  2, 4, 11, 17,  2, 4, 11, 17,  2, 4, 11, 17,  2, 4, 11, 17
	battle_dome_cursor_moves 4,  3, 5, 12, 18,  3, 5, 12, 18,  3, 5, 12, 18,  3, 5, 12, 18,  3, 5, 12, 18
	battle_dome_cursor_moves 5,  4, 6, 13, 18,  4, 6, 13, 18,  4, 6, 13, 18,  4, 6, 13, 18,  4, 6, 13, 18
	battle_dome_cursor_moves 6,  5, 7, 14, 19,  5, 7, 14, 19,  5, 7, 14, 19,  5, 7, 14, 19,  5, 7, 14, 19
	battle_dome_cursor_moves 7,  6, 0, 15, 19,  6, 0, 15, 19,  6, 0, 15, 19,  6, 0, 15, 19,  6, 0, 15, 19
	battle_dome_cursor_moves 8,  31, 9, 20, 31,  31, 9, 20, 31,  31, 9, 20, 31,  31, 9, 20, 31,  31, 9, 20, 31
	battle_dome_cursor_moves 9,  8, 10, 20, 1,  8, 10, 20, 1,  8, 10, 20, 1,  8, 10, 20, 1,  8, 10, 20, 1
	battle_dome_cursor_moves 10, 9, 11, 21, 2,  9, 11, 21, 2,  9, 11, 21, 2,  9, 11, 21, 2,  9, 11, 21, 2
	battle_dome_cursor_moves 11, 10, 12, 21, 3,  10, 12, 21, 3,  10, 12, 21, 3,  10, 12, 21, 3,  10, 12, 21, 3
	battle_dome_cursor_moves 12, 11, 13, 22, 4,  11, 13, 22, 4,  11, 13, 22, 4,  11, 13, 22, 4,  11, 13, 22, 4
	battle_dome_cursor_moves 13, 12, 14, 22, 5,  12, 14, 22, 5,  12, 14, 22, 5,  12, 14, 22, 5,  12, 14, 22, 5
	battle_dome_cursor_moves 14, 13, 15, 23, 6,  13, 15, 23, 6,  13, 15, 23, 6,  13, 15, 23, 6,  13, 15, 23, 6
	battle_dome_cursor_moves 15, 14, 31, 23, 7,  14, 31, 23, 7,  14, 31, 23, 7,  14, 31, 23, 7,  14, 31, 23, 7
	battle_dome_cursor_moves 16, 19, 17, 0, 20,  19, 17, 0, 24,  19, 17, 0, 24,  19, 17, 0, 24,  19, 17, 0, 24
	battle_dome_cursor_moves 17, 16, 18, 2, 21,  16, 18, 2, 24,  16, 18, 2, 24,  16, 18, 2, 24,  16, 18, 2, 24
	battle_dome_cursor_moves 18, 17, 19, 4, 22,  17, 19, 4, 25,  17, 19, 4, 25,  17, 19, 4, 25,  17, 19, 4, 25
	battle_dome_cursor_moves 19, 18, 16, 6, 23,  18, 16, 6, 25,  18, 16, 6, 25,  18, 16, 6, 25,  18, 16, 6, 25
	battle_dome_cursor_moves 20, 23, 21, 16, 8,  23, 21, 26, 8,  23, 21, 26, 8,  23, 21, 26, 8,  23, 21, 26, 8
	battle_dome_cursor_moves 21, 20, 22, 17, 10,  20, 22, 26, 10,  20, 22, 26, 10,  20, 22, 26, 10,  20, 22, 26, 10
	battle_dome_cursor_moves 22, 21, 23, 18, 12,  21, 23, 27, 12,  21, 23, 27, 12,  21, 23, 27, 12,  21, 23, 27, 12
	battle_dome_cursor_moves 23, 22, 20, 19, 14,  22, 20, 27, 14,  22, 20, 27, 14,  22, 20, 27, 14,  22, 20, 27, 14
	battle_dome_cursor_moves 24, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  25, 25, 16, 26,  25, 25, 16, 28,  25, 25, 16, 28,  25, 25, 16, 28
	battle_dome_cursor_moves 25, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  24, 24, 18, 27,  24, 24, 18, 28,  24, 24, 18, 28,  24, 24, 18, 28
	battle_dome_cursor_moves 26, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  27, 27, 24, 20,  27, 27, 29, 20,  27, 27, 29, 20,  27, 27, 29, 20
	battle_dome_cursor_moves 27, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  26, 26, 25, 22,  26, 26, 29, 22,  26, 26, 29, 22,  26, 26, 29, 22
	battle_dome_cursor_moves 28, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 24, 29,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 24, 30,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 24, 30
	battle_dome_cursor_moves 29, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 28, 26,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 30, 26,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 30, 26
	battle_dome_cursor_moves 30, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 28, 29,  TOURNEY_TREE_INVALID_MOVE, TOURNEY_TREE_INVALID_MOVE, 28, 29
	battle_dome_cursor_moves TOURNEY_TREE_CLOSE_BUTTON, 15, 8, 8, 0,  15, 8, 8, 0,  15, 8, 8, 0,  15, 8, 8, 0,  15, 8, 8, 0
	.align 2, 0
	.globl gBattleDomeTourneyTreeBgTemplates
	.globl gUnknown_85D5918
gBattleDomeTourneyTreeBgTemplates:
gUnknown_85D5918: @ 0x085D5918
	bg_template 0, 0, 28, 0, 0, 0, 0
	bg_template 1, 1, 29, 0, 0, 1, 0
	bg_template 2, 2, 30, 0, 0, 2, 0
	bg_template 3, 2, 31, 0, 0, 2, 0
	.globl gBattleDomeInfoCardBgTemplates
	.globl gUnknown_85D5928
gBattleDomeInfoCardBgTemplates:
gUnknown_85D5928: @ 0x085D5928
	bg_template 0, 0, 20, 3, 0, 0, 0
	bg_template 1, 1, 24, 3, 0, 0, 0
	bg_template 2, 2, 28, 3, 0, 1, 0
	bg_template 3, 2, 7, 0, 0, 1, 0
	.globl gBattleDomeTourneyTreeWindowTemplates
	.globl gUnknown_85D5938
gBattleDomeTourneyTreeWindowTemplates:
gUnknown_85D5938: @ 0x085D5938
	window_template 0, 0, 3, 8, 16, 15, 0x10  @ names, left
	window_template 0, 22, 3, 8, 16, 15, 0x90 @ names, right
	window_template 0, 8, 1, 14, 2, 15, 0x110 @ title
	null_window_template
	.globl gBattleDomeInfoCardWindowTemplates
	.globl gUnknown_85D5958
gBattleDomeInfoCardWindowTemplates:
gUnknown_85D5958: @ 0x085D5958
	window_template 0, 4, 2, 23, 2, 15, 0x1   @ trainer name
	window_template 0, 16, 5, 8, 2, 15, 0x2F  @ trainer Pokemon 1
	window_template 0, 20, 7, 8, 3, 15, 0x3F  @ trainer Pokemon 2
	window_template 0, 16, 10, 8, 2, 15, 0x57 @ trainer Pokemon 3
	window_template 0, 3, 12, 24, 7, 15, 0x67 @ trainer description
	window_template 0, 6, 2, 26, 2, 15, 0x10F @ match number
	window_template 0, 2, 5, 8, 2, 15, 0x143  @ left trainer name
	window_template 0, 20, 5, 8, 2, 15, 0x153 @ right trainer name
	window_template 0, 3, 16, 24, 2, 15, 0x163 @ winner text
	@ Alternate information-card slot on BG 1.
	window_template 1, 4, 2, 23, 2, 15, 0x1
	window_template 1, 16, 5, 8, 2, 15, 0x2F
	window_template 1, 20, 7, 8, 3, 15, 0x3F
	window_template 1, 16, 10, 8, 2, 15, 0x57
	window_template 1, 3, 12, 24, 7, 15, 0x67
	window_template 1, 6, 2, 26, 2, 15, 0x10F
	window_template 1, 2, 5, 8, 2, 15, 0x143
	window_template 1, 20, 5, 8, 2, 15, 0x153
	window_template 1, 3, 16, 24, 2, 15, 0x163
	null_window_template
	.globl gBattleDomeTourneyTreeScanlineEffectParams
gBattleDomeTourneyTreeScanlineEffectParams: @ 0x085D59F0
	.4byte REG_BG3CNT
	.4byte 1 | ((DMA_ENABLE | DMA_START_HBLANK | DMA_REPEAT | DMA_DEST_RELOAD | DMA_16BIT) << 16)
	.4byte 1 @ initState

	.globl gBattleDomeTourneyTreeButtonSheets
gBattleDomeTourneyTreeButtonSheets: @ 0x085D59FC
	rodata_compressed_sprite_sheet gBattleDomeTourneyTreeButtons_Gfx, 0x400, 0
	rodata_compressed_sprite_sheet NULL, 0, 0

	.globl gBattleDomeTourneyTreeButtonPalettes
gBattleDomeTourneyTreeButtonPalettes: @ 0x085D5A0C
	rodata_sprite_palette gBattleDomeTourneyTreeButtons_Pal, 0
	rodata_sprite_palette NULL, 0

	.globl gBattleDomeTourneyTreePokeballOam
gBattleDomeTourneyTreePokeballOam: @ 0x085D5A1C
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_SQUARE >> 14), 0, 0, (OAM_SIZE_1 >> 30), 0, 0, 0, 0

	.globl gBattleDomeTourneyTreeCloseButtonOam
gBattleDomeTourneyTreeCloseButtonOam: @ 0x085D5A24
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_H_RECTANGLE >> 14), 0, 0, (OAM_SIZE_2 >> 30), 0, 0, 1, 0

	.globl gBattleDomeTourneyTreeVerticalScrollArrowOam
gBattleDomeTourneyTreeVerticalScrollArrowOam: @ 0x085D5A2C
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_H_RECTANGLE >> 14), 0, 0, (OAM_SIZE_0 >> 30), 0, 0, 2, 0

	.globl gBattleDomeTourneyTreeHorizontalScrollArrowOam
gBattleDomeTourneyTreeHorizontalScrollArrowOam: @ 0x085D5A34
	rodata_sprite_oam_data 0, 0, 0, 0, 0, (OAM_V_RECTANGLE >> 14), 0, 0, (OAM_SIZE_0 >> 30), 0, 0, 2, 0

	.globl gBattleDomeTourneyTreePokeballAnim0
gBattleDomeTourneyTreePokeballAnim0: @ 0x085D5A3C
	sprite_anim_frame 20, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreePokeballAnim1
gBattleDomeTourneyTreePokeballAnim1: @ 0x085D5A44
	sprite_anim_frame 24, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreePokeballAnims
gBattleDomeTourneyTreePokeballAnims: @ 0x085D5A4C
	sprite_anim_sequence gBattleDomeTourneyTreePokeballAnim0
	sprite_anim_sequence gBattleDomeTourneyTreePokeballAnim1

	.globl gBattleDomeTourneyTreePokeballSpriteTemplate
gBattleDomeTourneyTreePokeballSpriteTemplate: @ 0x085D5A54
	rodata_sprite_template 0, TAG_NONE, gBattleDomeTourneyTreePokeballOam, gBattleDomeTourneyTreePokeballAnims, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl gBattleDomeTourneyTreeCloseButtonAnim0
gBattleDomeTourneyTreeCloseButtonAnim0: @ 0x085D5A6C
	sprite_anim_frame 8, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeCloseButtonAnim1
gBattleDomeTourneyTreeCloseButtonAnim1: @ 0x085D5A74
	sprite_anim_frame 0, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeCloseButtonAnims
gBattleDomeTourneyTreeCloseButtonAnims: @ 0x085D5A7C
	sprite_anim_sequence gBattleDomeTourneyTreeCloseButtonAnim0
	sprite_anim_sequence gBattleDomeTourneyTreeCloseButtonAnim1
	.globl gBattleDomeTourneyTreeCloseButtonSpriteTemplate
gBattleDomeTourneyTreeCloseButtonSpriteTemplate: @ 0x085D5A84
	rodata_sprite_template 0, TAG_NONE, gBattleDomeTourneyTreeCloseButtonOam, gBattleDomeTourneyTreeCloseButtonAnims, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl gBattleDomeTourneyTreeVerticalArrowAnim0
gBattleDomeTourneyTreeVerticalArrowAnim0: @ 0x085D5A9C
	sprite_anim_frame 18, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeVerticalArrowAnim1
gBattleDomeTourneyTreeVerticalArrowAnim1: @ 0x085D5AA4
	sprite_anim_frame_ex 18, 1, 0, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeHorizontalArrowAnim0
gBattleDomeTourneyTreeHorizontalArrowAnim0: @ 0x085D5AAC
	sprite_anim_frame_ex 16, 1, 1, 0
	sprite_anim_end

	.globl gBattleDomeTourneyTreeHorizontalArrowAnim1
gBattleDomeTourneyTreeHorizontalArrowAnim1: @ 0x085D5AB4
	sprite_anim_frame 16, 1
	sprite_anim_end

	.globl gBattleDomeTourneyTreeVerticalArrowAnims
gBattleDomeTourneyTreeVerticalArrowAnims: @ 0x085D5ABC
	sprite_anim_sequence gBattleDomeTourneyTreeVerticalArrowAnim0
	sprite_anim_sequence gBattleDomeTourneyTreeVerticalArrowAnim1

	.globl gBattleDomeTourneyTreeHorizontalArrowAnims
gBattleDomeTourneyTreeHorizontalArrowAnims: @ 0x085D5AC4
	sprite_anim_sequence gBattleDomeTourneyTreeHorizontalArrowAnim0
	sprite_anim_sequence gBattleDomeTourneyTreeHorizontalArrowAnim1
	.globl gBattleDomeTourneyTreeHorizontalArrowSpriteTemplate
gBattleDomeTourneyTreeHorizontalArrowSpriteTemplate: @ 0x085D5ACC
	rodata_sprite_template 0, TAG_NONE, gBattleDomeTourneyTreeHorizontalScrollArrowOam, gBattleDomeTourneyTreeHorizontalArrowAnims, NULL, gDummySpriteAffineAnimTable, sub_0819079C

	.globl gBattleDomeTourneyTreeVerticalArrowSpriteTemplate
gBattleDomeTourneyTreeVerticalArrowSpriteTemplate: @ 0x085D5AE4
	rodata_sprite_template 0, TAG_NONE, gBattleDomeTourneyTreeVerticalScrollArrowOam, gBattleDomeTourneyTreeVerticalArrowAnims, NULL, gDummySpriteAffineAnimTable, sub_081908C8
	@ Maps the 16 first-round tree slots to their tournament trainer IDs.
	.globl gBattleDomeTourneyTreeTrainerIds
gBattleDomeTourneyTreeTrainerIds: @ 0x085D5AFC
	.byte 0, 8, 12, 4, 7, 15, 11, 3
	.byte 2, 10, 14, 6, 5, 13, 9, 1
	.globl gBattleDomeFunctions
gBattleDomeFunctions: @ 0x085D5B0C
	.4byte InitDomeChallenge
	.4byte GetDomeData
	.4byte SetDomeData
	.4byte BufferDomeRoundText
	.4byte BufferDomeOpponentName
	.4byte InitDomeOpponentParty
	.4byte ShowDomeOpponentInfo
	.4byte ShowDomeTourneyTree
	.4byte ShowPreviousDomeResultsTourneyTree
	.4byte SetDomeOpponentId
	.4byte SetDomeOpponentGraphicsId
	.4byte ShowNonInteractiveDomeTourneyTree
	.4byte ResolveDomeRoundWinners
	.4byte sub_0818FF54
	.4byte UpdateDomeStreaks
	.4byte InitDomeFacilityTrainersAndMons
	.4byte RestoreDomePlayerParty
	.4byte RestoreDomePlayerPartyHeldItems
	.4byte GetDomeBrainTrainerPicId
	.4byte GetPlayerSeededBeforeOpponent
	.4byte BufferLastDomeWinnerName
	.4byte sub_08194B58
	.4byte InitDomeTrainers
	.globl gBattleDomeWinStreakFlags
gBattleDomeWinStreakFlags: @ 0x085D5B68
	.4byte STREAK_DOME_SINGLES_50, STREAK_DOME_SINGLES_OPEN
	.4byte STREAK_DOME_DOUBLES_50, STREAK_DOME_DOUBLES_OPEN

	.globl gBattleDomeWinStreakMasks
gBattleDomeWinStreakMasks: @ 0x085D5B78
	.4byte ~STREAK_DOME_SINGLES_50, ~STREAK_DOME_SINGLES_OPEN
	.4byte ~STREAK_DOME_DOUBLES_50, ~STREAK_DOME_DOUBLES_OPEN
	@ Opponent tournament ID for each trainer and round.
	.globl gBattleDomeIdToOpponentId
gBattleDomeIdToOpponentId: @ 0x085D5B88
	.byte  8,  0,  4, 8 @ trainer 0
	.byte  9, 12,  8, 0 @ trainer 1
	.byte 10,  8, 12, 0 @ trainer 2
	.byte 11,  4,  0, 8 @ trainer 3
	.byte 12,  0,  4, 8 @ trainer 4
	.byte 13, 12,  8, 0 @ trainer 5
	.byte 14,  8, 12, 0 @ trainer 6
	.byte 15,  4,  0, 8 @ trainer 7
	.byte  0,  0,  4, 8 @ trainer 8
	.byte  1, 12,  8, 0 @ trainer 9
	.byte  2,  8, 12, 0 @ trainer 10
	.byte  3,  4,  0, 8 @ trainer 11
	.byte  4,  0,  4, 8 @ trainer 12
	.byte  5, 12,  8, 0 @ trainer 13
	.byte  6,  8, 12, 0 @ trainer 14
	.byte  7,  4,  0, 8 @ trainer 15

	@ Tournament tree order with every first-round pair swapped.
	.globl gBattleDomeTourneyTreeTrainerOpponentIds
gBattleDomeTourneyTreeTrainerOpponentIds: @ 0x085D5BC8
	.byte 0, 8, 4, 12, 7, 15, 3, 11
	.byte 2, 10, 6, 14, 5, 13, 1, 9

	@ Match number minus one for each trainer and round.
	.globl gBattleDomeIdToMatchNumber
gBattleDomeIdToMatchNumber: @ 0x085D5BD8
	.byte 0,  8, 12, 14 @ trainers 0-1
	.byte 0,  8, 12, 14
	.byte 1,  8, 12, 14 @ trainers 2-3
	.byte 1,  8, 12, 14
	.byte 2,  9, 12, 14 @ trainers 4-5
	.byte 2,  9, 12, 14
	.byte 3,  9, 12, 14 @ trainers 6-7
	.byte 3,  9, 12, 14
	.byte 4, 10, 13, 14 @ trainers 8-9
	.byte 4, 10, 13, 14
	.byte 5, 10, 13, 14 @ trainers 10-11
	.byte 5, 10, 13, 14
	.byte 6, 11, 13, 14 @ trainers 12-13
	.byte 6, 11, 13, 14
	.byte 7, 11, 13, 14 @ trainers 14-15
	.byte 7, 11, 13, 14
	.globl gBattleDomeLastMatchCardNum
gBattleDomeLastMatchCardNum: @ 0x085D5C18
	.byte 23, 27, 29, 30

	@ Last visible match card for each first-round pair and current round.
	.globl gBattleDomeTrainerAndRoundToLastMatchCardNum
gBattleDomeTrainerAndRoundToLastMatchCardNum: @ 0x085D5C1C
	.byte 16, 24, 28, 30
	.byte 17, 24, 28, 30
	.byte 18, 25, 28, 30
	.byte 19, 25, 28, 30
	.byte 20, 26, 29, 30
	.byte 21, 26, 29, 30
	.byte 22, 27, 29, 30
	.byte 23, 27, 29, 30

	.globl gBattleDomeTournamentIdToPairedTrainerIds
gBattleDomeTournamentIdToPairedTrainerIds: @ 0x085D5C3C
	.byte 0, 15, 8, 7, 3, 12, 11, 4
	.byte 1, 14, 9, 6, 2, 13, 10, 5
	@ Potential-to-win text, highest to lowest, followed by Dome Ace Tucker.
	.globl gBattleDomePotentialTexts
gBattleDomePotentialTexts: @ 0x085D5C4C
	.4byte gText_Rom_273952
	.4byte gText_Rom_27396A
	.4byte gText_Rom_273983
	.4byte gText_Rom_27399B
	.4byte gText_Rom_2739B2
	.4byte gText_Rom_2739C9
	.4byte gText_Rom_2739DF
	.4byte gText_Rom_2739F8
	.4byte gText_Rom_273A0D
	.4byte gText_Rom_273A25
	.4byte gText_Rom_273A3D
	.4byte gText_Rom_273A55
	.4byte gText_Rom_273A6C
	.4byte gText_Rom_273A84
	.4byte gText_Rom_273A9D
	.4byte gText_Rom_273AB3
	.4byte gText_Rom_273AC9
	.globl gBattleDomeOpponentStyleTexts
gBattleDomeOpponentStyleTexts: @ 0x085D5C90
	battle_dome_style_text DOME_BATTLE_STYLE_RISKY,           gText_Rom_273ADD
	battle_dome_style_text DOME_BATTLE_STYLE_STALL,           gText_Rom_273AF6
	battle_dome_style_text DOME_BATTLE_STYLE_VARIED,          gText_Rom_273B0D
	battle_dome_style_text DOME_BATTLE_STYLE_COMBO_HIGH,      gText_Rom_273B26
	battle_dome_style_text DOME_BATTLE_STYLE_RARE_MOVES,      gText_Rom_273B3E
	battle_dome_style_text DOME_BATTLE_STYLE_RARE_MOVE,       gText_Rom_273B56
	battle_dome_style_text DOME_BATTLE_STYLE_HP,              gText_Rom_273B6E
	battle_dome_style_text DOME_BATTLE_STYLE_STORE_POWER,     gText_Rom_273B87
	battle_dome_style_text DOME_BATTLE_STYLE_ENFEEBLE_LOW,    gText_Rom_273BA0
	battle_dome_style_text DOME_BATTLE_STYLE_LUCK,            gText_Rom_273BB5
	battle_dome_style_text DOME_BATTLE_STYLE_REGAL,           gText_Rom_273BCB
	battle_dome_style_text DOME_BATTLE_STYLE_LOW_PP,          gText_Rom_273BE3
	battle_dome_style_text DOME_BATTLE_STYLE_STATUS_ATK,      gText_Rom_273BFA
	battle_dome_style_text DOME_BATTLE_STYLE_ENDURE,          gText_Rom_273C12
	battle_dome_style_text DOME_BATTLE_STYLE_STATUS,          gText_Rom_273C29
	battle_dome_style_text DOME_BATTLE_STYLE_STRAIGHTFORWARD, gText_Rom_273C40
	battle_dome_style_text DOME_BATTLE_STYLE_AGGRESSIVE,      gText_Rom_273C56
	battle_dome_style_text DOME_BATTLE_STYLE_DEF,             gText_Rom_273C6E
	battle_dome_style_text DOME_BATTLE_STYLE_ENFEEBLE_HIGH,   gText_Rom_273C85
	battle_dome_style_text DOME_BATTLE_STYLE_POPULAR_POWER,   gText_Rom_273C9A
	battle_dome_style_text DOME_BATTLE_STYLE_COMBO_LOW,       gText_Rom_273CB0
	battle_dome_style_text DOME_BATTLE_STYLE_ACCURATE,        gText_Rom_273CC7
	battle_dome_style_text DOME_BATTLE_STYLE_POWERFUL,        gText_Rom_273CDE
	battle_dome_style_text DOME_BATTLE_STYLE_ATK_OVER_DEF,    gText_Rom_273CF5
	battle_dome_style_text DOME_BATTLE_STYLE_DEF_OVER_ATK,    gText_Rom_273D0D
	battle_dome_style_text DOME_BATTLE_STYLE_POPULAR_STRONG,  gText_Rom_273D21
	battle_dome_style_text DOME_BATTLE_STYLE_EFFECTS,         gText_Rom_273D38
	battle_dome_style_text DOME_BATTLE_STYLE_BALANCED,        gText_Rom_273D4F
	battle_dome_style_text DOME_BATTLE_STYLE_UNUSED1,         gText_Rom_273D67
	battle_dome_style_text DOME_BATTLE_STYLE_UNUSED2,         gText_Rom_273D74
	battle_dome_style_text DOME_BATTLE_STYLE_UNUSED3,         gText_Rom_273D81
	battle_dome_style_text DOME_BATTLE_STYLE_UNUSED4,         gText_Rom_273D8E
	@ Third info-card line: party stat emphasis from EVs and Natures.
	.globl gBattleDomeOpponentStatsTexts
gBattleDomeOpponentStatsTexts: @ 0x085D5D10
	@ Two emphasized stats (DOME_TEXT_TWO_GOOD_STATS).
	.4byte gText_Rom_273D9B
	.4byte gText_Rom_273DB1
	.4byte gText_Rom_273DC7
	.4byte gText_Rom_273DDD
	.4byte gText_Rom_273DF3
	.4byte gText_Rom_273E09
	.4byte gText_Rom_273E21
	.4byte gText_Rom_273E39
	.4byte gText_Rom_273E51
	.4byte gText_Rom_273E69
	.4byte gText_Rom_273E81
	.4byte gText_Rom_273E99
	.4byte gText_Rom_273EB1
	.4byte gText_Rom_273EC9
	.4byte gText_Rom_273EE1
	@ One emphasized stat (DOME_TEXT_ONE_GOOD_STAT).
	.4byte gText_Rom_273EF9
	.4byte gText_Rom_273F09
	.4byte gText_Rom_273F1B
	.4byte gText_Rom_273F2D
	.4byte gText_Rom_273F3F
	.4byte gText_Rom_273F51
	@ Two neglected stats (DOME_TEXT_TWO_BAD_STATS).
	.4byte gText_Rom_273F63
	.4byte gText_Rom_273F7A
	.4byte gText_Rom_273F91
	.4byte gText_Rom_273FA8
	.4byte gText_Rom_273FBF
	.4byte gText_Rom_273FD6
	.4byte gText_Rom_273FEF
	.4byte gText_Rom_274008
	.4byte gText_Rom_274021
	.4byte gText_Rom_27403A
	.4byte gText_Rom_274053
	.4byte gText_Rom_27406C
	.4byte gText_Rom_274085
	.4byte gText_Rom_27409E
	.4byte gText_Rom_2740B7
	@ One neglected stat (DOME_TEXT_ONE_BAD_STAT).
	.4byte gText_Rom_2740D0
	.4byte gText_Rom_2740E2
	.4byte gText_Rom_2740F6
	.4byte gText_Rom_27410A
	.4byte gText_Rom_27411E
	.4byte gText_Rom_274132
	@ DOME_TEXT_WELL_BALANCED.
	.4byte gText_Rom_274146
	.globl gBattleDomeInfoTrainerMonX
gBattleDomeInfoTrainerMonX: @ 0x085D5DBC
	.byte 104, 136, 104

	.globl gBattleDomeInfoTrainerMonY
gBattleDomeInfoTrainerMonY: @ 0x085D5DBF
	.byte 38, 62, 78

	.globl gBattleDomeSpeciesNameTextYCoords
gBattleDomeSpeciesNameTextYCoords: @ 0x085D5DC2
	.byte 1, 5, 1

	.globl gBattleDomeStatTextOffsets
gBattleDomeStatTextOffsets: @ 0x085D5DC5
	.byte DOME_TEXT_HP, DOME_TEXT_ATK, DOME_TEXT_DEF
	.byte DOME_TEXT_SPEED, DOME_TEXT_SPATK
	.align 2, 0
	.globl gBattleDomeMatchNumberTexts
gBattleDomeMatchNumberTexts: @ 0x085D5DCC
	.4byte gText_Rom_2741DA @ Round 1, match 1
	.4byte gText_Rom_2741E8 @ Round 1, match 2
	.4byte gText_Rom_2741F6 @ Round 1, match 3
	.4byte gText_Rom_274204 @ Round 1, match 4
	.4byte gText_Rom_274212 @ Round 1, match 5
	.4byte gText_Rom_274220 @ Round 1, match 6
	.4byte gText_Rom_27422E @ Round 1, match 7
	.4byte gText_Rom_27423C @ Round 1, match 8
	.4byte gText_Rom_27424A @ Round 2, match 1
	.4byte gText_Rom_274258 @ Round 2, match 2
	.4byte gText_Rom_274266 @ Round 2, match 3
	.4byte gText_Rom_274274 @ Round 2, match 4
	.4byte gText_Rom_274282 @ Semifinal, match 1
	.4byte gText_Rom_274292 @ Semifinal, match 2
	.4byte gText_Rom_2742A2 @ Final

	.globl gBattleDomeWinTexts
gBattleDomeWinTexts: @ 0x085D5E08
	.4byte gText_Rom_27415B @ No winner yet
	.4byte gText_Rom_274166 @ Won using a move
	.4byte gText_Rom_274177 @ Became champion using a move
	.4byte gText_Rom_274188 @ Won by default
	.4byte gText_Rom_27419D @ Became champion by default
	.4byte gText_Rom_2741B2 @ Won without using a move
	.4byte gText_Rom_2741C6 @ Became champion without using a move
	.globl gBattleDomeLeftTrainerMonX
gBattleDomeLeftTrainerMonX: @ 0x085D5E24
	.byte 96, 96, 96

	.globl gBattleDomeLeftTrainerMonY
gBattleDomeLeftTrainerMonY: @ 0x085D5E27
	.byte 56, 80, 104

	.globl gBattleDomeRightTrainerMonX
gBattleDomeRightTrainerMonX: @ 0x085D5E2A
	.byte 144, 144, 144

	.globl gBattleDomeRightTrainerMonY
gBattleDomeRightTrainerMonY: @ 0x085D5E2D
	.byte 56, 80, 104

	@ Duplicate of gBattleDomeTourneyTreeTrainerIds.
	.globl gBattleDomeTourneyTreeTrainerIds2
gBattleDomeTourneyTreeTrainerIds2: @ 0x085D5E30
	.byte 0, 8, 12, 4, 7, 15, 11, 3
	.byte 2, 10, 14, 6, 5, 13, 9, 1
	@ Candidate-list offset, candidate count, and round for each match.
	.globl gBattleDomeCompetitorRangeByMatch
gBattleDomeCompetitorRangeByMatch: @ 0x085D5E40
	.byte  0,  2
	.globl gBattleDomeCompetitorRoundByMatch
gBattleDomeCompetitorRoundByMatch: @ 0x085D5E42
	.byte DOME_ROUND1
	.byte  2,  2, DOME_ROUND1
	.byte  4,  2, DOME_ROUND1
	.byte  6,  2, DOME_ROUND1
	.byte  8,  2, DOME_ROUND1
	.byte 10,  2, DOME_ROUND1
	.byte 12,  2, DOME_ROUND1
	.byte 14,  2, DOME_ROUND1
	.byte  0,  4, DOME_ROUND2
	.byte  4,  4, DOME_ROUND2
	.byte  8,  4, DOME_ROUND2
	.byte 12,  4, DOME_ROUND2
	.byte  0,  8, DOME_SEMIFINAL
	.byte  8,  8, DOME_SEMIFINAL
	.byte  0, 16, DOME_FINAL
	@ Window ID and Japanese text Y coordinate for each tournament trainer.
	.globl gBattleDomeTrainerNamePositions
gBattleDomeTrainerNamePositions: @ 0x085D5E6D
	.byte TOURNEYWIN_NAMES_LEFT
	.globl gBattleDomeTrainerNameYCoords
gBattleDomeTrainerNameYCoords: @ 0x085D5E6E
	.byte 0 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 7 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 0 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  7 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  3 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 4 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 3 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  4 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  1 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 6 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 1 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  6 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  2 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 5 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_RIGHT, 2 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	.byte TOURNEYWIN_NAMES_LEFT,  5 * TOURNEY_NAME_ROW_HEIGHT + TOURNEY_NAME_TEXT_Y_OFFSET
	@ Pokeball buttons for 16 trainers followed by 15 matches.
	.globl gBattleDomeTourneyTreePokeballCoords
gBattleDomeTourneyTreePokeballCoords: @ 0x085D5E8D
	.byte  68,  33 @ left-side trainers
	.byte  68,  49
	.byte  68,  65
	.byte  68,  81
	.byte  68,  97
	.byte  68, 113
	.byte  68, 129
	.byte  68, 145
	.byte 172,  33 @ right-side trainers
	.byte 172,  49
	.byte 172,  65
	.byte 172,  81
	.byte 172,  97
	.byte 172, 113
	.byte 172, 129
	.byte 172, 145
	.byte  87,  41 @ left-side round 1 matches
	.byte  87,  73
	.byte  87, 105
	.byte  87, 137
	.byte 153,  41 @ right-side round 1 matches
	.byte 153,  73
	.byte 153, 105
	.byte 153, 137
	.byte  95,  57 @ left-side round 2 matches
	.byte  95, 121
	.byte 145,  57 @ right-side round 2 matches
	.byte 145, 121
	.byte 103,  89 @ left semifinal
	.byte 137,  89 @ right semifinal
	.byte 120,  89 @ final

	.byte 0 @ align struct TourneyTreeLineSection
	.globl gBattleDomeTourneyTreeLineSections
gBattleDomeTourneyTreeLineSections: @ 0x085D5ECC
	.include "data/battle_frontier/battle_dome/tourney_tree_line_sections.inc"
	.globl gBattleDomeTourneyTreeLineSectionPointers
	.globl gUnknown_85D678C
gBattleDomeTourneyTreeLineSectionPointers:
gUnknown_85D678C: @ 0x085D678C
	battle_dome_tourney_line_paths 0
	battle_dome_tourney_line_paths 1
	battle_dome_tourney_line_paths 2
	battle_dome_tourney_line_paths 3
	battle_dome_tourney_line_paths 4
	battle_dome_tourney_line_paths 5
	battle_dome_tourney_line_paths 6
	battle_dome_tourney_line_paths 7
	battle_dome_tourney_line_paths 8
	battle_dome_tourney_line_paths 9
	battle_dome_tourney_line_paths 10
	battle_dome_tourney_line_paths 11
	battle_dome_tourney_line_paths 12
	battle_dome_tourney_line_paths 13
	battle_dome_tourney_line_paths 14
	battle_dome_tourney_line_paths 15
	.if (. - gBattleDomeTourneyTreeLineSectionPointers) != (16 * 4 * 4)
	.error "Battle Dome tourney line section pointer table has the wrong size"
	.endif
	.globl gBattleDomeTourneyTreeLineSectionCounts
	.globl gUnknown_85D688C
gBattleDomeTourneyTreeLineSectionCounts:
gUnknown_85D688C: @ 0x085D688C
	.rept 16
	.byte 4, 7, 11, 13
	.endr
	.if (. - gBattleDomeTourneyTreeLineSectionCounts) != (16 * 4)
	.error "Battle Dome tourney line section count table has the wrong size"
	.endif
	.globl gBattlePalaceFunctions
	.globl gUnknown_85D68CC
gBattlePalaceFunctions:
gUnknown_85D68CC: @ 0x085D68CC
	.4byte sub_08195580
	.4byte sub_08195638
	.4byte sub_081956E4
	.4byte sub_081957B0
	.4byte sub_08195820
	.4byte sub_08195850
	.4byte sub_0819587C
	.4byte sub_081958E4
	.4byte sub_08195928
	.4byte sub_081959B8
	.if (. - gBattlePalaceFunctions) != (10 * 4)
	.error "Battle Palace function table has the wrong size"
	.endif
	.globl gBattlePalaceVitaminPrizes
	.globl gUnknown_85D68F4
gBattlePalaceVitaminPrizes:
gUnknown_85D68F4: @ 0x085D68F4
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.if (. - gBattlePalaceVitaminPrizes) != (6 * 2)
	.error "Battle Palace vitamin prize table has the wrong size"
	.endif
	.globl gBattlePalaceHeldItemPrizes
	.globl gUnknown_85D6900
gBattlePalaceHeldItemPrizes:
gUnknown_85D6900: @ 0x085D6900
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_CHOICE_BAND
	.if (. - gBattlePalaceHeldItemPrizes) != (9 * 2)
	.error "Battle Palace held item prize table has the wrong size"
	.endif
	.align 2, 0
	.globl gBattlePalaceWinStreakFlags
	.globl gUnknown_85D6914
gBattlePalaceWinStreakFlags:
gUnknown_85D6914: @ 0x085D6914
	.4byte STREAK_PALACE_SINGLES_50, STREAK_PALACE_SINGLES_OPEN
	.4byte STREAK_PALACE_DOUBLES_50, STREAK_PALACE_DOUBLES_OPEN
	.globl gBattlePalaceWinStreakMasks
	.globl gUnknown_85D6924
gBattlePalaceWinStreakMasks:
gUnknown_85D6924: @ 0x085D6924
	.4byte ~STREAK_PALACE_SINGLES_50, ~STREAK_PALACE_SINGLES_OPEN
	.4byte ~STREAK_PALACE_DOUBLES_50, ~STREAK_PALACE_DOUBLES_OPEN
	.globl gMatchCallTrainers
	.globl gUnknown_85D6934
gMatchCallTrainers:
gUnknown_85D6934: @ 0x085D6934
	.include "data/match_call/trainers.inc"
	.if (. - gMatchCallTrainers) != (64 * 20)
	.error "Match Call trainer table has the wrong size"
	.endif
	.globl gMatchCallTexts
gMatchCallTexts: @ 0x085D6E34
	.include "data/match_call/texts.inc"
	.if (. - gMatchCallTexts) != (205 * 8)
	.error "Match Call text table has the wrong size"
	.endif
	@ Entry-group aliases within gMatchCallTexts. Each entry is 8 bytes.
	.globl gMatchCallWildBattleTexts
	.set gMatchCallWildBattleTexts, gMatchCallTexts + (0 * 8)
	.globl gMatchCallNegativeBattleTexts
	.set gMatchCallNegativeBattleTexts, gMatchCallTexts + (15 * 8)
	.globl gMatchCallPositiveBattleTexts
	.set gMatchCallPositiveBattleTexts, gMatchCallTexts + (29 * 8)
	.globl gMatchCallSameRouteBattleRequestTexts
	.set gMatchCallSameRouteBattleRequestTexts, gMatchCallTexts + (43 * 8)
	.globl gMatchCallDifferentRouteBattleRequestTexts
	.set gMatchCallDifferentRouteBattleRequestTexts, gMatchCallTexts + (57 * 8)
	.globl gMatchCallPersonalizedTexts
	.set gMatchCallPersonalizedTexts, gMatchCallTexts + (71 * 8)
	.globl gMatchCallBattleFrontierStreakTexts
	.set gMatchCallBattleFrontierStreakTexts, gMatchCallTexts + (135 * 8)
	.globl gMatchCallBattleFrontierRecordStreakTexts
	.set gMatchCallBattleFrontierRecordStreakTexts, gMatchCallTexts + (149 * 8)
	.globl gMatchCallBattleDomeTexts
	.set gMatchCallBattleDomeTexts, gMatchCallTexts + (163 * 8)
	.globl gMatchCallBattlePikeTexts
	.set gMatchCallBattlePikeTexts, gMatchCallTexts + (177 * 8)
	.globl gMatchCallBattlePyramidTexts
	.set gMatchCallBattlePyramidTexts, gMatchCallTexts + (191 * 8)

	.globl gMatchCallBattleTopics
	.globl gUnknown_85D749C
gMatchCallBattleTopics:
gUnknown_85D749C: @ 0x085D749C
	.4byte gMatchCallWildBattleTexts
	.4byte gMatchCallNegativeBattleTexts
	.4byte gMatchCallPositiveBattleTexts
	.if (. - gMatchCallBattleTopics) != (3 * 4)
	.error "Match Call battle topic table has the wrong size"
	.endif

	.globl gMatchCallBattleRequestTopics
	.globl gUnknown_85D74A8
gMatchCallBattleRequestTopics:
gUnknown_85D74A8: @ 0x085D74A8
	.4byte gMatchCallSameRouteBattleRequestTexts
	.4byte gMatchCallDifferentRouteBattleRequestTexts
	.if (. - gMatchCallBattleRequestTopics) != (2 * 4)
	.error "Match Call battle request topic table has the wrong size"
	.endif

	.globl gMatchCallGeneralTopics
	.globl gUnknown_85D74B0
gMatchCallGeneralTopics:
gUnknown_85D74B0: @ 0x085D74B0
	.4byte gMatchCallPersonalizedTexts
	.4byte gMatchCallBattleFrontierStreakTexts
	.4byte gMatchCallBattleFrontierRecordStreakTexts
	.4byte gMatchCallBattleDomeTexts
	.4byte gMatchCallBattlePikeTexts
	.4byte gMatchCallBattlePyramidTexts
	.if (. - gMatchCallGeneralTopics) != (6 * 4)
	.error "Match Call general topic table has the wrong size"
	.endif
	.globl gUnknown_85D74C8
gUnknown_85D74C8: @ 0x085D74C8
	@ Replaced baserom.gba range: offset=0x5D74C8, size=0x20
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x18, 0x67, 0x64, 0x4B, 0xAD, 0x5B, 0xF6, 0x6B, 0x1A, 0x7F
	.byte 0x9D, 0x7F, 0xFF, 0x5A, 0x7F, 0x6B, 0x57, 0x02, 0xBD, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.globl gUnknown_85D74E8
gUnknown_85D74E8: @ 0x085D74E8
	@ Replaced baserom.gba range: offset=0x5D74E8, size=0x100
	.byte 0x60, 0x66, 0x66, 0x66, 0x66, 0x44, 0x44, 0x44, 0x46, 0x54, 0x55, 0x55, 0x46, 0x55, 0x55, 0x55
	.byte 0x46, 0x55, 0x44, 0x44, 0x46, 0x55, 0x44, 0xBB, 0x46, 0x55, 0xB4, 0x33, 0x46, 0x55, 0xB4, 0xC3
	.byte 0x66, 0x66, 0x66, 0x66, 0x44, 0x44, 0x44, 0x44, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55
	.byte 0x44, 0x44, 0x44, 0x44, 0xBB, 0xBB, 0xBB, 0xBB, 0x33, 0x33, 0x33, 0x33, 0xCC, 0xCC, 0xCC, 0xCC
	.byte 0x66, 0x66, 0x66, 0x06, 0x44, 0x44, 0x44, 0x66, 0x55, 0x55, 0x45, 0x64, 0x55, 0x55, 0x55, 0x64
	.byte 0x44, 0x44, 0x55, 0x64, 0xBB, 0x44, 0x55, 0x64, 0x33, 0x4B, 0x55, 0x64, 0x3C, 0x4B, 0x55, 0x64
	.byte 0x46, 0x55, 0xB4, 0xC3, 0x46, 0x55, 0xB4, 0xC3, 0x46, 0x55, 0xB4, 0xC3, 0x46, 0x55, 0xB4, 0xC3
	.byte 0x46, 0x55, 0xB4, 0xC3, 0x46, 0x55, 0xB4, 0xC3, 0x46, 0x55, 0xB4, 0xC3, 0x46, 0x55, 0xB4, 0xC3
	.byte 0x3C, 0x4B, 0x55, 0x64, 0x3C, 0x4B, 0x55, 0x64, 0x3C, 0x4B, 0x55, 0x64, 0x3C, 0x4B, 0x55, 0x64
	.byte 0x3C, 0x4B, 0x55, 0x64, 0x3C, 0x4B, 0x55, 0x64, 0x3C, 0x4B, 0x55, 0x64, 0x3C, 0x4B, 0x55, 0x64
	.byte 0x46, 0x55, 0xB4, 0xC3, 0x46, 0x55, 0xB4, 0x33, 0x46, 0x55, 0x44, 0xBB, 0x46, 0x55, 0x44, 0x44
	.byte 0x46, 0x55, 0x55, 0x55, 0x46, 0x54, 0x55, 0x55, 0x66, 0x44, 0x44, 0x44, 0x60, 0x66, 0x66, 0x66
	.byte 0xCC, 0xCC, 0xCC, 0xCC, 0x33, 0x33, 0x33, 0x33, 0xBB, 0xBB, 0xBB, 0xBB, 0x44, 0x44, 0x44, 0x44
	.byte 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x44, 0x44, 0x44, 0x44, 0x66, 0x66, 0x66, 0x66
	.byte 0x3C, 0x4B, 0x55, 0x64, 0x33, 0x4B, 0x55, 0x64, 0xBB, 0x44, 0x55, 0x64, 0x44, 0x44, 0x55, 0x64
	.byte 0x55, 0x55, 0x55, 0x64, 0x55, 0x55, 0x45, 0x64, 0x44, 0x44, 0x44, 0x66, 0x66, 0x66, 0x66, 0x06
	.globl gUnknown_85D75E8
gUnknown_85D75E8: @ 0x085D75E8
	@ Replaced baserom.gba range: offset=0x5D75E8, size=0x20
	.byte 0xFF, 0x7F, 0x95, 0x15, 0x55, 0x4A, 0xB6, 0x56, 0x1F, 0x00, 0xFE, 0x31, 0x94, 0x66, 0x8C, 0x79
	.byte 0xFF, 0x7F, 0xC1, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x3B, 0x39, 0x6B, 0xB5, 0x5E
	.globl gUnknown_85D7608
gUnknown_85D7608: @ 0x085D7608
	@ Replaced baserom.gba range: offset=0x5D7608, size=0x3E4
	.byte 0x10, 0x00, 0x10, 0x00, 0x38, 0x88, 0x88, 0xF0, 0x01, 0xF0, 0x01, 0xE0, 0x01, 0x11, 0x88, 0x88
	.byte 0x38, 0x18, 0x33, 0x30, 0x03, 0xF0, 0x01, 0x00, 0x1C, 0x88, 0x33, 0x81, 0xF8, 0x30, 0x03, 0xF0
	.byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x60, 0x01, 0x18, 0x88, 0x18, 0x04, 0x11, 0x33, 0x88, 0xD1, 0x1D
	.byte 0x00, 0x03, 0xD1, 0x31, 0x01, 0x18, 0xDD, 0xD1, 0x1D, 0x18, 0x1D, 0xDD, 0x00, 0x05, 0x00, 0xDD
	.byte 0x11, 0xD1, 0x1D, 0x1D, 0x55, 0xD1, 0xD1, 0x00, 0x51, 0x15, 0x33, 0x11, 0x81, 0x88, 0x33, 0xD1
	.byte 0x04, 0x1D, 0x88, 0x13, 0x1D, 0x1D, 0x00, 0x26, 0xDD, 0x81, 0x98, 0x00, 0x1D, 0x81, 0x11, 0x00
	.byte 0x21, 0x00, 0x1C, 0x1D, 0x51, 0x15, 0xF6, 0x00, 0x14, 0xF0, 0x53, 0x60, 0x01, 0x40, 0x9E, 0x18
	.byte 0x80, 0x03, 0xE0, 0x01, 0xDD, 0x01, 0x11, 0x51, 0x71, 0x1D, 0xD1, 0x51, 0x71, 0x10, 0x6B, 0x80
	.byte 0x00, 0x52, 0x55, 0xD1, 0x1D, 0xD1, 0x11, 0x18, 0x51, 0x00, 0x15, 0xDD, 0x18, 0x55, 0x15, 0xDD
	.byte 0x88, 0x51, 0x00, 0xD1, 0x11, 0x17, 0x15, 0x11, 0xDD, 0x17, 0x15, 0xE2, 0x00, 0x21, 0x00, 0x6B
	.byte 0x00, 0x1C, 0x1D, 0x11, 0x1D, 0x00, 0x85, 0x51, 0x00, 0x15, 0x81, 0xDD, 0x51, 0x55, 0x81, 0x11
	.byte 0x1D, 0x7C, 0x15, 0x20, 0x63, 0x50, 0x03, 0xF0, 0x01, 0xF0, 0x01, 0xF1, 0x01, 0xDD, 0xDD, 0xF3
	.byte 0x01, 0x51, 0x00, 0x03, 0x21, 0x56, 0xF0, 0x9F, 0xDD, 0x81, 0x00, 0xA3, 0xF0, 0x1C, 0xFF, 0xF0
	.byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF1, 0xFF, 0xF0, 0x1C, 0x00, 0x03, 0xF5
	.byte 0xF1, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x88, 0x01, 0xFF, 0x18, 0x01, 0xFF, 0xA0, 0x10
	.byte 0x03, 0xD1, 0x00, 0xE9, 0xD1, 0xDD, 0xDD, 0x18, 0x1D, 0x00, 0x11, 0xDD, 0x18, 0x51, 0x55, 0xD1
	.byte 0x18, 0x15, 0x93, 0x81, 0xFF, 0xDD, 0x1D, 0x01, 0x25, 0xDD, 0x81, 0x02, 0x1E, 0x10, 0x03, 0x7C
	.byte 0x1D, 0x50, 0x03, 0xF0, 0x4F, 0xF0, 0x01, 0xF0, 0x01, 0x81, 0x7E, 0x71, 0x17, 0x7C, 0x15, 0x20
	.byte 0x03, 0x00, 0x6B, 0x20, 0x73, 0x00, 0x7B, 0x30, 0x87, 0x1D, 0x55, 0x8E, 0x02, 0x9B, 0x55, 0x11
	.byte 0x11, 0x00, 0x67, 0x60, 0x01, 0x10, 0x73, 0x11, 0x63, 0x81, 0x00, 0xA2, 0x00, 0x03, 0x1D, 0x88
	.byte 0x15, 0xF0, 0x7E, 0xF0, 0x01, 0xDE, 0xF0, 0x01, 0xD1, 0xFF, 0x51, 0x01, 0x03, 0x10, 0x48, 0xF1
	.byte 0xE2, 0x00, 0x01, 0xD5, 0xFE, 0xF1, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
	.byte 0x01, 0xB1, 0xFF, 0x13, 0xDE, 0xF1, 0xFF, 0x71, 0xFF, 0x31, 0xF1, 0xFF, 0xF0, 0x01, 0xF0, 0x01
	.byte 0xF0, 0x01, 0x88, 0x43, 0x31, 0x10, 0xDD, 0xDD, 0x88, 0x18, 0xD1, 0x00, 0x03, 0x03, 0x0B, 0xF6
	.byte 0x10, 0x03, 0x01, 0x60, 0x11, 0xEC, 0x10, 0x03, 0x11, 0x00, 0x85, 0x10, 0xFF, 0xDD, 0x77, 0x1D
	.byte 0x01, 0x07, 0x11, 0x0B, 0x20, 0x03, 0x1D, 0x60, 0x03, 0xF0, 0x4F, 0xF0, 0x01, 0xEF, 0xF0, 0x01
	.byte 0x90, 0xCC, 0x00, 0x77, 0x11, 0x04, 0x47, 0x10, 0x03, 0x03, 0xDA, 0x21, 0xFB, 0xDF, 0x50, 0x87
	.byte 0x10, 0x88, 0x1D, 0x02, 0x0A, 0x02, 0x7F, 0x10, 0x03, 0x04, 0x76, 0x00, 0x92, 0xFF, 0x10, 0x77
	.byte 0x40, 0x87, 0xF0, 0x7E, 0xF0, 0x01, 0xF0, 0x01, 0xC0, 0x01, 0x00, 0x7F, 0x00, 0x6C, 0xFF, 0xF1
	.byte 0xFF, 0x43, 0xFF, 0x00, 0x63, 0x00, 0x6A, 0xF0, 0x1C, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF
	.byte 0xF0, 0x01, 0xF0, 0x01, 0x51, 0xFF, 0x44, 0x03, 0xF0, 0x01, 0xF5, 0xFF, 0xF0, 0x01, 0xF0, 0x01
	.byte 0xE9, 0xF0, 0x01, 0x32, 0xFF, 0x55, 0xFF, 0xDD, 0x05, 0xFF, 0xDD, 0x11, 0x00, 0x03, 0x7D, 0xD1
	.byte 0x01, 0x75, 0x60, 0x03, 0x53, 0xFF, 0x10, 0x03, 0x13, 0xFF, 0xDD, 0x30, 0x03, 0xDF, 0x03, 0xFA
	.byte 0x01, 0x99, 0x11, 0x23, 0x37, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x61, 0x7D, 0x1D, 0x1D, 0x11
	.byte 0xD1, 0x00, 0x69, 0x20, 0x03, 0x00, 0x01, 0x18, 0x00, 0x64, 0xFF, 0x00, 0x83, 0x20, 0x03, 0x11
	.byte 0xFE, 0x00, 0x01, 0x00, 0x11, 0x00, 0x6F, 0x00, 0x6B, 0x14, 0x6F, 0xCF, 0x16, 0x1F, 0x23, 0xFF
	.byte 0x1D, 0xD1, 0x24, 0x03, 0xF0, 0x51, 0xF0, 0x01, 0xF0, 0x01, 0xE7, 0xF5, 0xFF, 0xF1, 0xFF, 0x50
	.byte 0x9F, 0x81, 0x88, 0x02, 0x82, 0xF0, 0x1C, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
	.byte 0xF0, 0x01, 0xF5, 0xFF, 0xF0, 0x1C, 0xF1, 0xFF, 0xF0, 0x01, 0xF8, 0xF0, 0x01, 0xF0, 0x01, 0xF7
	.byte 0xFF, 0x37, 0xFF, 0x30, 0x03, 0xD1, 0x11, 0x11, 0xBF, 0xF7, 0xFF, 0xD1, 0x10, 0x03, 0x20, 0x21
	.byte 0x11, 0x92, 0xF0, 0x52, 0xF7, 0xFF, 0xF7, 0xFF, 0xFF, 0x97, 0xFF, 0x42, 0x4C, 0x12, 0x07, 0x22
	.byte 0x01, 0x00, 0x83, 0x12, 0x07, 0x13, 0xEC, 0x10, 0x66, 0xBF, 0x21, 0xFE, 0xDD, 0x11, 0xF4, 0x01
	.byte 0xEE, 0x11, 0xFF, 0x10, 0x05, 0x11, 0xFF, 0x00, 0x8B, 0xFF, 0x00, 0x22, 0xF7, 0xFF, 0xF0, 0x01
	.byte 0xF0, 0x01, 0xA1, 0xFF, 0x34, 0xFF, 0xF1, 0xE2, 0x31, 0x6B, 0xFF, 0xF5, 0xFF, 0xF0, 0x01, 0xF0
	.byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF1, 0xFF, 0xF1, 0xFF, 0xF9, 0xF7, 0xFF, 0xF0, 0x01
	.byte 0xF0, 0x01, 0xF0, 0x01, 0xE3, 0xFF, 0x1D, 0x33, 0x43, 0xFF, 0xFF, 0x01, 0x68, 0x40, 0x03, 0x03
	.byte 0xE0, 0xF7, 0xFF, 0xF7, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xEF, 0x51, 0x5F, 0x60, 0x6B
	.byte 0x10, 0x07, 0xD1, 0x19, 0xDF, 0x00, 0x83, 0x02, 0x87, 0x11, 0xFF, 0xF7, 0x22, 0x14, 0x17, 0xF5
	.byte 0x40, 0x03, 0x12, 0x2A, 0x11, 0x54, 0x83, 0x00, 0x03, 0xF0, 0x7E, 0xF3, 0xF0, 0x01, 0xF0, 0x01
	.byte 0xC1, 0xFF, 0x00, 0x44, 0x11, 0xD1, 0xF1, 0xFF, 0xF9, 0xFF, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0
	.byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF1, 0x16, 0xF7, 0xFF, 0xF7, 0xFF, 0xFF, 0xF1, 0xFF, 0xF0, 0x01
	.byte 0xF0, 0x01, 0xF7, 0xFF, 0xF7, 0xFF, 0x70, 0x03, 0xF7, 0xFF, 0x57, 0xFF, 0x7F, 0x11, 0x20, 0x03
	.byte 0xF0, 0x4F, 0xF0, 0x01, 0xF0, 0x01, 0xC7, 0xFF, 0x0B, 0xD7, 0x40, 0x03, 0xFF, 0xF7, 0xFF, 0x27
	.byte 0xFF, 0x30, 0x03, 0xF7, 0xFF, 0xF0, 0x4E, 0xF0, 0x01, 0xF0, 0x01, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF
	.byte 0xF7, 0xFF, 0xF0, 0x1B, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF7
	.byte 0xFF, 0xF5, 0xFF, 0xF1, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF2, 0xFF, 0xF7, 0xFF, 0xB7, 0xFF, 0xAC
	.byte 0x00, 0x67, 0xD1, 0x14, 0x03, 0x81, 0x41, 0x7B, 0x00, 0x03, 0x11, 0xD1, 0x00, 0x81, 0x1D, 0x55
	.byte 0x15, 0x81, 0x51, 0x15, 0x51, 0xF7, 0xF0, 0x81, 0xF0, 0x01, 0xF0, 0x01, 0xA1, 0x7D, 0x11, 0x17
	.byte 0xFF, 0x30, 0x01, 0x00, 0x72, 0xB8, 0x07, 0xFF, 0xD1, 0x13, 0xFF, 0x13, 0xFB, 0x00, 0x03, 0x51
	.byte 0x51, 0x71, 0x3F, 0x17, 0x81, 0x20, 0x03, 0x00, 0x6B, 0x10, 0x73, 0x10, 0x7B, 0x10, 0x87, 0x0E
	.byte 0x0B, 0x3E, 0x88, 0x55, 0x15, 0x04, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x93, 0xFF, 0x5D, 0xDF
	.byte 0xF5, 0xFF, 0x70, 0x01, 0x15, 0x01, 0xFC, 0x02, 0x7A, 0xF0, 0x1C, 0xF0, 0x01, 0xF0, 0x01, 0x80
	.byte 0x00, 0x01, 0x00, 0x00
	.globl gUnknown_85D79EC
gUnknown_85D79EC: @ 0x085D79EC
	.space 0x2, 0xB0

