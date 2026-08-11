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

.macro semantic_tileset is_compressed, is_secondary, tiles, palettes, metatiles, metatile_attributes, callback
    .byte \is_compressed, \is_secondary
    .2byte 0
    .4byte \tiles, \palettes, \metatiles, \metatile_attributes, \callback
.endm

.endif @ SEMANTIC_RAW_STRUCTS_INCLUDED
