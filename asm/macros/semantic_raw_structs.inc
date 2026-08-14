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

.endif @ SEMANTIC_RAW_STRUCTS_INCLUDED
