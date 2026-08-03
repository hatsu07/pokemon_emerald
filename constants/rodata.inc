	@ Font IDs used by the text printer tables.
	.set FONT_SMALL,        0
	.set FONT_NORMAL,       1
	.set FONT_SHORT,        2
	.set FONT_SHORT_COPY_1, 3
	.set FONT_SHORT_COPY_2, 4
	.set FONT_SHORT_COPY_3, 5
	.set FONT_BRAILLE,      6
	.set FONT_NARROW,       7
	.set FONT_SMALL_NARROW, 8

	@ Packed text colors used by struct FontInfo.
	.set TEXT_COLOR_TRANSPARENT, 0
	.set TEXT_COLOR_WHITE,       1
	.set TEXT_COLOR_DARK_GRAY,   2
	.set TEXT_COLOR_LIGHT_GRAY,  3
	.set TEXT_DYNAMIC_COLOR_6,   0xF

	@ BLDCNT target layer masks.
	.set BLDCNT_TGT1_BG0, 1 << 0
	.set BLDCNT_TGT1_BG1, 1 << 1
	.set BLDCNT_TGT1_BG2, 1 << 2
	.set BLDCNT_TGT1_BG3, 1 << 3
	.set BLDCNT_TGT2_BG0, 1 << 8
	.set BLDCNT_TGT2_BG1, 1 << 9
	.set BLDCNT_TGT2_BG2, 1 << 10
	.set BLDCNT_TGT2_BG3, 1 << 11

	@ Dummy sprite values.
	.set DISPLAY_WIDTH,                   240
	.set DISPLAY_HEIGHT,                  160
	.set DUMMY_SPRITE_X,                  DISPLAY_WIDTH + 64
	.set DUMMY_SPRITE_Y,                  DISPLAY_HEIGHT
	.set DUMMY_SPRITE_OAM_AFFINE_MODE,    0
	.set DUMMY_SPRITE_OAM_OBJ_MODE,       0
	.set DUMMY_SPRITE_OAM_MOSAIC,         0
	.set DUMMY_SPRITE_OAM_BPP,            0
	.set DUMMY_SPRITE_OAM_SHAPE,          0
	.set DUMMY_SPRITE_OAM_MATRIX_NUM,     0
	.set DUMMY_SPRITE_OAM_SIZE,           0
	.set DUMMY_SPRITE_OAM_TILE_NUM,       0
	.set DUMMY_SPRITE_OAM_PRIORITY,       3
	.set DUMMY_SPRITE_OAM_PALETTE_NUM,    0
	.set DUMMY_SPRITE_OAM_AFFINE_PARAM,   0
	.set DUMMY_SPRITE_SUBPRIORITY,        0xFF
	.set DUMMY_SPRITE_ANIM_END,           0xFFFF
	.set DUMMY_SPRITE_AFFINE_ANIM_END,    0x7FFF
	.set TAG_NONE,                        0xFFFF

	@ Two unused values kept in the sprite register lookup data.
	.set UNUSED_BG_REGISTER_EWRAM, 0x02000100
	.set UNUSED_BG_REGISTER_ROM,   0x08000400
