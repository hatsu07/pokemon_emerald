	.macro menu_cursor_dimensions width, height
	.byte \width, \height
	.endm

	.macro sprite_tile_counts square8, square16, square32, square64, horizontal8, horizontal16, horizontal32, horizontal64, vertical8, vertical16, vertical32, vertical64
	.byte \square8, \square16, \square32, \square64
	.byte \horizontal8, \horizontal16, \horizontal32, \horizontal64
	.byte \vertical8, \vertical16, \vertical32, \vertical64
	.endm

	.macro center_to_corner_vector x, y
	.byte (\x) & 0xFF, (\y) & 0xFF
	.endm

	@ Packs the four halfwords of struct OamData from semantic fields.
	.macro rodata_sprite_oam_data y, affine_mode, obj_mode, mosaic, bpp, shape, x, matrix_num, size, tile_num, priority, palette_num, affine_param
	.2byte ((\y) & 0xFF) | (((\affine_mode) & 3) << 8) | (((\obj_mode) & 3) << 10) | (((\mosaic) & 1) << 12) | (((\bpp) & 1) << 13) | (((\shape) & 3) << 14)
	.2byte ((\x) & 0x1FF) | (((\matrix_num) & 0x1F) << 9) | (((\size) & 3) << 14)
	.2byte ((\tile_num) & 0x3FF) | (((\priority) & 3) << 10) | (((\palette_num) & 0xF) << 12)
	.2byte (\affine_param) & 0xFFFF
	.endm

	.macro dummy_sprite_oam_data
	rodata_sprite_oam_data DUMMY_SPRITE_Y, DUMMY_SPRITE_OAM_AFFINE_MODE, DUMMY_SPRITE_OAM_OBJ_MODE, DUMMY_SPRITE_OAM_MOSAIC, DUMMY_SPRITE_OAM_BPP, DUMMY_SPRITE_OAM_SHAPE, DUMMY_SPRITE_X, DUMMY_SPRITE_OAM_MATRIX_NUM, DUMMY_SPRITE_OAM_SIZE, DUMMY_SPRITE_OAM_TILE_NUM, DUMMY_SPRITE_OAM_PRIORITY, DUMMY_SPRITE_OAM_PALETTE_NUM, DUMMY_SPRITE_OAM_AFFINE_PARAM
	.endm

	@ Emits one 0x44-byte struct Sprite initialized as the off-screen dummy.
	.macro dummy_sprite anims, affine_anims, template, callback
	dummy_sprite_oam_data
	.4byte \anims
	.4byte NULL @ images
	.4byte \affine_anims
	.4byte \template
	.4byte NULL @ subsprite tables
	.4byte \callback
	.2byte DUMMY_SPRITE_X, DUMMY_SPRITE_Y @ pos1
	.2byte 0, 0 @ pos2
	.byte 0, 0 @ center-to-corner vector
	.byte 0, 0, 0, 0, 0, 0 @ animation state
	.2byte 0, 0, 0, 0, 0, 0, 0, 0 @ data[8]
	.byte 0, 0, 0, DUMMY_SPRITE_SUBPRIORITY @ status, subsprite mode, padding, subpriority
	.endm

	.macro dummy_sprite_anim_end
	.2byte DUMMY_SPRITE_ANIM_END, 0
	.endm

	.macro dummy_sprite_affine_anim_end
	.2byte DUMMY_SPRITE_AFFINE_ANIM_END, 0, 0, 0
	.endm

	.macro rodata_sprite_template tile_tag, palette_tag, oam, anims, images, affine_anims, callback
	.2byte \tile_tag, \palette_tag
	.4byte \oam
	.4byte \anims
	.4byte \images
	.4byte \affine_anims
	.4byte \callback
	.endm

	.macro oam_dimensions32 width, height
	.4byte \width, \height
	.endm

	.macro oam_dimensions width, height
	.byte \width, \height
	.2byte 0
	.endm
