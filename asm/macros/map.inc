	.macro map map_id
	.byte \map_id >> 8    @ map group
	.byte \map_id & 0xFF  @ map num
	.endm

	.macro map_script type, address
	.byte \type
	.4byte \address
	.endm

	.macro map_script_2 word1, word2, address
	.2byte \word1
	.2byte \word2
	.4byte \address
	.endm

	.macro object_event index:req, gfx:req, replacement:req, x:req, y:req, elevation:req, movement_type:req, x_radius:req, y_radius:req, trainer_type:req, sight_radius_tree_etc:req, script:req, event_flag:req
	.byte \index, \gfx, \replacement, 0
	.2byte \x
	.2byte \y
	.byte \elevation, \movement_type, ((\y_radius << 4) | \x_radius), 0
    .2byte \trainer_type, \sight_radius_tree_etc
	.4byte \script
	.2byte \event_flag
	.2byte 0
	inc _num_npcs
	.endm

	.macro warp_def x, y, byte, warp, map_id
	.2byte \x, \y
	.byte \byte, \warp
	.byte \map_id & 0xFF  @ map num
	.byte \map_id >> 8    @ map group
	inc _num_warps
	.endm

	.macro coord_event x, y, elevation, trigger, index, script
	.2byte \x, \y
	.byte \elevation, 0
	.2byte \trigger, \index, 0
	.4byte \script
	inc _num_traps
	.endm

	.macro coord_weather_event x, y, elevation, weather
	.2byte \x, \y
	.byte \elevation, 0
	.2byte \weather
	.2byte 0, 0
	.4byte 0
	inc _num_traps
	.endm

	.macro bg_event x, y, elevation, kind, arg6, arg7, arg8
	.2byte \x, \y
	.byte \elevation, \kind
	.2byte 0
	.if \kind < 5
	.4byte \arg6
	.else
	.2byte \arg6
	.byte \arg7, \arg8
	.endif
	inc _num_signs
	.endm

	.macro bg_hidden_item_event x, y, height, item, flag
	bg_event \x, \y, \height, 7, \item, ((\flag) - FLAG_HIDDEN_ITEMS_START), 0
	.endm

	.macro bg_secret_base_event x, y, height, secret_base_id
	bg_event \x, \y, \height, 8, \secret_base_id, 0, 0
	.endm

	.macro map_events npcs, warps, traps, signs
	.byte _num_npcs, _num_warps, _num_traps, _num_signs
	.4byte \npcs, \warps, \traps, \signs
	reset_map_events
	.endm

	.macro reset_map_events
	.set _num_npcs, 0
	.set _num_warps, 0
	.set _num_traps, 0
	.set _num_signs, 0
	.endm

	reset_map_events


	.equiv connection_down, 1
	.equiv connection_up, 2
	.equiv connection_left, 3
	.equiv connection_right, 4
	.equiv connection_dive, 5
	.equiv connection_emerge, 6

	.macro connection direction, offset, map
	.4byte connection_\direction
	.4byte \offset
	map \map
	.space 2
	.endm

	.macro map_header_flags allow_bike:req, allow_escape_rope:req, allow_run:req, show_map_name:req
	.byte ((\show_map_name & 1) << 3) | ((\allow_run & 1) << 2) | ((\allow_escape_rope & 1) << 1) | \allow_bike
	.endm

@ BATCH122_MAP_ID_CONSTANTS_BEGIN
@ Assembler-visible absolute map ids used by semanticized event commands.
.set MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM, 0x1A15
.set MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 0x1A13
.set MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 0x1A12
.set MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 0x1A14
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM, 0x1A18
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 0x1A17
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 0x1A16
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 0x1A22
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_FINAL, 0x1A26
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_NORMAL, 0x1A25
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_WILD_MONS, 0x1A27
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_THREE_PATH_ROOM, 0x1A24
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 0x1A1A
.set MAP_ID_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 0x1A19
.set MAP_ID_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, 0x1A08
.set MAP_ID_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 0x1A06
.set MAP_ID_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 0x1A11
.set MAP_ID_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR, 0x1A10
.set MAP_ID_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 0x1A0F
.set MAP_ID_BATTLE_FRONTIER_OUTSIDE_WEST, 0x1A04
.set MAP_ID_BIRTH_ISLAND_HARBOR, 0x1A3B
.set MAP_ID_CAVE_OF_ORIGIN_ENTRANCE, 0x1825
.set MAP_ID_CONTEST_HALL_BEAUTY, 0x1923
.set MAP_ID_CONTEST_HALL_COOL, 0x1925
.set MAP_ID_CONTEST_HALL_CUTE, 0x1927
.set MAP_ID_CONTEST_HALL_SMART, 0x1926
.set MAP_ID_CONTEST_HALL_TOUGH, 0x1924
.set MAP_ID_EVER_GRANDE_CITY_HALL_OF_FAME, 0x100B
.set MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM, 0x0503
.set MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_CORRIDOR, 0x0502
.set MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 0x0501
.set MAP_ID_FARAWAY_ISLAND_ENTRANCE, 0x1A38
.set MAP_ID_LILYCOVE_CITY, 0x0005
.set MAP_ID_LILYCOVE_CITY_DEPARTMENT_STORE_1F, 0x0D10
.set MAP_ID_LILYCOVE_CITY_DEPARTMENT_STORE_2F, 0x0D11
.set MAP_ID_LILYCOVE_CITY_DEPARTMENT_STORE_3F, 0x0D12
.set MAP_ID_LILYCOVE_CITY_DEPARTMENT_STORE_4F, 0x0D13
.set MAP_ID_LILYCOVE_CITY_DEPARTMENT_STORE_5F, 0x0D14
.set MAP_ID_LILYCOVE_CITY_HARBOR, 0x0D0A
.set MAP_ID_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 0x0D03
.set MAP_ID_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 0x0103
.set MAP_ID_MOSSDEEP_CITY_GYM, 0x0E00
.set MAP_ID_MOSSDEEP_CITY_SPACE_CENTER_1F, 0x0E09
.set MAP_ID_NAVEL_ROCK_HARBOR, 0x1A43
.set MAP_ID_PETALBURG_CITY, 0x0000
.set MAP_ID_PETALBURG_CITY_GYM, 0x0801
.set MAP_ID_ROUTE104, 0x0013
.set MAP_ID_ROUTE121_SAFARI_ZONE_ENTRANCE, 0x1700
.set MAP_ID_RUSTBORO_CITY_DEVON_CORP_3F, 0x0B02
.set MAP_ID_SLATEPORT_CITY, 0x0001
.set MAP_ID_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM, 0x0904
.set MAP_ID_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 0x0903
.set MAP_ID_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 0x0902
.set MAP_ID_SLATEPORT_CITY_HARBOR, 0x0909
.set MAP_ID_SOOTOPOLIS_CITY, 0x0007
.set MAP_ID_SOOTOPOLIS_CITY_GYM_B1F, 0x0F01
.set MAP_ID_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, 0x0F0D
.set MAP_ID_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F, 0x0F0E
.set MAP_ID_SOUTHERN_ISLAND_EXTERIOR, 0x1A09
.set MAP_ID_SS_TIDAL_CORRIDOR, 0x1929
.set MAP_ID_UNDERWATER_SOOTOPOLIS_CITY, 0x1805
.set MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 0x0602
.set MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_CORRIDOR, 0x0601
.set MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 0x0600
@ BATCH122_MAP_ID_CONSTANTS_END
