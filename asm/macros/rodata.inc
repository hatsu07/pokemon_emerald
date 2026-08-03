	.macro bg_template bg, char_base, map_base, screen_size, palette_mode, priority, base_tile
	.4byte ((\bg) & 3) | (((\char_base) & 3) << 2) | (((\map_base) & 0x1F) << 4) | (((\screen_size) & 3) << 9) | (((\palette_mode) & 1) << 11) | (((\priority) & 3) << 12) | (((\base_tile) & 0x3FF) << 14)
	.endm

	.macro menu_cursor_dimensions width, height
	.byte \width, \height
	.endm

	.macro pokeblock_feed_motion_step angle, angle_delta, x_amplitude, y_amplitude, duration, phase_delta, x_offset, y_offset, interpolation_start, end_sequence
	.2byte \angle, \angle_delta, \x_amplitude, \y_amplitude, \duration
	.2byte \phase_delta, \x_offset, \y_offset, \interpolation_start, \end_sequence
	.endm

	@ Sprite placement used by the moving foreground layers in the intro credits.
	.macro intro_credits_sprite_spawn anim, dimensions, x, y, subpriority, x_velocity
	.byte ((\anim) & 0xF) | (((\dimensions) & 0xF) << 4)
	.byte \x, \y, \subpriority
	.2byte \x_velocity
	.2byte 0 @ padding
	.endm

	.macro bard_sound_entry sound, volume=0x100
	.2byte \sound, \volume
	.endm

	.macro bard_sound_cycle volume=0x100
	bard_sound_entry BARD_SOUND_0, \volume
	bard_sound_entry BARD_SOUND_1, \volume
	bard_sound_entry BARD_SOUND_2, \volume
	bard_sound_entry BARD_SOUND_3, \volume
	bard_sound_entry BARD_SOUND_4, \volume
	.endm

	@ One score indexed by a battle move effect. The effect argument verifies order.
	.macro battle_tv_effect_points effect, points
	.if (\effect) != ((. - gBattleTvMoveEffectPoints) / 2)
	.error "Battle TV move effect points are out of order"
	.endif
	.2byte \points
	.endm

	@ One move/score pair in a Battle TV weather or field-effect table.
	.macro battle_tv_move_points move, points
	.2byte \move, \points
	.endm

	@ One species-indexed entry in the back-sprite animation set table.
	.macro species_back_anim species, anim
	.if (\species) != (. - gSpeciesToBackAnimSet)
	.error "Pokemon back animation sets are out of species order"
	.endif
	.byte \anim
	.endm

	.macro yellow_flash_step yellow, duration
	.byte \yellow, \duration
	.endm

	.macro vertical_shake_step offset, duration
	.byte \offset, \duration
	.endm

	@ One animation-ID-indexed callback in the Pokemon animation function table.
	.macro mon_anim_function anim, function
	.if (\anim) != ((. - gMonAnimFunctions) / 4)
	.error "Pokemon animation functions are out of animation ID order"
	.endif
	.4byte \function
	.endm

	@ Three nature-selected animation IDs for one back-sprite animation set.
	.macro back_anim_variants anim_set, variant0, variant1, variant2
	.if ((\anim_set) - 1) != ((. - gBackAnimSetToAnimIds) / 3)
	.error "Pokemon back animation variants are out of set order"
	.endif
	.byte \variant0, \variant1, \variant2
	.endm

	.macro back_anim_nature_mod nature, variant
	.if (\nature) != (. - gBackAnimNatureModTable)
	.error "Pokemon back animation nature modifiers are out of nature order"
	.endif
	.byte \variant
	.endm

	@ Signed sprite movement per frame, followed by its duration in frames.
	.macro mon_anim_offset_step x, y, duration
	.byte \x, \y, \duration
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

	.macro rodata_compressed_sprite_sheet data, size, tag
	.4byte \data
	.2byte \size
	.2byte \tag
	.endm

	.macro rodata_sprite_palette data, tag
	.4byte \data
	.2byte \tag
	.2byte 0 @ structure padding
	.endm

	.macro oam_dimensions32 width, height
	.4byte \width, \height
	.endm

	.macro oam_dimensions width, height
	.byte \width, \height
	.2byte 0
	.endm
