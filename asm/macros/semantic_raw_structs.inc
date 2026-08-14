@ Exact semantic emitters for structures recovered from JP ROM data.
@ These macros name fields; they are not wrappers around anonymous byte blobs.
.ifndef SEMANTIC_RAW_STRUCTS_INCLUDED
.set SEMANTIC_RAW_STRUCTS_INCLUDED, 1

.macro semantic_object_event local_id, graphics_id, kind, x, y, elevation, movement_type, range_x, range_y, trainer_type, trainer_range, script, flag
    .byte \local_id, \graphics_id, \kind, 0
    .2byte \x, \y
    .byte \elevation, \movement_type
    .byte ((\range_y << 4) | \range_x), 0
    .2byte \trainer_type, \trainer_range
    .4byte \script
    .2byte \flag, 0
.endm

.macro semantic_warp_event x, y, elevation, warp_id, map_num, map_group
    .2byte \x, \y
    .byte \elevation, \warp_id, \map_num, \map_group
.endm

.macro semantic_coord_event x, y, elevation, trigger, index, script
    .2byte \x, \y
    .byte \elevation, 0
    .2byte \trigger, \index, 0
    .4byte \script
.endm

.macro semantic_bg_script_event x, y, elevation, kind, script
    .2byte \x, \y
    .byte \elevation, \kind
    .2byte 0
    .4byte \script
.endm

.macro semantic_bg_hidden_item_event x, y, elevation, item, hidden_item_id
    .2byte \x, \y
    .byte \elevation, 7
    .2byte 0
    .2byte \item, \hidden_item_id
.endm

.macro semantic_bg_secret_base_event x, y, elevation, secret_base_id
    .2byte \x, \y
    .byte \elevation, 8
    .2byte 0
    .4byte \secret_base_id
.endm

.macro semantic_bg_union_event x, y, elevation, kind, payload
    .2byte \x, \y
    .byte \elevation, \kind
    .2byte 0
    .4byte \payload
.endm

.macro semantic_map_events object_count, warp_count, coord_count, bg_count, objects, warps, coords, bg
    .byte \object_count, \warp_count, \coord_count, \bg_count
    .4byte \objects, \warps, \coords, \bg
.endm

.macro semantic_map_header layout, events, scripts, connections, music, layout_id, region, cave, weather, map_type, flags, battle_type
    .4byte \layout, \events, \scripts, \connections
    .2byte \music, \layout_id
    .byte \region, \cave, \weather, \map_type, 0, 0, \flags, \battle_type
.endm

.macro semantic_map_connection direction, offset, map_group, map_num
    .4byte \direction
    .4byte \offset
    .byte \map_group, \map_num
    .2byte 0
.endm

.macro semantic_map_connections count, connections
    .4byte \count, \connections
.endm

.macro rotating_gate_puzzle_gate x:req, y:req, gate_type:req, initial_orientation:req
    .2byte \x, \y
    .byte \gate_type, \initial_orientation
    .2byte 0
.endm

.macro rotating_gate_collision_offset x:req, y:req
    .byte (\x) & 0xFF, (\y) & 0xFF
    .2byte 0
.endm

.macro semantic_tileset is_compressed, is_secondary, tiles, palettes, metatiles, metatile_attributes, callback
    .byte \is_compressed, \is_secondary
    .2byte 0
    .4byte \tiles, \palettes, \metatiles, \metatile_attributes, \callback
.endm


@ struct SpriteSheet { const void *data; u16 size; u16 tag; }
.macro semantic_sprite_sheet data:req, size:req, tag:req
    .4byte \data
    .2byte \size
    .2byte \tag
.endm

@ Battle animation data helpers.
.macro semantic_animcmd_frame frame:req, duration:req
    .2byte \frame
    .2byte \duration
.endm

.macro semantic_animcmd_jump target:req
    .2byte 0xFFFE
    .2byte \target
.endm

.macro semantic_animcmd_end
    .2byte 0xFFFF
    .2byte 0
.endm

.macro semantic_anim_table_entry anim:req
    .4byte \anim
.endm

.macro semantic_affine_animcmd_frame x_scale:req, y_scale:req, rotation:req, duration:req
    .2byte \x_scale
    .2byte \y_scale
    .byte \rotation
    .byte \duration
    .2byte 0
.endm

.macro semantic_affine_animcmd_jump target:req
    .2byte 0x7FFE
    .2byte \target
    .4byte 0
.endm

.macro semantic_affine_animcmd_loop count:req
    .2byte 0x7FFD
    .2byte \count
    .4byte 0
.endm

.macro semantic_affine_anim_table_entry anim:req
    .4byte \anim
.endm

.macro semantic_sprite_template tile_tag:req, palette_tag:req, oam:req, anims:req, images:req, affine_anims:req, callback:req
    .2byte \tile_tag
    .2byte \palette_tag
    .4byte \oam
    .4byte \anims
    .4byte \images
    .4byte \affine_anims
    .4byte \callback
.endm

.macro semantic_subsprite x:req, y:req, shape:req, size:req, tile_offset:req, priority:req
    .byte \x
    .byte \y
    .2byte ((\shape) & 3) | (((\size) & 3) << 2) | (((\tile_offset) & 0x3FF) << 4) | (((\priority) & 3) << 14)
.endm


@ struct UCoords8 as emitted by the JP build (u8 x, u8 y, 2-byte ABI padding).
.macro semantic_ucoords8 x:req, y:req
    .byte \x, \y
    .2byte 0
.endm

@ struct MonCoords as emitted by the JP build.
@ size packs width/8 in the high nibble and height/8 in the low nibble.
.macro semantic_mon_coords width:req, height:req, y_offset:req
    .byte (((\width) / 8) << 4) | ((\height) / 8)
    .byte \y_offset
    .2byte 0
.endm

@ struct FacilityMon as emitted by the JP build.
@ u16 species; u16 moves[4]; u8 itemTableId; u8 evSpread; u8 nature;
@ The original ABI contributes 3 trailing padding bytes (16-byte stride).
.macro semantic_facility_mon species:req, move1:req, move2:req, move3:req, move4:req, item_table_id:req, ev_spread:req, nature:req
    .2byte \species
    .2byte \move1, \move2, \move3, \move4
    .byte \item_table_id, \ev_spread, \nature
    .byte 0, 0, 0
.endm


@ struct BattleFrontierTrainer as emitted by the JP build (0x34-byte stride).
@ u8 facilityClass; u8 filler[3]; u8 trainerName[8];
@ u16 speechBefore[6], speechWin[6], speechLose[6]; const u16 *monSet;
.macro semantic_battle_frontier_trainer facility:req, name_lo:req, name_hi:req, before0:req, before1:req, before2:req, before3:req, before4:req, before5:req, win0:req, win1:req, win2:req, win3:req, win4:req, win5:req, lose0:req, lose1:req, lose2:req, lose3:req, lose4:req, lose5:req, mon_set:req
    .byte \facility, 0, 0, 0
    .4byte \name_lo, \name_hi
    .2byte \before0, \before1, \before2, \before3, \before4, \before5
    .2byte \win0, \win1, \win2, \win3, \win4, \win5
    .2byte \lose0, \lose1, \lose2, \lose3, \lose4, \lose5
    .4byte \mon_set
.endm
.endif @ SEMANTIC_RAW_STRUCTS_INCLUDED
