@ struct SpriteFrameImage (8 bytes).
	.macro rodata_sprite_frame_image gfx, size
	.4byte \gfx
	.4byte \size
	.endm

@ struct MenuAction (8 bytes) used by script-menu multichoice lists.
	.macro script_menu_action text
	.4byte \text
	.4byte 0 @ callback
	.endm

@ struct MultichoiceListStruct (8 bytes).
	.macro multichoice_list_entry list, count
	.4byte \list
	.byte \count, 0, 0, 0
	.endm

@ struct BerryCrushBerryData (4 bytes).
@ u8 difficulty, one ABI padding byte, u16 Berry Powder yield.
	.macro berry_crush_berry_data item, difficulty, powder
	.if ((\item) - ITEM_CHERI_BERRY) != ((. - gBerryCrush_BerryData) / 4)
	.error "Berry Crush berry data is out of item order"
	.endif
	.byte \difficulty, 0
	.2byte \powder
	.endm

@ struct Berry (0x1C bytes).
@ Keep JP name bytes literal; description pointers use semantic labels.
	.macro berry_entry name0, name1, name2, name3, name4, name5, name6, firmness, size, max_yield, min_yield, desc1, desc2, stage_duration, spicy, dry, sweet, bitter, sour, smoothness
	.byte \name0, \name1, \name2, \name3, \name4, \name5, \name6
	.byte \firmness
	.2byte \size
	.byte \max_yield, \min_yield
	.4byte \desc1, \desc2
	.byte \stage_duration, \spicy, \dry, \sweet, \bitter, \sour, \smoothness
	.byte 0 @ alignment
	.endm

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

	@ Horizontal interpolation endpoints and duration for a Pokemon animation.
	.macro mon_anim_interpolation_step start, end, duration
	.byte \start, \end, \duration
	.endm

	@ Yellow-flash state and duration, with the original structure padding.
	.macro back_anim_yellow_flash_step yellow, duration
	.byte \yellow, \duration
	.2byte 0
	.endm

	.macro battle_controller_command table, command, handler
	.if (\command) != ((. - \table) / 4)
	.error "Battle controller commands are out of order"
	.endif
	.4byte \handler
	.endm

	.macro sprite_tile_counts square8, square16, square32, square64, horizontal8, horizontal16, horizontal32, horizontal64, vertical8, vertical16, vertical32, vertical64
	.byte \square8, \square16, \square32, \square64
	.byte \horizontal8, \horizontal16, \horizontal32, \horizontal64
	.byte \vertical8, \vertical16, \vertical32, \vertical64
	.endm

	.macro center_to_corner_vector x, y
	.byte (\x) & 0xFF, (\y) & 0xFF
	.endm

	@ Nine packed Easy Chat words forming one Quiz Lady question.
	.macro quiz_lady_question question, word0, word1, word2, word3, word4, word5, word6, word7, word8
	.if (\question) != ((. - gQuizLadyQuestions) / 18)
	.error "Quiz Lady questions are out of order"
	.endif
	.2byte \word0, \word1, \word2, \word3, \word4, \word5, \word6, \word7, \word8
	.endm

	.macro quiz_lady_question_pointer question, pointer
	.if (\question) != ((. - gQuizLadyQuestionPointers) / 4)
	.error "Quiz Lady question pointers are out of order"
	.endif
	.4byte \pointer
	.endm

	@ Sixteen Battle Dome style characteristics for one move.
	.macro battle_dome_move_points move, points
	.if (\move) != ((. - gBattleDomeMovePoints) / NUM_MOVE_POINT_TYPES)
	.error "Battle Dome move points are out of move ID order"
	.endif
	.byte ((\points) >> MOVE_POINTS_COMBO) & 1
	.byte ((\points) >> MOVE_POINTS_STAT_RAISE) & 1
	.byte ((\points) >> MOVE_POINTS_STAT_LOWER) & 1
	.byte ((\points) >> MOVE_POINTS_RARE) & 1
	.byte ((\points) >> MOVE_POINTS_HEAL) & 1
	.byte ((\points) >> MOVE_POINTS_RISKY) & 1
	.byte ((\points) >> MOVE_POINTS_STATUS) & 1
	.byte ((\points) >> MOVE_POINTS_DMG) & 1
	.byte ((\points) >> MOVE_POINTS_DEF) & 1
	.byte ((\points) >> MOVE_POINTS_ACCURATE) & 1
	.byte ((\points) >> MOVE_POINTS_POWERFUL) & 1
	.byte ((\points) >> MOVE_POINTS_POPULAR) & 1
	.byte ((\points) >> MOVE_POINTS_LUCK) & 1
	.byte ((\points) >> MOVE_POINTS_STRONG) & 1
	.byte ((\points) >> MOVE_POINTS_LOW_PP) & 1
	.byte ((\points) >> MOVE_POINTS_EFFECT) & 1
	.endm

	.macro battle_dome_style_threshold style, combo, stat_raise, stat_lower, rare, heal, risky, status, damage, defense, accurate, powerful, popular, luck, strong, low_pp, effect
	.if (\style) != ((. - gBattleDomeStyleThresholds) / NUM_MOVE_POINT_TYPES)
	.error "Battle Dome style thresholds are out of style ID order"
	.endif
	.byte \combo, \stat_raise, \stat_lower, \rare
	.byte \heal, \risky, \status, \damage
	.byte \defense, \accurate, \powerful, \popular
	.byte \luck, \strong, \low_pp, \effect
	.endm

	.macro battle_dome_style_text style, text
	.if (\style) != ((. - gBattleDomeOpponentStyleTexts) / 4)
	.error "Battle Dome style texts are out of style ID order"
	.endif
	.4byte \text
	.endm

	.macro battle_dome_tourney_line_section x, y, tile
	.byte \x, \y
	.2byte \tile
	.endm

	.macro battle_dome_tourney_line_paths trainer
	.4byte gBattleDomeTourneyTreeLineSections_Trainer\trainer\()_Round1
	.4byte gBattleDomeTourneyTreeLineSections_Trainer\trainer\()_Round2
	.4byte gBattleDomeTourneyTreeLineSections_Trainer\trainer\()_Round3
	.4byte gBattleDomeTourneyTreeLineSections_Trainer\trainer\()_Round4
	.endm

	.macro match_call_trainer trainer_id, required_badges, battle1, battle2, battle3, general, frontier, same_route, different_route
	.2byte \trainer_id, \required_badges
	.2byte \battle1, \battle2, \battle3
	.2byte \general, \frontier, \same_route, \different_route
	.2byte 0 @ padding
	.endm

	.macro match_call_text text, var1, var2, var3
	.4byte \text
	.byte \var1, \var2, \var3
	.byte 0 @ padding
	.endm

	@ Cursor destinations for five tournament rounds, ordered up, down, left, right.
	.macro battle_dome_cursor_moves position, r1u, r1d, r1l, r1r, r2u, r2d, r2l, r2r, r3u, r3d, r3l, r3r, r4u, r4d, r4l, r4r, r5u, r5d, r5l, r5r
	.if (\position) != ((. - gBattleDomeTourneyTreeCursorMovementMap) / 20)
	.error "Battle Dome cursor movement rows are out of position order"
	.endif
	.byte \r1u, \r1d, \r1l, \r1r
	.byte \r2u, \r2d, \r2l, \r2r
	.byte \r3u, \r3d, \r3l, \r3r
	.byte \r4u, \r4d, \r4l, \r4r
	.byte \r5u, \r5d, \r5l, \r5r
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

	@ struct SpriteSheet has the same binary layout as CompressedSpriteSheet.
	.macro rodata_sprite_sheet data, size, tag
	.4byte \data
	.2byte \size
	.2byte \tag
	.endm

	@ union AnimCmd frame/end encodings from include/sprite.h.
	.macro rodata_anim_frame image_value, duration, h_flip=0, v_flip=0
	.2byte (\image_value) & 0xFFFF
	.2byte ((\duration) & 0x3F) | (((\h_flip) & 1) << 6) | (((\v_flip) & 1) << 7)
	.endm

	.macro rodata_anim_end
	.2byte 0xFFFF, 0
	.endm

	.macro rodata_anim_jump target
	.2byte 0xFFFE, \target
	.endm

	.macro rodata_affine_anim_frame x_scale, y_scale, rotation, duration
	.2byte \x_scale, \y_scale, \rotation, \duration
	.endm

	.macro rodata_affine_anim_end
	.2byte 0x7FFF, 0, 0, 0
	.endm

	.macro rodata_affine_anim_jump target
	.2byte 0x7FFD, \target, 0, 0
	.endm

	@ struct Subsprite: signed x/y followed by packed shape/size/tile/priority.
	.macro rodata_subsprite x, y, shape, size, tile_offset, priority
	.byte (\x) & 0xFF, (\y) & 0xFF
	.2byte ((\shape) & 3) | (((\size) & 3) << 2) | (((\tile_offset) & 0x3FF) << 4) | (((\priority) & 3) << 14)
	.endm

	@ struct SubspriteTable contains 3 bytes of padding before its pointer.
	.macro rodata_subsprite_table count, subsprites
	.byte \count, 0, 0, 0
	.4byte \subsprites
	.endm

	.macro rodata_list_menu_item name, id
	.4byte \name, \id
	.endm

	@ Packed struct ListMenuTemplate from include/list_menu.h.
	.macro rodata_list_menu_template items, move_cursor, item_print, total_items, max_showed, window_id, header_x, item_x, cursor_x, up_text_y, cursor_pal, fill_value, cursor_shadow_pal, letters_spacing, item_vertical_padding, scroll_multiple, font_id, cursor_kind
	.4byte \items, \move_cursor, \item_print
	.2byte \total_items, \max_showed
	.byte \window_id, \header_x, \item_x, \cursor_x
	.byte ((\up_text_y) & 0xF) | (((\cursor_pal) & 0xF) << 4)
	.byte ((\fill_value) & 0xF) | (((\cursor_shadow_pal) & 0xF) << 4)
	.byte ((\letters_spacing) & 7) | (((\item_vertical_padding) & 7) << 3) | (((\scroll_multiple) & 3) << 6)
	.byte ((\font_id) & 0x3F) | (((\cursor_kind) & 3) << 6)
	.endm

	@ JP CombinedMove layout is three u16 move IDs plus two bytes of padding.
	.macro combined_move move1, move2, new_move
	.2byte \move1, \move2, \new_move
	.2byte 0 @ JP layout padding
	.endm

	.macro stat_stage_ratio numerator, denominator
	.byte \numerator, \denominator
	.endm

	.macro species_item species, item
	.2byte \species, \item
	.endm

	@ Define a readable global name for an already-positioned compatibility label.
	.macro item_effect_alias name, compatibility_label
	.globl \name
	.set \name, \compatibility_label
	.endm

	@ One entry of gItemEffectTable, checked against its item ID.
	.macro item_effect_table_entry item, effect
	.if ((\item) - ITEM_POTION) != ((. - gItemEffectTable) / 4)
	.error "gItemEffectTable entries are out of item-ID order"
	.endif
	.4byte \effect
	.endm

	@ One facility-class-indexed byte table entry.
	.macro facility_class_mapping table, facility_class, value
	.if (\facility_class) != (. - \table)
	.error "facility class mapping is out of class-ID order"
	.endif
	.byte \value
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

@ ---------------------------------------------------------------------------
@ Generic human-readable asset/structure helpers used by full ROM analysis.
@ ---------------------------------------------------------------------------
.macro rodata_rgb5 r, g, b
    .2byte ((\r) & 31) | (((\g) & 31) << 5) | (((\b) & 31) << 10)
.endm

@ GBA text BG screen entry: tile[9:0], H/V flip, palette bank[3:0].
.macro rodata_tilemap_entry tile, palette, hflip=0, vflip=0
    .2byte ((\tile) & 0x3FF) | (((\hflip) & 1) << 10) | (((\vflip) & 1) << 11) | (((\palette) & 0xF) << 12)
.endm

@ struct ScrollArrowsTemplate (16 bytes).
.macro rodata_scroll_arrows_template first_type, first_x, first_y, second_type, second_x, second_y, fully_up, fully_down, tile_tag, pal_tag, pal_num
    .byte \first_type, \first_x, \first_y, \second_type, \second_x, \second_y
    .2byte \fully_up, \fully_down
    .2byte \tile_tag, \pal_tag
    .byte \pal_num, 0
.endm


@ struct EasyChatWordInfo (12 bytes): text pointer, alphabetical-order index, enabled flag.
.macro easy_chat_word_info text:req, alphabetical_order:req, enabled:req
    .4byte \text
    .4byte \alphabetical_order
    .4byte \enabled
.endm

@ struct ObjectEventGraphicsInfo (0x24 bytes in Emerald JP).
.macro object_event_graphics_info tile_tag:req, palette_tag:req, reflection_palette_tag:req, size:req, width:req, height:req, flags:req, tracks:req, oam:req, subsprites:req, anims:req, images:req, affine_anims:req
    .2byte \tile_tag, \palette_tag, \reflection_palette_tag, \size
    .2byte \width, \height
    .byte \flags, \tracks
    .2byte 0 @ structure padding
    .4byte \oam, \subsprites, \anims, \images, \affine_anims
.endm

@ struct SpriteFrameImage (8 bytes in this ROM): graphics pointer and byte size.
.macro sprite_frame_image data:req, size:req
    .4byte \data
    .4byte \size
.endm

@ Priority-A recovered structures.
	.macro frontier_pass_area_bounds y_start, y_end, x_start, x_end
	.2byte \y_start, \y_end, \x_start, \x_end
	.endm

	.macro frontier_pass_landmark name, description, x, y, anim
	.4byte \name, \description
	.2byte \x, \y
	.byte \anim, 0, 0, 0
	.endm

	.macro rayquaza_scanline_params dma_dest, dma_control, init_state
	.4byte \dma_dest, \dma_control
	.byte \init_state, 0
	.2byte 0
	.endm


@ JP semantic helpers for battle interface, daycare and egg hatch.
.macro battle_interface_empty_text_dark_gray spaces:req
    .byte 0xFC, 0x01, 0x01
    .byte 0xFC, 0x02, 0x02
    .space \spaces, 0
.endm

.macro battle_interface_empty_text_transparent spaces:req
    .byte 0xFC, 0x01, 0x01
    .byte 0xFC, 0x02, 0x00
    .space \spaces, 0
.endm

.macro battle_status_icon_color index:req, red:req, green:req, blue:req
    .if (\index) != ((. - sStatusIconColors) / 2)
        .error "battle status icon colors are out of order"
    .endif
    .2byte ((\red) & 31) | (((\green) & 31) << 5) | (((\blue) & 31) << 10)
.endm

.macro daycare_compatibility_message index:req, text:req
    .if (\index) != ((. - sCompatibilityMessages) / 4)
        .error "daycare compatibility messages are out of order"
    .endif
    .4byte \text
.endm

.macro egg_shard_velocity index:req, x:req, y:req
    .if (\index) != ((. - sEggShardVelocities) / 4)
        .error "egg shard velocities are out of order"
    .endif
    .2byte \x, \y
.endm

	@ M4A/GBA programmable-wave channel: 32 4-bit samples packed two per byte.
	.macro m4a_programmable_wave b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15
	.byte \b0, \b1, \b2, \b3, \b4, \b5, \b6, \b7, \b8, \b9, \b10, \b11, \b12, \b13, \b14, \b15
	.endm
