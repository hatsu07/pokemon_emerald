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
PetalburgCity_ObjectEvents: @ 0x084FE6DC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1A, 0x00, 16, 18, 0x03, 0x02, 1, 1, 0x0000, 0x0000, PetalburgCity_EventScript_WallysMom, 0x02D8
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x87, 0x00, 15, 10, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x02D6
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x07, 0x00, 8, 22, 0x03, 0x08, 0, 0, 0x0000, 0x0000, PetalburgCity_EventScript_Boy, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x30, 0x00, 20, 10, 0x03, 0x03, 0, 1, 0x0000, 0x0000, PetalburgCity_EventScript_Gentleman, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x19, 0x00, 15, 10, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x033E
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 19, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E0B, 0x040F
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 3, 28, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E18, 0x0410
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x09, 0x00, 12, 15, 0x03, 0x01, 0, 0, 0x0000, 0x0000, PetalburgCity_EventScript_GymBoy, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xDB, 0x00, 13, 12, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x03E3
PetalburgCity_WarpEvents: @ 0x084FE7B4
	@ WarpEvent 0
	semantic_warp_event 10, 19, 0x00, 0x00, MAP_NUM_PETALBURG_CITY_HOUSE1, MAP_GROUP_PETALBURG_CITY_HOUSE1
	@ WarpEvent 1
	semantic_warp_event 7, 5, 0x00, 0x00, MAP_NUM_PETALBURG_CITY_WALLYS_HOUSE, MAP_GROUP_PETALBURG_CITY_WALLYS_HOUSE
	@ WarpEvent 2
	semantic_warp_event 15, 8, 0x00, 0x00, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 3
	semantic_warp_event 20, 16, 0x00, 0x00, MAP_NUM_PETALBURG_CITY_POKEMON_CENTER_1F, MAP_GROUP_PETALBURG_CITY_POKEMON_CENTER_1F
	@ WarpEvent 4
	semantic_warp_event 20, 24, 0x00, 0x00, MAP_NUM_PETALBURG_CITY_HOUSE2, MAP_GROUP_PETALBURG_CITY_HOUSE2
	@ WarpEvent 5
	semantic_warp_event 25, 12, 0x00, 0x00, MAP_NUM_PETALBURG_CITY_MART, MAP_GROUP_PETALBURG_CITY_MART
PetalburgCity_CoordEvents: @ 0x084FE7E4
	@ CoordEvent 0
	semantic_coord_event 8, 10, 0x03, 0x4057, 0x0000, PetalburgCity_EventScript_ShowGymToPlayer0
	@ CoordEvent 1
	semantic_coord_event 8, 11, 0x03, 0x4057, 0x0000, PetalburgCity_EventScript_ShowGymToPlayer1
	@ CoordEvent 2
	semantic_coord_event 8, 12, 0x03, 0x4057, 0x0000, PetalburgCity_EventScript_ShowGymToPlayer2
	@ CoordEvent 3
	semantic_coord_event 8, 13, 0x03, 0x4057, 0x0000, PetalburgCity_EventScript_ShowGymToPlayer3
	@ CoordEvent 4
	semantic_coord_event 4, 10, 0x03, 0x40C9, 0x0000, PetalburgCity_EventScript_Scott0
	@ CoordEvent 5
	semantic_coord_event 4, 11, 0x03, 0x40C9, 0x0000, PetalburgCity_EventScript_Scott1
	@ CoordEvent 6
	semantic_coord_event 4, 12, 0x03, 0x40C9, 0x0000, PetalburgCity_EventScript_Scott2
	@ CoordEvent 7
	semantic_coord_event 4, 13, 0x03, 0x40C9, 0x0000, PetalburgCity_EventScript_Scott3
PetalburgCity_BgEvents: @ 0x084FE864
	@ BgEvent 0
	semantic_bg_script_event 17, 10, 0x00, 0x00, PetalburgCity_EventScript_GymSign
	@ BgEvent 1
	semantic_bg_script_event 26, 12, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 2
	semantic_bg_script_event 21, 16, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 3
	semantic_bg_script_event 17, 16, 0x00, 0x00, PetalburgCity_EventScript_CitySign
	@ BgEvent 4
	semantic_bg_script_event 22, 16, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 5
	semantic_bg_script_event 27, 12, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 6
	semantic_bg_script_event 8, 9, 0x00, 0x00, PetalburgCity_EventScript_WallyHouseSign
	@ BgEvent 7
	semantic_bg_hidden_item_event 11, 29, 0x03, ITEM_RARE_CANDY, 0x005F
PetalburgCity_MapEvents: @ 0x084FE8C4
	@ struct MapEvents
	semantic_map_events 9, 6, 8, 8, PetalburgCity_ObjectEvents, PetalburgCity_WarpEvents, PetalburgCity_CoordEvents, PetalburgCity_BgEvents
SlateportCity_ObjectEvents: @ 0x084FE8D8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x11, 0x00, 21, 11, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC24D, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x13, 0x00, 34, 29, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081DC26A, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0F, 0x00, 5, 13, 0x03, 0x02, 1, 2, 0x0000, 0x0000, EventScript_JP_081DC22C, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x1A, 0x00, 26, 29, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC28B, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x76, 0x00, 31, 27, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC37D, 0x0372
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x1B, 0x00, 5, 43, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC1B6, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x1E, 0x00, 20, 37, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC1D7, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x08, 0x00, 8, 42, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC1F8, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x6E, 0x00, 29, 13, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC6C7, 0x0343
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x44, 0x00, 28, 14, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC6D0, 0x0343
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x2E, 0x00, 28, 13, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC56C, 0x0348
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x31, 0x00, 37, 41, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC359, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x31, 0x00, 28, 46, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081DC362, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x12, 0x00, 9, 50, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081DC36B, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x21, 0x00, 16, 46, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC374, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x27, 0x00, 8, 24, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081DC32F, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x22, 0x00, 15, 31, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC350, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x75, 0x00, 30, 27, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC394, 0x0372
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x75, 0x00, 29, 27, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC3AB, 0x0372
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x53, 0x00, 6, 38, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC50C, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x53, 0x00, 5, 51, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC4DE, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x42, 0x00, 34, 51, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC6D9, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x22, 0x00, 4, 47, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081DC158, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x53, 0x00, 11, 47, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC54C, 0x03B4
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x19, 0x00, 5, 47, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC12F, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x75, 0x00, 22, 27, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC3C2, 0x0372
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x75, 0x00, 23, 27, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC3D9, 0x0372
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x75, 0x00, 24, 27, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC3F0, 0x0372
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x75, 0x00, 21, 26, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC407, 0x0372
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0x75, 0x00, 20, 26, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC41E, 0x0372
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0x75, 0x00, 26, 27, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC435, 0x0372
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x75, 0x00, 28, 27, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC4BE, 0x0372
	@ ObjectEventTemplate 32
	semantic_object_event 0x21, 0x75, 0x00, 25, 27, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_081DC4C7, 0x0372
	@ ObjectEventTemplate 33
	semantic_object_event 0x22, 0x12, 0x00, 11, 37, 0x03, 0x09, 1, 2, 0x0000, 0x0000, EventScript_JP_081DC6E2, 0x0000
	@ ObjectEventTemplate 34
	semantic_object_event 0x23, 0xDB, 0x00, 10, 12, 0x00, 0x08, 1, 2, 0x0000, 0x0000, 0, 0x02ED
SlateportCity_WarpEvents: @ 0x084FEC20
	@ WarpEvent 0
	semantic_warp_event 19, 19, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_POKEMON_CENTER_1F, MAP_GROUP_SLATEPORT_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 13, 26, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_MART, MAP_GROUP_SLATEPORT_CITY_MART
	@ WarpEvent 2
	semantic_warp_event 26, 38, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_STERNS_SHIPYARD_1F, MAP_GROUP_SLATEPORT_CITY_STERNS_SHIPYARD_1F
	@ WarpEvent 3
	semantic_warp_event 10, 12, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_BATTLE_TENT_LOBBY, MAP_GROUP_SLATEPORT_CITY_BATTLE_TENT_LOBBY
	@ WarpEvent 4
	semantic_warp_event 4, 26, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_POKEMON_FAN_CLUB, MAP_GROUP_SLATEPORT_CITY_POKEMON_FAN_CLUB
	@ WarpEvent 5
	semantic_warp_event 30, 26, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_OCEANIC_MUSEUM_1F, MAP_GROUP_SLATEPORT_CITY_OCEANIC_MUSEUM_1F
	@ WarpEvent 6
	semantic_warp_event 5, 19, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_NAME_RATERS_HOUSE, MAP_GROUP_SLATEPORT_CITY_NAME_RATERS_HOUSE
	@ WarpEvent 7
	semantic_warp_event 31, 26, 0x00, 0x01, MAP_NUM_SLATEPORT_CITY_OCEANIC_MUSEUM_1F, MAP_GROUP_SLATEPORT_CITY_OCEANIC_MUSEUM_1F
	@ WarpEvent 8
	semantic_warp_event 28, 12, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_HARBOR, MAP_GROUP_SLATEPORT_CITY_HARBOR
	@ WarpEvent 9
	semantic_warp_event 40, 7, 0x00, 0x02, MAP_NUM_SLATEPORT_CITY_HARBOR, MAP_GROUP_SLATEPORT_CITY_HARBOR
	@ WarpEvent 10
	semantic_warp_event 21, 44, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_HOUSE, MAP_GROUP_SLATEPORT_CITY_HOUSE
SlateportCity_CoordEvents: @ 0x084FEC78
	@ CoordEvent 0
	semantic_coord_event 10, 13, 0x03, 0x40D2, 0x0002, EventScript_JP_081DC950
SlateportCity_BgEvents: @ 0x084FEC88
	@ BgEvent 0
	semantic_bg_script_event 8, 19, 0x00, 0x00, EventScript_JP_081DC326
	@ BgEvent 1
	semantic_bg_script_event 20, 19, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 2
	semantic_bg_script_event 21, 19, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 3
	semantic_bg_script_event 14, 26, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 4
	semantic_bg_script_event 24, 12, 0x00, 0x00, EventScript_JP_081DC308
	@ BgEvent 5
	semantic_bg_script_event 15, 26, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 6
	semantic_bg_script_event 14, 51, 0x00, 0x00, EventScript_JP_081DC2FF
	@ BgEvent 7
	semantic_bg_script_event 26, 26, 0x00, 0x00, EventScript_JP_081DC2ED
	@ BgEvent 8
	semantic_bg_script_event 16, 22, 0x00, 0x00, EventScript_JP_081DC2F6
	@ BgEvent 9
	semantic_bg_script_event 8, 26, 0x00, 0x00, EventScript_JP_081DC2E4
	@ BgEvent 10
	semantic_bg_script_event 7, 13, 0x00, 0x00, EventScript_JP_081DC2AA
	@ BgEvent 11
	semantic_bg_script_event 23, 38, 0x00, 0x00, EventScript_JP_081DC2B3
	@ BgEvent 12
	semantic_bg_script_event 10, 36, 0x00, 0x01, EventScript_JP_081DC9B7
SlateportCity_MapEvents: @ 0x084FED24
	@ struct MapEvents
	semantic_map_events 35, 11, 1, 13, SlateportCity_ObjectEvents, SlateportCity_WarpEvents, SlateportCity_CoordEvents, SlateportCity_BgEvents
MauvilleCity_ObjectEvents: @ 0x084FED38
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0D, 0x00, 29, 16, 0x03, 0x05, 1, 1, 0x0000, 0x0000, EventScript_JP_081DD9EC, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0F, 0x00, 24, 10, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081DDA07, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x27, 0x00, 14, 11, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081DD9F5, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x1A, 0x00, 18, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081DD9FE, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x26, 0x00, 17, 14, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081DDA34, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x87, 0x00, 8, 6, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081DDA8B, 0x0324
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x19, 0x00, 9, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081DDA56, 0x0325
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x7F, 0x00, 29, 9, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081DDD73, 0x0390
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3B, 0x00, 28, 19, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256E25, 0x045C
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x11, 0x00, 13, 7, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0827689A, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xDB, 0x00, 12, 14, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x02FD
MauvilleCity_WarpEvents: @ 0x084FEE40
	@ WarpEvent 0
	semantic_warp_event 8, 5, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY_GYM, MAP_GROUP_MAUVILLE_CITY_GYM
	@ WarpEvent 1
	semantic_warp_event 22, 5, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY_POKEMON_CENTER_1F, MAP_GROUP_MAUVILLE_CITY_POKEMON_CENTER_1F
	@ WarpEvent 2
	semantic_warp_event 35, 5, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY_BIKE_SHOP, MAP_GROUP_MAUVILLE_CITY_BIKE_SHOP
	@ WarpEvent 3
	semantic_warp_event 23, 14, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY_MART, MAP_GROUP_MAUVILLE_CITY_MART
	@ WarpEvent 4
	semantic_warp_event 32, 14, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY_HOUSE1, MAP_GROUP_MAUVILLE_CITY_HOUSE1
	@ WarpEvent 5
	semantic_warp_event 8, 13, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY_GAME_CORNER, MAP_GROUP_MAUVILLE_CITY_GAME_CORNER
	@ WarpEvent 6
	semantic_warp_event 19, 14, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY_HOUSE2, MAP_GROUP_MAUVILLE_CITY_HOUSE2
MauvilleCity_BgEvents: @ 0x084FEE78
	@ BgEvent 0
	semantic_bg_script_event 23, 5, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 1
	semantic_bg_script_event 11, 6, 0x03, 0x00, EventScript_JP_081DDA19
	@ BgEvent 2
	semantic_bg_script_event 24, 14, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 3
	semantic_bg_script_event 25, 14, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 4
	semantic_bg_script_event 24, 5, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 5
	semantic_bg_script_event 19, 7, 0x00, 0x00, EventScript_JP_081DDA10
	@ BgEvent 6
	semantic_bg_script_event 33, 6, 0x00, 0x00, EventScript_JP_081DDA22
	@ BgEvent 7
	semantic_bg_script_event 11, 15, 0x00, 0x00, EventScript_JP_081DDA2B
MauvilleCity_MapEvents: @ 0x084FEED8
	@ struct MapEvents
	semantic_map_events 11, 7, 0, 8, MauvilleCity_ObjectEvents, MauvilleCity_WarpEvents, 0, MauvilleCity_BgEvents
RustboroCity_ObjectEvents: @ 0x084FEEEC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x22, 0x00, 22, 34, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081DE8C3, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x11, 0x00, 19, 13, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081DE898, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x05, 0x00, 25, 37, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081DE913, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x06, 0x00, 21, 46, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081DE90A, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x09, 0x00, 12, 45, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081DE8EB, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x21, 0x00, 26, 23, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081DE8CC, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x0B, 0x00, 24, 51, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081DE95B, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x0C, 0x00, 25, 51, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081DE971, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x17, 0x00, 30, 10, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081DEB16, 0x02DC
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x75, 0x00, 13, 21, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x02DB
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x74, 0x00, 13, 34, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081DE8B7, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x3B, 0x00, 36, 51, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E32, 0x0411
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x41, 0x00, 19, 27, 0x03, 0x08, 0, 1, 0x0000, 0x0000, EventScript_JP_081DE987, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xF0, 0x00, 16, 50, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081DEDF1, 0x032E
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x2E, 0x00, 11, 15, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x034C
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x07, 0x00, 31, 36, 0x03, 0x01, 0, 1, 0x0000, 0x0000, EventScript_JP_081DF26F, 0x0000
RustboroCity_WarpEvents: @ 0x084FF06C
	@ WarpEvent 0
	semantic_warp_event 27, 19, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_GYM, MAP_GROUP_RUSTBORO_CITY_GYM
	@ WarpEvent 1
	semantic_warp_event 13, 30, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_FLAT1_1F, MAP_GROUP_RUSTBORO_CITY_FLAT1_1F
	@ WarpEvent 2
	semantic_warp_event 16, 45, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_MART, MAP_GROUP_RUSTBORO_CITY_MART
	@ WarpEvent 3
	semantic_warp_event 16, 38, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_POKEMON_CENTER_1F, MAP_GROUP_RUSTBORO_CITY_POKEMON_CENTER_1F
	@ WarpEvent 4
	semantic_warp_event 27, 34, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_POKEMON_SCHOOL, MAP_GROUP_RUSTBORO_CITY_POKEMON_SCHOOL
	@ WarpEvent 5
	semantic_warp_event 11, 15, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_DEVON_CORP_1F, MAP_GROUP_RUSTBORO_CITY_DEVON_CORP_1F
	@ WarpEvent 6
	semantic_warp_event 12, 15, 0x00, 0x01, MAP_NUM_RUSTBORO_CITY_DEVON_CORP_1F, MAP_GROUP_RUSTBORO_CITY_DEVON_CORP_1F
	@ WarpEvent 7
	semantic_warp_event 33, 19, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_HOUSE1, MAP_GROUP_RUSTBORO_CITY_HOUSE1
	@ WarpEvent 8
	semantic_warp_event 9, 38, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_CUTTERS_HOUSE, MAP_GROUP_RUSTBORO_CITY_CUTTERS_HOUSE
	@ WarpEvent 9
	semantic_warp_event 30, 28, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_HOUSE2, MAP_GROUP_RUSTBORO_CITY_HOUSE2
	@ WarpEvent 10
	semantic_warp_event 5, 51, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_FLAT2_1F, MAP_GROUP_RUSTBORO_CITY_FLAT2_1F
	@ WarpEvent 11
	semantic_warp_event 26, 46, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_HOUSE3, MAP_GROUP_RUSTBORO_CITY_HOUSE3
RustboroCity_CoordEvents: @ 0x084FF0CC
	@ CoordEvent 0
	semantic_coord_event 23, 20, 0x03, 0x405A, 0x0001, EventScript_JP_081DE993
	@ CoordEvent 1
	semantic_coord_event 23, 21, 0x03, 0x405A, 0x0001, EventScript_JP_081DE9AA
	@ CoordEvent 2
	semantic_coord_event 23, 22, 0x03, 0x405A, 0x0001, EventScript_JP_081DE9C1
	@ CoordEvent 3
	semantic_coord_event 23, 23, 0x03, 0x405A, 0x0001, EventScript_JP_081DE9D8
	@ CoordEvent 4
	semantic_coord_event 23, 24, 0x03, 0x405A, 0x0001, EventScript_JP_081DE9EF
	@ CoordEvent 5
	semantic_coord_event 30, 9, 0x03, 0x405A, 0x0002, EventScript_JP_081DEB37
	@ CoordEvent 6
	semantic_coord_event 29, 10, 0x03, 0x405A, 0x0002, EventScript_JP_081DEB43
	@ CoordEvent 7
	semantic_coord_event 30, 11, 0x03, 0x405A, 0x0002, EventScript_JP_081DEB4F
	@ CoordEvent 8
	semantic_coord_event 30, 12, 0x03, 0x405A, 0x0002, EventScript_JP_081DEB5B
	@ CoordEvent 9
	semantic_coord_event 30, 9, 0x03, 0x405A, 0x0004, EventScript_JP_081DEC64
	@ CoordEvent 10
	semantic_coord_event 31, 10, 0x03, 0x405A, 0x0004, EventScript_JP_081DEC70
	@ CoordEvent 11
	semantic_coord_event 30, 11, 0x03, 0x405A, 0x0004, EventScript_JP_081DEC7C
	@ CoordEvent 12
	semantic_coord_event 30, 12, 0x03, 0x405A, 0x0004, EventScript_JP_081DEC88
	@ CoordEvent 13
	semantic_coord_event 12, 53, 0x03, 0x405A, 0x0007, EventScript_JP_081DEE2C
	@ CoordEvent 14
	semantic_coord_event 13, 53, 0x03, 0x405A, 0x0007, EventScript_JP_081DEE6C
	@ CoordEvent 15
	semantic_coord_event 14, 53, 0x03, 0x405A, 0x0007, EventScript_JP_081DEEAC
	@ CoordEvent 16
	semantic_coord_event 15, 53, 0x03, 0x405A, 0x0007, EventScript_JP_081DEEEC
	@ CoordEvent 17
	semantic_coord_event 16, 53, 0x03, 0x405A, 0x0007, EventScript_JP_081DEF2C
	@ CoordEvent 18
	semantic_coord_event 17, 53, 0x03, 0x405A, 0x0007, EventScript_JP_081DEF6C
	@ CoordEvent 19
	semantic_coord_event 18, 53, 0x03, 0x405A, 0x0007, EventScript_JP_081DEFAC
	@ CoordEvent 20
	semantic_coord_event 19, 53, 0x03, 0x405A, 0x0007, EventScript_JP_081DEFEC
RustboroCity_BgEvents: @ 0x084FF21C
	@ BgEvent 0
	semantic_bg_script_event 23, 19, 0x00, 0x00, EventScript_JP_081DE92E
	@ BgEvent 1
	semantic_bg_script_event 25, 35, 0x00, 0x00, EventScript_JP_081DE949
	@ BgEvent 2
	semantic_bg_script_event 17, 45, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 3
	semantic_bg_script_event 18, 38, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 4
	semantic_bg_script_event 19, 49, 0x00, 0x00, EventScript_JP_081DE940
	@ BgEvent 5
	semantic_bg_script_event 18, 45, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 6
	semantic_bg_script_event 17, 38, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 7
	semantic_bg_script_event 17, 20, 0x00, 0x00, EventScript_JP_081DE925
	@ BgEvent 8
	semantic_bg_script_event 30, 8, 0x00, 0x00, EventScript_JP_081DE91C
	@ BgEvent 9
	semantic_bg_script_event 12, 38, 0x03, 0x00, EventScript_JP_081DE952
RustboroCity_MapEvents: @ 0x084FF294
	@ struct MapEvents
	semantic_map_events 16, 12, 21, 10, RustboroCity_ObjectEvents, RustboroCity_WarpEvents, RustboroCity_CoordEvents, RustboroCity_BgEvents
FortreeCity_ObjectEvents: @ 0x084FF2A8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x17, 0x00, 31, 3, 0x04, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081DFE00, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x08, 0x00, 32, 16, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081DFE28, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x22, 0x00, 32, 10, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081DFE09, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x07, 0x00, 11, 14, 0x04, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081DFE3A, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x1D, 0x00, 8, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081DFE31, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xBD, 0x00, 9, 16, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081DFE43, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xCC, 0x00, 25, 8, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, EventScript_JP_081DFE5E, 0x03C9
FortreeCity_WarpEvents: @ 0x084FF350
	@ WarpEvent 0
	semantic_warp_event 5, 6, 0x00, 0x00, MAP_NUM_FORTREE_CITY_POKEMON_CENTER_1F, MAP_GROUP_FORTREE_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 10, 3, 0x00, 0x00, MAP_NUM_FORTREE_CITY_HOUSE1, MAP_GROUP_FORTREE_CITY_HOUSE1
	@ WarpEvent 2
	semantic_warp_event 22, 11, 0x00, 0x00, MAP_NUM_FORTREE_CITY_GYM, MAP_GROUP_FORTREE_CITY_GYM
	@ WarpEvent 3
	semantic_warp_event 4, 14, 0x00, 0x00, MAP_NUM_FORTREE_CITY_MART, MAP_GROUP_FORTREE_CITY_MART
	@ WarpEvent 4
	semantic_warp_event 17, 3, 0x00, 0x00, MAP_NUM_FORTREE_CITY_HOUSE2, MAP_GROUP_FORTREE_CITY_HOUSE2
	@ WarpEvent 5
	semantic_warp_event 25, 3, 0x00, 0x00, MAP_NUM_FORTREE_CITY_HOUSE3, MAP_GROUP_FORTREE_CITY_HOUSE3
	@ WarpEvent 6
	semantic_warp_event 32, 2, 0x00, 0x00, MAP_NUM_FORTREE_CITY_HOUSE4, MAP_GROUP_FORTREE_CITY_HOUSE4
	@ WarpEvent 7
	semantic_warp_event 12, 13, 0x00, 0x00, MAP_NUM_FORTREE_CITY_HOUSE5, MAP_GROUP_FORTREE_CITY_HOUSE5
	@ WarpEvent 8
	semantic_warp_event 37, 13, 0x00, 0x00, MAP_NUM_FORTREE_CITY_DECORATION_SHOP, MAP_GROUP_FORTREE_CITY_DECORATION_SHOP
FortreeCity_BgEvents: @ 0x084FF398
	@ BgEvent 0
	semantic_bg_script_event 6, 9, 0x00, 0x00, EventScript_JP_081DFE4C
	@ BgEvent 1
	semantic_bg_script_event 7, 6, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 2
	semantic_bg_script_event 5, 14, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 3
	semantic_bg_script_event 26, 10, 0x00, 0x00, EventScript_JP_081DFE55
	@ BgEvent 4
	semantic_bg_script_event 6, 6, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 5
	semantic_bg_script_event 6, 14, 0x00, 0x01, Common_EventScript_ShowPokemartSign
FortreeCity_MapEvents: @ 0x084FF3E0
	@ struct MapEvents
	semantic_map_events 7, 9, 0, 6, FortreeCity_ObjectEvents, FortreeCity_WarpEvents, 0, FortreeCity_BgEvents
LilycoveCity_ObjectEvents: @ 0x084FF3F4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 32, 20, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081E0288, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x08, 0x00, 15, 18, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081E0260, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x13, 0x00, 28, 28, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081E0257, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0F, 0x00, 21, 15, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081E027F, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x17, 0x00, 16, 9, 0x05, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081E02C6, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x14, 0x00, 35, 27, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081E02A7, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x15, 0x00, 35, 37, 0x05, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081E02CF, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x16, 0x00, 34, 37, 0x05, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081E02D8, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x15, 0x00, 57, 17, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081E02E1, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x75, 0x00, 73, 15, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081E03B2, 0x0354
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x3B, 0x00, 61, 36, 0x05, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E3F, 0x0412
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x75, 0x00, 43, 18, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081E040A, 0x0354
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x75, 0x00, 46, 12, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081E03EF, 0x0354
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x75, 0x00, 45, 12, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081E03F8, 0x0354
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x75, 0x00, 38, 9, 0x05, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081E0401, 0x0354
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x30, 0x00, 50, 7, 0x05, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081E020D, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0xF0, 0x00, 27, 7, 0x05, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081E0413, 0x03CB
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x26, 0x00, 16, 23, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081E0662, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x18, 0x00, 41, 25, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_081E0323, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x17, 0x00, 40, 25, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081E0312, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x31, 0x00, 16, 34, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081E0300, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x11, 0x00, 16, 35, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_081E0309, 0x0000
LilycoveCity_WarpEvents: @ 0x084FF604
	@ WarpEvent 0
	semantic_warp_event 27, 6, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_1F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_1F
	@ WarpEvent 1
	semantic_warp_event 37, 24, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_COVE_LILY_MOTEL_1F, MAP_GROUP_LILYCOVE_CITY_COVE_LILY_MOTEL_1F
	@ WarpEvent 2
	semantic_warp_event 24, 14, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_POKEMON_CENTER_1F, MAP_GROUP_LILYCOVE_CITY_POKEMON_CENTER_1F
	@ WarpEvent 3
	semantic_warp_event 11, 5, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F, MAP_GROUP_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F
	@ WarpEvent 4
	semantic_warp_event 23, 24, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_CONTEST_LOBBY, MAP_GROUP_LILYCOVE_CITY_CONTEST_LOBBY
	@ WarpEvent 5
	semantic_warp_event 39, 14, 0x00, 0x01, MAP_NUM_LILYCOVE_CITY_POKEMON_TRAINER_FAN_CLUB, MAP_GROUP_LILYCOVE_CITY_POKEMON_TRAINER_FAN_CLUB
	@ WarpEvent 6
	semantic_warp_event 70, 5, 0x01, 0x00, MAP_NUM_AQUA_HIDEOUT_1F, MAP_GROUP_AQUA_HIDEOUT_1F
	@ WarpEvent 7
	semantic_warp_event 36, 6, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_MOVE_DELETERS_HOUSE, MAP_GROUP_LILYCOVE_CITY_MOVE_DELETERS_HOUSE
	@ WarpEvent 8
	semantic_warp_event 42, 6, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_HOUSE1, MAP_GROUP_LILYCOVE_CITY_HOUSE1
	@ WarpEvent 9
	semantic_warp_event 55, 15, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_HOUSE2, MAP_GROUP_LILYCOVE_CITY_HOUSE2
	@ WarpEvent 10
	semantic_warp_event 11, 22, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_HOUSE3, MAP_GROUP_LILYCOVE_CITY_HOUSE3
	@ WarpEvent 11
	semantic_warp_event 12, 14, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_HOUSE4, MAP_GROUP_LILYCOVE_CITY_HOUSE4
	@ WarpEvent 12
	semantic_warp_event 12, 32, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_HARBOR, MAP_GROUP_LILYCOVE_CITY_HARBOR
	@ WarpEvent 13
	semantic_warp_event 12, 5, 0x00, 0x01, MAP_NUM_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F, MAP_GROUP_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F
LilycoveCity_BgEvents: @ 0x084FF674
	@ BgEvent 0
	semantic_bg_script_event 19, 7, 0x00, 0x00, EventScript_JP_081E034F
	@ BgEvent 1
	semantic_bg_script_event 25, 14, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 2
	semantic_bg_script_event 29, 7, 0x00, 0x00, EventScript_JP_081E03A0
	@ BgEvent 3
	semantic_bg_script_event 26, 14, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 4
	semantic_bg_script_event 6, 15, 0x00, 0x00, EventScript_JP_081E0334
	@ BgEvent 5
	semantic_bg_script_event 29, 24, 0x00, 0x00, EventScript_JP_081E033D
	@ BgEvent 6
	semantic_bg_script_event 35, 24, 0x00, 0x00, EventScript_JP_081E0346
	@ BgEvent 7
	semantic_bg_script_event 6, 30, 0x03, 0x00, EventScript_JP_081E0379
	@ BgEvent 8
	semantic_bg_script_event 36, 14, 0x00, 0x00, EventScript_JP_081E0397
	@ BgEvent 9
	semantic_bg_script_event 34, 6, 0x00, 0x00, EventScript_JP_081E03A9
	@ BgEvent 10
	semantic_bg_hidden_item_event 36, 31, 0x03, ITEM_HEART_SCALE, 0x001B
	@ BgEvent 11
	semantic_bg_hidden_item_event 61, 7, 0x00, ITEM_PP_UP, 0x002B
	@ BgEvent 12
	semantic_bg_hidden_item_event 64, 31, 0x00, ITEM_POKE_BALL, 0x004B
LilycoveCity_MapEvents: @ 0x084FF710
	@ struct MapEvents
	semantic_map_events 22, 14, 0, 13, LilycoveCity_ObjectEvents, LilycoveCity_WarpEvents, 0, LilycoveCity_BgEvents
MossdeepCity_ObjectEvents: @ 0x084FF724
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 38, 12, 0x05, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081E15A0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 50, 34, 0x05, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081E15C8, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x12, 0x00, 32, 12, 0x05, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081E1581, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x05, 0x00, 26, 21, 0x05, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081E15BF, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x08, 0x00, 45, 18, 0x07, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081E15D1, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 62, 35, 0x05, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E4C, 0x0413
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x13, 0x00, 55, 5, 0x07, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081E16DF, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x10, 0x00, 56, 21, 0x07, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081E15DA, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x09, 0x00, 23, 13, 0x05, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081E16F5, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x77, 0x00, 44, 23, 0x05, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0337
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x77, 0x00, 44, 24, 0x05, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0337
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x77, 0x00, 44, 25, 0x05, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0337
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x77, 0x00, 44, 26, 0x05, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0337
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xC4, 0x00, 45, 25, 0x05, 0x09, 1, 1, 0x0000, 0x0000, 0, 0x0337
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x2C, 0x00, 19, 25, 0x03, 0x40, 3, 3, 0x0000, 0x0000, EventScript_JP_08276B0A, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0xDB, 0x00, 61, 29, 0x05, 0x11, 0, 0, 0x0000, 0x0000, EventScript_JP_081E1754, 0x0314
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x2C, 0x00, 31, 29, 0x03, 0x40, 3, 3, 0x0000, 0x0000, EventScript_JP_081E174B, 0x0000
MossdeepCity_WarpEvents: @ 0x084FF8BC
	@ WarpEvent 0
	semantic_warp_event 28, 9, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_HOUSE1, MAP_GROUP_MOSSDEEP_CITY_HOUSE1
	@ WarpEvent 1
	semantic_warp_event 38, 9, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 2
	semantic_warp_event 28, 16, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_POKEMON_CENTER_1F, MAP_GROUP_MOSSDEEP_CITY_POKEMON_CENTER_1F
	@ WarpEvent 3
	semantic_warp_event 67, 25, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_HOUSE2, MAP_GROUP_MOSSDEEP_CITY_HOUSE2
	@ WarpEvent 4
	semantic_warp_event 37, 18, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_MART, MAP_GROUP_MOSSDEEP_CITY_MART
	@ WarpEvent 5
	semantic_warp_event 49, 6, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_HOUSE3, MAP_GROUP_MOSSDEEP_CITY_HOUSE3
	@ WarpEvent 6
	semantic_warp_event 19, 10, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_STEVENS_HOUSE, MAP_GROUP_MOSSDEEP_CITY_STEVENS_HOUSE
	@ WarpEvent 7
	semantic_warp_event 18, 16, 0x00, 0x01, MAP_NUM_MOSSDEEP_CITY_HOUSE4, MAP_GROUP_MOSSDEEP_CITY_HOUSE4
	@ WarpEvent 8
	semantic_warp_event 64, 15, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_SPACE_CENTER_1F, MAP_GROUP_MOSSDEEP_CITY_SPACE_CENTER_1F
	@ WarpEvent 9
	semantic_warp_event 36, 24, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_GAME_CORNER_1F, MAP_GROUP_MOSSDEEP_CITY_GAME_CORNER_1F
MossdeepCity_CoordEvents: @ 0x084FF90C
	@ CoordEvent 0
	semantic_coord_event 25, 25, 0x00, 0x4001, 0x0000, EventScript_JP_081E1607
	@ CoordEvent 1
	semantic_coord_event 26, 25, 0x00, 0x4001, 0x0000, EventScript_JP_081E1607
	@ CoordEvent 2
	semantic_coord_event 32, 27, 0x00, 0x4001, 0x0000, EventScript_JP_081E1607
	@ CoordEvent 3
	semantic_coord_event 33, 27, 0x00, 0x4001, 0x0000, EventScript_JP_081E1607
	@ CoordEvent 4
	semantic_coord_event 42, 21, 0x05, 0x405D, 0x0001, EventScript_JP_081E1610
	@ CoordEvent 5
	semantic_coord_event 41, 22, 0x05, 0x405D, 0x0001, EventScript_JP_081E1610
	@ CoordEvent 6
	semantic_coord_event 41, 23, 0x05, 0x405D, 0x0001, EventScript_JP_081E1610
	@ CoordEvent 7
	semantic_coord_event 41, 24, 0x05, 0x405D, 0x0001, EventScript_JP_081E1610
	@ CoordEvent 8
	semantic_coord_event 40, 25, 0x05, 0x405D, 0x0001, EventScript_JP_081E1610
	@ CoordEvent 9
	semantic_coord_event 40, 26, 0x05, 0x405D, 0x0001, EventScript_JP_081E1610
MossdeepCity_BgEvents: @ 0x084FF9AC
	@ BgEvent 0
	semantic_bg_script_event 25, 16, 0x00, 0x00, EventScript_JP_081E15F5
	@ BgEvent 1
	semantic_bg_script_event 34, 9, 0x00, 0x00, EventScript_JP_081E15EC
	@ BgEvent 2
	semantic_bg_script_event 29, 16, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 3
	semantic_bg_script_event 38, 18, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 4
	semantic_bg_script_event 66, 16, 0x00, 0x00, EventScript_JP_081E15FE
	@ BgEvent 5
	semantic_bg_script_event 30, 16, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 6
	semantic_bg_script_event 39, 18, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 7
	semantic_bg_script_event 57, 21, 0x07, 0x00, EventScript_JP_081E15E3
MossdeepCity_MapEvents: @ 0x084FFA0C
	@ struct MapEvents
	semantic_map_events 17, 10, 10, 8, MossdeepCity_ObjectEvents, MossdeepCity_WarpEvents, MossdeepCity_CoordEvents, MossdeepCity_BgEvents
SootopolisCity_ObjectEvents: @ 0x084FFA20
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 31, 18, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081E2527, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1A, 0x00, 47, 33, 0x00, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081E267C, 0x0356
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0A, 0x00, 9, 43, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081E2572, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x05, 0x00, 51, 14, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081E2728, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x07, 0x00, 43, 26, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081E277D, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x13, 0x00, 26, 4, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081E26B1, 0x0347
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x86, 0x00, 20, 36, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081E2800, 0x03CD
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x22, 0x00, 49, 34, 0x03, 0x03, 1, 1, 0x0000, 0x0000, EventScript_JP_081E26D2, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xDE, 0x00, 28, 44, 0x00, 0x50, 1, 1, 0x0000, 0x0000, 0, 0x03E6
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xDD, 0x00, 34, 44, 0x01, 0x4F, 1, 1, 0x0000, 0x0000, 0, 0x03E5
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xCF, 0x00, 31, 41, 0x01, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x03E4
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x27, 0x00, 17, 44, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081E2AAB, 0x0356
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x0E, 0x00, 14, 42, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081E2A75, 0x0356
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x2C, 0x00, 17, 40, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081E2A2D, 0x0356
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x09, 0x00, 19, 37, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081E29F7, 0x0356
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0xC4, 0x00, 29, 33, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081E2B8C, 0x033B
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0xC3, 0x00, 31, 33, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081E2BB9, 0x033A
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x85, 0x00, 31, 18, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081E2AE0, 0x0330
SootopolisCity_WarpEvents: @ 0x084FFBD0
	@ WarpEvent 0
	semantic_warp_event 43, 31, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_POKEMON_CENTER_1F, MAP_GROUP_SOOTOPOLIS_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 17, 29, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_MART, MAP_GROUP_SOOTOPOLIS_CITY_MART
	@ WarpEvent 2
	semantic_warp_event 31, 32, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_GYM_1F, MAP_GROUP_SOOTOPOLIS_CITY_GYM_1F
	@ WarpEvent 3
	semantic_warp_event 31, 16, 0x03, 0x00, MAP_NUM_CAVE_OF_ORIGIN_ENTRANCE, MAP_GROUP_CAVE_OF_ORIGIN_ENTRANCE
	@ WarpEvent 4
	semantic_warp_event 9, 6, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_HOUSE1, MAP_GROUP_SOOTOPOLIS_CITY_HOUSE1
	@ WarpEvent 5
	semantic_warp_event 45, 6, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_HOUSE2, MAP_GROUP_SOOTOPOLIS_CITY_HOUSE2
	@ WarpEvent 6
	semantic_warp_event 9, 17, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_HOUSE3, MAP_GROUP_SOOTOPOLIS_CITY_HOUSE3
	@ WarpEvent 7
	semantic_warp_event 44, 17, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_HOUSE4, MAP_GROUP_SOOTOPOLIS_CITY_HOUSE4
	@ WarpEvent 8
	semantic_warp_event 9, 26, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_HOUSE5, MAP_GROUP_SOOTOPOLIS_CITY_HOUSE5
	@ WarpEvent 9
	semantic_warp_event 53, 28, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_HOUSE6, MAP_GROUP_SOOTOPOLIS_CITY_HOUSE6
	@ WarpEvent 10
	semantic_warp_event 8, 35, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_HOUSE7, MAP_GROUP_SOOTOPOLIS_CITY_HOUSE7
	@ WarpEvent 11
	semantic_warp_event 48, 25, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_LOTAD_AND_SEEDOT_HOUSE, MAP_GROUP_SOOTOPOLIS_CITY_LOTAD_AND_SEEDOT_HOUSE
	@ WarpEvent 12
	semantic_warp_event 51, 36, 0x00, 0x00, MAP_NUM_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, MAP_GROUP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F
SootopolisCity_BgEvents: @ 0x084FFC38
	@ BgEvent 0
	semantic_bg_script_event 33, 34, 0x03, 0x00, EventScript_JP_081E27E5
	@ BgEvent 1
	semantic_bg_script_event 19, 29, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 2
	semantic_bg_script_event 44, 31, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 3
	semantic_bg_script_event 45, 31, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 4
	semantic_bg_script_event 18, 29, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 5
	semantic_bg_script_event 41, 37, 0x00, 0x00, EventScript_JP_081E27EE
SootopolisCity_MapEvents: @ 0x084FFC80
	@ struct MapEvents
	semantic_map_events 18, 13, 0, 6, SootopolisCity_ObjectEvents, SootopolisCity_WarpEvents, 0, SootopolisCity_BgEvents
EverGrandeCity_WarpEvents: @ 0x084FFC94
	@ WarpEvent 0
	semantic_warp_event 18, 5, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F
	@ WarpEvent 1
	semantic_warp_event 27, 48, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_POKEMON_CENTER_1F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_CENTER_1F
	@ WarpEvent 2
	semantic_warp_event 18, 41, 0x00, 0x00, MAP_NUM_VICTORY_ROAD_1_F, MAP_GROUP_VICTORY_ROAD_1_F
	@ WarpEvent 3
	semantic_warp_event 18, 27, 0x00, 0x01, MAP_NUM_VICTORY_ROAD_1_F, MAP_GROUP_VICTORY_ROAD_1_F
EverGrandeCity_CoordEvents: @ 0x084FFCB4
	@ CoordEvent 0
	semantic_coord_event 17, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 1
	semantic_coord_event 16, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 2
	semantic_coord_event 18, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 3
	semantic_coord_event 19, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 4
	semantic_coord_event 20, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 5
	semantic_coord_event 21, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 6
	semantic_coord_event 22, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 7
	semantic_coord_event 23, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 8
	semantic_coord_event 24, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 9
	semantic_coord_event 25, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
	@ CoordEvent 10
	semantic_coord_event 26, 58, 0x01, 0x4001, 0x0000, EverGrandeCity_EventScript_SetVisitedEverGrande
EverGrandeCity_BgEvents: @ 0x084FFD64
	@ BgEvent 0
	semantic_bg_script_event 19, 43, 0x05, 0x00, EverGrandeCity_EventScript_VictoryRoadSign
	@ BgEvent 1
	semantic_bg_script_event 29, 48, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 2
	semantic_bg_script_event 18, 52, 0x05, 0x00, EverGrandeCity_EventScript_CitySign
	@ BgEvent 3
	semantic_bg_script_event 23, 15, 0x00, 0x00, EverGrandeCity_EventScript_PokemonLeagueSign
	@ BgEvent 4
	semantic_bg_script_event 28, 48, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
EverGrandeCity_MapEvents: @ 0x084FFDA0
	@ struct MapEvents
	semantic_map_events 0, 4, 11, 5, 0, EverGrandeCity_WarpEvents, EverGrandeCity_CoordEvents, EverGrandeCity_BgEvents
LittlerootTown_ObjectEvents: @ 0x084FFDB4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x06, 0x00, 16, 10, 0x03, 0x02, 1, 2, 0x0000, 0x0000, LittlerootTown_EventScript_Twin, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x11, 0x00, 12, 13, 0x03, 0x02, 2, 1, 0x0000, 0x0000, LittlerootTown_EventScript_FatMan, 0x0364
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x09, 0x00, 14, 17, 0x03, 0x02, 2, 1, 0x0000, 0x0000, LittlerootTown_EventScript_Boy, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xD7, 0x00, 5, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, LittlerootTown_EventScript_Mom, 0x02F0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x5E, 0x00, 2, 10, 0x04, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x02F9
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x5E, 0x00, 11, 10, 0x04, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x02FA
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF0, 0x00, 13, 10, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x031A
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x40, 0x00, 14, 10, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x031B
LittlerootTown_WarpEvents: @ 0x084FFE74
	@ WarpEvent 0
	semantic_warp_event 14, 8, 0x00, 0x01, MAP_NUM_LITTLEROOT_TOWN_MAYS_HOUSE_1F, MAP_GROUP_LITTLEROOT_TOWN_MAYS_HOUSE_1F
	@ WarpEvent 1
	semantic_warp_event 5, 8, 0x00, 0x01, MAP_NUM_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, MAP_GROUP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F
	@ WarpEvent 2
	semantic_warp_event 7, 16, 0x00, 0x00, MAP_NUM_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, MAP_GROUP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB
LittlerootTown_CoordEvents: @ 0x084FFE8C
	@ CoordEvent 0
	semantic_coord_event 10, 1, 0x03, 0x4050, 0x0000, LittlerootTown_EventScript_NeedPokemonTriggerLeft
	@ CoordEvent 1
	semantic_coord_event 11, 1, 0x03, 0x4050, 0x0000, LittlerootTown_EventScript_NeedPokemonTriggerRight
	@ CoordEvent 2
	semantic_coord_event 11, 1, 0x03, 0x4050, 0x0001, LittlerootTown_EventScript_GoSaveBirchTrigger
	@ CoordEvent 3
	semantic_coord_event 8, 9, 0x03, 0x4050, 0x0003, LittlerootTown_EventScript_GiveRunningShoesTrigger4
	@ CoordEvent 4
	semantic_coord_event 9, 9, 0x03, 0x4050, 0x0003, LittlerootTown_EventScript_GiveRunningShoesTrigger5
	@ CoordEvent 5
	semantic_coord_event 10, 9, 0x03, 0x4050, 0x0003, LittlerootTown_EventScript_GiveRunningShoesTrigger2
	@ CoordEvent 6
	semantic_coord_event 11, 9, 0x03, 0x4050, 0x0003, LittlerootTown_EventScript_GiveRunningShoesTrigger3
	@ CoordEvent 7
	semantic_coord_event 10, 2, 0x03, 0x4050, 0x0003, LittlerootTown_EventScript_GiveRunningShoesTrigger0
	@ CoordEvent 8
	semantic_coord_event 11, 2, 0x03, 0x4050, 0x0003, LittlerootTown_EventScript_GiveRunningShoesTrigger1
LittlerootTown_BgEvents: @ 0x084FFF1C
	@ BgEvent 0
	semantic_bg_script_event 15, 13, 0x00, 0x00, LittlerootTown_EventScript_TownSign
	@ BgEvent 1
	semantic_bg_script_event 6, 17, 0x00, 0x00, LittlerootTown_EventScript_BirchsLabSign
	@ BgEvent 2
	semantic_bg_script_event 7, 8, 0x03, 0x00, LittlerootTown_EventScript_BrendansHouseSign
	@ BgEvent 3
	semantic_bg_script_event 12, 8, 0x03, 0x00, LittlerootTown_EventScript_MaysHouseSign
LittlerootTown_MapEvents: @ 0x084FFF4C
	@ struct MapEvents
	semantic_map_events 8, 3, 9, 4, LittlerootTown_ObjectEvents, LittlerootTown_WarpEvents, LittlerootTown_CoordEvents, LittlerootTown_BgEvents
OldaleTown_ObjectEvents: @ 0x084FFF60
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0E, 0x00, 16, 11, 0x03, 0x09, 0, 0, 0x0000, 0x0000, OldaleTown_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x53, 0x00, 13, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, OldaleTown_EventScript_MartEmployee, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x27, 0x00, 8, 9, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, OldaleTown_EventScript_FootprintsMan, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF0, 0x00, 11, 19, 0x03, 0x07, 1, 1, 0x0000, 0x0000, OldaleTown_EventScript_Rival, 0x03D3
OldaleTown_WarpEvents: @ 0x084FFFC0
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x00, MAP_NUM_OLDALE_TOWN_HOUSE1, MAP_GROUP_OLDALE_TOWN_HOUSE1
	@ WarpEvent 1
	semantic_warp_event 15, 16, 0x00, 0x00, MAP_NUM_OLDALE_TOWN_HOUSE2, MAP_GROUP_OLDALE_TOWN_HOUSE2
	@ WarpEvent 2
	semantic_warp_event 6, 16, 0x00, 0x00, MAP_NUM_OLDALE_TOWN_POKEMON_CENTER_1F, MAP_GROUP_OLDALE_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 3
	semantic_warp_event 14, 6, 0x00, 0x00, MAP_NUM_OLDALE_TOWN_MART, MAP_GROUP_OLDALE_TOWN_MART
OldaleTown_CoordEvents: @ 0x084FFFE0
	@ CoordEvent 0
	semantic_coord_event 0, 10, 0x03, 0x4051, 0x0000, OldaleTown_EventScript_BlockedPath
	@ CoordEvent 1
	semantic_coord_event 8, 19, 0x03, 0x40C7, 0x0001, OldaleTown_EventScript_RivalTrigger1
	@ CoordEvent 2
	semantic_coord_event 9, 19, 0x03, 0x40C7, 0x0001, OldaleTown_EventScript_RivalTrigger2
	@ CoordEvent 3
	semantic_coord_event 10, 19, 0x03, 0x40C7, 0x0001, OldaleTown_EventScript_RivalTrigger3
OldaleTown_BgEvents: @ 0x08500020
	@ BgEvent 0
	semantic_bg_script_event 11, 9, 0x00, 0x00, OldaleTown_EventScript_TownSign
	@ BgEvent 1
	semantic_bg_script_event 7, 16, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 2
	semantic_bg_script_event 15, 6, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 3
	semantic_bg_script_event 8, 16, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 4
	semantic_bg_script_event 16, 6, 0x00, 0x01, Common_EventScript_ShowPokemartSign
OldaleTown_MapEvents: @ 0x0850005C
	@ struct MapEvents
	semantic_map_events 4, 4, 4, 5, OldaleTown_ObjectEvents, OldaleTown_WarpEvents, OldaleTown_CoordEvents, OldaleTown_BgEvents
DewfordTown_ObjectEvents: @ 0x08500070
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 7, 12, 0x03, 0x05, 1, 0, 0x0000, 0x0000, DewfordTown_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 12, 9, 0x03, 0x09, 0, 1, 0x0000, 0x0003, DewfordTown_EventScript_Briney, 0x02E4
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x32, 0x00, 12, 14, 0x03, 0x05, 1, 0, 0x0000, 0x0000, DewfordTown_EventScript_OldRodFisherman, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x58, 0x00, 12, 8, 0x01, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x02E7
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x07, 0x00, 1, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, DewfordTown_EventScript_TrendyPhraseBoy, 0x0000
DewfordTown_WarpEvents: @ 0x085000E8
	@ WarpEvent 0
	semantic_warp_event 3, 3, 0x00, 0x00, MAP_NUM_DEWFORD_TOWN_HALL, MAP_GROUP_DEWFORD_TOWN_HALL
	@ WarpEvent 1
	semantic_warp_event 2, 10, 0x00, 0x00, MAP_NUM_DEWFORD_TOWN_POKEMON_CENTER_1F, MAP_GROUP_DEWFORD_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 2
	semantic_warp_event 8, 17, 0x00, 0x00, MAP_NUM_DEWFORD_TOWN_GYM, MAP_GROUP_DEWFORD_TOWN_GYM
	@ WarpEvent 3
	semantic_warp_event 17, 14, 0x00, 0x00, MAP_NUM_DEWFORD_TOWN_HOUSE1, MAP_GROUP_DEWFORD_TOWN_HOUSE1
	@ WarpEvent 4
	semantic_warp_event 8, 8, 0x00, 0x00, MAP_NUM_DEWFORD_TOWN_HOUSE2, MAP_GROUP_DEWFORD_TOWN_HOUSE2
DewfordTown_BgEvents: @ 0x08500110
	@ BgEvent 0
	semantic_bg_script_event 10, 10, 0x00, 0x00, DewfordTown_EventScript_TownSign
	@ BgEvent 1
	semantic_bg_script_event 11, 16, 0x00, 0x00, DewfordTown_EventScript_GymSign
	@ BgEvent 2
	semantic_bg_script_event 4, 10, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 3
	semantic_bg_script_event 3, 10, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 4
	semantic_bg_script_event 2, 4, 0x00, 0x00, DewfordTown_EventScript_HallSign
DewfordTown_MapEvents: @ 0x0850014C
	@ struct MapEvents
	semantic_map_events 5, 5, 0, 5, DewfordTown_ObjectEvents, DewfordTown_WarpEvents, 0, DewfordTown_BgEvents
LavaridgeTown_ObjectEvents: @ 0x08500160
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x16, 0x00, 8, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, LavaridgeTown_EventScript_ExpertF, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 5, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, LavaridgeTown_EventScript_ExpertM, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1D, 0x00, 5, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, LavaridgeTown_EventScript_OldMan, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x06, 0x00, 10, 13, 0x03, 0x03, 0, 2, 0x0000, 0x0000, LavaridgeTown_EventScript_Twin, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x8B, 0x00, 4, 4, 0x03, 0x12, 0, 0, 0x0000, 0x0000, LavaridgeTown_EventScript_HotSpringsOldWoman1, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x8B, 0x00, 5, 4, 0x03, 0x11, 0, 0, 0x0000, 0x0000, LavaridgeTown_EventScript_HotSpringsOldWoman2, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF3, 0x00, 6, 16, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x03A2
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF0, 0x00, 12, 15, 0x00, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x03A1
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x16, 0x00, 4, 7, 0x03, 0x08, 1, 1, 0x0000, 0x0000, LavaridgeTown_EventScript_EggWoman, 0x0000
LavaridgeTown_WarpEvents: @ 0x08500238
	@ WarpEvent 0
	semantic_warp_event 12, 15, 0x00, 0x00, MAP_NUM_LAVARIDGE_TOWN_HERB_SHOP, MAP_GROUP_LAVARIDGE_TOWN_HERB_SHOP
	@ WarpEvent 1
	semantic_warp_event 5, 15, 0x00, 0x00, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 2
	semantic_warp_event 15, 5, 0x00, 0x00, MAP_NUM_LAVARIDGE_TOWN_MART, MAP_GROUP_LAVARIDGE_TOWN_MART
	@ WarpEvent 3
	semantic_warp_event 9, 6, 0x00, 0x00, MAP_NUM_LAVARIDGE_TOWN_POKEMON_CENTER_1F, MAP_GROUP_LAVARIDGE_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 4
	semantic_warp_event 16, 15, 0x00, 0x00, MAP_NUM_LAVARIDGE_TOWN_HOUSE, MAP_GROUP_LAVARIDGE_TOWN_HOUSE
	@ WarpEvent 5
	semantic_warp_event 9, 2, 0x03, 0x03, MAP_NUM_LAVARIDGE_TOWN_POKEMON_CENTER_1F, MAP_GROUP_LAVARIDGE_TOWN_POKEMON_CENTER_1F
LavaridgeTown_CoordEvents: @ 0x08500268
	@ CoordEvent 0
	semantic_coord_event 6, 3, 0x03, 0x0000, 0x0000, LavaridgeTown_EventScript_HotSpringsTrigger
LavaridgeTown_BgEvents: @ 0x08500278
	@ BgEvent 0
	semantic_bg_script_event 14, 16, 0x00, 0x00, LavaridgeTown_EventScript_HerbShopSign
	@ BgEvent 1
	semantic_bg_script_event 7, 15, 0x00, 0x00, LavaridgeTown_EventScript_GymSign
	@ BgEvent 2
	semantic_bg_script_event 17, 5, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 3
	semantic_bg_script_event 13, 8, 0x00, 0x00, LavaridgeTown_EventScript_TownSign
	@ BgEvent 4
	semantic_bg_script_event 10, 6, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 5
	semantic_bg_script_event 16, 5, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 6
	semantic_bg_script_event 11, 6, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 7
	semantic_bg_hidden_item_event 4, 5, 0x03, ITEM_ICE_HEAL, 0x0000
LavaridgeTown_MapEvents: @ 0x085002D8
	@ struct MapEvents
	semantic_map_events 9, 6, 1, 8, LavaridgeTown_ObjectEvents, LavaridgeTown_WarpEvents, LavaridgeTown_CoordEvents, LavaridgeTown_BgEvents
FallarborTown_ObjectEvents: @ 0x085002EC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x08, 0x00, 8, 11, 0x03, 0x08, 0, 1, 0x0000, 0x0000, FallarborTown_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 11, 9, 0x03, 0x05, 1, 0, 0x0000, 0x0000, FallarborTown_EventScript_ExpertM, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x30, 0x00, 11, 15, 0x03, 0x03, 1, 1, 0x0000, 0x0000, FallarborTown_EventScript_Gentleman, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xD6, 0x00, 8, 12, 0x03, 0x01, 1, 0, 0x0000, 0x0000, FallarborTown_EventScript_Azurill, 0x038B
FallarborTown_WarpEvents: @ 0x0850034C
	@ WarpEvent 0
	semantic_warp_event 15, 15, 0x00, 0x00, MAP_NUM_FALLARBOR_TOWN_MART, MAP_GROUP_FALLARBOR_TOWN_MART
	@ WarpEvent 1
	semantic_warp_event 8, 7, 0x00, 0x00, MAP_NUM_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, MAP_GROUP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY
	@ WarpEvent 2
	semantic_warp_event 14, 7, 0x00, 0x00, MAP_NUM_FALLARBOR_TOWN_POKEMON_CENTER_1F, MAP_GROUP_FALLARBOR_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 3
	semantic_warp_event 6, 17, 0x00, 0x00, MAP_NUM_FALLARBOR_TOWN_COZMOS_HOUSE, MAP_GROUP_FALLARBOR_TOWN_COZMOS_HOUSE
	@ WarpEvent 4
	semantic_warp_event 1, 6, 0x00, 0x00, MAP_NUM_FALLARBOR_TOWN_MOVE_RELEARNERS_HOUSE, MAP_GROUP_FALLARBOR_TOWN_MOVE_RELEARNERS_HOUSE
FallarborTown_BgEvents: @ 0x08500374
	@ BgEvent 0
	semantic_bg_script_event 16, 15, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 1
	semantic_bg_script_event 15, 7, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 2
	semantic_bg_script_event 6, 8, 0x00, 0x00, FallarborTown_EventScript_BattleTentSign
	@ BgEvent 3
	semantic_bg_script_event 16, 7, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 4
	semantic_bg_script_event 10, 11, 0x00, 0x00, FallarborTown_EventScript_TownSign
	@ BgEvent 5
	semantic_bg_script_event 17, 15, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 6
	semantic_bg_script_event 3, 7, 0x00, 0x00, FallarborTown_EventScript_MoveTutorSign
	@ BgEvent 7
	semantic_bg_hidden_item_event 2, 15, 0x03, ITEM_NUGGET, 0x001C
FallarborTown_MapEvents: @ 0x085003D4
	@ struct MapEvents
	semantic_map_events 4, 5, 0, 8, FallarborTown_ObjectEvents, FallarborTown_WarpEvents, 0, FallarborTown_BgEvents
VerdanturfTown_ObjectEvents: @ 0x085003E8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x17, 0x00, 4, 17, 0x03, 0x05, 1, 0, 0x0000, 0x0000, VerdanturfTown_EventScript_Man, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x06, 0x00, 9, 2, 0x03, 0x09, 1, 0, 0x0000, 0x0000, VerdanturfTown_EventScript_Twin, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x07, 0x00, 7, 11, 0x03, 0x03, 0, 1, 0x0000, 0x0000, VerdanturfTown_EventScript_Boy, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x1F, 0x00, 7, 6, 0x03, 0x05, 1, 0, 0x0000, 0x0000, VerdanturfTown_EventScript_Camper, 0x0000
VerdanturfTown_WarpEvents: @ 0x08500448
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x00, MAP_NUM_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, MAP_GROUP_VERDANTURF_TOWN_BATTLE_TENT_LOBBY
	@ WarpEvent 1
	semantic_warp_event 12, 3, 0x00, 0x00, MAP_NUM_VERDANTURF_TOWN_MART, MAP_GROUP_VERDANTURF_TOWN_MART
	@ WarpEvent 2
	semantic_warp_event 16, 3, 0x00, 0x00, MAP_NUM_VERDANTURF_TOWN_POKEMON_CENTER_1F, MAP_GROUP_VERDANTURF_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 3
	semantic_warp_event 10, 14, 0x00, 0x00, MAP_NUM_VERDANTURF_TOWN_WANDAS_HOUSE, MAP_GROUP_VERDANTURF_TOWN_WANDAS_HOUSE
	@ WarpEvent 4
	semantic_warp_event 8, 1, 0x00, 0x01, MAP_NUM_RUSTURF_TUNNEL, MAP_GROUP_RUSTURF_TUNNEL
	@ WarpEvent 5
	semantic_warp_event 1, 14, 0x00, 0x00, MAP_NUM_VERDANTURF_TOWN_FRIENDSHIP_RATERS_HOUSE, MAP_GROUP_VERDANTURF_TOWN_FRIENDSHIP_RATERS_HOUSE
	@ WarpEvent 6
	semantic_warp_event 17, 15, 0x00, 0x00, MAP_NUM_VERDANTURF_TOWN_HOUSE, MAP_GROUP_VERDANTURF_TOWN_HOUSE
VerdanturfTown_BgEvents: @ 0x08500480
	@ BgEvent 0
	semantic_bg_script_event 14, 3, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 1
	semantic_bg_script_event 14, 6, 0x00, 0x00, VerdanturfTown_EventScript_TownSign
	@ BgEvent 2
	semantic_bg_script_event 17, 3, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 3
	semantic_bg_script_event 7, 14, 0x00, 0x00, VerdanturfTown_EventScript_WandasHouseSign
	@ BgEvent 4
	semantic_bg_script_event 13, 3, 0x00, 0x01, Common_EventScript_ShowPokemartSign
	@ BgEvent 5
	semantic_bg_script_event 18, 3, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 6
	semantic_bg_script_event 1, 8, 0x00, 0x00, VerdanturfTown_EventScript_BattleTentSign
	@ BgEvent 7
	semantic_bg_script_event 7, 3, 0x00, 0x00, VerdanturfTown_EventScript_RusturfTunnelSign
VerdanturfTown_MapEvents: @ 0x085004E0
	@ struct MapEvents
	semantic_map_events 4, 7, 0, 8, VerdanturfTown_ObjectEvents, VerdanturfTown_WarpEvents, 0, VerdanturfTown_BgEvents
PacifidlogTown_ObjectEvents: @ 0x085004F4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x08, 0x00, 10, 23, 0x03, 0x09, 0, 0, 0x0000, 0x0000, PacifidlogTown_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x32, 0x00, 11, 14, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, PacifidlogTown_EventScript_Fisherman, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x05, 0x00, 9, 16, 0x03, 0x08, 0, 0, 0x0000, 0x0000, PacifidlogTown_EventScript_NinjaBoy, 0x0000
PacifidlogTown_WarpEvents: @ 0x0850053C
	@ WarpEvent 0
	semantic_warp_event 8, 15, 0x00, 0x00, MAP_NUM_PACIFIDLOG_TOWN_POKEMON_CENTER_1F, MAP_GROUP_PACIFIDLOG_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 16, 13, 0x00, 0x00, MAP_NUM_PACIFIDLOG_TOWN_HOUSE1, MAP_GROUP_PACIFIDLOG_TOWN_HOUSE1
	@ WarpEvent 2
	semantic_warp_event 3, 22, 0x00, 0x00, MAP_NUM_PACIFIDLOG_TOWN_HOUSE2, MAP_GROUP_PACIFIDLOG_TOWN_HOUSE2
	@ WarpEvent 3
	semantic_warp_event 12, 24, 0x00, 0x00, MAP_NUM_PACIFIDLOG_TOWN_HOUSE3, MAP_GROUP_PACIFIDLOG_TOWN_HOUSE3
	@ WarpEvent 4
	semantic_warp_event 2, 12, 0x00, 0x00, MAP_NUM_PACIFIDLOG_TOWN_HOUSE4, MAP_GROUP_PACIFIDLOG_TOWN_HOUSE4
	@ WarpEvent 5
	semantic_warp_event 17, 21, 0x00, 0x00, MAP_NUM_PACIFIDLOG_TOWN_HOUSE5, MAP_GROUP_PACIFIDLOG_TOWN_HOUSE5
PacifidlogTown_BgEvents: @ 0x0850056C
	@ BgEvent 0
	semantic_bg_script_event 9, 15, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 1
	semantic_bg_script_event 7, 16, 0x00, 0x00, PacifidlogTown_EventScript_TownSign
	@ BgEvent 2
	semantic_bg_script_event 10, 15, 0x00, 0x01, Common_EventScript_ShowPokemonCenterSign
PacifidlogTown_MapEvents: @ 0x08500590
	@ struct MapEvents
	semantic_map_events 3, 6, 0, 3, PacifidlogTown_ObjectEvents, PacifidlogTown_WarpEvents, 0, PacifidlogTown_BgEvents
Route101_ObjectEvents: @ 0x085005A4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x23, 0x00, 16, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, Route101_EventScript_Youngster, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x40, 0x00, 9, 13, 0x00, 0x47, 0, 0, 0x0000, 0x0000, 0, 0x02D0
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x61, 0x00, 7, 14, 0x03, 0x01, 0, 0, 0x0000, 0x0000, Route101_EventScript_BirchsBag, 0x02BC
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x62, 0x00, 10, 13, 0x00, 0x46, 0, 0, 0x0000, 0x0000, 0, 0x02EE
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x40, 0x00, 5, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, ProfBirch_EventScript_RatePokedexOrRegister, 0x0381
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x09, 0x00, 2, 13, 0x03, 0x05, 1, 1, 0x0000, 0x0000, Route101_EventScript_Boy, 0x03DF
Route101_CoordEvents: @ 0x08500634
	@ CoordEvent 0
	semantic_coord_event 10, 19, 0x03, 0x4060, 0x0001, Route101_EventScript_StartBirchRescue
	@ CoordEvent 1
	semantic_coord_event 11, 19, 0x03, 0x4060, 0x0001, Route101_EventScript_StartBirchRescue
	@ CoordEvent 2
	semantic_coord_event 10, 18, 0x03, 0x4060, 0x0002, Route101_EventScript_PreventExitSouth
	@ CoordEvent 3
	semantic_coord_event 11, 18, 0x03, 0x4060, 0x0002, Route101_EventScript_PreventExitSouth
	@ CoordEvent 4
	semantic_coord_event 6, 16, 0x03, 0x4060, 0x0002, Route101_EventScript_PreventExitWest
	@ CoordEvent 5
	semantic_coord_event 6, 15, 0x03, 0x4060, 0x0002, Route101_EventScript_PreventExitWest
	@ CoordEvent 6
	semantic_coord_event 6, 17, 0x03, 0x4060, 0x0002, Route101_EventScript_PreventExitWest
	@ CoordEvent 7
	semantic_coord_event 6, 18, 0x03, 0x4060, 0x0002, Route101_EventScript_PreventExitWest
	@ CoordEvent 8
	semantic_coord_event 7, 13, 0x03, 0x4060, 0x0002, Route101_EventScript_PreventExitNorth
Route101_BgEvents: @ 0x085006C4
	@ BgEvent 0
	semantic_bg_script_event 5, 9, 0x00, 0x00, Route101_EventScript_RouteSign
Route101_MapEvents: @ 0x085006D0
	@ struct MapEvents
	semantic_map_events 6, 0, 9, 1, Route101_ObjectEvents, 0, Route101_CoordEvents, Route101_BgEvents
Route102_ObjectEvents: @ 0x085006E4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0B, 0x00, 18, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, Route102_EventScript_LittleBoy, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x23, 0x00, 33, 14, 0x03, 0x08, 0, 0, 0x0001, 0x0003, Route102_EventScript_Calvin, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x24, 0x00, 25, 15, 0x03, 0x07, 0, 0, 0x0001, 0x0002, Route102_EventScript_Rick, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2F, 0x00, 8, 7, 0x03, 0x12, 0, 0, 0x0001, 0x0003, Route102_EventScript_Tiana, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x07, 0x00, 37, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route102_EventScript_Boy, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 11, 15, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route102_EventScript_ItemPotion, 0x03E8
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3C, 0x00, 24, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x0002, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3C, 0x00, 25, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x0001, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x23, 0x00, 19, 4, 0x03, 0x08, 1, 1, 0x0001, 0x0003, Route102_EventScript_Allen, 0x0000
Route102_BgEvents: @ 0x085007BC
	@ BgEvent 0
	semantic_bg_script_event 17, 2, 0x00, 0x00, Route102_EventScript_RouteSignPetalburg
	@ BgEvent 1
	semantic_bg_script_event 40, 9, 0x00, 0x00, Route102_EventScript_RouteSignOldale
Route102_MapEvents: @ 0x085007D4
	@ struct MapEvents
	semantic_map_events 9, 0, 0, 2, Route102_ObjectEvents, 0, 0, Route102_BgEvents
Route103_ObjectEvents: @ 0x085007E8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x21, 0x00, 49, 12, 0x03, 0x09, 0, 0, 0x0000, 0x0000, Route103_EventScript_Man, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 10, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, Route103_EventScript_Rival, 0x02D3
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x14, 0x00, 71, 11, 0x03, 0x12, 0, 0, 0x0001, 0x0003, Route103_EventScript_Daisy, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x06, 0x00, 65, 12, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route103_EventScript_Liv, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x06, 0x00, 64, 12, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route103_EventScript_Amy, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x32, 0x00, 50, 8, 0x03, 0x1A, 0, 1, 0x0001, 0x0003, Route103_EventScript_Andrew, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3C, 0x00, 58, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0005, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3C, 0x00, 59, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0006, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3C, 0x00, 60, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0007, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x07, 0x00, 20, 10, 0x03, 0x02, 1, 2, 0x0000, 0x0000, Route103_EventScript_Boy, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x40, 0x00, 7, 3, 0x03, 0x02, 1, 1, 0x0000, 0x0000, ProfBirch_EventScript_RatePokedexOrRegister, 0x0382
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x19, 0x00, 56, 13, 0x03, 0x0A, 0, 0, 0x0001, 0x0005, Route103_EventScript_Miguel, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x3B, 0x00, 50, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256A3C, 0x045A
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x52, 0x00, 67, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_CutTree, 0x0012
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x52, 0x00, 72, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_CutTree, 0x0013
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x2C, 0x00, 67, 5, 0x03, 0x08, 1, 1, 0x0001, 0x0002, Route103_EventScript_Rhett, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x42, 0x00, 67, 9, 0x03, 0x07, 1, 1, 0x0001, 0x0002, Route103_EventScript_Marcos, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x2B, 0x00, 36, 6, 0x01, 0x1A, 1, 3, 0x0001, 0x0005, Route103_EventScript_Isabelle, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x2A, 0x00, 36, 13, 0x01, 0x19, 1, 3, 0x0001, 0x0005, Route103_EventScript_Pete, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x3B, 0x00, 64, 7, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256A49, 0x0471
Route103_WarpEvents: @ 0x085009C8
	@ WarpEvent 0
	semantic_warp_event 45, 6, 0x00, 0x00, MAP_NUM_ALTERING_CAVE, MAP_GROUP_ALTERING_CAVE
Route103_BgEvents: @ 0x085009D0
	@ BgEvent 0
	semantic_bg_script_event 11, 9, 0x00, 0x00, Route103_EventScript_RouteSign
Route103_MapEvents: @ 0x085009DC
	@ struct MapEvents
	semantic_map_events 20, 1, 0, 1, Route103_ObjectEvents, Route103_WarpEvents, 0, Route103_BgEvents
Route104_ObjectEvents: @ 0x085009F0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x24, 0x00, 15, 60, 0x03, 0x09, 0, 0, 0x0000, 0x0000, Route104_EventScript_BugCatcher, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0A, 0x00, 25, 49, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route104_EventScript_Girl1, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2F, 0x00, 31, 24, 0x03, 0x09, 0, 0, 0x0001, 0x0007, Route104_EventScript_Haley, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x07, 0x00, 27, 63, 0x03, 0x03, 0, 1, 0x0000, 0x0000, Route104_EventScript_Boy1, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x14, 0x00, 30, 50, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route104_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x0E, 0x00, 28, 74, 0x03, 0x07, 0, 0, 0x0000, 0x0000, Route104_EventScript_Girl2, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x58, 0x00, 12, 54, 0x01, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x02E6
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x15, 0x00, 12, 51, 0x04, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x02E2
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x32, 0x00, 29, 8, 0x03, 0x08, 0, 0, 0x0001, 0x0000, Route104_EventScript_Ivan, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3C, 0x00, 34, 6, 0x03, 0x0C, 0, 0, 0x0000, 0x0008, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x3C, 0x00, 35, 6, 0x03, 0x0C, 0, 0, 0x0000, 0x0009, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x3C, 0x00, 36, 6, 0x03, 0x0C, 0, 0, 0x0000, 0x000A, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x3C, 0x00, 22, 41, 0x03, 0x0C, 0, 0, 0x0000, 0x000B, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x3C, 0x00, 23, 41, 0x03, 0x0C, 0, 0, 0x0000, 0x000C, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x3C, 0x00, 24, 41, 0x03, 0x0C, 0, 0, 0x0000, 0x000D, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x16, 0x00, 37, 8, 0x03, 0x09, 1, 1, 0x0000, 0x0000, Route104_EventScript_ExpertF, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x3C, 0x00, 3, 22, 0x03, 0x0C, 0, 0, 0x0000, 0x0003, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x3C, 0x00, 3, 23, 0x03, 0x0C, 0, 0, 0x0000, 0x0004, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x3C, 0x00, 3, 24, 0x03, 0x0C, 0, 0, 0x0000, 0x004B, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x3C, 0x00, 3, 25, 0x03, 0x0C, 0, 0, 0x0000, 0x004C, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x3B, 0x00, 39, 15, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256A56, 0x03EA
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x22, 0x00, 8, 19, 0x03, 0x05, 1, 0, 0x0000, 0x0000, Route104_EventScript_WhiteHerbFlorist, 0x038A
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x06, 0x00, 27, 15, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route104_EventScript_Gina, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x06, 0x00, 28, 15, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route104_EventScript_Mia, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x0F, 0x00, 21, 25, 0x03, 0x17, 0, 0, 0x0001, 0x0003, Route104_EventScript_Winston, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x14, 0x00, 11, 44, 0x03, 0x10, 0, 0, 0x0001, 0x0003, Route104_EventScript_Cindy, 0x0000
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x3B, 0x00, 29, 53, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256A63, 0x0421
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x23, 0x00, 18, 67, 0x03, 0x2E, 5, 6, 0x0001, 0x0002, Route104_EventScript_Billy, 0x0000
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x3B, 0x00, 37, 22, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256A70, 0x045B
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0x52, 0x00, 35, 22, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_CutTree, 0x0011
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0x3B, 0x00, 5, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256A7D, 0x046F
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x09, 0x00, 5, 26, 0x03, 0x01, 1, 1, 0x0000, 0x0000, Route104_EventScript_Boy2, 0x0000
	@ ObjectEventTemplate 32
	semantic_object_event 0x21, 0x32, 0x00, 15, 59, 0x03, 0x09, 0, 0, 0x0001, 0x0000, Route104_EventScript_Darian, 0x0000
	@ ObjectEventTemplate 33
	semantic_object_event 0x22, 0xF0, 0x00, 17, 50, 0x00, 0x01, 1, 1, 0x0000, 0x0000, Route104_EventScript_Rival, 0x02CF
Route104_WarpEvents: @ 0x08500D20
	@ WarpEvent 0
	semantic_warp_event 17, 50, 0x00, 0x00, MAP_NUM_ROUTE104_MR_BRINEYS_HOUSE, MAP_GROUP_ROUTE104_MR_BRINEYS_HOUSE
	@ WarpEvent 1
	semantic_warp_event 5, 18, 0x00, 0x00, MAP_NUM_ROUTE104_PRETTY_PETAL_FLOWER_SHOP, MAP_GROUP_ROUTE104_PRETTY_PETAL_FLOWER_SHOP
	@ WarpEvent 2
	semantic_warp_event 10, 30, 0x03, 0x00, MAP_NUM_PETALBURG_WOODS, MAP_GROUP_PETALBURG_WOODS
	@ WarpEvent 3
	semantic_warp_event 11, 30, 0x03, 0x01, MAP_NUM_PETALBURG_WOODS, MAP_GROUP_PETALBURG_WOODS
	@ WarpEvent 4
	semantic_warp_event 10, 38, 0x03, 0x02, MAP_NUM_PETALBURG_WOODS, MAP_GROUP_PETALBURG_WOODS
	@ WarpEvent 5
	semantic_warp_event 11, 38, 0x03, 0x03, MAP_NUM_PETALBURG_WOODS, MAP_GROUP_PETALBURG_WOODS
	@ WarpEvent 6
	semantic_warp_event 32, 42, 0x03, 0x04, MAP_NUM_PETALBURG_WOODS, MAP_GROUP_PETALBURG_WOODS
	@ WarpEvent 7
	semantic_warp_event 33, 42, 0x03, 0x05, MAP_NUM_PETALBURG_WOODS, MAP_GROUP_PETALBURG_WOODS
Route104_CoordEvents: @ 0x08500D60
	@ CoordEvent 0
	semantic_coord_event 17, 51, 0x03, 0x4063, 0x0001, Route104_EventScript_RivalTrigger
Route104_BgEvents: @ 0x08500D70
	@ BgEvent 0
	semantic_bg_script_event 20, 50, 0x00, 0x00, Route104_EventScript_BrineysCottageSign
	@ BgEvent 1
	semantic_bg_script_event 27, 66, 0x00, 0x00, Route104_EventScript_RouteSignPetalburg
	@ BgEvent 2
	semantic_bg_script_event 23, 5, 0x00, 0x00, Route104_EventScript_RouteSignRustboro
	@ BgEvent 3
	semantic_bg_script_event 7, 20, 0x00, 0x00, Route104_EventScript_FlowerShopSign
	@ BgEvent 4
	semantic_bg_script_event 17, 23, 0x03, 0x00, Route104_EventScript_TrainerTipsDoubleBattles
	@ BgEvent 5
	semantic_bg_hidden_item_event 7, 6, 0x03, ITEM_SUPER_POTION, 0x002C
	@ BgEvent 6
	semantic_bg_hidden_item_event 3, 9, 0x03, ITEM_POKE_BALL, 0x003E
	@ BgEvent 7
	semantic_bg_hidden_item_event 14, 55, 0x03, ITEM_POTION, 0x0025
	@ BgEvent 8
	semantic_bg_hidden_item_event 16, 72, 0x03, ITEM_ANTIDOTE, 0x0055
	@ BgEvent 9
	semantic_bg_hidden_item_event 16, 64, 0x03, ITEM_HEART_SCALE, 0x0058
Route104_MapEvents: @ 0x08500DE8
	@ struct MapEvents
	semantic_map_events 34, 8, 1, 10, Route104_ObjectEvents, Route104_WarpEvents, Route104_CoordEvents, Route104_BgEvents
Route105_ObjectEvents: @ 0x08500DFC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 19, 60, 0x01, 0x0A, 0, 0, 0x0001, 0x0006, Route105_EventScript_Luis, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2A, 0x00, 27, 36, 0x01, 0x1B, 7, 0, 0x0001, 0x0003, Route105_EventScript_Dominik, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2B, 0x00, 8, 45, 0x01, 0x19, 0, 7, 0x0001, 0x0003, Route105_EventScript_Beverly, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2B, 0x00, 19, 9, 0x01, 0x18, 0, 5, 0x0001, 0x0003, Route105_EventScript_Imani, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 8, 73, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256A8A, 0x03EB
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x37, 0x00, 17, 48, 0x03, 0x1A, 0, 7, 0x0001, 0x0003, Route105_EventScript_Foster, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x42, 0x00, 4, 54, 0x03, 0x08, 0, 2, 0x0001, 0x0002, Route105_EventScript_Josue, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x37, 0x00, 4, 58, 0x03, 0x07, 0, 2, 0x0001, 0x0004, Route105_EventScript_Andres, 0x0000
Route105_WarpEvents: @ 0x08500EBC
	@ WarpEvent 0
	semantic_warp_event 9, 20, 0x00, 0x00, MAP_NUM_ISLAND_CAVE, MAP_GROUP_ISLAND_CAVE
Route105_BgEvents: @ 0x08500EC4
	@ BgEvent 0
	semantic_bg_hidden_item_event 15, 68, 0x03, ITEM_HEART_SCALE, 0x0059
	@ BgEvent 1
	semantic_bg_hidden_item_event 5, 56, 0x03, ITEM_BIG_PEARL, 0x006F
Route105_MapEvents: @ 0x08500EDC
	@ struct MapEvents
	semantic_map_events 8, 1, 0, 2, Route105_ObjectEvents, Route105_WarpEvents, 0, Route105_BgEvents
Route106_ObjectEvents: @ 0x08500EF0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 18, 5, 0x01, 0x1B, 4, 0, 0x0001, 0x0003, Route106_EventScript_Douglas, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 29, 10, 0x01, 0x01, 0, 0, 0x0001, 0x0003, Route106_EventScript_Kyla, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x32, 0x00, 51, 14, 0x03, 0x0A, 0, 0, 0x0001, 0x0004, Route106_EventScript_Elliot, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x32, 0x00, 65, 14, 0x03, 0x01, 0, 0, 0x0001, 0x0003, Route106_EventScript_Ned, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 29, 14, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256A97, 0x03EC
Route106_WarpEvents: @ 0x08500F68
	@ WarpEvent 0
	semantic_warp_event 48, 16, 0x00, 0x00, MAP_NUM_GRANITE_CAVE_1_F, MAP_GROUP_GRANITE_CAVE_1_F
Route106_BgEvents: @ 0x08500F70
	@ BgEvent 0
	semantic_bg_hidden_item_event 41, 11, 0x03, ITEM_POKE_BALL, 0x003F
	@ BgEvent 1
	semantic_bg_hidden_item_event 53, 12, 0x00, ITEM_STARDUST, 0x002E
	@ BgEvent 2
	semantic_bg_hidden_item_event 68, 15, 0x03, ITEM_HEART_SCALE, 0x002F
	@ BgEvent 3
	semantic_bg_script_event 59, 13, 0x03, 0x00, Route106_EventScript_TrainerTipsSign
Route106_MapEvents: @ 0x08500FA0
	@ struct MapEvents
	semantic_map_events 5, 1, 0, 4, Route106_ObjectEvents, Route106_WarpEvents, 0, Route106_BgEvents
Route107_ObjectEvents: @ 0x08500FB4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 41, 10, 0x01, 0x18, 1, 1, 0x0001, 0x0003, Route107_EventScript_Darrin, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2A, 0x00, 23, 11, 0x01, 0x34, 6, 2, 0x0001, 0x0002, Route107_EventScript_Tony, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2B, 0x00, 16, 7, 0x01, 0x0D, 0, 0, 0x0001, 0x0005, Route107_EventScript_Denise, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2B, 0x00, 50, 11, 0x01, 0x41, 1, 1, 0x0001, 0x0005, Route107_EventScript_Beth, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2B, 0x00, 33, 4, 0x01, 0x08, 1, 1, 0x0001, 0x0001, Route107_EventScript_Lisa, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xD5, 0x00, 32, 4, 0x01, 0x08, 1, 1, 0x0001, 0x0001, Route107_EventScript_Ray, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2A, 0x00, 50, 5, 0x01, 0x40, 1, 1, 0x0001, 0x0005, Route107_EventScript_Camron, 0x0000
Route107_MapEvents: @ 0x0850105C
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, Route107_ObjectEvents, 0, 0, 0
Route108_ObjectEvents: @ 0x08501070
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 52, 13, 0x01, 0x2D, 3, 3, 0x0001, 0x0003, Route108_EventScript_Jerome, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 35, 12, 0x01, 0x0D, 1, 1, 0x0001, 0x0003, Route108_EventScript_Tara, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2A, 0x00, 13, 13, 0x01, 0x18, 0, 0, 0x0001, 0x0003, Route108_EventScript_Matthew, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2B, 0x00, 8, 7, 0x01, 0x14, 6, 0, 0x0001, 0x0003, Route108_EventScript_Missy, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x22, 0x00, 41, 5, 0x03, 0x0A, 1, 1, 0x0001, 0x0001, Route108_EventScript_Carolina, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x31, 0x00, 43, 5, 0x03, 0x09, 1, 1, 0x0001, 0x0001, Route108_EventScript_Cory, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 42, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256AA4, 0x0473
Route108_WarpEvents: @ 0x08501118
	@ WarpEvent 0
	semantic_warp_event 29, 6, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_DECK, MAP_GROUP_ABANDONED_SHIP_DECK
Route108_BgEvents: @ 0x08501120
	@ BgEvent 0
	semantic_bg_hidden_item_event 38, 14, 0x03, ITEM_RARE_CANDY, 0x0056
Route108_MapEvents: @ 0x0850112C
	@ struct MapEvents
	semantic_map_events 7, 1, 0, 1, Route108_ObjectEvents, Route108_WarpEvents, 0, Route108_BgEvents
Route109_ObjectEvents: @ 0x08501140
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x58, 0x00, 21, 26, 0x01, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x02E8
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 21, 24, 0x03, 0x07, 0, 0, 0x0000, 0x0000, Route109_EventScript_MrBriney, 0x02E5
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2A, 0x00, 12, 36, 0x03, 0x0A, 0, 0, 0x0001, 0x0005, Route109_EventScript_David, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2B, 0x00, 25, 39, 0x01, 0x0F, 0, 0, 0x0001, 0x0005, Route109_EventScript_Alice, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x31, 0x00, 15, 17, 0x04, 0x08, 0, 0, 0x0001, 0x0001, Route109_EventScript_Huey, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x31, 0x00, 24, 13, 0x03, 0x09, 0, 0, 0x0001, 0x0006, Route109_EventScript_Edmond, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x36, 0x00, 19, 10, 0x03, 0x08, 0, 0, 0x0001, 0x0003, Route109_EventScript_Ricky, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x35, 0x00, 22, 7, 0x03, 0x50, 0, 0, 0x0001, 0x0004, Route109_EventScript_Lola, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x0C, 0x00, 11, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route109_EventScript_SeashoreHouseGirl, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3B, 0x00, 27, 46, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256AB1, 0x03ED
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x35, 0x00, 29, 32, 0x03, 0x0D, 0, 0, 0x0001, 0x0003, Route109_EventScript_Gwen, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x35, 0x00, 28, 31, 0x03, 0x11, 0, 0, 0x0001, 0x0003, Route109_EventScript_Austina, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x32, 0x00, 21, 56, 0x00, 0x09, 0, 0, 0x0001, 0x0003, Route109_EventScript_Carter, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x36, 0x00, 24, 18, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, Route109_EventScript_SandCastleBoy, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x35, 0x00, 25, 18, 0x03, 0x09, 1, 1, 0x0000, 0x0000, Route109_EventScript_SoftSandGirl, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x12, 0x00, 30, 32, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Route109_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x1A, 0x00, 8, 41, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route109_EventScript_Mel, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x41, 0x00, 9, 41, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route109_EventScript_Paul, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x1D, 0x00, 33, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, Route109_EventScript_OldMan, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0xD0, 0x00, 32, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, Route109_EventScript_Zigzagoon, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x35, 0x00, 17, 13, 0x03, 0x50, 1, 1, 0x0001, 0x0006, Route109_EventScript_Hailey, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x36, 0x00, 27, 7, 0x03, 0x4F, 1, 1, 0x0001, 0x0004, Route109_EventScript_Chandler, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x3B, 0x00, 25, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256ABE, 0x0474
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x42, 0x00, 17, 56, 0x03, 0x50, 1, 1, 0x0001, 0x0003, Route109_EventScript_Elijah, 0x0000
Route109_WarpEvents: @ 0x08501380
	@ WarpEvent 0
	semantic_warp_event 12, 5, 0x00, 0x00, MAP_NUM_ROUTE109_SEASHORE_HOUSE, MAP_GROUP_ROUTE109_SEASHORE_HOUSE
Route109_BgEvents: @ 0x08501388
	@ BgEvent 0
	semantic_bg_script_event 15, 5, 0x00, 0x00, Route109_EventScript_SeashoreHouseSign
	@ BgEvent 1
	semantic_bg_script_event 29, 10, 0x03, 0x00, Route109_EventScript_TrainerTipsSign
	@ BgEvent 2
	semantic_bg_hidden_item_event 16, 23, 0x03, ITEM_REVIVE, 0x0032
	@ BgEvent 3
	semantic_bg_hidden_item_event 33, 5, 0x03, ITEM_HEART_SCALE, 0x0034
	@ BgEvent 4
	semantic_bg_hidden_item_event 9, 10, 0x03, ITEM_GREAT_BALL, 0x0033
	@ BgEvent 5
	semantic_bg_hidden_item_event 28, 20, 0x03, ITEM_ETHER, 0x0040
	@ BgEvent 6
	semantic_bg_hidden_item_event 13, 16, 0x03, ITEM_HEART_SCALE, 0x005A
	@ BgEvent 7
	semantic_bg_hidden_item_event 8, 42, 0x03, ITEM_HEART_SCALE, 0x005B
Route109_MapEvents: @ 0x085013E8
	@ struct MapEvents
	semantic_map_events 24, 1, 0, 8, Route109_ObjectEvents, Route109_WarpEvents, 0, Route109_BgEvents
Route110_ObjectEvents: @ 0x085013FC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1F, 0x00, 17, 90, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route110_EventScript_Boy2, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x38, 0x00, 29, 79, 0x04, 0x08, 0, 0, 0x0000, 0x0000, Route110_EventScript_CyclingGuy2, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x16, 0x00, 14, 69, 0x03, 0x03, 0, 1, 0x0000, 0x0000, Route110_EventScript_OldWoman, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x38, 0x00, 9, 57, 0x04, 0x02, 1, 1, 0x0000, 0x0000, Route110_EventScript_CyclingGuy1, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x15, 0x00, 10, 11, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route110_EventScript_OldMan, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x39, 0x00, 27, 24, 0x04, 0x02, 1, 3, 0x0000, 0x0000, Route110_EventScript_CyclingGirl1, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x0D, 0x00, 15, 7, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route110_EventScript_Boy1, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x39, 0x00, 16, 73, 0x04, 0x31, 2, 14, 0x0001, 0x0003, Route110_EventScript_Jasmine, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x38, 0x00, 19, 31, 0x04, 0x33, 10, 1, 0x0001, 0x0003, Route110_EventScript_Anthony, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x39, 0x00, 30, 31, 0x04, 0x09, 1, 1, 0x0001, 0x0004, Route110_EventScript_Abigail, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x38, 0x00, 16, 55, 0x04, 0x2D, 4, 4, 0x0001, 0x0003, Route110_EventScript_Benjamin, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x25, 0x00, 3, 39, 0x03, 0x0A, 0, 0, 0x0001, 0x0006, Route110_EventScript_Edward, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x2F, 0x00, 33, 15, 0x03, 0x09, 0, 0, 0x0001, 0x0001, Route110_EventScript_Jaclyn, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x27, 0x00, 34, 40, 0x03, 0x43, 0, 0, 0x0001, 0x0004, Route110_EventScript_Edwin, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x32, 0x00, 10, 19, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route110_EventScript_Dale, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x3C, 0x00, 5, 11, 0x03, 0x0C, 0, 0, 0x0000, 0x0010, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x3C, 0x00, 6, 11, 0x03, 0x0C, 0, 0, 0x0000, 0x0011, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x3C, 0x00, 7, 11, 0x03, 0x0C, 0, 0, 0x0000, 0x0012, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x3B, 0x00, 30, 69, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256AD8, 0x03EF
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x3B, 0x00, 26, 47, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256ACB, 0x03EE
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x38, 0x00, 27, 92, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route110_EventScript_ChallengeGuy, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x75, 0x00, 7, 83, 0x03, 0x07, 0, 0, 0x0000, 0x0000, Route110_EventScript_AquaGrunt1, 0x0384
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x75, 0x00, 8, 83, 0x03, 0x07, 0, 0, 0x0000, 0x0000, Route110_EventScript_AquaGrunt2, 0x0384
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x75, 0x00, 9, 83, 0x03, 0x07, 0, 0, 0x0000, 0x0000, Route110_EventScript_AquaGrunt3, 0x0384
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x75, 0x00, 10, 83, 0x03, 0x07, 0, 0, 0x0000, 0x0000, Route110_EventScript_AquaGrunt4, 0x0384
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x75, 0x00, 8, 82, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0384
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x38, 0x00, 21, 78, 0x04, 0x33, 7, 1, 0x0001, 0x0002, Route110_EventScript_Jacob, 0x0000
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0xF0, 0x00, 34, 54, 0x03, 0x0E, 0, 0, 0x0000, 0x0000, 0, 0x0397
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0xF3, 0x00, 34, 54, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x039A
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0x23, 0x00, 33, 69, 0x03, 0x0E, 0, 0, 0x0001, 0x0003, Route110_EventScript_Timmy, 0x0000
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0x12, 0x00, 10, 76, 0x03, 0x09, 0, 0, 0x0001, 0x0002, Route110_EventScript_Isabel, 0x0000
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x19, 0x00, 7, 76, 0x03, 0x0A, 1, 1, 0x0001, 0x0002, Route110_EventScript_Kaleb, 0x0000
	@ ObjectEventTemplate 32
	semantic_object_event 0x21, 0x39, 0x00, 10, 39, 0x03, 0x09, 1, 1, 0x0001, 0x0006, Route110_EventScript_Alyssa, 0x0000
	@ ObjectEventTemplate 33
	semantic_object_event 0x22, 0x42, 0x00, 36, 40, 0x03, 0x42, 1, 1, 0x0001, 0x0003, Route110_EventScript_Joseph, 0x0000
	@ ObjectEventTemplate 34
	semantic_object_event 0x23, 0x3B, 0x00, 6, 38, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256AE5, 0x0475
	@ ObjectEventTemplate 35
	semantic_object_event 0x24, 0x40, 0x00, 9, 79, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0345
Route110_WarpEvents: @ 0x0850175C
	@ WarpEvent 0
	semantic_warp_event 35, 24, 0x03, 0x00, MAP_NUM_NEW_MAUVILLE_ENTRANCE, MAP_GROUP_NEW_MAUVILLE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 11, 66, 0x00, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 15, 16, 0x00, 0x00, MAP_NUM_ROUTE110_SEASIDE_CYCLING_ROAD_NORTH_ENTRANCE, MAP_GROUP_ROUTE110_SEASIDE_CYCLING_ROAD_NORTH_ENTRANCE
	@ WarpEvent 3
	semantic_warp_event 18, 16, 0x00, 0x02, MAP_NUM_ROUTE110_SEASIDE_CYCLING_ROAD_NORTH_ENTRANCE, MAP_GROUP_ROUTE110_SEASIDE_CYCLING_ROAD_NORTH_ENTRANCE
	@ WarpEvent 4
	semantic_warp_event 16, 88, 0x00, 0x00, MAP_NUM_ROUTE110_SEASIDE_CYCLING_ROAD_SOUTH_ENTRANCE, MAP_GROUP_ROUTE110_SEASIDE_CYCLING_ROAD_SOUTH_ENTRANCE
	@ WarpEvent 5
	semantic_warp_event 19, 88, 0x00, 0x02, MAP_NUM_ROUTE110_SEASIDE_CYCLING_ROAD_SOUTH_ENTRANCE, MAP_GROUP_ROUTE110_SEASIDE_CYCLING_ROAD_SOUTH_ENTRANCE
Route110_CoordEvents: @ 0x0850178C
	@ CoordEvent 0
	semantic_coord_event 28, 92, 0x03, 0x40A9, 0x0002, Route110_EventScript_CyclingChallengeEnd
	@ CoordEvent 1
	semantic_coord_event 29, 92, 0x03, 0x40A9, 0x0002, Route110_EventScript_CyclingChallengeEnd
	@ CoordEvent 2
	semantic_coord_event 33, 56, 0x03, 0x4069, 0x0000, Route110_EventScript_RivalTrigger1
	@ CoordEvent 3
	semantic_coord_event 34, 56, 0x03, 0x4069, 0x0000, Route110_EventScript_RivalTrigger2
	@ CoordEvent 4
	semantic_coord_event 35, 56, 0x03, 0x4069, 0x0000, Route110_EventScript_RivalTrigger3
	@ CoordEvent 5
	semantic_coord_event 7, 85, 0x03, 0x40DA, 0x0001, Route110_EventScript_BirchScene1
	@ CoordEvent 6
	semantic_coord_event 8, 85, 0x03, 0x40DA, 0x0001, Route110_EventScript_BirchScene2
	@ CoordEvent 7
	semantic_coord_event 9, 85, 0x03, 0x40DA, 0x0001, Route110_EventScript_BirchScene3
	@ CoordEvent 8
	semantic_coord_event 10, 85, 0x03, 0x40DA, 0x0001, Route110_EventScript_BirchScene4
Route110_BgEvents: @ 0x0850181C
	@ BgEvent 0
	semantic_bg_script_event 15, 25, 0x00, 0x00, Route110_EventScript_VandalizedSign
	@ BgEvent 1
	semantic_bg_script_event 9, 51, 0x00, 0x00, Route110_EventScript_SeasideParkingSign
	@ BgEvent 2
	semantic_bg_script_event 14, 88, 0x00, 0x00, Route110_EventScript_CyclingRoadSign
	@ BgEvent 3
	semantic_bg_script_event 20, 94, 0x00, 0x00, Route110_EventScript_SlateportCitySign
	@ BgEvent 4
	semantic_bg_script_event 7, 79, 0x00, 0x00, Route110_EventScript_Route103Sign
	@ BgEvent 5
	semantic_bg_script_event 3, 17, 0x00, 0x00, Route110_EventScript_MauvilleCitySign
	@ BgEvent 6
	semantic_bg_secret_base_event 16, 25, 0x00, 0x000000B5
	@ BgEvent 7
	semantic_bg_secret_base_event 17, 25, 0x00, 0x000000BF
	@ BgEvent 8
	semantic_bg_script_event 33, 39, 0x03, 0x00, Route110_EventScript_TrainerTipsPrlzSleep
	@ BgEvent 9
	semantic_bg_script_event 37, 70, 0x03, 0x00, Route110_EventScript_TrainerTipsRegisterItems
	@ BgEvent 10
	semantic_bg_script_event 8, 67, 0x00, 0x00, Route110_EventScript_TrickHouseSign
	@ BgEvent 11
	semantic_bg_script_event 32, 93, 0x00, 0x00, Route110_EventScript_CyclingRoadResultsSign
	@ BgEvent 12
	semantic_bg_hidden_item_event 35, 39, 0x03, ITEM_REVIVE, 0x0036
	@ BgEvent 13
	semantic_bg_hidden_item_event 33, 45, 0x03, ITEM_GREAT_BALL, 0x0035
	@ BgEvent 14
	semantic_bg_hidden_item_event 4, 35, 0x03, ITEM_POKE_BALL, 0x0041
	@ BgEvent 15
	semantic_bg_hidden_item_event 37, 67, 0x03, ITEM_FULL_HEAL, 0x0037
	@ BgEvent 16
	semantic_bg_script_event 13, 16, 0x00, 0x00, Route110_EventScript_CyclingRoadSign
Route110_MapEvents: @ 0x085018E8
	@ struct MapEvents
	semantic_map_events 36, 6, 9, 17, Route110_ObjectEvents, Route110_WarpEvents, Route110_CoordEvents, Route110_BgEvents
Route111_ObjectEvents: @ 0x085018FC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 13, 114, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route111_EventScript_Victor, 0x0300
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 13, 113, 0x00, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0301
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2F, 0x00, 13, 113, 0x00, 0x08, 1, 0, 0x0000, 0x0000, 0, 0x0302
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x16, 0x00, 13, 113, 0x00, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0303
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x20, 0x00, 28, 51, 0x03, 0x11, 0, 0, 0x0001, 0x0003, Route111_EventScript_Heidi, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3C, 0x00, 22, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0013, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3C, 0x00, 23, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0014, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x21, 0x00, 8, 91, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route111_EventScript_Man1, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x1F, 0x00, 29, 37, 0x03, 0x11, 0, 0, 0x0001, 0x0003, Route111_EventScript_Drew, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x37, 0x00, 27, 69, 0x03, 0x32, 2, 2, 0x0001, 0x0002, Route111_EventScript_Dusty, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x1F, 0x00, 21, 47, 0x03, 0x09, 0, 0, 0x0001, 0x0004, Route111_EventScript_Beau, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x20, 0x00, 32, 66, 0x03, 0x18, 0, 0, 0x0001, 0x0003, Route111_EventScript_Becky, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x6E, 0x00, 14, 86, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825420E, 0x031C
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x44, 0x00, 13, 86, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082541EE, 0x031C
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x56, 0x00, 18, 101, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0011
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x56, 0x00, 19, 100, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0012
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x08, 0x00, 23, 8, 0x03, 0x05, 1, 0, 0x0000, 0x0000, Route111_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x3B, 0x00, 33, 104, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256AF2, 0x03F0
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x3C, 0x00, 18, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0050, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x3C, 0x00, 19, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0051, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x44, 0x00, 13, 86, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082542AE, 0x031F
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x6E, 0x00, 14, 86, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082542CE, 0x031F
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x44, 0x00, 13, 86, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825432E, 0x0387
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x6E, 0x00, 14, 86, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825434E, 0x0387
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x3B, 0x00, 12, 54, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256AFF, 0x03F1
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x3B, 0x00, 3, 114, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B0C, 0x03F2
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x52, 0x00, 22, 21, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0013
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x20, 0x00, 10, 82, 0x03, 0x0E, 0, 0, 0x0001, 0x0002, Route111_EventScript_Irene, 0x0000
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x1F, 0x00, 11, 71, 0x03, 0x16, 0, 0, 0x0001, 0x0003, Route111_EventScript_Travis, 0x0000
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0x2C, 0x00, 32, 29, 0x03, 0x1C, 1, 0, 0x0001, 0x0002, Route111_EventScript_Daisuke, 0x0000
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0x22, 0x00, 11, 11, 0x03, 0x07, 4, 0, 0x0001, 0x0004, Route111_EventScript_Brooke, 0x0000
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x21, 0x00, 9, 27, 0x03, 0x11, 0, 0, 0x0001, 0x0003, Route111_EventScript_Wilton, 0x0000
	@ ObjectEventTemplate 32
	semantic_object_event 0x21, 0x07, 0x00, 13, 20, 0x03, 0x07, 1, 1, 0x0000, 0x0000, Route111_EventScript_SecretPowerMan, 0x03C0
	@ ObjectEventTemplate 33
	semantic_object_event 0x22, 0x41, 0x00, 20, 114, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route111_EventScript_Man2, 0x0000
	@ ObjectEventTemplate 34
	semantic_object_event 0x23, 0x1F, 0x00, 26, 132, 0x03, 0x09, 1, 1, 0x0001, 0x0005, Route111_EventScript_Tyron, 0x0000
	@ ObjectEventTemplate 35
	semantic_object_event 0x24, 0x14, 0x00, 20, 132, 0x03, 0x0A, 1, 1, 0x0001, 0x0005, Route111_EventScript_Celina, 0x0000
	@ ObjectEventTemplate 36
	semantic_object_event 0x25, 0x20, 0x00, 19, 121, 0x03, 0x07, 1, 1, 0x0001, 0x0002, Route111_EventScript_Bianca, 0x0000
	@ ObjectEventTemplate 37
	semantic_object_event 0x26, 0x42, 0x00, 16, 119, 0x03, 0x0A, 1, 1, 0x0001, 0x0003, Route111_EventScript_Hayden, 0x0000
	@ ObjectEventTemplate 38
	semantic_object_event 0x27, 0x37, 0x00, 29, 77, 0x03, 0x0E, 1, 1, 0x0001, 0x0007, Route111_EventScript_Bryan, 0x0000
	@ ObjectEventTemplate 39
	semantic_object_event 0x28, 0x20, 0x00, 22, 77, 0x03, 0x0A, 1, 1, 0x0001, 0x0006, Route111_EventScript_Celia, 0x0000
	@ ObjectEventTemplate 40
	semantic_object_event 0x29, 0x1F, 0x00, 37, 77, 0x03, 0x09, 1, 1, 0x0001, 0x0007, Route111_EventScript_Branden, 0x0000
	@ ObjectEventTemplate 41
	semantic_object_event 0x2A, 0x3B, 0x00, 19, 118, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256B19, 0x0476
	@ ObjectEventTemplate 42
	semantic_object_event 0x2B, 0x37, 0x00, 14, 56, 0x03, 0x10, 1, 1, 0x0000, 0x0000, Route111_EventScript_Hiker, 0x0000
	@ ObjectEventTemplate 43
	semantic_object_event 0x2C, 0xC7, 0x00, 20, 53, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x036C
	@ ObjectEventTemplate 44
	semantic_object_event 0x2D, 0xF0, 0x00, 19, 53, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x036B
	@ ObjectEventTemplate 45
	semantic_object_event 0x2E, 0x11, 0x00, 19, 101, 0x03, 0x07, 1, 1, 0x0000, 0x0000, Route111_EventScript_RockSmashTipFatMan, 0x034B
Route111_WarpEvents: @ 0x08501D4C
	@ WarpEvent 0
	semantic_warp_event 13, 113, 0x00, 0x00, MAP_NUM_ROUTE111_WINSTRATE_FAMILYS_HOUSE, MAP_GROUP_ROUTE111_WINSTRATE_FAMILYS_HOUSE
	@ WarpEvent 1
	semantic_warp_event 29, 87, 0x00, 0x00, MAP_NUM_DESERT_RUINS, MAP_GROUP_DESERT_RUINS
	@ WarpEvent 2
	semantic_warp_event 26, 18, 0x00, 0x00, MAP_NUM_ROUTE111_OLD_LADYS_REST_STOP, MAP_GROUP_ROUTE111_OLD_LADYS_REST_STOP
	@ WarpEvent 3
	semantic_warp_event 19, 58, 0x00, 0x00, MAP_NUM_MIRAGE_TOWER_1_F, MAP_GROUP_MIRAGE_TOWER_1_F
	@ WarpEvent 4
	semantic_warp_event 31, 113, 0x00, 0x00, MAP_NUM_TRAINER_HILL_ENTRANCE, MAP_GROUP_TRAINER_HILL_ENTRANCE
Route111_CoordEvents: @ 0x08501D74
	@ CoordEvent 0
	semantic_coord_event 12, 62, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 1
	semantic_coord_event 11, 61, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerDown
	@ CoordEvent 2
	semantic_coord_event 12, 61, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerDown
	@ CoordEvent 3
	semantic_coord_event 13, 61, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerDown
	@ CoordEvent 4
	semantic_coord_event 7, 63, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 5
	semantic_coord_event 12, 44, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerLeft
	@ CoordEvent 6
	semantic_coord_event 13, 43, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerLeft
	@ CoordEvent 7
	semantic_coord_event 14, 42, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerLeft
	@ CoordEvent 8
	semantic_coord_event 16, 40, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerLeft
	@ CoordEvent 9
	semantic_coord_event 14, 61, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerDown
	@ CoordEvent 10
	semantic_coord_event 18, 32, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 11
	semantic_coord_event 17, 31, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 12
	semantic_coord_event 9, 37, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 13
	semantic_coord_event 10, 36, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 14
	semantic_coord_event 17, 39, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerLeft
	@ CoordEvent 15
	semantic_coord_event 18, 38, 0x03, 0x4003, 0x0000, Route111_EventScript_ViciousSandstormTriggerLeft
	@ CoordEvent 16
	semantic_coord_event 8, 64, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 17
	semantic_coord_event 9, 65, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 18
	semantic_coord_event 10, 65, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 19
	semantic_coord_event 11, 66, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 20
	semantic_coord_event 12, 67, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 21
	semantic_coord_event 13, 68, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 22
	semantic_coord_event 14, 69, 0x03, 0x0000, 0x0000, Route111_EventScript_SunTrigger
	@ CoordEvent 23
	semantic_coord_event 10, 61, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 24
	semantic_coord_event 11, 62, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 25
	semantic_coord_event 13, 62, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 26
	semantic_coord_event 14, 62, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 27
	semantic_coord_event 17, 38, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 28
	semantic_coord_event 16, 39, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 29
	semantic_coord_event 15, 40, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 30
	semantic_coord_event 14, 41, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 31
	semantic_coord_event 13, 42, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 32
	semantic_coord_event 12, 43, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
	@ CoordEvent 33
	semantic_coord_event 11, 44, 0x03, 0x0000, 0x0000, Route111_EventScript_SandstormTrigger
Route111_BgEvents: @ 0x08501F94
	@ BgEvent 0
	semantic_bg_script_event 16, 114, 0x00, 0x00, Route111_EventScript_WinstrateHouseSign
	@ BgEvent 1
	semantic_bg_script_event 24, 126, 0x00, 0x00, Route111_EventScript_RouteSignMauville
	@ BgEvent 2
	semantic_bg_script_event 7, 66, 0x00, 0x00, Route111_EventScript_RouteSign112
	@ BgEvent 3
	semantic_bg_script_event 13, 6, 0x00, 0x00, Route111_EventScript_RouteSign113
	@ BgEvent 4
	semantic_bg_secret_base_event 24, 36, 0x00, 0x00000083
	@ BgEvent 5
	semantic_bg_secret_base_event 34, 50, 0x00, 0x0000008D
	@ BgEvent 6
	semantic_bg_secret_base_event 33, 34, 0x00, 0x00000079
	@ BgEvent 7
	semantic_bg_script_event 25, 19, 0x00, 0x00, Route111_EventScript_OldLadysRestStopSign
	@ BgEvent 8
	semantic_bg_secret_base_event 35, 1, 0x00, 0x0000000D
	@ BgEvent 9
	semantic_bg_secret_base_event 35, 31, 0x00, 0x00000099
	@ BgEvent 10
	semantic_bg_hidden_item_event 26, 70, 0x00, ITEM_STARDUST, 0x0002
	@ BgEvent 11
	semantic_bg_secret_base_event 27, 27, 0x03, 0x00000021
	@ BgEvent 12
	semantic_bg_script_event 7, 84, 0x03, 0x00, Route111_EventScript_TrainerTipsSpAtkSpDef
	@ BgEvent 13
	semantic_bg_secret_base_event 14, 19, 0x00, 0x000000A4
	@ BgEvent 14
	semantic_bg_secret_base_event 13, 19, 0x00, 0x000000A1
	@ BgEvent 15
	semantic_bg_hidden_item_event 19, 55, 0x00, ITEM_PROTEIN, 0x0038
	@ BgEvent 16
	semantic_bg_hidden_item_event 35, 66, 0x00, ITEM_RARE_CANDY, 0x0039
	@ BgEvent 17
	semantic_bg_script_event 24, 116, 0x00, 0x00, Route111_EventScript_TrainerHillSign
Route111_MapEvents: @ 0x0850206C
	@ struct MapEvents
	semantic_map_events 46, 5, 34, 18, Route111_ObjectEvents, Route111_WarpEvents, Route111_CoordEvents, Route111_BgEvents
Route112_ObjectEvents: @ 0x08502080
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x77, 0x00, 26, 30, 0x03, 0x07, 1, 1, 0x0000, 0x0000, Route112_EventScript_MagmaGrunts, 0x0333
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x37, 0x00, 24, 34, 0x03, 0x0E, 0, 0, 0x0001, 0x0002, Route112_EventScript_Brice, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1F, 0x00, 29, 49, 0x03, 0x08, 0, 0, 0x0001, 0x0003, Route112_EventScript_Larry, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x20, 0x00, 22, 46, 0x03, 0x17, 0, 0, 0x0001, 0x0003, Route112_EventScript_Carol, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x37, 0x00, 15, 40, 0x03, 0x10, 0, 0, 0x0001, 0x0003, Route112_EventScript_Trent, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x77, 0x00, 27, 30, 0x03, 0x07, 0, 0, 0x0000, 0x0000, Route112_EventScript_MagmaGrunts, 0x0333
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3C, 0x00, 27, 6, 0x00, 0x0C, 0, 0, 0x0000, 0x0018, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3C, 0x00, 28, 6, 0x00, 0x0C, 0, 0, 0x0000, 0x0017, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3C, 0x00, 29, 6, 0x00, 0x0C, 0, 0, 0x0000, 0x0016, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3C, 0x00, 30, 6, 0x03, 0x0C, 0, 0, 0x0000, 0x0015, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x37, 0x00, 8, 50, 0x03, 0x1A, 0, 3, 0x0000, 0x0000, Route112_EventScript_Hiker, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x3B, 0x00, 14, 43, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B26, 0x03F3
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x42, 0x00, 31, 7, 0x03, 0x12, 1, 1, 0x0001, 0x0003, Route112_EventScript_Bryant, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x14, 0x00, 31, 11, 0x03, 0x0F, 1, 1, 0x0001, 0x0003, Route112_EventScript_Shayla, 0x0000
Route112_WarpEvents: @ 0x085021D0
	@ WarpEvent 0
	semantic_warp_event 28, 27, 0x00, 0x00, MAP_NUM_ROUTE112_CABLE_CAR_STATION, MAP_GROUP_ROUTE112_CABLE_CAR_STATION
	@ WarpEvent 1
	semantic_warp_event 29, 27, 0x00, 0x01, MAP_NUM_ROUTE112_CABLE_CAR_STATION, MAP_GROUP_ROUTE112_CABLE_CAR_STATION
	@ WarpEvent 2
	semantic_warp_event 6, 46, 0x03, 0x00, MAP_NUM_JAGGED_PASS, MAP_GROUP_JAGGED_PASS
	@ WarpEvent 3
	semantic_warp_event 7, 46, 0x03, 0x01, MAP_NUM_JAGGED_PASS, MAP_GROUP_JAGGED_PASS
	@ WarpEvent 4
	semantic_warp_event 11, 36, 0x00, 0x00, MAP_NUM_FIERY_PATH, MAP_GROUP_FIERY_PATH
	@ WarpEvent 5
	semantic_warp_event 22, 10, 0x00, 0x01, MAP_NUM_FIERY_PATH, MAP_GROUP_FIERY_PATH
Route112_BgEvents: @ 0x08502200
	@ BgEvent 0
	semantic_bg_script_event 19, 44, 0x03, 0x00, Route112_EventScript_MtChimneySign
	@ BgEvent 1
	semantic_bg_script_event 22, 37, 0x00, 0x00, Route112_EventScript_MtChimneyCableCarSign
	@ BgEvent 2
	semantic_bg_script_event 4, 49, 0x00, 0x00, Route112_EventScript_RouteSignLavaridge
Route112_MapEvents: @ 0x08502224
	@ struct MapEvents
	semantic_map_events 14, 6, 0, 3, Route112_ObjectEvents, Route112_WarpEvents, 0, Route112_BgEvents
Route113_ObjectEvents: @ 0x08502238
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x05, 0x00, 66, 12, 0x03, 0x05, 1, 0, 0x0000, 0x0000, Route113_EventScript_NinjaBoy, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 36, 10, 0x03, 0x03, 0, 1, 0x0000, 0x0000, Route113_EventScript_Gentleman, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x23, 0x00, 62, 8, 0x03, 0x08, 0, 0, 0x0001, 0x0003, Route113_EventScript_Jaylen, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x23, 0x00, 21, 11, 0x03, 0x11, 0, 0, 0x0001, 0x0003, Route113_EventScript_Dillon, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x22, 0x00, 51, 11, 0x03, 0x17, 0, 0, 0x0001, 0x0002, Route113_EventScript_Madeline, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 53, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B33, 0x03F4
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 79, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B40, 0x03F5
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x05, 0x00, 29, 6, 0x03, 0x3F, 0, 0, 0x0003, 0x0001, Route113_EventScript_Lao, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x05, 0x00, 71, 2, 0x03, 0x3F, 0, 0, 0x0003, 0x0001, Route113_EventScript_Lung, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x06, 0x00, 45, 6, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route113_EventScript_Tori, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x06, 0x00, 46, 6, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route113_EventScript_Tia, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x3B, 0x00, 15, 15, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256B4D, 0x0477
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x27, 0x00, 75, 3, 0x03, 0x09, 1, 1, 0x0001, 0x0004, Route113_EventScript_Wyatt, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x1F, 0x00, 71, 4, 0x03, 0x07, 1, 1, 0x0001, 0x0001, Route113_EventScript_Lawrence, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x20, 0x00, 7, 6, 0x03, 0x1A, 1, 3, 0x0001, 0x0006, Route113_EventScript_Sophie, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x42, 0x00, 7, 13, 0x03, 0x19, 1, 3, 0x0001, 0x0006, Route113_EventScript_Coby, 0x0000
Route113_WarpEvents: @ 0x085023B8
	@ WarpEvent 0
	semantic_warp_event 33, 5, 0x00, 0x00, MAP_NUM_ROUTE113_GLASS_WORKSHOP, MAP_GROUP_ROUTE113_GLASS_WORKSHOP
	@ WarpEvent 1
	semantic_warp_event 41, 12, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 88, 5, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
Route113_CoordEvents: @ 0x085023D0
	@ CoordEvent 0
	semantic_coord_event 19, 11, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 1
	semantic_coord_event 19, 10, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 2
	semantic_coord_event 19, 12, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 3
	semantic_coord_event 19, 13, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 4
	semantic_coord_event 86, 9, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 5
	semantic_coord_event 85, 10, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 6
	semantic_coord_event 85, 11, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 7
	semantic_coord_event 14, 10, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 8
	semantic_coord_event 14, 11, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 9
	semantic_coord_event 14, 12, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 10
	semantic_coord_event 14, 13, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 11
	semantic_coord_event 94, 8, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 12
	semantic_coord_event 94, 9, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 13
	semantic_coord_event 94, 10, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 14
	semantic_coord_event 94, 11, 0x00, 0x0002, 0x0000, 0
	@ CoordEvent 15
	semantic_coord_event 19, 14, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 16
	semantic_coord_event 87, 8, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 17
	semantic_coord_event 87, 6, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 18
	semantic_coord_event 87, 7, 0x03, 0x0008, 0x0000, 0
Route113_BgEvents: @ 0x08502500
	@ BgEvent 0
	semantic_bg_script_event 85, 6, 0x00, 0x00, Route113_EventScript_RouteSign111
	@ BgEvent 1
	semantic_bg_script_event 12, 9, 0x00, 0x00, Route113_EventScript_RouteSignFallarbor
	@ BgEvent 2
	semantic_bg_script_event 58, 4, 0x03, 0x00, Route113_EventScript_TrainerTipsRegisterKeyItems
	@ BgEvent 3
	semantic_bg_script_event 31, 5, 0x00, 0x00, Route113_EventScript_GlassWorkshopSign
	@ BgEvent 4
	semantic_bg_secret_base_event 49, 8, 0x03, 0x00000003
	@ BgEvent 5
	semantic_bg_hidden_item_event 66, 3, 0x03, ITEM_ETHER, 0x0003
	@ BgEvent 6
	semantic_bg_hidden_item_event 22, 5, 0x03, ITEM_TM32, 0x001E
	@ BgEvent 7
	semantic_bg_hidden_item_event 73, 3, 0x03, ITEM_NUGGET, 0x0062
Route113_MapEvents: @ 0x08502560
	@ struct MapEvents
	semantic_map_events 16, 3, 19, 8, Route113_ObjectEvents, Route113_WarpEvents, Route113_CoordEvents, Route113_BgEvents
Route114_ObjectEvents: @ 0x08502574
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3C, 0x00, 31, 43, 0x03, 0x0C, 0, 0, 0x0000, 0x004D, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3C, 0x00, 31, 44, 0x03, 0x0C, 0, 0, 0x0000, 0x004E, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x37, 0x00, 15, 65, 0x07, 0x0A, 0, 0, 0x0001, 0x0006, Route114_EventScript_Lenny, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x37, 0x00, 30, 72, 0x05, 0x09, 0, 0, 0x0001, 0x0004, Route114_EventScript_Lucas, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x1F, 0x00, 22, 50, 0x03, 0x0A, 0, 0, 0x0001, 0x0003, Route114_EventScript_Shane, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x20, 0x00, 19, 35, 0x03, 0x01, 0, 0, 0x0001, 0x0003, Route114_EventScript_Nancy, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x27, 0x00, 20, 56, 0x03, 0x07, 0, 0, 0x0001, 0x0003, Route114_EventScript_Steve, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3C, 0x00, 31, 45, 0x03, 0x0C, 0, 0, 0x0000, 0x0044, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3B, 0x00, 7, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B5A, 0x03F6
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3B, 0x00, 11, 37, 0x04, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B67, 0x03F7
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x56, 0x00, 12, 43, 0x04, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0011
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x30, 0x00, 19, 11, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, Route114_EventScript_RoarGentleman, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xDC, 0x00, 19, 12, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, Route114_EventScript_Poochyena, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x41, 0x00, 27, 42, 0x03, 0x03, 0, 1, 0x0000, 0x0000, Route114_EventScript_Man, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x32, 0x00, 25, 6, 0x03, 0x08, 0, 0, 0x0001, 0x0000, Route114_EventScript_Nolan, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x32, 0x00, 19, 26, 0x03, 0x09, 0, 0, 0x0001, 0x0000, Route114_EventScript_Claude, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x42, 0x00, 30, 58, 0x05, 0x17, 0, 0, 0x0001, 0x0003, Route114_EventScript_Bernie, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x56, 0x00, 29, 53, 0x05, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0012
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x56, 0x00, 30, 54, 0x05, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0013
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x56, 0x00, 22, 69, 0x07, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0014
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x56, 0x00, 11, 64, 0x05, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0015
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x2F, 0x00, 24, 44, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route114_EventScript_Ivy, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x2F, 0x00, 23, 44, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route114_EventScript_Tyra, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x20, 0x00, 28, 20, 0x03, 0x07, 1, 1, 0x0001, 0x0003, Route114_EventScript_Charlotte, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x20, 0x00, 26, 72, 0x05, 0x12, 1, 1, 0x0001, 0x0004, Route114_EventScript_Angelina, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x3B, 0x00, 31, 19, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256B74, 0x0488
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x32, 0x00, 28, 16, 0x03, 0x11, 1, 1, 0x0001, 0x0003, Route114_EventScript_Kai, 0x0000
Route114_WarpEvents: @ 0x085027FC
	@ WarpEvent 0
	semantic_warp_event 8, 63, 0x00, 0x00, MAP_NUM_METEOR_FALLS_1_F_1_R, MAP_GROUP_METEOR_FALLS_1_F_1_R
	@ WarpEvent 1
	semantic_warp_event 29, 5, 0x00, 0x00, MAP_NUM_ROUTE114_FOSSIL_MANIACS_HOUSE, MAP_GROUP_ROUTE114_FOSSIL_MANIACS_HOUSE
	@ WarpEvent 2
	semantic_warp_event 27, 36, 0x00, 0x00, MAP_NUM_ROUTE114_LANETTES_HOUSE, MAP_GROUP_ROUTE114_LANETTES_HOUSE
	@ WarpEvent 3
	semantic_warp_event 6, 46, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
	@ WarpEvent 4
	semantic_warp_event 7, 4, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
Route114_BgEvents: @ 0x08502824
	@ BgEvent 0
	semantic_bg_script_event 7, 64, 0x00, 0x00, Route114_EventScript_MeteorFallsSign
	@ BgEvent 1
	semantic_bg_script_event 31, 7, 0x00, 0x00, Route114_EventScript_FossilManiacsHouseSign
	@ BgEvent 2
	semantic_bg_secret_base_event 9, 47, 0x00, 0x00000029
	@ BgEvent 3
	semantic_bg_secret_base_event 30, 51, 0x00, 0x00000033
	@ BgEvent 4
	semantic_bg_secret_base_event 11, 62, 0x00, 0x0000003D
	@ BgEvent 5
	semantic_bg_secret_base_event 19, 70, 0x00, 0x00000047
	@ BgEvent 6
	semantic_bg_secret_base_event 11, 27, 0x00, 0x000000B6
	@ BgEvent 7
	semantic_bg_secret_base_event 12, 27, 0x00, 0x000000C0
	@ BgEvent 8
	semantic_bg_script_event 25, 38, 0x03, 0x00, Route114_EventScript_LanettesHouseSign
	@ BgEvent 9
	semantic_bg_hidden_item_event 20, 57, 0x03, ITEM_CARBOS, 0x0004
	@ BgEvent 10
	semantic_bg_secret_base_event 32, 57, 0x00, 0x00000049
	@ BgEvent 11
	semantic_bg_hidden_item_event 7, 30, 0x03, ITEM_REVIVE, 0x002A
Route114_MapEvents: @ 0x085028B4
	@ struct MapEvents
	semantic_map_events 27, 5, 0, 12, Route114_ObjectEvents, Route114_WarpEvents, 0, Route114_BgEvents
Route115_ObjectEvents: @ 0x085028C8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 18, 68, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route115_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 5, 15, 0x03, 0x0A, 0, 0, 0x0001, 0x0006, Route115_EventScript_Timothy, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2C, 0x00, 27, 53, 0x03, 0x0F, 1, 1, 0x0001, 0x0004, Route115_EventScript_Nob, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3C, 0x00, 12, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0045, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3C, 0x00, 13, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0046, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3C, 0x00, 14, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0047, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x0E, 0x00, 15, 50, 0x03, 0x40, 0, 0, 0x0001, 0x0003, Route115_EventScript_Cyndy, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x2C, 0x00, 19, 15, 0x03, 0x1B, 5, 0, 0x0001, 0x0002, Route115_EventScript_Koichi, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x27, 0x00, 24, 62, 0x03, 0x12, 0, 0, 0x0001, 0x0004, Route115_EventScript_Hector, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3B, 0x00, 20, 60, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B81, 0x03F8
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x3B, 0x00, 18, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B8E, 0x03F9
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x3B, 0x00, 23, 29, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256B9B, 0x03FA
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x3C, 0x00, 31, 64, 0x03, 0x0C, 0, 0, 0x0000, 0x0037, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x3C, 0x00, 31, 65, 0x03, 0x0C, 0, 0, 0x0000, 0x0038, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x56, 0x00, 29, 50, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0011
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x3B, 0x00, 31, 56, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256BA8, 0x045E
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x34, 0x00, 10, 15, 0x03, 0x2E, 3, 3, 0x0001, 0x0002, Route115_EventScript_Kyra, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x05, 0x00, 11, 12, 0x03, 0x39, 1, 1, 0x0001, 0x0003, Route115_EventScript_Jaiden, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x0E, 0x00, 15, 7, 0x03, 0x09, 1, 1, 0x0001, 0x0004, Route115_EventScript_Helene, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x2F, 0x00, 10, 7, 0x03, 0x0A, 1, 1, 0x0001, 0x0004, Route115_EventScript_Alix, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x2F, 0x00, 28, 62, 0x03, 0x09, 1, 1, 0x0001, 0x0004, Route115_EventScript_Marlene, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x3B, 0x00, 26, 67, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256BC2, 0x0489
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x3B, 0x00, 12, 14, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256BB5, 0x0478
Route115_WarpEvents: @ 0x08502AF0
	@ WarpEvent 0
	semantic_warp_event 27, 37, 0x00, 0x01, MAP_NUM_METEOR_FALLS_1_F_1_R, MAP_GROUP_METEOR_FALLS_1_F_1_R
	@ WarpEvent 1
	semantic_warp_event 21, 6, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 36, 10, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
Route115_BgEvents: @ 0x08502B08
	@ BgEvent 0
	semantic_bg_secret_base_event 32, 6, 0x00, 0x00000048
	@ BgEvent 1
	semantic_bg_secret_base_event 21, 18, 0x00, 0x0000003E
	@ BgEvent 2
	semantic_bg_script_event 16, 64, 0x00, 0x00, Route115_EventScript_RouteSignRustboro
	@ BgEvent 3
	semantic_bg_script_event 25, 38, 0x03, 0x00, Route115_EventScript_MeteorFallsSign
	@ BgEvent 4
	semantic_bg_secret_base_event 8, 30, 0x00, 0x00000085
	@ BgEvent 5
	semantic_bg_secret_base_event 32, 39, 0x00, 0x0000002A
	@ BgEvent 6
	semantic_bg_secret_base_event 26, 15, 0x00, 0x00000034
	@ BgEvent 7
	semantic_bg_secret_base_event 23, 8, 0x00, 0x0000002B
	@ BgEvent 8
	semantic_bg_secret_base_event 32, 46, 0x00, 0x00000035
	@ BgEvent 9
	semantic_bg_secret_base_event 7, 20, 0x00, 0x000000AE
	@ BgEvent 10
	semantic_bg_secret_base_event 8, 20, 0x00, 0x000000B7
	@ BgEvent 11
	semantic_bg_secret_base_event 25, 24, 0x00, 0x0000003F
	@ BgEvent 12
	semantic_bg_secret_base_event 20, 53, 0x00, 0x00000015
	@ BgEvent 13
	semantic_bg_hidden_item_event 15, 49, 0x03, ITEM_HEART_SCALE, 0x0061
Route115_MapEvents: @ 0x08502BB0
	@ struct MapEvents
	semantic_map_events 23, 3, 0, 14, Route115_ObjectEvents, Route115_WarpEvents, 0, Route115_BgEvents
Route116_ObjectEvents: @ 0x08502BC4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3C, 0x00, 18, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x0019, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3C, 0x00, 19, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x001A, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x23, 0x00, 12, 7, 0x03, 0x10, 0, 0, 0x0001, 0x0003, Route116_EventScript_Joey, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x52, 0x00, 21, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0011
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x52, 0x00, 32, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0012
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x24, 0x00, 13, 17, 0x03, 0x18, 0, 0, 0x0001, 0x0002, Route116_EventScript_Jose, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 19, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256BDC, 0x03FB
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3B, 0x00, 10, 17, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256BE9, 0x03FC
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3C, 0x00, 20, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x0042, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3C, 0x00, 21, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x0043, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x15, 0x00, 46, 9, 0x03, 0x01, 0, 0, 0x0000, 0x0000, Route116_EventScript_Briney, 0x037B
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x52, 0x00, 28, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0013
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x37, 0x00, 36, 17, 0x03, 0x0F, 0, 0, 0x0001, 0x0003, Route116_EventScript_Clark, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x52, 0x00, 24, 9, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0014
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x3B, 0x00, 80, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256BF6, 0x03FD
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x2F, 0x00, 26, 6, 0x03, 0x0A, 0, 0, 0x0001, 0x0002, Route116_EventScript_Janice, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x0E, 0x00, 22, 16, 0x03, 0x0D, 0, 0, 0x0001, 0x0003, Route116_EventScript_Karen, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x26, 0x00, 28, 8, 0x03, 0x07, 0, 0, 0x0001, 0x0004, Route116_EventScript_Jerry, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x17, 0x00, 46, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, Route116_EventScript_DevonEmployee, 0x03B3
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x3B, 0x00, 55, 12, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256BCF, 0x03E9
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x2C, 0x00, 38, 9, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, Route116_EventScript_WandasBoyfriend, 0x037E
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x27, 0x00, 74, 13, 0x03, 0x01, 1, 1, 0x0000, 0x0000, Route116_EventScript_GlassesMan, 0x032D
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x14, 0x00, 33, 8, 0x03, 0x07, 0, 0, 0x0001, 0x0001, Route116_EventScript_Sarah, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x09, 0x00, 33, 5, 0x03, 0x08, 0, 0, 0x0001, 0x0002, Route116_EventScript_Dawson, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x3B, 0x00, 34, 7, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256C03, 0x047A
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x52, 0x00, 30, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_CutTree, 0x0015
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x23, 0x00, 36, 13, 0x03, 0x12, 1, 1, 0x0001, 0x0005, Route116_EventScript_Johnson, 0x0000
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x37, 0x00, 42, 13, 0x03, 0x09, 1, 1, 0x0001, 0x0005, Route116_EventScript_Devan, 0x0000
Route116_WarpEvents: @ 0x08502E64
	@ WarpEvent 0
	semantic_warp_event 47, 8, 0x00, 0x00, MAP_NUM_RUSTURF_TUNNEL, MAP_GROUP_RUSTURF_TUNNEL
	@ WarpEvent 1
	semantic_warp_event 38, 8, 0x00, 0x00, MAP_NUM_ROUTE116_TUNNELERS_REST_HOUSE, MAP_GROUP_ROUTE116_TUNNELERS_REST_HOUSE
	@ WarpEvent 2
	semantic_warp_event 65, 10, 0x00, 0x02, MAP_NUM_RUSTURF_TUNNEL, MAP_GROUP_RUSTURF_TUNNEL
	@ WarpEvent 3
	semantic_warp_event 59, 13, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
	@ WarpEvent 4
	semantic_warp_event 79, 6, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
Route116_CoordEvents: @ 0x08502E8C
	@ CoordEvent 0
	semantic_coord_event 47, 9, 0x03, 0x406F, 0x0001, Route116_EventScript_BrineyTrigger
Route116_BgEvents: @ 0x08502E9C
	@ BgEvent 0
	semantic_bg_script_event 5, 10, 0x00, 0x00, Route116_EventScript_RouteSignRustboro
	@ BgEvent 1
	semantic_bg_script_event 48, 9, 0x00, 0x00, Route116_EventScript_RusturfTunnelSign
	@ BgEvent 2
	semantic_bg_script_event 40, 9, 0x00, 0x00, Route116_EventScript_TunnelersRestHouseSign
	@ BgEvent 3
	semantic_bg_secret_base_event 71, 4, 0x00, 0x00000051
	@ BgEvent 4
	semantic_bg_secret_base_event 79, 11, 0x00, 0x0000005B
	@ BgEvent 5
	semantic_bg_script_event 16, 12, 0x00, 0x00, Route116_EventScript_TrainerTipsBToStopEvolution
	@ BgEvent 6
	semantic_bg_script_event 29, 10, 0x00, 0x00, Route116_EventScript_TrainerTipsBagHasPockets
	@ BgEvent 7
	semantic_bg_secret_base_event 56, 6, 0x00, 0x00000066
	@ BgEvent 8
	semantic_bg_secret_base_event 55, 15, 0x00, 0x00000070
	@ BgEvent 9
	semantic_bg_hidden_item_event 22, 9, 0x03, ITEM_SUPER_POTION, 0x002D
	@ BgEvent 10
	semantic_bg_hidden_item_event 70, 13, 0x03, ITEM_BLACK_GLASSES, 0x0060
Route116_MapEvents: @ 0x08502F20
	@ struct MapEvents
	semantic_map_events 28, 5, 1, 11, Route116_ObjectEvents, Route116_WarpEvents, Route116_CoordEvents, Route116_BgEvents
Route117_ObjectEvents: @ 0x08502F34
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x10, 0x00, 13, 13, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route117_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0B, 0x00, 25, 5, 0x03, 0x28, 2, 2, 0x0000, 0x0000, Route117_EventScript_LittleBoy, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1D, 0x00, 47, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082576E1, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xD0, 0x00, 33, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xCC, 0x00, 39, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xD2, 0x00, 42, 2, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xD1, 0x00, 49, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x33, 0x00, 38, 16, 0x03, 0x1C, 8, 0, 0x0001, 0x0004, Route117_EventScript_Dylan, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x14, 0x00, 8, 10, 0x03, 0x17, 0, 0, 0x0001, 0x0003, Route117_EventScript_Lydia, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x41, 0x00, 33, 11, 0x03, 0x10, 0, 0, 0x0001, 0x0004, Route117_EventScript_Isaac, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x3C, 0x00, 41, 13, 0x03, 0x0C, 0, 0, 0x0000, 0x001D, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x3C, 0x00, 42, 13, 0x03, 0x0C, 0, 0, 0x0000, 0x001C, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x3C, 0x00, 43, 13, 0x03, 0x0C, 0, 0, 0x0000, 0x001B, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x3B, 0x00, 16, 18, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C10, 0x03FE
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x52, 0x00, 15, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0011
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x3B, 0x00, 9, 1, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C1D, 0x03FF
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x34, 0x00, 26, 13, 0x03, 0x21, 2, 2, 0x0001, 0x0005, Route117_EventScript_Maria, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x27, 0x00, 17, 12, 0x03, 0x07, 1, 1, 0x0001, 0x0004, Route117_EventScript_Derek, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x2F, 0x00, 43, 6, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route117_EventScript_Meg, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x2F, 0x00, 42, 6, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route117_EventScript_Anna, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x0A, 0x00, 48, 10, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route117_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x2F, 0x00, 15, 4, 0x03, 0x0A, 1, 1, 0x0001, 0x0004, Route117_EventScript_Brandi, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x0E, 0x00, 21, 4, 0x03, 0x09, 1, 1, 0x0001, 0x0004, Route117_EventScript_Aisha, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x34, 0x00, 16, 4, 0x03, 0x1C, 4, 1, 0x0001, 0x0004, Route117_EventScript_Melina, 0x0000
Route117_WarpEvents: @ 0x08503174
	@ WarpEvent 0
	semantic_warp_event 51, 5, 0x00, 0x00, MAP_NUM_ROUTE117_POKEMON_DAY_CARE, MAP_GROUP_ROUTE117_POKEMON_DAY_CARE
Route117_BgEvents: @ 0x0850317C
	@ BgEvent 0
	semantic_bg_script_event 16, 6, 0x00, 0x00, Route117_EventScript_RouteSignVerdanturf
	@ BgEvent 1
	semantic_bg_script_event 49, 12, 0x00, 0x00, Route117_EventScript_RouteSignMauville
	@ BgEvent 2
	semantic_bg_script_event 49, 5, 0x00, 0x00, Route117_EventScript_DayCareSign
	@ BgEvent 3
	semantic_bg_hidden_item_event 3, 18, 0x03, ITEM_REPEL, 0x0048
Route117_MapEvents: @ 0x085031AC
	@ struct MapEvents
	semantic_map_events 24, 1, 0, 4, Route117_ObjectEvents, Route117_WarpEvents, 0, Route117_BgEvents
Route118_ObjectEvents: @ 0x085031C0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3C, 0x00, 35, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x001F, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3C, 0x00, 36, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0020, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3C, 0x00, 37, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0021, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x42, 0x00, 64, 10, 0x03, 0x08, 0, 0, 0x0001, 0x0003, Route118_EventScript_Perry, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x44, 0x00, 33, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825422E, 0x031D
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x6E, 0x00, 34, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825424E, 0x031D
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x0A, 0x00, 12, 10, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route118_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x44, 0x00, 33, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082542EE, 0x0385
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x6E, 0x00, 34, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825430E, 0x0385
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x44, 0x00, 33, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825432E, 0x0388
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x6E, 0x00, 34, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825434E, 0x0388
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x52, 0x00, 38, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0011
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x32, 0x00, 28, 8, 0x03, 0x09, 0, 0, 0x0000, 0x0000, Route118_EventScript_GoodRodFisherman, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x14, 0x00, 7, 12, 0x03, 0x07, 0, 0, 0x0001, 0x0004, Route118_EventScript_Rose, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x32, 0x00, 14, 14, 0x03, 0x08, 0, 0, 0x0001, 0x0000, Route118_EventScript_Wade, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x42, 0x00, 56, 7, 0x03, 0x10, 0, 0, 0x0001, 0x0003, Route118_EventScript_Chester, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x32, 0x00, 39, 15, 0x03, 0x01, 0, 0, 0x0001, 0x0002, Route118_EventScript_Barny, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x42, 0x00, 17, 11, 0x03, 0x0F, 1, 1, 0x0001, 0x0003, Route118_EventScript_Dalton, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x86, 0x00, 44, 7, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x03C6
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x3B, 0x00, 69, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256C2A, 0x0461
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x23, 0x00, 7, 7, 0x03, 0x08, 1, 1, 0x0001, 0x0004, Route118_EventScript_Deandre, 0x0000
Route118_WarpEvents: @ 0x085033B8
	@ WarpEvent 0
	semantic_warp_event 42, 6, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 9, 6, 0x00, 0x00, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
Route118_CoordEvents: @ 0x085033C8
	@ CoordEvent 0
	semantic_coord_event 43, 11, 0x03, 0x4071, 0x0000, Route118_EventScript_StevenTrigger0
	@ CoordEvent 1
	semantic_coord_event 44, 11, 0x03, 0x4071, 0x0000, Route118_EventScript_StevenTrigger1
	@ CoordEvent 2
	semantic_coord_event 45, 11, 0x03, 0x4071, 0x0000, Route118_EventScript_StevenTrigger2
Route118_BgEvents: @ 0x085033F8
	@ BgEvent 0
	semantic_bg_secret_base_event 47, 14, 0x00, 0x00000001
	@ BgEvent 1
	semantic_bg_script_event 13, 6, 0x00, 0x00, Route118_EventScript_RouteSignMauville
	@ BgEvent 2
	semantic_bg_script_event 56, 8, 0x00, 0x00, Route118_EventScript_RouteSign119
	@ BgEvent 3
	semantic_bg_secret_base_event 67, 6, 0x00, 0x0000000B
	@ BgEvent 4
	semantic_bg_secret_base_event 29, 5, 0x00, 0x0000007A
	@ BgEvent 5
	semantic_bg_secret_base_event 47, 5, 0x00, 0x000000A3
	@ BgEvent 6
	semantic_bg_secret_base_event 46, 5, 0x00, 0x000000AB
	@ BgEvent 7
	semantic_bg_hidden_item_event 31, 13, 0x03, ITEM_IRON, 0x0043
	@ BgEvent 8
	semantic_bg_hidden_item_event 12, 14, 0x03, ITEM_HEART_SCALE, 0x0042
Route118_MapEvents: @ 0x08503464
	@ struct MapEvents
	semantic_map_events 21, 2, 3, 9, Route118_ObjectEvents, Route118_WarpEvents, Route118_CoordEvents, Route118_BgEvents
Route119_ObjectEvents: @ 0x08503478
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3C, 0x00, 24, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0022, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3C, 0x00, 25, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0023, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3C, 0x00, 26, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0024, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x24, 0x00, 12, 123, 0x03, 0x3B, 0, 0, 0x0001, 0x0001, Route119_EventScript_Greg, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x27, 0x00, 26, 123, 0x03, 0x3C, 0, 0, 0x0001, 0x0001, Route119_EventScript_Taylor, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x27, 0x00, 5, 125, 0x03, 0x3E, 0, 0, 0x0001, 0x0001, Route119_EventScript_Donald, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x1F, 0x00, 7, 74, 0x03, 0x12, 0, 0, 0x0001, 0x0003, Route119_EventScript_Jackson, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x27, 0x00, 28, 116, 0x03, 0x3C, 0, 0, 0x0001, 0x0001, Route119_EventScript_Brent, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x20, 0x00, 35, 83, 0x04, 0x08, 0, 0, 0x0001, 0x0002, Route119_EventScript_Catherine, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x24, 0x00, 34, 122, 0x03, 0x3D, 0, 0, 0x0001, 0x0001, Route119_EventScript_Doug, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x24, 0x00, 17, 128, 0x03, 0x3D, 0, 0, 0x0001, 0x0001, Route119_EventScript_Kent, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x05, 0x00, 28, 14, 0x03, 0x39, 0, 0, 0x0001, 0x0001, Route119_EventScript_Yasu, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x05, 0x00, 19, 49, 0x03, 0x3A, 0, 0, 0x0001, 0x0003, Route119_EventScript_Takashi, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x42, 0x00, 10, 50, 0x04, 0x0A, 0, 0, 0x0001, 0x0003, Route119_EventScript_Hugh, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x42, 0x00, 8, 63, 0x03, 0x08, 0, 0, 0x0001, 0x0005, Route119_EventScript_Phil, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0xF0, 0x00, 25, 32, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0353
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x3B, 0x00, 12, 121, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C37, 0x0400
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x3B, 0x00, 4, 96, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C44, 0x0401
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x3B, 0x00, 29, 53, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C51, 0x0402
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x3B, 0x00, 25, 76, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C5E, 0x0403
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x3B, 0x00, 8, 18, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C6B, 0x0404
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x3B, 0x00, 33, 117, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C78, 0x0405
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x75, 0x00, 13, 33, 0x04, 0x0A, 0, 0, 0x0000, 0x0000, Route119_EventScript_BridgeAquaGrunt1, 0x037A
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x75, 0x00, 13, 34, 0x04, 0x0A, 0, 0, 0x0000, 0x0000, Route119_EventScript_BridgeAquaGrunt2, 0x037A
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0xF3, 0x00, 17, 33, 0x04, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x039B
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x0D, 0x00, 31, 109, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Route119_EventScript_Boy1, 0x0000
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x3C, 0x00, 8, 23, 0x03, 0x0C, 0, 0, 0x0000, 0x0053, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x3C, 0x00, 9, 23, 0x03, 0x0C, 0, 0, 0x0000, 0x0054, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x3C, 0x00, 29, 90, 0x03, 0x0C, 0, 0, 0x0000, 0x0055, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0x3C, 0x00, 30, 90, 0x03, 0x0C, 0, 0, 0x0000, 0x0056, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0x38, 0x00, 19, 133, 0x03, 0x05, 2, 1, 0x0000, 0x0000, Route119_EventScript_CyclingTriathleteM, 0x0000
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x3B, 0x00, 3, 56, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256C85, 0x0452
	@ ObjectEventTemplate 32
	semantic_object_event 0x21, 0x09, 0x00, 35, 93, 0x04, 0x02, 1, 1, 0x0000, 0x0000, Route119_EventScript_Boy2, 0x0000
	@ ObjectEventTemplate 33
	semantic_object_event 0x22, 0x05, 0x00, 29, 6, 0x03, 0x39, 1, 1, 0x0001, 0x0003, Route119_EventScript_Hideo, 0x0000
	@ ObjectEventTemplate 34
	semantic_object_event 0x23, 0xCC, 0x00, 31, 6, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Route119_EventScript_Kecleon1, 0x03DD
	@ ObjectEventTemplate 35
	semantic_object_event 0x24, 0xCC, 0x00, 25, 15, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Route119_EventScript_Kecleon2, 0x03DE
	@ ObjectEventTemplate 36
	semantic_object_event 0x25, 0x32, 0x00, 13, 104, 0x03, 0x0A, 1, 1, 0x0001, 0x0000, Route119_EventScript_Chris, 0x0000
	@ ObjectEventTemplate 37
	semantic_object_event 0x26, 0x14, 0x00, 8, 68, 0x03, 0x07, 1, 1, 0x0001, 0x0005, Route119_EventScript_Rachel, 0x0000
	@ ObjectEventTemplate 38
	semantic_object_event 0x27, 0x42, 0x00, 16, 52, 0x03, 0x0A, 1, 1, 0x0001, 0x0003, Route119_EventScript_Dayton, 0x0000
	@ ObjectEventTemplate 39
	semantic_object_event 0x28, 0x42, 0x00, 32, 15, 0x03, 0x09, 1, 1, 0x0001, 0x0004, Route119_EventScript_Fabian, 0x0000
	@ ObjectEventTemplate 40
	semantic_object_event 0x29, 0x3B, 0x00, 19, 5, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082570F0, 0x046E
	@ ObjectEventTemplate 41
	semantic_object_event 0x2A, 0x3B, 0x00, 24, 42, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256C92, 0x047B
	@ ObjectEventTemplate 42
	semantic_object_event 0x2B, 0xDB, 0x00, 28, 25, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0312
Route119_WarpEvents: @ 0x08503880
	@ WarpEvent 0
	semantic_warp_event 6, 32, 0x00, 0x00, MAP_NUM_ROUTE119_WEATHER_INSTITUTE_1F, MAP_GROUP_ROUTE119_WEATHER_INSTITUTE_1F
	@ WarpEvent 1
	semantic_warp_event 33, 109, 0x00, 0x00, MAP_NUM_ROUTE119_HOUSE, MAP_GROUP_ROUTE119_HOUSE
Route119_CoordEvents: @ 0x08503890
	@ CoordEvent 0
	semantic_coord_event 25, 31, 0x00, 0x4072, 0x0000, Route119_EventScript_RivalTrigger1
	@ CoordEvent 1
	semantic_coord_event 26, 31, 0x00, 0x4072, 0x0000, Route119_EventScript_RivalTrigger2
	@ CoordEvent 2
	semantic_coord_event 28, 13, 0x00, 0x0014, 0x0000, 0
	@ CoordEvent 3
	semantic_coord_event 29, 13, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 4
	semantic_coord_event 30, 13, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 5
	semantic_coord_event 31, 13, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 6
	semantic_coord_event 32, 13, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 7
	semantic_coord_event 33, 13, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 8
	semantic_coord_event 15, 133, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 9
	semantic_coord_event 16, 132, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 10
	semantic_coord_event 17, 131, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 11
	semantic_coord_event 18, 130, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 12
	semantic_coord_event 19, 131, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 13
	semantic_coord_event 20, 132, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 14
	semantic_coord_event 21, 133, 0x03, 0x0014, 0x0000, 0
	@ CoordEvent 15
	semantic_coord_event 36, 6, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 16
	semantic_coord_event 36, 7, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 17
	semantic_coord_event 35, 8, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 18
	semantic_coord_event 35, 9, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 19
	semantic_coord_event 34, 10, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 20
	semantic_coord_event 16, 137, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 21
	semantic_coord_event 17, 137, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 22
	semantic_coord_event 18, 137, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 23
	semantic_coord_event 19, 137, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 24
	semantic_coord_event 20, 137, 0x03, 0x0002, 0x0000, 0
Route119_BgEvents: @ 0x08503A20
	@ BgEvent 0
	semantic_bg_script_event 9, 33, 0x00, 0x00, Route119_EventScript_WeatherInstituteSign
	@ BgEvent 1
	semantic_bg_script_event 27, 19, 0x00, 0x00, Route119_EventScript_RouteSignFortree
	@ BgEvent 2
	semantic_bg_secret_base_event 5, 2, 0x00, 0x000000C9
	@ BgEvent 3
	semantic_bg_secret_base_event 4, 89, 0x00, 0x000000CA
	@ BgEvent 4
	semantic_bg_secret_base_event 5, 15, 0x00, 0x000000D3
	@ BgEvent 5
	semantic_bg_secret_base_event 7, 101, 0x03, 0x000000D4
	@ BgEvent 6
	semantic_bg_secret_base_event 34, 24, 0x03, 0x000000DD
	@ BgEvent 7
	semantic_bg_secret_base_event 31, 73, 0x03, 0x000000E7
	@ BgEvent 8
	semantic_bg_secret_base_event 16, 81, 0x00, 0x00000067
	@ BgEvent 9
	semantic_bg_secret_base_event 16, 28, 0x00, 0x00000071
	@ BgEvent 10
	semantic_bg_hidden_item_event 17, 82, 0x03, ITEM_CALCIUM, 0x0005
	@ BgEvent 11
	semantic_bg_hidden_item_event 38, 63, 0x03, ITEM_ULTRA_BALL, 0x0006
	@ BgEvent 12
	semantic_bg_secret_base_event 26, 81, 0x00, 0x00000017
	@ BgEvent 13
	semantic_bg_secret_base_event 19, 76, 0x00, 0x000000AD
	@ BgEvent 14
	semantic_bg_secret_base_event 18, 76, 0x00, 0x000000C1
	@ BgEvent 15
	semantic_bg_secret_base_event 4, 15, 0x00, 0x000000DF
	@ BgEvent 16
	semantic_bg_secret_base_event 6, 2, 0x00, 0x000000E9
	@ BgEvent 17
	semantic_bg_hidden_item_event 26, 120, 0x03, ITEM_FULL_HEAL, 0x0044
	@ BgEvent 18
	semantic_bg_hidden_item_event 20, 29, 0x03, ITEM_MAX_ETHER, 0x0057
	@ BgEvent 19
	semantic_bg_script_event 28, 9, 0x00, 0x00, Route119_EventScript_TrainerTipsDecoration
Route119_MapEvents: @ 0x08503B10
	@ struct MapEvents
	semantic_map_events 43, 2, 25, 20, Route119_ObjectEvents, Route119_WarpEvents, Route119_CoordEvents, Route119_BgEvents
Route120_ObjectEvents: @ 0x08503B24
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3C, 0x00, 4, 79, 0x03, 0x0C, 0, 0, 0x0000, 0x002E, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3C, 0x00, 5, 79, 0x03, 0x0C, 0, 0, 0x0000, 0x002D, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3C, 0x00, 6, 79, 0x03, 0x0C, 0, 0, 0x0000, 0x002C, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3C, 0x00, 7, 79, 0x03, 0x0C, 0, 0, 0x0000, 0x002B, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3C, 0x00, 34, 24, 0x03, 0x0C, 0, 0, 0x0000, 0x0025, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3C, 0x00, 35, 24, 0x03, 0x0C, 0, 0, 0x0000, 0x0026, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3C, 0x00, 36, 24, 0x03, 0x0C, 0, 0, 0x0000, 0x0027, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3C, 0x00, 9, 92, 0x05, 0x0C, 0, 0, 0x0000, 0x0028, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3C, 0x00, 10, 92, 0x05, 0x0C, 0, 0, 0x0000, 0x0029, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3C, 0x00, 11, 92, 0x05, 0x0C, 0, 0, 0x0000, 0x002A, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x42, 0x00, 5, 22, 0x03, 0x0E, 0, 0, 0x0001, 0x0003, Route120_EventScript_Colin, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x42, 0x00, 32, 14, 0x03, 0x0A, 0, 0, 0x0001, 0x0003, Route120_EventScript_Robert, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x1F, 0x00, 27, 51, 0x03, 0x09, 0, 0, 0x0001, 0x0007, Route120_EventScript_Lorenzo, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x20, 0x00, 36, 45, 0x03, 0x09, 0, 0, 0x0001, 0x0002, Route120_EventScript_Jenna, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x27, 0x00, 19, 80, 0x05, 0x0F, 0, 0, 0x0001, 0x0003, Route120_EventScript_Jeffrey, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x3B, 0x00, 20, 55, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256C9F, 0x0406
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x6E, 0x00, 37, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825428E, 0x031E
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x44, 0x00, 36, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825426E, 0x031E
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x44, 0x00, 36, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825432E, 0x0386
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x6E, 0x00, 37, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0825434E, 0x0386
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x52, 0x00, 35, 32, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0011
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x3B, 0x00, 7, 89, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256CAC, 0x0407
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x2D, 0x00, 14, 92, 0x05, 0x05, 1, 0, 0x0000, 0x0000, Route120_EventScript_BerryBeauty, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x22, 0x00, 31, 37, 0x03, 0x0F, 0, 0, 0x0001, 0x0004, Route120_EventScript_Jennifer, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x37, 0x00, 9, 60, 0x03, 0x15, 0, 0, 0x0001, 0x0004, Route120_EventScript_Chip, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x22, 0x00, 16, 6, 0x03, 0x17, 0, 0, 0x0001, 0x0004, Route120_EventScript_Clarissa, 0x0000
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x22, 0x00, 18, 34, 0x03, 0x09, 0, 0, 0x0001, 0x0003, Route120_EventScript_Angelica, 0x0000
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x3B, 0x00, 22, 13, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256CC6, 0x0454
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x3B, 0x00, 23, 82, 0x05, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256CB9, 0x0453
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0xCC, 0x00, 12, 16, 0x04, 0x4C, 1, 1, 0x0000, 0x0000, Route120_EventScript_BridgeKecleon, 0x03CA
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0x86, 0x00, 13, 15, 0x04, 0x08, 1, 1, 0x0000, 0x0000, Route120_EventScript_Steven, 0x03CC
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x52, 0x00, 20, 1, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_CutTree, 0x0014
	@ ObjectEventTemplate 32
	semantic_object_event 0x21, 0x52, 0x00, 15, 1, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_CutTree, 0x0012
	@ ObjectEventTemplate 33
	semantic_object_event 0x22, 0x05, 0x00, 10, 72, 0x03, 0x3A, 1, 1, 0x0001, 0x0003, Route120_EventScript_Keigo, 0x0000
	@ ObjectEventTemplate 34
	semantic_object_event 0x23, 0x05, 0x00, 19, 28, 0x03, 0x39, 1, 1, 0x0001, 0x0003, Route120_EventScript_Riley, 0x0000
	@ ObjectEventTemplate 35
	semantic_object_event 0x24, 0xD4, 0x00, 12, 16, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x03D5
	@ ObjectEventTemplate 36
	semantic_object_event 0x25, 0xCC, 0x00, 20, 11, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Route120_EventScript_Kecleon1, 0x03D6
	@ ObjectEventTemplate 37
	semantic_object_event 0x26, 0xCC, 0x00, 27, 2, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Route120_EventScript_Kecleon2, 0x03D9
	@ ObjectEventTemplate 38
	semantic_object_event 0x27, 0xCC, 0x00, 4, 77, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Route120_EventScript_Kecleon3, 0x03DA
	@ ObjectEventTemplate 39
	semantic_object_event 0x28, 0xCC, 0x00, 7, 51, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Route120_EventScript_Kecleon5, 0x03DC
	@ ObjectEventTemplate 40
	semantic_object_event 0x29, 0xCC, 0x00, 19, 48, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Route120_EventScript_Kecleon4, 0x03DB
	@ ObjectEventTemplate 41
	semantic_object_event 0x2A, 0x0E, 0x00, 19, 32, 0x03, 0x07, 1, 1, 0x0001, 0x0003, Route120_EventScript_Callie, 0x0000
	@ ObjectEventTemplate 42
	semantic_object_event 0x2B, 0x21, 0x00, 14, 34, 0x03, 0x0A, 1, 1, 0x0001, 0x0003, Route120_EventScript_Leonel, 0x0000
	@ ObjectEventTemplate 43
	semantic_object_event 0x2C, 0x3B, 0x00, 24, 33, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256CD3, 0x047C
Route120_WarpEvents: @ 0x08503F44
	@ WarpEvent 0
	semantic_warp_event 7, 55, 0x00, 0x00, MAP_NUM_ANCIENT_TOMB, MAP_GROUP_ANCIENT_TOMB
	@ WarpEvent 1
	semantic_warp_event 19, 23, 0x01, 0x00, MAP_NUM_SCORCHED_SLAB, MAP_GROUP_SCORCHED_SLAB
Route120_CoordEvents: @ 0x08503F54
	@ CoordEvent 0
	semantic_coord_event 7, 15, 0x00, 0x0003, 0x0000, 0
	@ CoordEvent 1
	semantic_coord_event 7, 16, 0x00, 0x0003, 0x0000, 0
	@ CoordEvent 2
	semantic_coord_event 22, 61, 0x03, 0x0003, 0x0000, 0
	@ CoordEvent 3
	semantic_coord_event 12, 64, 0x03, 0x0003, 0x0000, 0
	@ CoordEvent 4
	semantic_coord_event 35, 63, 0x03, 0x0001, 0x0000, 0
	@ CoordEvent 5
	semantic_coord_event 36, 63, 0x03, 0x0001, 0x0000, 0
	@ CoordEvent 6
	semantic_coord_event 37, 63, 0x03, 0x0001, 0x0000, 0
	@ CoordEvent 7
	semantic_coord_event 38, 63, 0x03, 0x0001, 0x0000, 0
	@ CoordEvent 8
	semantic_coord_event 32, 88, 0x05, 0x0001, 0x0000, 0
	@ CoordEvent 9
	semantic_coord_event 28, 15, 0x00, 0x0002, 0x0000, 0
	@ CoordEvent 10
	semantic_coord_event 28, 16, 0x00, 0x0002, 0x0000, 0
	@ CoordEvent 11
	semantic_coord_event 28, 17, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 12
	semantic_coord_event 32, 89, 0x05, 0x0001, 0x0000, 0
	@ CoordEvent 13
	semantic_coord_event 32, 90, 0x05, 0x0001, 0x0000, 0
	@ CoordEvent 14
	semantic_coord_event 32, 91, 0x05, 0x0001, 0x0000, 0
	@ CoordEvent 15
	semantic_coord_event 10, 75, 0x03, 0x0001, 0x0000, 0
	@ CoordEvent 16
	semantic_coord_event 11, 75, 0x03, 0x0001, 0x0000, 0
	@ CoordEvent 17
	semantic_coord_event 12, 75, 0x03, 0x0001, 0x0000, 0
	@ CoordEvent 18
	semantic_coord_event 13, 75, 0x03, 0x0001, 0x0000, 0
Route120_BgEvents: @ 0x08504084
	@ BgEvent 0
	semantic_bg_script_event 27, 3, 0x03, 0x00, Route120_EventScript_RouteSignFortree
	@ BgEvent 1
	semantic_bg_script_event 38, 88, 0x03, 0x00, Route120_EventScript_RouteSign121
	@ BgEvent 2
	semantic_bg_secret_base_event 28, 62, 0x00, 0x00000065
	@ BgEvent 3
	semantic_bg_secret_base_event 30, 62, 0x00, 0x0000006F
	@ BgEvent 4
	semantic_bg_secret_base_event 26, 10, 0x00, 0x000000DE
	@ BgEvent 5
	semantic_bg_secret_base_event 29, 85, 0x05, 0x000000E8
	@ BgEvent 6
	semantic_bg_secret_base_event 18, 12, 0x00, 0x0000005D
	@ BgEvent 7
	semantic_bg_secret_base_event 38, 54, 0x00, 0x000000CB
	@ BgEvent 8
	semantic_bg_secret_base_event 31, 23, 0x00, 0x000000D5
	@ BgEvent 9
	semantic_bg_hidden_item_event 9, 1, 0x03, ITEM_RARE_CANDY, 0x0047
	@ BgEvent 10
	semantic_bg_hidden_item_event 31, 11, 0x03, ITEM_REVIVE, 0x0054
	@ BgEvent 11
	semantic_bg_hidden_item_event 0, 86, 0x03, ITEM_RARE_CANDY, 0x0045
	@ BgEvent 12
	semantic_bg_hidden_item_event 24, 42, 0x03, ITEM_ZINC, 0x0046
	@ BgEvent 13
	semantic_bg_secret_base_event 5, 76, 0x00, 0x000000CC
Route120_MapEvents: @ 0x0850412C
	@ struct MapEvents
	semantic_map_events 44, 2, 19, 14, Route120_ObjectEvents, Route120_WarpEvents, Route120_CoordEvents, Route120_BgEvents
Route121_ObjectEvents: @ 0x08504140
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x18, 0x00, 29, 14, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, Route121_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3C, 0x00, 14, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x002F, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3C, 0x00, 15, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x0030, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3C, 0x00, 16, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x0031, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3C, 0x00, 17, 2, 0x03, 0x0C, 0, 0, 0x0000, 0x0032, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3C, 0x00, 64, 14, 0x03, 0x0C, 0, 0, 0x0000, 0x0033, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3C, 0x00, 65, 14, 0x03, 0x0C, 0, 0, 0x0000, 0x0034, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3C, 0x00, 66, 14, 0x03, 0x0C, 0, 0, 0x0000, 0x0035, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3C, 0x00, 67, 14, 0x03, 0x0C, 0, 0, 0x0000, 0x0036, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x2F, 0x00, 39, 9, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route121_EventScript_Kate, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x2F, 0x00, 40, 9, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route121_EventScript_Joy, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x75, 0x00, 30, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0392
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x75, 0x00, 30, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0392
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x75, 0x00, 31, 7, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x0392
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x52, 0x00, 32, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0011
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x52, 0x00, 65, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0012
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x12, 0x00, 63, 5, 0x03, 0x09, 0, 0, 0x0001, 0x0004, Route121_EventScript_Vanessa, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x30, 0x00, 55, 8, 0x03, 0x09, 0, 0, 0x0001, 0x0003, Route121_EventScript_Walter, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x28, 0x00, 11, 11, 0x03, 0x07, 0, 0, 0x0001, 0x0004, Route121_EventScript_Tammy, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x2D, 0x00, 22, 5, 0x03, 0x11, 0, 0, 0x0001, 0x0004, Route121_EventScript_Jessica, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x3B, 0x00, 55, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256CE0, 0x044F
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x52, 0x00, 26, 12, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_CutTree, 0x0013
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x27, 0x00, 11, 6, 0x03, 0x1A, 1, 4, 0x0001, 0x0003, Route121_EventScript_Cale, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x41, 0x00, 59, 8, 0x03, 0x08, 1, 1, 0x0001, 0x0004, Route121_EventScript_Myles, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x14, 0x00, 59, 13, 0x03, 0x07, 1, 1, 0x0001, 0x0004, Route121_EventScript_Pat, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x21, 0x00, 65, 9, 0x03, 0x12, 1, 1, 0x0001, 0x0006, Route121_EventScript_Marcel, 0x0000
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x22, 0x00, 72, 9, 0x03, 0x11, 1, 1, 0x0001, 0x0006, Route121_EventScript_Cristin, 0x0000
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x3B, 0x00, 60, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256CED, 0x047D
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x3B, 0x00, 38, 13, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256CFA, 0x047E
Route121_WarpEvents: @ 0x085043F8
	@ WarpEvent 0
	semantic_warp_event 37, 5, 0x00, 0x02, MAP_NUM_ROUTE121_SAFARI_ZONE_ENTRANCE, MAP_GROUP_ROUTE121_SAFARI_ZONE_ENTRANCE
Route121_CoordEvents: @ 0x08504400
	@ CoordEvent 0
	semantic_coord_event 25, 5, 0x03, 0x4074, 0x0000, Route121_EventScript_AquaGruntsMoveOut
	@ CoordEvent 1
	semantic_coord_event 25, 6, 0x03, 0x4074, 0x0000, Route121_EventScript_AquaGruntsMoveOut
	@ CoordEvent 2
	semantic_coord_event 25, 7, 0x03, 0x4074, 0x0000, Route121_EventScript_AquaGruntsMoveOut
	@ CoordEvent 3
	semantic_coord_event 25, 8, 0x03, 0x4074, 0x0000, Route121_EventScript_AquaGruntsMoveOut
Route121_BgEvents: @ 0x08504440
	@ BgEvent 0
	semantic_bg_script_event 32, 14, 0x00, 0x00, Route121_EventScript_MtPyrePierSign
	@ BgEvent 1
	semantic_bg_secret_base_event 40, 11, 0x00, 0x0000000C
	@ BgEvent 2
	semantic_bg_secret_base_event 18, 13, 0x00, 0x00000016
	@ BgEvent 3
	semantic_bg_secret_base_event 43, 7, 0x00, 0x000000A2
	@ BgEvent 4
	semantic_bg_secret_base_event 42, 7, 0x00, 0x000000AC
	@ BgEvent 5
	semantic_bg_script_event 39, 6, 0x00, 0x00, Route121_EventScript_SafariZoneSign
	@ BgEvent 6
	semantic_bg_hidden_item_event 23, 10, 0x03, ITEM_HP_UP, 0x0027
	@ BgEvent 7
	semantic_bg_hidden_item_event 58, 3, 0x03, ITEM_NUGGET, 0x0028
	@ BgEvent 8
	semantic_bg_hidden_item_event 72, 5, 0x03, ITEM_FULL_HEAL, 0x0049
	@ BgEvent 9
	semantic_bg_hidden_item_event 68, 8, 0x03, ITEM_MAX_REVIVE, 0x0064
Route121_MapEvents: @ 0x085044B8
	@ struct MapEvents
	semantic_map_events 29, 1, 4, 10, Route121_ObjectEvents, Route121_WarpEvents, Route121_CoordEvents, Route121_BgEvents
Route122_WarpEvents: @ 0x085044CC
	@ WarpEvent 0
	semantic_warp_event 22, 29, 0x00, 0x00, MAP_NUM_MT_PYRE_1_F, MAP_GROUP_MT_PYRE_1_F
Route122_MapEvents: @ 0x085044D4
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 0, 0, Route122_WarpEvents, 0, 0
Route123_ObjectEvents: @ 0x085044E8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3C, 0x00, 11, 3, 0x03, 0x0C, 0, 0, 0x0000, 0x003A, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3C, 0x00, 12, 3, 0x03, 0x0C, 0, 0, 0x0000, 0x003B, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3C, 0x00, 14, 3, 0x03, 0x0C, 0, 0, 0x0000, 0x003C, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3C, 0x00, 15, 3, 0x03, 0x0C, 0, 0, 0x0000, 0x003D, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3C, 0x00, 81, 1, 0x03, 0x0C, 0, 0, 0x0000, 0x003E, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3C, 0x00, 82, 1, 0x03, 0x0C, 0, 0, 0x0000, 0x003F, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3C, 0x00, 83, 1, 0x03, 0x0C, 0, 0, 0x0000, 0x0040, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x22, 0x00, 70, 12, 0x03, 0x18, 0, 0, 0x0001, 0x0001, Route123_EventScript_Wendy, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x21, 0x00, 58, 7, 0x03, 0x11, 0, 0, 0x0001, 0x0002, Route123_EventScript_Braxton, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3C, 0x00, 14, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0041, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x3C, 0x00, 15, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0048, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x3C, 0x00, 17, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x0049, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x3C, 0x00, 18, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x004A, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x3C, 0x00, 17, 3, 0x03, 0x0C, 0, 0, 0x0000, 0x004F, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x3C, 0x00, 18, 3, 0x03, 0x0C, 0, 0, 0x0000, 0x000E, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x3C, 0x00, 11, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x000F, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x3C, 0x00, 12, 5, 0x03, 0x0C, 0, 0, 0x0000, 0x001E, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x52, 0x00, 101, 13, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0011
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x52, 0x00, 129, 14, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0012
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x52, 0x00, 92, 9, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0013
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x3B, 0x00, 31, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256D07, 0x0408
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x0E, 0x00, 108, 13, 0x03, 0x0F, 0, 0, 0x0000, 0x0000, Route123_EventScript_GigaDrainGirl, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x3C, 0x00, 109, 13, 0x03, 0x0C, 0, 0, 0x0000, 0x0057, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x3C, 0x00, 110, 13, 0x03, 0x0C, 0, 0, 0x0000, 0x0058, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x3C, 0x00, 111, 13, 0x03, 0x0C, 0, 0, 0x0000, 0x0059, BerryTreeScript, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x14, 0x00, 18, 9, 0x03, 0x17, 0, 0, 0x0001, 0x0002, Route123_EventScript_Violet, 0x0000
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x06, 0x00, 38, 13, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route123_EventScript_Yuki, 0x0000
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x06, 0x00, 37, 13, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route123_EventScript_Miu, 0x0000
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x25, 0x00, 138, 12, 0x03, 0x09, 0, 0, 0x0001, 0x0007, Route123_EventScript_Cameron, 0x0000
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0x2F, 0x00, 49, 16, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route123_EventScript_Jacki, 0x0000
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0x28, 0x00, 87, 12, 0x03, 0x08, 0, 0, 0x0001, 0x0004, Route123_EventScript_Kindra, 0x0000
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x3B, 0x00, 27, 18, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D14, 0x0450
	@ ObjectEventTemplate 32
	semantic_object_event 0x21, 0x3B, 0x00, 75, 9, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D21, 0x0455
	@ ObjectEventTemplate 33
	semantic_object_event 0x22, 0x05, 0x00, 138, 14, 0x03, 0x39, 1, 1, 0x0001, 0x0001, Route123_EventScript_Jonas, 0x0000
	@ ObjectEventTemplate 34
	semantic_object_event 0x23, 0x14, 0x00, 138, 16, 0x03, 0x07, 1, 1, 0x0001, 0x0001, Route123_EventScript_Kayley, 0x0000
	@ ObjectEventTemplate 35
	semantic_object_event 0x24, 0x27, 0x00, 87, 17, 0x03, 0x07, 1, 1, 0x0001, 0x0004, Route123_EventScript_Ed, 0x0000
	@ ObjectEventTemplate 36
	semantic_object_event 0x25, 0x42, 0x00, 66, 16, 0x03, 0x08, 1, 1, 0x0001, 0x0002, Route123_EventScript_Fernando, 0x0000
	@ ObjectEventTemplate 37
	semantic_object_event 0x26, 0x42, 0x00, 66, 19, 0x03, 0x07, 1, 1, 0x0001, 0x0002, Route123_EventScript_Alberto, 0x0000
	@ ObjectEventTemplate 38
	semantic_object_event 0x27, 0x15, 0x00, 49, 19, 0x03, 0x07, 1, 1, 0x0001, 0x0002, Route123_EventScript_Frederick, 0x0000
	@ ObjectEventTemplate 39
	semantic_object_event 0x28, 0x3B, 0x00, 43, 15, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D2E, 0x0480
	@ ObjectEventTemplate 40
	semantic_object_event 0x29, 0x22, 0x00, 14, 16, 0x03, 0x07, 1, 1, 0x0001, 0x0003, Route123_EventScript_Jazmyn, 0x0000
	@ ObjectEventTemplate 41
	semantic_object_event 0x2A, 0x23, 0x00, 14, 12, 0x03, 0x1A, 1, 3, 0x0001, 0x0003, Route123_EventScript_Davis, 0x0000
	@ ObjectEventTemplate 42
	semantic_object_event 0x2B, 0x3B, 0x00, 57, 16, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D3B, 0x0481
Route123_WarpEvents: @ 0x085048F0
	@ WarpEvent 0
	semantic_warp_event 22, 6, 0x00, 0x00, MAP_NUM_ROUTE123_BERRY_MASTERS_HOUSE, MAP_GROUP_ROUTE123_BERRY_MASTERS_HOUSE
Route123_CoordEvents: @ 0x085048F8
	@ CoordEvent 0
	semantic_coord_event 90, 16, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 1
	semantic_coord_event 92, 9, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 2
	semantic_coord_event 93, 12, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 3
	semantic_coord_event 92, 13, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 4
	semantic_coord_event 91, 14, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 5
	semantic_coord_event 19, 13, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 6
	semantic_coord_event 19, 12, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 7
	semantic_coord_event 34, 13, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 8
	semantic_coord_event 19, 14, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 9
	semantic_coord_event 19, 15, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 10
	semantic_coord_event 19, 16, 0x03, 0x0015, 0x0000, 0
	@ CoordEvent 11
	semantic_coord_event 108, 14, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 12
	semantic_coord_event 109, 15, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 13
	semantic_coord_event 110, 16, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 14
	semantic_coord_event 111, 17, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 15
	semantic_coord_event 112, 18, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 16
	semantic_coord_event 9, 12, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 17
	semantic_coord_event 9, 13, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 18
	semantic_coord_event 9, 14, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 19
	semantic_coord_event 9, 15, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 20
	semantic_coord_event 9, 16, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 21
	semantic_coord_event 94, 10, 0x03, 0x0015, 0x0000, 0
Route123_BgEvents: @ 0x08504A58
	@ BgEvent 0
	semantic_bg_script_event 117, 10, 0x00, 0x00, Route123_EventScript_RouteSignMtPyre
	@ BgEvent 1
	semantic_bg_secret_base_event 47, 3, 0x00, 0x00000052
	@ BgEvent 2
	semantic_bg_secret_base_event 49, 3, 0x00, 0x0000005C
	@ BgEvent 3
	semantic_bg_script_event 10, 12, 0x03, 0x00, Route123_EventScript_RouteSign
	@ BgEvent 4
	semantic_bg_hidden_item_event 75, 1, 0x03, ITEM_SUPER_REPEL, 0x0007
	@ BgEvent 5
	semantic_bg_script_event 20, 7, 0x03, 0x00, Route123_EventScript_BerryMastersHouseSign
	@ BgEvent 6
	semantic_bg_secret_base_event 57, 5, 0x00, 0x00000053
	@ BgEvent 7
	semantic_bg_hidden_item_event 12, 1, 0x03, ITEM_REVIVE, 0x0029
	@ BgEvent 8
	semantic_bg_hidden_item_event 91, 15, 0x03, ITEM_HYPER_POTION, 0x004A
	@ BgEvent 9
	semantic_bg_hidden_item_event 139, 15, 0x03, ITEM_PP_UP, 0x0063
	@ BgEvent 10
	semantic_bg_hidden_item_event 138, 18, 0x03, ITEM_RARE_CANDY, 0x006E
Route123_MapEvents: @ 0x08504ADC
	@ struct MapEvents
	semantic_map_events 43, 1, 22, 11, Route123_ObjectEvents, Route123_WarpEvents, Route123_CoordEvents, Route123_BgEvents
Route124_ObjectEvents: @ 0x08504AF0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 34, 25, 0x01, 0x01, 5, 0, 0x0001, 0x0003, Route124_EventScript_Spencer, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2A, 0x00, 61, 74, 0x01, 0x43, 5, 3, 0x0001, 0x0007, Route124_EventScript_Roland, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2B, 0x00, 49, 45, 0x01, 0x18, 0, 0, 0x0001, 0x0003, Route124_EventScript_Jenny, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2B, 0x00, 7, 23, 0x01, 0x12, 6, 8, 0x0001, 0x0005, Route124_EventScript_Grace, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2A, 0x00, 58, 58, 0x01, 0x1C, 7, 0, 0x0001, 0x0002, Route124_EventScript_Chad, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 28, 12, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D48, 0x0444
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 31, 53, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D55, 0x0445
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3B, 0x00, 58, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D62, 0x042A
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x2B, 0x00, 18, 44, 0x01, 0x08, 1, 1, 0x0001, 0x0001, Route124_EventScript_Lila, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xD5, 0x00, 17, 44, 0x01, 0x08, 1, 1, 0x0001, 0x0001, Route124_EventScript_Roy, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x2A, 0x00, 7, 29, 0x01, 0x07, 1, 1, 0x0001, 0x0005, Route124_EventScript_Declan, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x2B, 0x00, 69, 74, 0x01, 0x42, 1, 1, 0x0001, 0x0007, Route124_EventScript_Isabella, 0x0000
Route124_WarpEvents: @ 0x08504C10
	@ WarpEvent 0
	semantic_warp_event 70, 48, 0x03, 0x00, MAP_NUM_ROUTE124_DIVING_TREASURE_HUNTERS_HOUSE, MAP_GROUP_ROUTE124_DIVING_TREASURE_HUNTERS_HOUSE
Route124_BgEvents: @ 0x08504C18
	@ BgEvent 0
	semantic_bg_script_event 73, 48, 0x03, 0x00, Route124_EventScript_HuntersHouseSign
Route124_MapEvents: @ 0x08504C24
	@ struct MapEvents
	semantic_map_events 12, 1, 0, 1, Route124_ObjectEvents, Route124_WarpEvents, 0, Route124_BgEvents
Route125_ObjectEvents: @ 0x08504C38
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 7, 31, 0x01, 0x1C, 0, 0, 0x0001, 0x0002, Route125_EventScript_Nolen, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2A, 0x00, 45, 9, 0x01, 0x0A, 2, 5, 0x0001, 0x0002, Route125_EventScript_Stan, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2B, 0x00, 38, 24, 0x01, 0x1C, 6, 0, 0x0001, 0x0003, Route125_EventScript_Tanya, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2B, 0x00, 30, 28, 0x01, 0x34, 9, 9, 0x0001, 0x0003, Route125_EventScript_Sharon, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x31, 0x00, 21, 30, 0x03, 0x0D, 0, 0, 0x0001, 0x0002, Route125_EventScript_Ernest, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2F, 0x00, 17, 19, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route125_EventScript_Kim, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2F, 0x00, 18, 19, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route125_EventScript_Iris, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x42, 0x00, 43, 19, 0x03, 0x1C, 2, 1, 0x0001, 0x0003, Route125_EventScript_Presley, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x15, 0x00, 48, 19, 0x03, 0x1B, 2, 1, 0x0001, 0x0003, Route125_EventScript_Auron, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3B, 0x00, 46, 17, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D6F, 0x0482
Route125_WarpEvents: @ 0x08504D28
	@ WarpEvent 0
	semantic_warp_event 22, 19, 0x00, 0x00, MAP_NUM_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
Route125_BgEvents: @ 0x08504D30
	@ BgEvent 0
	semantic_bg_secret_base_event 53, 10, 0x00, 0x00000002
	@ BgEvent 1
	semantic_bg_secret_base_event 55, 11, 0x00, 0x00000020
	@ BgEvent 2
	semantic_bg_secret_base_event 7, 25, 0x00, 0x00000084
	@ BgEvent 3
	semantic_bg_secret_base_event 24, 32, 0x00, 0x00000098
Route125_MapEvents: @ 0x08504D60
	@ struct MapEvents
	semantic_map_events 10, 1, 0, 4, Route125_ObjectEvents, Route125_WarpEvents, 0, Route125_BgEvents
Route126_ObjectEvents: @ 0x08504D74
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 51, 65, 0x01, 0x33, 10, 3, 0x0001, 0x0003, Route126_EventScript_Barry, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2A, 0x00, 56, 22, 0x01, 0x1C, 9, 0, 0x0001, 0x0003, Route126_EventScript_Dean, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2B, 0x00, 63, 43, 0x01, 0x18, 0, 0, 0x0001, 0x0003, Route126_EventScript_Nikki, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2B, 0x00, 9, 48, 0x01, 0x07, 0, 0, 0x0001, 0x0003, Route126_EventScript_Brenda, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 14, 1, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256D7C, 0x0451
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2B, 0x00, 15, 66, 0x01, 0x42, 1, 1, 0x0001, 0x0007, Route126_EventScript_Sienna, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2A, 0x00, 7, 66, 0x01, 0x43, 1, 1, 0x0001, 0x0007, Route126_EventScript_Pablo, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x2B, 0x00, 64, 5, 0x01, 0x42, 1, 1, 0x0001, 0x0007, Route126_EventScript_Isobel, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x2A, 0x00, 56, 5, 0x01, 0x43, 1, 1, 0x0001, 0x0007, Route126_EventScript_Leonardo, 0x0000
Route126_MapEvents: @ 0x08504E4C
	@ struct MapEvents
	semantic_map_events 9, 0, 0, 0, Route126_ObjectEvents, 0, 0, 0
Route127_ObjectEvents: @ 0x08504E60
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 45, 42, 0x01, 0x0E, 0, 0, 0x0001, 0x0002, Route127_EventScript_Camden, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 18, 68, 0x01, 0x15, 0, 0, 0x0001, 0x0004, Route127_EventScript_Donny, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 14, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256D89, 0x040A
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 64, 39, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256D96, 0x040B
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x32, 0x00, 42, 21, 0x03, 0x09, 1, 1, 0x0001, 0x0000, Route127_EventScript_Jonah, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x32, 0x00, 64, 19, 0x03, 0x0A, 1, 1, 0x0001, 0x0000, Route127_EventScript_Roger, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x32, 0x00, 54, 14, 0x03, 0x07, 1, 1, 0x0001, 0x0000, Route127_EventScript_Henry, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x42, 0x00, 15, 23, 0x03, 0x09, 1, 1, 0x0001, 0x0002, Route127_EventScript_Aidan, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x2C, 0x00, 63, 63, 0x03, 0x01, 1, 1, 0x0001, 0x0003, Route127_EventScript_Koji, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x22, 0x00, 12, 23, 0x03, 0x0A, 1, 1, 0x0001, 0x0002, Route127_EventScript_Athena, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x3B, 0x00, 13, 20, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256DA3, 0x0483
Route127_BgEvents: @ 0x08504F68
	@ BgEvent 0
	semantic_bg_secret_base_event 59, 67, 0x00, 0x0000001F
	@ BgEvent 1
	semantic_bg_secret_base_event 59, 72, 0x00, 0x0000008E
	@ BgEvent 2
	semantic_bg_secret_base_event 67, 63, 0x00, 0x00000097
	@ BgEvent 3
	semantic_bg_secret_base_event 61, 21, 0x00, 0x0000008F
	@ BgEvent 4
	semantic_bg_secret_base_event 45, 24, 0x00, 0x0000007B
Route127_MapEvents: @ 0x08504FA4
	@ struct MapEvents
	semantic_map_events 11, 0, 0, 5, Route127_ObjectEvents, 0, 0, Route127_BgEvents
Route128_ObjectEvents: @ 0x08504FB8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 35, 33, 0x01, 0x30, 5, 5, 0x0001, 0x0003, Route128_EventScript_Isaiah, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 78, 24, 0x01, 0x1C, 5, 0, 0x0001, 0x0007, Route128_EventScript_Katelyn, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x86, 0x00, 40, 22, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0342
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xC3, 0x00, 37, 22, 0x03, 0x09, 1, 1, 0x0000, 0x0000, 0, 0x03B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xC4, 0x00, 38, 21, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x03B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x32, 0x00, 63, 28, 0x03, 0x07, 1, 1, 0x0001, 0x0000, Route128_EventScript_Wayne, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x21, 0x00, 47, 9, 0x03, 0x0A, 1, 1, 0x0001, 0x0003, Route128_EventScript_Ruben, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x22, 0x00, 24, 8, 0x03, 0x11, 1, 1, 0x0001, 0x0003, Route128_EventScript_Alexa, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x2B, 0x00, 101, 29, 0x01, 0x19, 1, 3, 0x0001, 0x0004, Route128_EventScript_Carlee, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x2A, 0x00, 101, 22, 0x01, 0x1A, 1, 3, 0x0001, 0x0004, Route128_EventScript_Harrison, 0x0000
Route128_BgEvents: @ 0x085050A8
	@ BgEvent 0
	semantic_bg_hidden_item_event 49, 9, 0x03, ITEM_HEART_SCALE, 0x005C
	@ BgEvent 1
	semantic_bg_hidden_item_event 57, 21, 0x03, ITEM_HEART_SCALE, 0x005D
	@ BgEvent 2
	semantic_bg_hidden_item_event 31, 33, 0x03, ITEM_HEART_SCALE, 0x005E
Route128_MapEvents: @ 0x085050CC
	@ struct MapEvents
	semantic_map_events 10, 0, 0, 3, Route128_ObjectEvents, 0, 0, Route128_BgEvents
Route129_ObjectEvents: @ 0x085050E0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 28, 16, 0x01, 0x32, 3, 4, 0x0001, 0x0003, Route129_EventScript_Chase, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 10, 14, 0x01, 0x34, 5, 2, 0x0001, 0x0002, Route129_EventScript_Allison, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2B, 0x00, 13, 22, 0x01, 0x40, 1, 1, 0x0001, 0x0005, Route129_EventScript_Tisha, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2A, 0x00, 35, 9, 0x01, 0x18, 1, 1, 0x0001, 0x0002, Route129_EventScript_Reed, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2A, 0x00, 13, 27, 0x01, 0x41, 1, 1, 0x0001, 0x0005, Route129_EventScript_Clarence, 0x0000
Route129_MapEvents: @ 0x08505158
	@ struct MapEvents
	semantic_map_events 5, 0, 0, 0, Route129_ObjectEvents, 0, 0, 0
Route130_ObjectEvents: @ 0x0850516C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 70, 21, 0x01, 0x33, 3, 6, 0x0001, 0x0003, Route130_EventScript_Rodney, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 7, 21, 0x01, 0x1A, 1, 4, 0x0001, 0x0005, Route130_EventScript_Katie, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3C, 0x00, 52, 9, 0x03, 0x0C, 0, 0, 0x0000, 0x0052, BerryTreeScript, 0x0011
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2A, 0x00, 7, 30, 0x01, 0x19, 1, 4, 0x0001, 0x0005, Route130_EventScript_Santiago, 0x0000
Route130_MapEvents: @ 0x085051CC
	@ struct MapEvents
	semantic_map_events 4, 0, 0, 0, Route130_ObjectEvents, 0, 0, 0
Route131_ObjectEvents: @ 0x085051E0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 41, 32, 0x01, 0x1D, 5, 7, 0x0001, 0x0003, Route131_EventScript_Richard, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2A, 0x00, 18, 19, 0x01, 0x16, 0, 7, 0x0001, 0x0004, Route131_EventScript_Herman, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2B, 0x00, 10, 22, 0x01, 0x14, 6, 0, 0x0001, 0x0004, Route131_EventScript_Susie, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2B, 0x00, 31, 25, 0x01, 0x2F, 3, 5, 0x0001, 0x0003, Route131_EventScript_Kara, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2B, 0x00, 9, 16, 0x01, 0x08, 1, 1, 0x0001, 0x0001, Route131_EventScript_Reli, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xD5, 0x00, 8, 16, 0x01, 0x08, 1, 1, 0x0001, 0x0001, Route131_EventScript_Ian, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2A, 0x00, 52, 20, 0x01, 0x1A, 1, 3, 0x0001, 0x0005, Route131_EventScript_Kevin, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x2B, 0x00, 52, 27, 0x01, 0x19, 1, 3, 0x0001, 0x0005, Route131_EventScript_Talia, 0x0000
Route131_WarpEvents: @ 0x085052A0
	@ WarpEvent 0
	semantic_warp_event 36, 6, 0x03, 0x00, MAP_NUM_SKY_PILLAR_ENTRANCE, MAP_GROUP_SKY_PILLAR_ENTRANCE
Route131_MapEvents: @ 0x085052A8
	@ struct MapEvents
	semantic_map_events 8, 1, 0, 0, Route131_ObjectEvents, Route131_WarpEvents, 0, 0
Route132_ObjectEvents: @ 0x085052BC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 40, 13, 0x01, 0x2E, 3, 3, 0x0001, 0x0002, Route132_EventScript_Gilbert, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 10, 6, 0x01, 0x2D, 3, 3, 0x0001, 0x0002, Route132_EventScript_Dana, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 10, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256DB0, 0x040C
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2C, 0x00, 9, 15, 0x03, 0x08, 0, 0, 0x0001, 0x0004, Route132_EventScript_Kiyo, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x32, 0x00, 49, 28, 0x03, 0x0A, 0, 0, 0x0001, 0x0001, Route132_EventScript_Ronald, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x15, 0x00, 33, 26, 0x03, 0x08, 1, 1, 0x0001, 0x0004, Route132_EventScript_Paxton, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x22, 0x00, 33, 31, 0x03, 0x19, 1, 4, 0x0001, 0x0004, Route132_EventScript_Darcy, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x16, 0x00, 21, 30, 0x03, 0x07, 1, 1, 0x0001, 0x0004, Route132_EventScript_Makayla, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x21, 0x00, 21, 25, 0x03, 0x1A, 1, 4, 0x0001, 0x0004, Route132_EventScript_Jonathan, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3B, 0x00, 20, 27, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256DBD, 0x0484
Route132_MapEvents: @ 0x085053AC
	@ struct MapEvents
	semantic_map_events 10, 0, 0, 0, Route132_ObjectEvents, 0, 0, 0
Route133_ObjectEvents: @ 0x085053C0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 68, 27, 0x01, 0x19, 0, 2, 0x0001, 0x0003, Route133_EventScript_Franklin, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 13, 3, 0x01, 0x08, 0, 0, 0x0001, 0x0003, Route133_EventScript_Linda, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2B, 0x00, 68, 28, 0x01, 0x1A, 0, 2, 0x0001, 0x0003, Route133_EventScript_Debra, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 53, 12, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256DCA, 0x040D
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 8, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256DD7, 0x040E
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x42, 0x00, 7, 14, 0x03, 0x12, 1, 1, 0x0001, 0x0002, Route133_EventScript_Beck, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x21, 0x00, 37, 15, 0x03, 0x12, 0, 0, 0x0001, 0x0004, Route133_EventScript_Warren, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x16, 0x00, 56, 11, 0x03, 0x08, 1, 1, 0x0001, 0x0003, Route133_EventScript_Mollie, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x15, 0x00, 56, 15, 0x03, 0x10, 1, 1, 0x0001, 0x0003, Route133_EventScript_Conor, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3B, 0x00, 48, 28, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256DE4, 0x0485
Route133_MapEvents: @ 0x085054B0
	@ struct MapEvents
	semantic_map_events 10, 0, 0, 0, Route133_ObjectEvents, 0, 0, 0
Route134_ObjectEvents: @ 0x085054C4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2A, 0x00, 49, 9, 0x01, 0x31, 3, 5, 0x0001, 0x0002, Route134_EventScript_Jack, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2B, 0x00, 58, 7, 0x01, 0x01, 0, 0, 0x0001, 0x0003, Route134_EventScript_Laurel, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 41, 23, 0x03, 0x0A, 0, 0, 0x0001, 0x0002, Route134_EventScript_Aaron, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x42, 0x00, 24, 23, 0x03, 0x1A, 0, 3, 0x0001, 0x0006, Route134_EventScript_Alex, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2C, 0x00, 49, 16, 0x03, 0x1B, 6, 0, 0x0001, 0x0005, Route134_EventScript_Hitoshi, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x22, 0x00, 43, 23, 0x01, 0x09, 1, 1, 0x0001, 0x0002, Route134_EventScript_Marley, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x31, 0x00, 24, 30, 0x03, 0x19, 0, 3, 0x0001, 0x0006, Route134_EventScript_Kelvin, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x0E, 0x00, 50, 16, 0x03, 0x1C, 6, 0, 0x0001, 0x0005, Route134_EventScript_Reyna, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x31, 0x00, 63, 14, 0x03, 0x12, 1, 1, 0x0001, 0x0003, Route134_EventScript_Hudson, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x3B, 0x00, 50, 17, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256DF1, 0x0486
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x3B, 0x00, 22, 27, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256DFE, 0x0487
Route134_MapEvents: @ 0x085055CC
	@ struct MapEvents
	semantic_map_events 11, 0, 0, 0, Route134_ObjectEvents, 0, 0, 0
Underwater_Route124_BgEvents: @ 0x085055E0
	@ BgEvent 0
	semantic_bg_hidden_item_event 42, 51, 0x00, ITEM_CARBOS, 0x0008
	@ BgEvent 1
	semantic_bg_hidden_item_event 14, 40, 0x00, ITEM_GREEN_SHARD, 0x0009
	@ BgEvent 2
	semantic_bg_hidden_item_event 66, 34, 0x03, ITEM_PEARL, 0x000A
	@ BgEvent 3
	semantic_bg_hidden_item_event 64, 54, 0x03, ITEM_BIG_PEARL, 0x000B
	@ BgEvent 4
	semantic_bg_hidden_item_event 70, 64, 0x03, ITEM_HEART_SCALE, 0x000D
	@ BgEvent 5
	semantic_bg_hidden_item_event 42, 5, 0x03, ITEM_CALCIUM, 0x0024
	@ BgEvent 6
	semantic_bg_hidden_item_event 45, 36, 0x03, ITEM_HEART_SCALE, 0x0026
Underwater_Route124_MapEvents: @ 0x08505634
	@ struct MapEvents
	semantic_map_events 0, 0, 0, 7, 0, 0, 0, Underwater_Route124_BgEvents
Underwater_Route126_WarpEvents: @ 0x08505648
	@ WarpEvent 0
	semantic_warp_event 45, 65, 0x00, 0x00, MAP_NUM_UNDERWATER_SOOTOPOLIS_CITY, MAP_GROUP_UNDERWATER_SOOTOPOLIS_CITY
Underwater_Route126_BgEvents: @ 0x08505650
	@ BgEvent 0
	semantic_bg_hidden_item_event 30, 17, 0x03, ITEM_HEART_SCALE, 0x000E
	@ BgEvent 1
	semantic_bg_hidden_item_event 41, 19, 0x03, ITEM_ULTRA_BALL, 0x000F
	@ BgEvent 2
	semantic_bg_hidden_item_event 63, 19, 0x03, ITEM_STARDUST, 0x0010
	@ BgEvent 3
	semantic_bg_hidden_item_event 10, 36, 0x03, ITEM_PEARL, 0x0011
	@ BgEvent 4
	semantic_bg_hidden_item_event 11, 39, 0x03, ITEM_IRON, 0x0013
	@ BgEvent 5
	semantic_bg_hidden_item_event 12, 35, 0x03, ITEM_YELLOW_SHARD, 0x0012
	@ BgEvent 6
	semantic_bg_hidden_item_event 65, 60, 0x03, ITEM_BIG_PEARL, 0x0014
	@ BgEvent 7
	semantic_bg_hidden_item_event 9, 77, 0x03, ITEM_BLUE_SHARD, 0x000C
Underwater_Route126_MapEvents: @ 0x085056B0
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 8, 0, Underwater_Route126_WarpEvents, 0, Underwater_Route126_BgEvents
Underwater_Route127_WarpEvents: @ 0x085056C4
	@ WarpEvent 0
	semantic_warp_event 57, 5, 0x00, 0x00, MAP_NUM_UNDERWATER_MARINE_CAVE, MAP_GROUP_UNDERWATER_MARINE_CAVE
	@ WarpEvent 1
	semantic_warp_event 67, 38, 0x00, 0x00, MAP_NUM_UNDERWATER_MARINE_CAVE, MAP_GROUP_UNDERWATER_MARINE_CAVE
Underwater_Route127_BgEvents: @ 0x085056D4
	@ BgEvent 0
	semantic_bg_hidden_item_event 12, 42, 0x03, ITEM_STAR_PIECE, 0x0015
	@ BgEvent 1
	semantic_bg_hidden_item_event 50, 36, 0x03, ITEM_HP_UP, 0x0016
	@ BgEvent 2
	semantic_bg_hidden_item_event 34, 72, 0x03, ITEM_HEART_SCALE, 0x0017
	@ BgEvent 3
	semantic_bg_hidden_item_event 72, 20, 0x03, ITEM_RED_SHARD, 0x0018
Underwater_Route127_MapEvents: @ 0x08505704
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 4, 0, Underwater_Route127_WarpEvents, 0, Underwater_Route127_BgEvents
Underwater_Route128_WarpEvents: @ 0x08505718
	@ WarpEvent 0
	semantic_warp_event 38, 26, 0x03, 0x00, MAP_NUM_UNDERWATER_SEAFLOOR_CAVERN, MAP_GROUP_UNDERWATER_SEAFLOOR_CAVERN
Underwater_Route128_BgEvents: @ 0x08505720
	@ BgEvent 0
	semantic_bg_hidden_item_event 38, 19, 0x03, ITEM_PROTEIN, 0x0019
	@ BgEvent 1
	semantic_bg_hidden_item_event 69, 18, 0x03, ITEM_PEARL, 0x001A
Underwater_Route128_MapEvents: @ 0x08505738
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 2, 0, Underwater_Route128_WarpEvents, 0, Underwater_Route128_BgEvents
Underwater_Route129_WarpEvents: @ 0x0850574C
	@ WarpEvent 0
	semantic_warp_event 26, 3, 0x00, 0x00, MAP_NUM_UNDERWATER_MARINE_CAVE, MAP_GROUP_UNDERWATER_MARINE_CAVE
	@ WarpEvent 1
	semantic_warp_event 32, 21, 0x00, 0x00, MAP_NUM_UNDERWATER_MARINE_CAVE, MAP_GROUP_UNDERWATER_MARINE_CAVE
Underwater_Route129_MapEvents: @ 0x0850575C
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, Underwater_Route129_WarpEvents, 0, 0
Underwater_Route105_WarpEvents: @ 0x08505770
	@ WarpEvent 0
	semantic_warp_event 13, 4, 0x00, 0x00, MAP_NUM_UNDERWATER_MARINE_CAVE, MAP_GROUP_UNDERWATER_MARINE_CAVE
	@ WarpEvent 1
	semantic_warp_event 17, 66, 0x00, 0x00, MAP_NUM_UNDERWATER_MARINE_CAVE, MAP_GROUP_UNDERWATER_MARINE_CAVE
Underwater_Route105_MapEvents: @ 0x08505780
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, Underwater_Route105_WarpEvents, 0, 0
Underwater_Route125_WarpEvents: @ 0x08505794
	@ WarpEvent 0
	semantic_warp_event 22, 10, 0x00, 0x00, MAP_NUM_UNDERWATER_MARINE_CAVE, MAP_GROUP_UNDERWATER_MARINE_CAVE
	@ WarpEvent 1
	semantic_warp_event 45, 30, 0x00, 0x00, MAP_NUM_UNDERWATER_MARINE_CAVE, MAP_GROUP_UNDERWATER_MARINE_CAVE
Underwater_Route125_MapEvents: @ 0x085057A4
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, Underwater_Route125_WarpEvents, 0, 0
LittlerootTown_BrendansHouse_1F_ObjectEvents: @ 0x085057B8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xD7, 0x00, 2, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082581AF, 0x02F6
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x5F, 0x00, 1, 3, 0x03, 0x1C, 3, 0, 0x0000, 0x0000, EventScript_JP_082582B7, 0x02F3
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x60, 0x00, 4, 5, 0x03, 0x41, 0, 0, 0x0000, 0x0000, EventScript_JP_082582A4, 0x02F2
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x1A, 0x00, 2, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F04A6, 0x0310
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x81, 0x00, 5, 6, 0x03, 0x09, 1, 1, 0x0000, 0x0000, 0, 0x02DE
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x05, 0x00, 1, 5, 0x03, 0x05, 1, 1, 0x0000, 0x0000, EventScript_JP_081F04F0, 0x02DF
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x64, 0x00, 8, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x02E9
LittlerootTown_BrendansHouse_1F_WarpEvents: @ 0x08505860
	@ WarpEvent 0
	semantic_warp_event 9, 8, 0x00, 0x01, MAP_NUM_LITTLEROOT_TOWN, MAP_GROUP_LITTLEROOT_TOWN
	@ WarpEvent 1
	semantic_warp_event 8, 8, 0x00, 0x01, MAP_NUM_LITTLEROOT_TOWN, MAP_GROUP_LITTLEROOT_TOWN
	@ WarpEvent 2
	semantic_warp_event 8, 2, 0x00, 0x00, MAP_NUM_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, MAP_GROUP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
LittlerootTown_BrendansHouse_1F_CoordEvents: @ 0x08505878
	@ CoordEvent 0
	semantic_coord_event 8, 8, 0x00, 0x4092, 0x0004, LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom
	@ CoordEvent 1
	semantic_coord_event 7, 3, 0x00, 0x408D, 0x0002, LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0
	@ CoordEvent 2
	semantic_coord_event 8, 4, 0x00, 0x408D, 0x0002, LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1
	@ CoordEvent 3
	semantic_coord_event 9, 3, 0x00, 0x408D, 0x0002, LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2
LittlerootTown_BrendansHouse_1F_MapEvents: @ 0x085058B8
	@ struct MapEvents
	semantic_map_events 7, 3, 4, 0, LittlerootTown_BrendansHouse_1F_ObjectEvents, LittlerootTown_BrendansHouse_1F_WarpEvents, LittlerootTown_BrendansHouse_1F_CoordEvents, 0
LittlerootTown_BrendansHouse_2F_ObjectEvents: @ 0x085058CC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x64, 0x00, 7, 1, 0x00, 0x08, 1, 0, 0x0000, 0x0000, EventScript_JP_081F0D0D, 0x02F8
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x04, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 1, 0, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 1, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 5, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xD7, 0x00, 7, 1, 0x03, 0x08, 1, 0, 0x0000, 0x0000, 0, 0x02F5
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x3B, 0x00, 3, 4, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F0030, 0x0331
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0xA3, 0x00, 5, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x032F
LittlerootTown_BrendansHouse_2F_WarpEvents: @ 0x08505A4C
	@ WarpEvent 0
	semantic_warp_event 7, 1, 0x00, 0x02, MAP_NUM_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, MAP_GROUP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F
LittlerootTown_BrendansHouse_2F_BgEvents: @ 0x08505A54
	@ BgEvent 0
	semantic_bg_script_event 0, 1, 0x00, 0x01, EventScript_JP_081F01BC
	@ BgEvent 1
	semantic_bg_script_event 1, 1, 0x00, 0x00, EventScript_JP_081F0205
	@ BgEvent 2
	semantic_bg_script_event 5, 1, 0x00, 0x00, EventScript_JP_08257F6B
	@ BgEvent 3
	semantic_bg_script_event 3, 1, 0x00, 0x00, EventScript_JP_081F020E
LittlerootTown_BrendansHouse_2F_MapEvents: @ 0x08505A84
	@ struct MapEvents
	semantic_map_events 16, 1, 0, 4, LittlerootTown_BrendansHouse_2F_ObjectEvents, LittlerootTown_BrendansHouse_2F_WarpEvents, 0, LittlerootTown_BrendansHouse_2F_BgEvents
LittlerootTown_MaysHouse_1F_ObjectEvents: @ 0x08505A98
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xD7, 0x00, 8, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_082581AF, 0x02F7
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x60, 0x00, 6, 5, 0x03, 0x41, 0, 0, 0x0000, 0x0000, EventScript_JP_082582A4, 0x02F2
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x5F, 0x00, 9, 3, 0x03, 0x1B, 3, 0, 0x0000, 0x0000, EventScript_JP_082582B7, 0x02F3
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x1A, 0x00, 8, 7, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F04A6, 0x0311
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x81, 0x00, 5, 6, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x02DE
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x05, 0x00, 9, 5, 0x03, 0x05, 1, 1, 0x0000, 0x0000, EventScript_JP_081F04F0, 0x02E0
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x69, 0x00, 2, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x02EA
LittlerootTown_MaysHouse_1F_WarpEvents: @ 0x08505B40
	@ WarpEvent 0
	semantic_warp_event 1, 8, 0x00, 0x00, MAP_NUM_LITTLEROOT_TOWN, MAP_GROUP_LITTLEROOT_TOWN
	@ WarpEvent 1
	semantic_warp_event 2, 8, 0x00, 0x00, MAP_NUM_LITTLEROOT_TOWN, MAP_GROUP_LITTLEROOT_TOWN
	@ WarpEvent 2
	semantic_warp_event 2, 2, 0x00, 0x00, MAP_NUM_LITTLEROOT_TOWN_MAYS_HOUSE_2F, MAP_GROUP_LITTLEROOT_TOWN_MAYS_HOUSE_2F
LittlerootTown_MaysHouse_1F_CoordEvents: @ 0x08505B58
	@ CoordEvent 0
	semantic_coord_event 2, 8, 0x00, 0x4092, 0x0004, EventScript_JP_081F04FF
	@ CoordEvent 1
	semantic_coord_event 1, 3, 0x00, 0x408D, 0x0002, EventScript_JP_081F051A
	@ CoordEvent 2
	semantic_coord_event 2, 4, 0x00, 0x408D, 0x0002, EventScript_JP_081F0526
	@ CoordEvent 3
	semantic_coord_event 3, 3, 0x00, 0x408D, 0x0002, EventScript_JP_081F0532
LittlerootTown_MaysHouse_1F_MapEvents: @ 0x08505B98
	@ struct MapEvents
	semantic_map_events 7, 3, 4, 0, LittlerootTown_MaysHouse_1F_ObjectEvents, LittlerootTown_MaysHouse_1F_WarpEvents, LittlerootTown_MaysHouse_1F_CoordEvents, 0
LittlerootTown_MaysHouse_2F_ObjectEvents: @ 0x08505BAC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x69, 0x00, 1, 1, 0x00, 0x08, 1, 0, 0x0000, 0x0000, EventScript_JP_081F0D0D, 0x02D2
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 6, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 1, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 2, 6, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 3, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 4, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 5, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 2, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 3, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 4, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 5, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xD7, 0x00, 1, 1, 0x03, 0x08, 1, 0, 0x0000, 0x0000, 0, 0x02F5
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x8E, 0x00, 3, 4, 0x04, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0351
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x3B, 0x00, 5, 4, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F0B80, 0x0332
LittlerootTown_MaysHouse_2F_WarpEvents: @ 0x08505D2C
	@ WarpEvent 0
	semantic_warp_event 1, 1, 0x00, 0x02, MAP_NUM_LITTLEROOT_TOWN_MAYS_HOUSE_1F, MAP_GROUP_LITTLEROOT_TOWN_MAYS_HOUSE_1F
LittlerootTown_MaysHouse_2F_BgEvents: @ 0x08505D34
	@ BgEvent 0
	semantic_bg_script_event 5, 1, 0x00, 0x00, EventScript_JP_081F020E
	@ BgEvent 1
	semantic_bg_script_event 7, 1, 0x00, 0x00, EventScript_JP_081F0205
	@ BgEvent 2
	semantic_bg_script_event 3, 1, 0x00, 0x00, EventScript_JP_08257F77
	@ BgEvent 3
	semantic_bg_script_event 8, 1, 0x00, 0x00, EventScript_JP_081F0D9F
LittlerootTown_MaysHouse_2F_MapEvents: @ 0x08505D64
	@ struct MapEvents
	semantic_map_events 16, 1, 0, 4, LittlerootTown_MaysHouse_2F_ObjectEvents, LittlerootTown_MaysHouse_2F_WarpEvents, 0, LittlerootTown_MaysHouse_2F_BgEvents
LittlerootTown_ProfessorBirchsLab_ObjectEvents: @ 0x08505D78
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 9, 8, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F151F, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x40, 0x00, 6, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F17F5, 0x02D1
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF0, 0x00, 7, 4, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081F1987, 0x0379
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 6, 8, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081F1556, 0x032B
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 6, 8, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081F158A, 0x032C
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 6, 8, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081F15BE, 0x0346
LittlerootTown_ProfessorBirchsLab_WarpEvents: @ 0x08505E08
	@ WarpEvent 0
	semantic_warp_event 6, 12, 0x00, 0x02, MAP_NUM_LITTLEROOT_TOWN, MAP_GROUP_LITTLEROOT_TOWN
	@ WarpEvent 1
	semantic_warp_event 7, 12, 0x00, 0x02, MAP_NUM_LITTLEROOT_TOWN, MAP_GROUP_LITTLEROOT_TOWN
LittlerootTown_ProfessorBirchsLab_BgEvents: @ 0x08505E18
	@ BgEvent 0
	semantic_bg_script_event 10, 7, 0x00, 0x01, EventScript_JP_081F197E
	@ BgEvent 1
	semantic_bg_script_event 11, 7, 0x00, 0x01, EventScript_JP_081F197E
	@ BgEvent 2
	semantic_bg_script_event 7, 1, 0x00, 0x00, EventScript_JP_081F1A68
	@ BgEvent 3
	semantic_bg_script_event 8, 1, 0x00, 0x00, EventScript_JP_081F1A68
	@ BgEvent 4
	semantic_bg_script_event 1, 1, 0x00, 0x00, EventScript_JP_081F1A5F
	@ BgEvent 5
	semantic_bg_script_event 0, 7, 0x00, 0x00, EventScript_JP_081F1A5F
	@ BgEvent 6
	semantic_bg_script_event 1, 7, 0x00, 0x00, EventScript_JP_081F1A5F
	@ BgEvent 7
	semantic_bg_script_event 2, 7, 0x00, 0x00, EventScript_JP_081F1A5F
	@ BgEvent 8
	semantic_bg_script_event 3, 7, 0x00, 0x00, EventScript_JP_081F1A5F
	@ BgEvent 9
	semantic_bg_script_event 4, 1, 0x00, 0x00, EventScript_JP_081F1A56
	@ BgEvent 10
	semantic_bg_script_event 3, 1, 0x00, 0x00, EventScript_JP_081F1A56
	@ BgEvent 11
	semantic_bg_script_event 1, 10, 0x00, 0x00, EventScript_JP_081F1A56
	@ BgEvent 12
	semantic_bg_script_event 1, 9, 0x00, 0x00, EventScript_JP_081F1A56
	@ BgEvent 13
	semantic_bg_script_event 11, 10, 0x00, 0x00, EventScript_JP_081F1A56
	@ BgEvent 14
	semantic_bg_script_event 11, 9, 0x00, 0x00, EventScript_JP_081F1A56
LittlerootTown_ProfessorBirchsLab_MapEvents: @ 0x08505ECC
	@ struct MapEvents
	semantic_map_events 6, 2, 0, 15, LittlerootTown_ProfessorBirchsLab_ObjectEvents, LittlerootTown_ProfessorBirchsLab_WarpEvents, 0, LittlerootTown_ProfessorBirchsLab_BgEvents
OldaleTown_House1_ObjectEvents: @ 0x08505EE0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 6, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F28D4, 0x0000
OldaleTown_House1_WarpEvents: @ 0x08505EF8
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x00, MAP_NUM_OLDALE_TOWN, MAP_GROUP_OLDALE_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x00, MAP_NUM_OLDALE_TOWN, MAP_GROUP_OLDALE_TOWN
OldaleTown_House1_MapEvents: @ 0x08505F08
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, OldaleTown_House1_ObjectEvents, OldaleTown_House1_WarpEvents, 0, 0
OldaleTown_House2_ObjectEvents: @ 0x08505F1C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x12, 0x00, 4, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F294A, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x26, 0x00, 7, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F2953, 0x0000
OldaleTown_House2_WarpEvents: @ 0x08505F4C
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x01, MAP_NUM_OLDALE_TOWN, MAP_GROUP_OLDALE_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x01, MAP_NUM_OLDALE_TOWN, MAP_GROUP_OLDALE_TOWN
OldaleTown_House2_MapEvents: @ 0x08505F5C
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, OldaleTown_House2_ObjectEvents, OldaleTown_House2_WarpEvents, 0, 0
OldaleTown_PokemonCenter_1F_ObjectEvents: @ 0x08505F70
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F29B6, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F29C4, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x07, 0x00, 10, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F29CD, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0E, 0x00, 3, 7, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081F29D6, 0x0000
OldaleTown_PokemonCenter_1F_WarpEvents: @ 0x08505FD0
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x02, MAP_NUM_OLDALE_TOWN, MAP_GROUP_OLDALE_TOWN
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x02, MAP_NUM_OLDALE_TOWN, MAP_GROUP_OLDALE_TOWN
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_OLDALE_TOWN_POKEMON_CENTER_2F, MAP_GROUP_OLDALE_TOWN_POKEMON_CENTER_2F
OldaleTown_PokemonCenter_1F_MapEvents: @ 0x08505FE8
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, OldaleTown_PokemonCenter_1F_ObjectEvents, OldaleTown_PokemonCenter_1F_WarpEvents, 0, 0
OldaleTown_PokemonCenter_2F_ObjectEvents: @ 0x08505FFC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
OldaleTown_PokemonCenter_2F_WarpEvents: @ 0x0850605C
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_OLDALE_TOWN_POKEMON_CENTER_1F, MAP_GROUP_OLDALE_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
OldaleTown_PokemonCenter_2F_MapEvents: @ 0x08506074
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, OldaleTown_PokemonCenter_2F_ObjectEvents, OldaleTown_PokemonCenter_2F_WarpEvents, 0, 0
OldaleTown_Mart_ObjectEvents: @ 0x08506088
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F2B0C, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x22, 0x00, 5, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F2B56, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x07, 0x00, 9, 4, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081F2B75, 0x0000
OldaleTown_Mart_WarpEvents: @ 0x085060D0
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x03, MAP_NUM_OLDALE_TOWN, MAP_GROUP_OLDALE_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x03, MAP_NUM_OLDALE_TOWN, MAP_GROUP_OLDALE_TOWN
OldaleTown_Mart_MapEvents: @ 0x085060E0
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, OldaleTown_Mart_ObjectEvents, OldaleTown_Mart_WarpEvents, 0, 0
DewfordTown_House1_ObjectEvents: @ 0x085060F4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x18, 0x00, 6, 3, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F2C1A, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x13, 0x00, 3, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F2C11, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xD0, 0x00, 4, 2, 0x03, 0x08, 3, 1, 0x0000, 0x0000, EventScript_JP_081F2C23, 0x0000
DewfordTown_House1_WarpEvents: @ 0x0850613C
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x03, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x03, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
DewfordTown_House1_MapEvents: @ 0x0850614C
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, DewfordTown_House1_ObjectEvents, DewfordTown_House1_WarpEvents, 0, 0
DewfordTown_PokemonCenter_1F_ObjectEvents: @ 0x08506160
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F2CE3, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 10, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F2CF1, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 5, 5, 0x00, 0x05, 2, 1, 0x0000, 0x0000, EventScript_JP_081F2CFA, 0x0000
DewfordTown_PokemonCenter_1F_WarpEvents: @ 0x085061A8
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x01, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x01, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_DEWFORD_TOWN_POKEMON_CENTER_2F, MAP_GROUP_DEWFORD_TOWN_POKEMON_CENTER_2F
DewfordTown_PokemonCenter_1F_MapEvents: @ 0x085061C0
	@ struct MapEvents
	semantic_map_events 3, 3, 0, 0, DewfordTown_PokemonCenter_1F_ObjectEvents, DewfordTown_PokemonCenter_1F_WarpEvents, 0, 0
DewfordTown_PokemonCenter_2F_ObjectEvents: @ 0x085061D4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
DewfordTown_PokemonCenter_2F_WarpEvents: @ 0x08506234
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_DEWFORD_TOWN_POKEMON_CENTER_1F, MAP_GROUP_DEWFORD_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
DewfordTown_PokemonCenter_2F_MapEvents: @ 0x0850624C
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, DewfordTown_PokemonCenter_2F_ObjectEvents, DewfordTown_PokemonCenter_2F_WarpEvents, 0, 0
DewfordTown_Gym_ObjectEvents: @ 0x08506260
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x7E, 0x00, 4, 3, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F2F0D, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2C, 0x00, 2, 18, 0x00, 0x07, 0, 0, 0x0001, 0x0003, EventScript_JP_081F3002, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0E, 0x00, 15, 3, 0x03, 0x08, 0, 0, 0x0001, 0x0003, EventScript_JP_081F3024, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0E, 0x00, 12, 25, 0x03, 0x07, 0, 0, 0x0001, 0x0002, EventScript_JP_081F3046, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x17, 0x00, 5, 24, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F30CE, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2C, 0x00, 7, 8, 0x01, 0x0A, 1, 1, 0x0001, 0x0003, EventScript_JP_081F308A, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x0E, 0x00, 16, 9, 0x03, 0x08, 1, 1, 0x0001, 0x0003, EventScript_JP_081F30AC, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x31, 0x00, 14, 12, 0x01, 0x0A, 1, 1, 0x0001, 0x0002, EventScript_JP_081F3068, 0x0000
DewfordTown_Gym_WarpEvents: @ 0x08506320
	@ WarpEvent 0
	semantic_warp_event 5, 27, 0x00, 0x02, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
	@ WarpEvent 1
	semantic_warp_event 6, 27, 0x00, 0x02, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
DewfordTown_Gym_BgEvents: @ 0x08506330
	@ BgEvent 0
	semantic_bg_script_event 4, 23, 0x03, 0x01, EventScript_JP_081F30ED
	@ BgEvent 1
	semantic_bg_script_event 7, 23, 0x03, 0x01, EventScript_JP_081F30FD
	@ BgEvent 2
	semantic_bg_script_event 4, 24, 0x00, 0x01, EventScript_JP_081F30ED
	@ BgEvent 3
	semantic_bg_script_event 7, 24, 0x00, 0x01, EventScript_JP_081F30FD
DewfordTown_Gym_MapEvents: @ 0x08506360
	@ struct MapEvents
	semantic_map_events 8, 2, 0, 4, DewfordTown_Gym_ObjectEvents, DewfordTown_Gym_WarpEvents, 0, DewfordTown_Gym_BgEvents
DewfordTown_Hall_ObjectEvents: @ 0x08506374
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0A, 0x00, 4, 6, 0x00, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081F3789, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x14, 0x00, 1, 5, 0x00, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F37B2, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x13, 0x00, 5, 4, 0x00, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F37C3, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x15, 0x00, 9, 3, 0x00, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081F3800, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x06, 0x00, 5, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081F381C, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x0B, 0x00, 14, 7, 0x00, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081F3838, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x26, 0x00, 12, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F38E8, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x25, 0x00, 15, 3, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F38F4, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x27, 0x00, 8, 6, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081F3A93, 0x03AC
DewfordTown_Hall_WarpEvents: @ 0x0850644C
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x00, 0x00, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x00, 0x00, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
DewfordTown_Hall_BgEvents: @ 0x0850645C
	@ BgEvent 0
	semantic_bg_script_event 0, 1, 0x03, 0x00, EventScript_JP_081F3849
	@ BgEvent 1
	semantic_bg_script_event 7, 1, 0x03, 0x00, EventScript_JP_081F3859
DewfordTown_Hall_MapEvents: @ 0x08506474
	@ struct MapEvents
	semantic_map_events 9, 2, 0, 2, DewfordTown_Hall_ObjectEvents, DewfordTown_Hall_WarpEvents, 0, DewfordTown_Hall_BgEvents
DewfordTown_House2_ObjectEvents: @ 0x08506488
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x21, 0x00, 6, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4009, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x09, 0x00, 2, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081F404C, 0x0000
DewfordTown_House2_WarpEvents: @ 0x085064B8
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x04, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x04, MAP_NUM_DEWFORD_TOWN, MAP_GROUP_DEWFORD_TOWN
DewfordTown_House2_MapEvents: @ 0x085064C8
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, DewfordTown_House2_ObjectEvents, DewfordTown_House2_WarpEvents, 0, 0
LavaridgeTown_HerbShop_ObjectEvents: @ 0x085064DC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 3, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4186, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1D, 0x00, 7, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F41B5, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x15, 0x00, 9, 3, 0x03, 0x05, 1, 1, 0x0000, 0x0000, EventScript_JP_081F41AC, 0x0000
LavaridgeTown_HerbShop_WarpEvents: @ 0x08506524
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x00, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x00, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
LavaridgeTown_HerbShop_MapEvents: @ 0x08506534
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, LavaridgeTown_HerbShop_ObjectEvents, LavaridgeTown_HerbShop_WarpEvents, 0, 0
LavaridgeTown_Gym_1F_ObjectEvents: @ 0x08506548
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x80, 0x00, 13, 9, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F435F, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x42, 0x00, 3, 14, 0x03, 0x08, 0, 0, 0x0003, 0x0001, EventScript_JP_081F4452, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 2, 15, 0x03, 0x08, 0, 0, 0x0003, 0x0001, EventScript_JP_081F44D3, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x42, 0x00, 3, 10, 0x03, 0x08, 0, 0, 0x0003, 0x0001, EventScript_JP_081F4482, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x0E, 0x00, 5, 2, 0x03, 0x08, 0, 0, 0x0003, 0x0001, EventScript_JP_081F44B8, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x17, 0x00, 12, 16, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F453F, 0x0000
LavaridgeTown_Gym_1F_WarpEvents: @ 0x085065D8
	@ WarpEvent 0
	semantic_warp_event 13, 18, 0x03, 0x01, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
	@ WarpEvent 1
	semantic_warp_event 14, 18, 0x03, 0x01, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
	@ WarpEvent 2
	semantic_warp_event 10, 18, 0x03, 0x00, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 3
	semantic_warp_event 8, 9, 0x03, 0x02, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 4
	semantic_warp_event 4, 18, 0x03, 0x04, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 5
	semantic_warp_event 5, 14, 0x03, 0x03, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 6
	semantic_warp_event 0, 17, 0x03, 0x01, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 7
	semantic_warp_event 5, 9, 0x03, 0x05, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 8
	semantic_warp_event 2, 15, 0x03, 0x06, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 9
	semantic_warp_event 3, 14, 0x03, 0x07, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 10
	semantic_warp_event 1, 14, 0x03, 0x08, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 11
	semantic_warp_event 0, 10, 0x03, 0x09, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 12
	semantic_warp_event 3, 10, 0x03, 0x0A, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 13
	semantic_warp_event 0, 6, 0x03, 0x0B, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 14
	semantic_warp_event 3, 6, 0x03, 0x0C, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 15
	semantic_warp_event 5, 6, 0x03, 0x0D, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 16
	semantic_warp_event 2, 3, 0x03, 0x0E, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 17
	semantic_warp_event 5, 2, 0x03, 0x0F, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 18
	semantic_warp_event 7, 2, 0x03, 0x10, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 19
	semantic_warp_event 8, 6, 0x03, 0x11, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 20
	semantic_warp_event 10, 6, 0x03, 0x12, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 21
	semantic_warp_event 4, 16, 0x00, 0x14, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 22
	semantic_warp_event 12, 3, 0x03, 0x13, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 23
	semantic_warp_event 14, 6, 0x03, 0x15, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 24
	semantic_warp_event 13, 17, 0x03, 0x16, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
	@ WarpEvent 25
	semantic_warp_event 12, 12, 0x03, 0x17, MAP_NUM_LAVARIDGE_TOWN_GYM_B1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_B1F
LavaridgeTown_Gym_1F_BgEvents: @ 0x085066A8
	@ BgEvent 0
	semantic_bg_script_event 10, 15, 0x00, 0x01, EventScript_JP_081F455E
	@ BgEvent 1
	semantic_bg_script_event 16, 15, 0x00, 0x01, EventScript_JP_081F456E
LavaridgeTown_Gym_1F_MapEvents: @ 0x085066C0
	@ struct MapEvents
	semantic_map_events 6, 26, 0, 2, LavaridgeTown_Gym_1F_ObjectEvents, LavaridgeTown_Gym_1F_WarpEvents, 0, LavaridgeTown_Gym_1F_BgEvents
LavaridgeTown_Gym_B1F_ObjectEvents: @ 0x085066D4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x42, 0x00, 4, 18, 0x03, 0x08, 1, 1, 0x0003, 0x0001, EventScript_JP_081F44EE, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x42, 0x00, 3, 6, 0x00, 0x08, 1, 1, 0x0003, 0x0001, EventScript_JP_081F449D, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x42, 0x00, 13, 17, 0x00, 0x08, 1, 1, 0x0003, 0x0001, EventScript_JP_081F4509, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x37, 0x00, 4, 16, 0x03, 0x08, 1, 1, 0x0003, 0x0001, EventScript_JP_081F4524, 0x0000
LavaridgeTown_Gym_B1F_WarpEvents: @ 0x08506734
	@ WarpEvent 0
	semantic_warp_event 10, 18, 0x03, 0x02, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 1
	semantic_warp_event 0, 17, 0x03, 0x06, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 2
	semantic_warp_event 8, 9, 0x03, 0x03, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 3
	semantic_warp_event 5, 14, 0x03, 0x05, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 4
	semantic_warp_event 4, 18, 0x03, 0x04, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 5
	semantic_warp_event 5, 9, 0x03, 0x07, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 6
	semantic_warp_event 2, 15, 0x03, 0x08, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 7
	semantic_warp_event 3, 14, 0x03, 0x09, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 8
	semantic_warp_event 1, 14, 0x03, 0x0A, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 9
	semantic_warp_event 0, 10, 0x03, 0x0B, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 10
	semantic_warp_event 3, 10, 0x03, 0x0C, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 11
	semantic_warp_event 0, 6, 0x03, 0x0D, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 12
	semantic_warp_event 3, 6, 0x03, 0x0E, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 13
	semantic_warp_event 5, 6, 0x03, 0x0F, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 14
	semantic_warp_event 2, 3, 0x03, 0x10, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 15
	semantic_warp_event 5, 2, 0x03, 0x11, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 16
	semantic_warp_event 7, 2, 0x03, 0x12, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 17
	semantic_warp_event 8, 6, 0x03, 0x13, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 18
	semantic_warp_event 10, 6, 0x03, 0x14, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 19
	semantic_warp_event 12, 3, 0x03, 0x16, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 20
	semantic_warp_event 4, 16, 0x03, 0x15, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 21
	semantic_warp_event 14, 6, 0x03, 0x17, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 22
	semantic_warp_event 13, 17, 0x03, 0x18, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
	@ WarpEvent 23
	semantic_warp_event 12, 12, 0x03, 0x19, MAP_NUM_LAVARIDGE_TOWN_GYM_1F, MAP_GROUP_LAVARIDGE_TOWN_GYM_1F
LavaridgeTown_Gym_B1F_MapEvents: @ 0x085067F4
	@ struct MapEvents
	semantic_map_events 4, 24, 0, 0, LavaridgeTown_Gym_B1F_ObjectEvents, LavaridgeTown_Gym_B1F_WarpEvents, 0, 0
LavaridgeTown_House_ObjectEvents: @ 0x08506808
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1D, 0x00, 2, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F4E4E, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xD0, 0x00, 6, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F4E57, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x05, 0x00, 8, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0827696A, 0x0000
LavaridgeTown_House_WarpEvents: @ 0x08506850
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x04, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x04, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
LavaridgeTown_House_MapEvents: @ 0x08506860
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, LavaridgeTown_House_ObjectEvents, LavaridgeTown_House_WarpEvents, 0, 0
LavaridgeTown_Mart_ObjectEvents: @ 0x08506874
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4ECD, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 4, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4EFA, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1E, 0x00, 9, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4F03, 0x0000
LavaridgeTown_Mart_WarpEvents: @ 0x085068BC
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x02, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x02, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
LavaridgeTown_Mart_MapEvents: @ 0x085068CC
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, LavaridgeTown_Mart_ObjectEvents, LavaridgeTown_Mart_WarpEvents, 0, 0
LavaridgeTown_PokemonCenter_1F_ObjectEvents: @ 0x085068E0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4F99, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x23, 0x00, 11, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4FA7, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x18, 0x00, 10, 6, 0x00, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4FB0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x30, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F4FB9, 0x0000
LavaridgeTown_PokemonCenter_1F_WarpEvents: @ 0x08506940
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x03, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x03, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_LAVARIDGE_TOWN_POKEMON_CENTER_2F, MAP_GROUP_LAVARIDGE_TOWN_POKEMON_CENTER_2F
	@ WarpEvent 3
	semantic_warp_event 2, 1, 0x00, 0x05, MAP_NUM_LAVARIDGE_TOWN, MAP_GROUP_LAVARIDGE_TOWN
LavaridgeTown_PokemonCenter_1F_MapEvents: @ 0x08506960
	@ struct MapEvents
	semantic_map_events 4, 4, 0, 0, LavaridgeTown_PokemonCenter_1F_ObjectEvents, LavaridgeTown_PokemonCenter_1F_WarpEvents, 0, 0
LavaridgeTown_PokemonCenter_2F_ObjectEvents: @ 0x08506974
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
LavaridgeTown_PokemonCenter_2F_WarpEvents: @ 0x085069D4
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_LAVARIDGE_TOWN_POKEMON_CENTER_1F, MAP_GROUP_LAVARIDGE_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
LavaridgeTown_PokemonCenter_2F_MapEvents: @ 0x085069EC
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, LavaridgeTown_PokemonCenter_2F_ObjectEvents, LavaridgeTown_PokemonCenter_2F_WarpEvents, 0, 0
FallarborTown_Mart_ObjectEvents: @ 0x08506A00
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F5099, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x14, 0x00, 5, 3, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F50CC, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x19, 0x00, 9, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F50D5, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xCB, 0x00, 2, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F50DE, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x0A, 0x00, 7, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082769D2, 0x0000
FallarborTown_Mart_WarpEvents: @ 0x08506A78
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x00, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x00, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
FallarborTown_Mart_MapEvents: @ 0x08506A88
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 0, FallarborTown_Mart_ObjectEvents, FallarborTown_Mart_WarpEvents, 0, 0
FallarborTown_BattleTentLobby_ObjectEvents: @ 0x08506A9C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 6, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081F5320, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x37, 0x00, 1, 5, 0x03, 0x05, 1, 1, 0x0000, 0x0000, EventScript_JP_081F552C, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0B, 0x00, 12, 6, 0x03, 0x03, 1, 1, 0x0000, 0x0000, EventScript_JP_081F5535, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2F, 0x00, 10, 9, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081F553E, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xDB, 0x00, 0, 7, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081F5547, 0x02FF
FallarborTown_BattleTentLobby_WarpEvents: @ 0x08506B14
	@ WarpEvent 0
	semantic_warp_event 6, 9, 0x00, 0x01, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
	@ WarpEvent 1
	semantic_warp_event 7, 9, 0x00, 0x01, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
FallarborTown_BattleTentLobby_BgEvents: @ 0x08506B24
	@ BgEvent 0
	semantic_bg_script_event 4, 5, 0x00, 0x00, EventScript_JP_081F556E
FallarborTown_BattleTentLobby_MapEvents: @ 0x08506B30
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 1, FallarborTown_BattleTentLobby_ObjectEvents, FallarborTown_BattleTentLobby_WarpEvents, 0, FallarborTown_BattleTentLobby_BgEvents
FallarborTown_BattleTentCorridor_ObjectEvents: @ 0x08506B44
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 2, 6, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
FallarborTown_BattleTentCorridor_MapEvents: @ 0x08506B5C
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, FallarborTown_BattleTentCorridor_ObjectEvents, 0, 0, 0
FallarborTown_BattleTentBattleRoom_ObjectEvents: @ 0x08506B70
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF1, 0x00, 4, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2C, 0x00, 3, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF0, 0x00, 5, 1, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
FallarborTown_BattleTentBattleRoom_MapEvents: @ 0x08506BB8
	@ struct MapEvents
	semantic_map_events 3, 0, 0, 0, FallarborTown_BattleTentBattleRoom_ObjectEvents, 0, 0, 0
FallarborTown_PokemonCenter_1F_ObjectEvents: @ 0x08506BCC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F5C62, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 10, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F5C70, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x15, 0x00, 2, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F5C79, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x14, 0x00, 10, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081F5C82, 0x0367
FallarborTown_PokemonCenter_1F_WarpEvents: @ 0x08506C2C
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x02, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x02, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_FALLARBOR_TOWN_POKEMON_CENTER_2F, MAP_GROUP_FALLARBOR_TOWN_POKEMON_CENTER_2F
FallarborTown_PokemonCenter_1F_MapEvents: @ 0x08506C44
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, FallarborTown_PokemonCenter_1F_ObjectEvents, FallarborTown_PokemonCenter_1F_WarpEvents, 0, 0
FallarborTown_PokemonCenter_2F_ObjectEvents: @ 0x08506C58
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
FallarborTown_PokemonCenter_2F_WarpEvents: @ 0x08506CB8
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_FALLARBOR_TOWN_POKEMON_CENTER_1F, MAP_GROUP_FALLARBOR_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
FallarborTown_PokemonCenter_2F_MapEvents: @ 0x08506CD0
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, FallarborTown_PokemonCenter_2F_ObjectEvents, FallarborTown_PokemonCenter_2F_WarpEvents, 0, 0
FallarborTown_CozmosHouse_ObjectEvents: @ 0x08506CE4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 6, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F5E79, 0x03A0
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x14, 0x00, 5, 6, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081F5F22, 0x0000
FallarborTown_CozmosHouse_WarpEvents: @ 0x08506D14
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x03, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x03, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
FallarborTown_CozmosHouse_MapEvents: @ 0x08506D24
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, FallarborTown_CozmosHouse_ObjectEvents, FallarborTown_CozmosHouse_WarpEvents, 0, 0
FallarborTown_MoveRelearnersHouse_ObjectEvents: @ 0x08506D38
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x11, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F6156, 0x0000
FallarborTown_MoveRelearnersHouse_WarpEvents: @ 0x08506D50
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x04, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x04, MAP_NUM_FALLARBOR_TOWN, MAP_GROUP_FALLARBOR_TOWN
FallarborTown_MoveRelearnersHouse_MapEvents: @ 0x08506D60
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, FallarborTown_MoveRelearnersHouse_ObjectEvents, FallarborTown_MoveRelearnersHouse_WarpEvents, 0, 0
VerdanturfTown_BattleTentLobby_ObjectEvents: @ 0x08506D74
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 6, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081F6508, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x08, 0x00, 0, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F6710, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0D, 0x00, 9, 7, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F6751, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x09, 0x00, 1, 8, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081F675A, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xDB, 0x00, 12, 6, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_081F6765, 0x02FE
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x0B, 0x00, 2, 8, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_081F678C, 0x0000
VerdanturfTown_BattleTentLobby_WarpEvents: @ 0x08506E04
	@ WarpEvent 0
	semantic_warp_event 6, 9, 0x00, 0x00, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
	@ WarpEvent 1
	semantic_warp_event 7, 9, 0x00, 0x00, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
VerdanturfTown_BattleTentLobby_BgEvents: @ 0x08506E14
	@ BgEvent 0
	semantic_bg_script_event 4, 5, 0x00, 0x00, EventScript_JP_081F6797
VerdanturfTown_BattleTentLobby_MapEvents: @ 0x08506E20
	@ struct MapEvents
	semantic_map_events 6, 2, 0, 1, VerdanturfTown_BattleTentLobby_ObjectEvents, VerdanturfTown_BattleTentLobby_WarpEvents, 0, VerdanturfTown_BattleTentLobby_BgEvents
VerdanturfTown_BattleTentCorridor_ObjectEvents: @ 0x08506E34
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 2, 6, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
VerdanturfTown_BattleTentCorridor_MapEvents: @ 0x08506E4C
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, VerdanturfTown_BattleTentCorridor_ObjectEvents, 0, 0, 0
VerdanturfTown_BattleTentBattleRoom_ObjectEvents: @ 0x08506E60
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF1, 0x00, 2, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 11, 1, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x15, 0x00, 2, 4, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x0000
VerdanturfTown_BattleTentBattleRoom_MapEvents: @ 0x08506EA8
	@ struct MapEvents
	semantic_map_events 3, 0, 0, 0, VerdanturfTown_BattleTentBattleRoom_ObjectEvents, 0, 0, 0
VerdanturfTown_Mart_ObjectEvents: @ 0x08506EBC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F6F28, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x09, 0x00, 5, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F6F5A, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x16, 0x00, 8, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F6F63, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2F, 0x00, 3, 2, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_081F6F6C, 0x0000
VerdanturfTown_Mart_WarpEvents: @ 0x08506F1C
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x01, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x01, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
VerdanturfTown_Mart_MapEvents: @ 0x08506F2C
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, VerdanturfTown_Mart_ObjectEvents, VerdanturfTown_Mart_WarpEvents, 0, 0
VerdanturfTown_PokemonCenter_1F_ObjectEvents: @ 0x08506F40
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7035, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 4, 5, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081F7043, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x15, 0x00, 12, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081F704C, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0B, 0x00, 10, 6, 0x03, 0x09, 1, 0, 0x0000, 0x0000, EventScript_JP_08276902, 0x0000
VerdanturfTown_PokemonCenter_1F_WarpEvents: @ 0x08506FA0
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x02, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x02, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_VERDANTURF_TOWN_POKEMON_CENTER_2F, MAP_GROUP_VERDANTURF_TOWN_POKEMON_CENTER_2F
VerdanturfTown_PokemonCenter_1F_MapEvents: @ 0x08506FB8
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, VerdanturfTown_PokemonCenter_1F_ObjectEvents, VerdanturfTown_PokemonCenter_1F_WarpEvents, 0, 0
VerdanturfTown_PokemonCenter_2F_ObjectEvents: @ 0x08506FCC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
VerdanturfTown_PokemonCenter_2F_WarpEvents: @ 0x0850702C
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_VERDANTURF_TOWN_POKEMON_CENTER_1F, MAP_GROUP_VERDANTURF_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
VerdanturfTown_PokemonCenter_2F_MapEvents: @ 0x08507044
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, VerdanturfTown_PokemonCenter_2F_ObjectEvents, VerdanturfTown_PokemonCenter_2F_WarpEvents, 0, 0
VerdanturfTown_WandasHouse_ObjectEvents: @ 0x08507058
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x87, 0x00, 14, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F7106, 0x0326
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2C, 0x00, 5, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F715A, 0x0328
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x19, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7128, 0x0329
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x12, 0x00, 2, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7195, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x14, 0x00, 5, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7163, 0x03D8
VerdanturfTown_WandasHouse_WarpEvents: @ 0x085070D0
	@ WarpEvent 0
	semantic_warp_event 7, 7, 0x00, 0x03, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
	@ WarpEvent 1
	semantic_warp_event 8, 7, 0x00, 0x03, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
VerdanturfTown_WandasHouse_MapEvents: @ 0x085070E0
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 0, VerdanturfTown_WandasHouse_ObjectEvents, VerdanturfTown_WandasHouse_WarpEvents, 0, 0
VerdanturfTown_FriendshipRatersHouse_ObjectEvents: @ 0x085070F4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 3, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7557, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xD1, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7600, 0x0000
VerdanturfTown_FriendshipRatersHouse_WarpEvents: @ 0x08507124
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x05, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x05, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
VerdanturfTown_FriendshipRatersHouse_MapEvents: @ 0x08507134
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, VerdanturfTown_FriendshipRatersHouse_ObjectEvents, VerdanturfTown_FriendshipRatersHouse_WarpEvents, 0, 0
VerdanturfTown_House_ObjectEvents: @ 0x08507148
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x22, 0x00, 4, 5, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7780, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x22, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7789, 0x0000
VerdanturfTown_House_WarpEvents: @ 0x08507178
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x06, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x06, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
VerdanturfTown_House_MapEvents: @ 0x08507188
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, VerdanturfTown_House_ObjectEvents, VerdanturfTown_House_WarpEvents, 0, 0
PacifidlogTown_PokemonCenter_1F_ObjectEvents: @ 0x0850719C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7839, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1D, 0x00, 10, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7859, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0A, 0x00, 2, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7847, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x10, 0x00, 4, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F7850, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x42, 0x00, 12, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08276BDA, 0x0000
PacifidlogTown_PokemonCenter_1F_WarpEvents: @ 0x08507214
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x00, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x00, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_PACIFIDLOG_TOWN_POKEMON_CENTER_2F, MAP_GROUP_PACIFIDLOG_TOWN_POKEMON_CENTER_2F
PacifidlogTown_PokemonCenter_1F_MapEvents: @ 0x0850722C
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, PacifidlogTown_PokemonCenter_1F_ObjectEvents, PacifidlogTown_PokemonCenter_1F_WarpEvents, 0, 0
PacifidlogTown_PokemonCenter_2F_ObjectEvents: @ 0x08507240
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
PacifidlogTown_PokemonCenter_2F_WarpEvents: @ 0x085072A0
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_PACIFIDLOG_TOWN_POKEMON_CENTER_1F, MAP_GROUP_PACIFIDLOG_TOWN_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
PacifidlogTown_PokemonCenter_2F_MapEvents: @ 0x085072B8
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, PacifidlogTown_PokemonCenter_2F_ObjectEvents, PacifidlogTown_PokemonCenter_2F_WarpEvents, 0, 0
PacifidlogTown_House1_ObjectEvents: @ 0x085072CC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x42, 0x00, 3, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F793F, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1A, 0x00, 6, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7948, 0x0000
PacifidlogTown_House1_WarpEvents: @ 0x085072FC
	@ WarpEvent 0
	semantic_warp_event 4, 8, 0x00, 0x01, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
	@ WarpEvent 1
	semantic_warp_event 5, 8, 0x00, 0x01, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
PacifidlogTown_House1_MapEvents: @ 0x0850730C
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, PacifidlogTown_House1_ObjectEvents, PacifidlogTown_House1_WarpEvents, 0, 0
PacifidlogTown_House2_ObjectEvents: @ 0x08507320
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x30, 0x00, 3, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081F7A00, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xD6, 0x00, 8, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F7AFF, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xD6, 0x00, 1, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081F7B1A, 0x0000
PacifidlogTown_House2_WarpEvents: @ 0x08507368
	@ WarpEvent 0
	semantic_warp_event 4, 8, 0x00, 0x02, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
	@ WarpEvent 1
	semantic_warp_event 5, 8, 0x00, 0x02, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
PacifidlogTown_House2_MapEvents: @ 0x08507378
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, PacifidlogTown_House2_ObjectEvents, PacifidlogTown_House2_WarpEvents, 0, 0
PacifidlogTown_House3_ObjectEvents: @ 0x0850738C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0A, 0x00, 3, 5, 0x03, 0x12, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7DBF, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x21, 0x00, 4, 2, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081F7D1B, 0x0000
PacifidlogTown_House3_WarpEvents: @ 0x085073BC
	@ WarpEvent 0
	semantic_warp_event 4, 8, 0x00, 0x03, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
	@ WarpEvent 1
	semantic_warp_event 5, 8, 0x00, 0x03, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
PacifidlogTown_House3_MapEvents: @ 0x085073CC
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, PacifidlogTown_House3_ObjectEvents, PacifidlogTown_House3_WarpEvents, 0, 0
PacifidlogTown_House4_ObjectEvents: @ 0x085073E0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 3, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F7F47, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0C, 0x00, 7, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F7F3E, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x07, 0x00, 7, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081F7F50, 0x0000
PacifidlogTown_House4_WarpEvents: @ 0x08507428
	@ WarpEvent 0
	semantic_warp_event 4, 8, 0x00, 0x04, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
	@ WarpEvent 1
	semantic_warp_event 5, 8, 0x00, 0x04, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
PacifidlogTown_House4_MapEvents: @ 0x08507438
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, PacifidlogTown_House4_ObjectEvents, PacifidlogTown_House4_WarpEvents, 0, 0
PacifidlogTown_House5_ObjectEvents: @ 0x0850744C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 9, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F8056, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 3, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F807C, 0x0000
PacifidlogTown_House5_WarpEvents: @ 0x0850747C
	@ WarpEvent 0
	semantic_warp_event 4, 8, 0x00, 0x05, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
	@ WarpEvent 1
	semantic_warp_event 5, 8, 0x00, 0x05, MAP_NUM_PACIFIDLOG_TOWN, MAP_GROUP_PACIFIDLOG_TOWN
PacifidlogTown_House5_MapEvents: @ 0x0850748C
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, PacifidlogTown_House5_ObjectEvents, PacifidlogTown_House5_WarpEvents, 0, 0
PetalburgCity_WallysHouse_ObjectEvents: @ 0x085074A0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x19, 0x00, 3, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081F815A, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1A, 0x00, 7, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081F81A2, 0x0000
PetalburgCity_WallysHouse_WarpEvents: @ 0x085074D0
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x01, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x01, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
PetalburgCity_WallysHouse_MapEvents: @ 0x085074E0
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, PetalburgCity_WallysHouse_ObjectEvents, PetalburgCity_WallysHouse_WarpEvents, 0, 0
PetalburgCity_Gym_ObjectEvents: @ 0x085074F4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x81, 0x00, 4, 2, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F8688, 0x0304
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x22, 0x00, 4, 94, 0x03, 0x08, 0, 0, 0x0001, 0x0000, EventScript_JP_081F9141, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 4, 81, 0x03, 0x08, 0, 0, 0x0001, 0x0000, EventScript_JP_081F9051, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x21, 0x00, 4, 42, 0x03, 0x08, 0, 0, 0x0001, 0x0000, EventScript_JP_081F908D, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x22, 0x00, 4, 55, 0x03, 0x08, 0, 0, 0x0001, 0x0000, EventScript_JP_081F917D, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x21, 0x00, 4, 68, 0x03, 0x08, 0, 0, 0x0001, 0x0000, EventScript_JP_081F90C9, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x22, 0x00, 4, 16, 0x03, 0x08, 0, 0, 0x0001, 0x0000, EventScript_JP_081F91B9, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x21, 0x00, 4, 29, 0x03, 0x08, 0, 0, 0x0001, 0x0000, EventScript_JP_081F9105, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x17, 0x00, 3, 109, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081F93E6, 0x030D
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x87, 0x00, 4, 111, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0362
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x19, 0x00, 1, 7, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0338
PetalburgCity_Gym_WarpEvents: @ 0x085075FC
	@ WarpEvent 0
	semantic_warp_event 4, 111, 0x03, 0x02, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
	@ WarpEvent 1
	semantic_warp_event 5, 111, 0x03, 0x02, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 105, 0x03, 0x03, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 3
	semantic_warp_event 7, 85, 0x03, 0x02, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 4
	semantic_warp_event 6, 85, 0x03, 0x02, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 5
	semantic_warp_event 7, 105, 0x03, 0x06, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 6
	semantic_warp_event 1, 98, 0x03, 0x05, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 7
	semantic_warp_event 2, 98, 0x03, 0x05, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 8
	semantic_warp_event 1, 79, 0x03, 0x0A, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 9
	semantic_warp_event 7, 79, 0x03, 0x0C, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 10
	semantic_warp_event 7, 46, 0x03, 0x08, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 11
	semantic_warp_event 6, 46, 0x03, 0x08, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 12
	semantic_warp_event 1, 59, 0x03, 0x09, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 13
	semantic_warp_event 2, 59, 0x03, 0x09, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 14
	semantic_warp_event 1, 92, 0x03, 0x10, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 15
	semantic_warp_event 7, 92, 0x03, 0x12, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 16
	semantic_warp_event 7, 59, 0x03, 0x0E, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 17
	semantic_warp_event 6, 59, 0x03, 0x0E, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 18
	semantic_warp_event 1, 72, 0x03, 0x0F, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 19
	semantic_warp_event 2, 72, 0x03, 0x0F, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 20
	semantic_warp_event 7, 40, 0x03, 0x18, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 21
	semantic_warp_event 1, 53, 0x03, 0x1A, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 22
	semantic_warp_event 7, 53, 0x03, 0x1C, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 23
	semantic_warp_event 1, 66, 0x03, 0x1E, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 24
	semantic_warp_event 1, 20, 0x03, 0x14, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 25
	semantic_warp_event 2, 20, 0x03, 0x14, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 26
	semantic_warp_event 7, 20, 0x03, 0x15, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 27
	semantic_warp_event 6, 20, 0x03, 0x15, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 28
	semantic_warp_event 1, 33, 0x03, 0x16, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 29
	semantic_warp_event 2, 33, 0x03, 0x16, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 30
	semantic_warp_event 7, 33, 0x03, 0x17, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 31
	semantic_warp_event 6, 33, 0x03, 0x17, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 32
	semantic_warp_event 7, 14, 0x03, 0x22, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 33
	semantic_warp_event 1, 27, 0x03, 0x24, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 34
	semantic_warp_event 1, 7, 0x03, 0x20, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 35
	semantic_warp_event 2, 7, 0x03, 0x20, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 36
	semantic_warp_event 7, 7, 0x03, 0x21, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
	@ WarpEvent 37
	semantic_warp_event 6, 7, 0x03, 0x21, MAP_NUM_PETALBURG_CITY_GYM, MAP_GROUP_PETALBURG_CITY_GYM
PetalburgCity_Gym_BgEvents: @ 0x0850772C
	@ BgEvent 0
	semantic_bg_script_event 1, 105, 0x03, 0x00, EventScript_JP_081F8DCE
	@ BgEvent 1
	semantic_bg_script_event 7, 105, 0x03, 0x00, EventScript_JP_081F8E1E
	@ BgEvent 2
	semantic_bg_script_event 1, 79, 0x03, 0x00, EventScript_JP_081F8E53
	@ BgEvent 3
	semantic_bg_script_event 7, 79, 0x03, 0x00, EventScript_JP_081F8E86
	@ BgEvent 4
	semantic_bg_script_event 1, 92, 0x03, 0x00, EventScript_JP_081F8EB9
	@ BgEvent 5
	semantic_bg_script_event 7, 92, 0x03, 0x00, EventScript_JP_081F8EEC
	@ BgEvent 6
	semantic_bg_script_event 7, 40, 0x03, 0x00, EventScript_JP_081F8F1F
	@ BgEvent 7
	semantic_bg_script_event 1, 53, 0x03, 0x00, EventScript_JP_081F8F52
	@ BgEvent 8
	semantic_bg_script_event 7, 53, 0x03, 0x00, EventScript_JP_081F8F85
	@ BgEvent 9
	semantic_bg_script_event 1, 66, 0x03, 0x00, EventScript_JP_081F8FB8
	@ BgEvent 10
	semantic_bg_script_event 7, 14, 0x03, 0x00, EventScript_JP_081F8FEB
	@ BgEvent 11
	semantic_bg_script_event 1, 27, 0x03, 0x00, EventScript_JP_081F901E
	@ BgEvent 12
	semantic_bg_script_event 1, 110, 0x03, 0x01, EventScript_JP_081F9405
	@ BgEvent 13
	semantic_bg_script_event 7, 110, 0x03, 0x01, EventScript_JP_081F9415
PetalburgCity_Gym_MapEvents: @ 0x085077D4
	@ struct MapEvents
	semantic_map_events 11, 38, 0, 14, PetalburgCity_Gym_ObjectEvents, PetalburgCity_Gym_WarpEvents, 0, PetalburgCity_Gym_BgEvents
PetalburgCity_House1_ObjectEvents: @ 0x085077E8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x08, 0x00, 7, 4, 0x03, 0x02, 2, 2, 0x0000, 0x0000, EventScript_JP_081FA647, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FA63E, 0x0000
PetalburgCity_House1_WarpEvents: @ 0x08507818
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x00, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x00, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
PetalburgCity_House1_MapEvents: @ 0x08507828
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, PetalburgCity_House1_ObjectEvents, PetalburgCity_House1_WarpEvents, 0, 0
PetalburgCity_House2_ObjectEvents: @ 0x0850783C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x12, 0x00, 2, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081FA721, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x26, 0x00, 7, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FA72A, 0x0000
PetalburgCity_House2_WarpEvents: @ 0x0850786C
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x04, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x04, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
PetalburgCity_House2_MapEvents: @ 0x0850787C
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, PetalburgCity_House2_ObjectEvents, PetalburgCity_House2_WarpEvents, 0, 0
PetalburgCity_PokemonCenter_1F_ObjectEvents: @ 0x08507890
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FA7E1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x41, 0x00, 11, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08257290, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x11, 0x00, 2, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FA7EF, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x23, 0x00, 9, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081FA7F8, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x22, 0x00, 5, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081FA801, 0x0000
PetalburgCity_PokemonCenter_1F_WarpEvents: @ 0x08507908
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x03, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x03, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_PETALBURG_CITY_POKEMON_CENTER_2F, MAP_GROUP_PETALBURG_CITY_POKEMON_CENTER_2F
PetalburgCity_PokemonCenter_1F_MapEvents: @ 0x08507920
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, PetalburgCity_PokemonCenter_1F_ObjectEvents, PetalburgCity_PokemonCenter_1F_WarpEvents, 0, 0
PetalburgCity_PokemonCenter_2F_ObjectEvents: @ 0x08507934
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
PetalburgCity_PokemonCenter_2F_WarpEvents: @ 0x08507994
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_PETALBURG_CITY_POKEMON_CENTER_1F, MAP_GROUP_PETALBURG_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
PetalburgCity_PokemonCenter_2F_MapEvents: @ 0x085079AC
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, PetalburgCity_PokemonCenter_2F_ObjectEvents, PetalburgCity_PokemonCenter_2F_WarpEvents, 0, 0
PetalburgCity_Mart_ObjectEvents: @ 0x085079C0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FA9EA, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x13, 0x00, 9, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FAA68, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x07, 0x00, 6, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FAA5F, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x14, 0x00, 5, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FAA56, 0x0000
PetalburgCity_Mart_WarpEvents: @ 0x08507A20
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x05, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x05, MAP_NUM_PETALBURG_CITY, MAP_GROUP_PETALBURG_CITY
PetalburgCity_Mart_MapEvents: @ 0x08507A30
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, PetalburgCity_Mart_ObjectEvents, PetalburgCity_Mart_WarpEvents, 0, 0
SlateportCity_SternsShipyard_1F_ObjectEvents: @ 0x08507A44
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 5, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FAB29, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2E, 0x00, 10, 7, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081FABD6, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2E, 0x00, 18, 8, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_081FABDF, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x15, 0x00, 12, 11, 0x03, 0x02, 1, 2, 0x0000, 0x0000, EventScript_JP_081FABE8, 0x0365
SlateportCity_SternsShipyard_1F_WarpEvents: @ 0x08507AA4
	@ WarpEvent 0
	semantic_warp_event 2, 14, 0x00, 0x02, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 3, 14, 0x00, 0x02, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 2
	semantic_warp_event 3, 1, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_STERNS_SHIPYARD_2F, MAP_GROUP_SLATEPORT_CITY_STERNS_SHIPYARD_2F
SlateportCity_SternsShipyard_1F_MapEvents: @ 0x08507ABC
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, SlateportCity_SternsShipyard_1F_ObjectEvents, SlateportCity_SternsShipyard_1F_WarpEvents, 0, 0
SlateportCity_SternsShipyard_2F_ObjectEvents: @ 0x08507AD0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 10, 7, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2E, 0x00, 8, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FAFA3, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2E, 0x00, 0, 9, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081FAFAC, 0x0000
SlateportCity_SternsShipyard_2F_WarpEvents: @ 0x08507B18
	@ WarpEvent 0
	semantic_warp_event 3, 1, 0x00, 0x02, MAP_NUM_SLATEPORT_CITY_STERNS_SHIPYARD_1F, MAP_GROUP_SLATEPORT_CITY_STERNS_SHIPYARD_1F
SlateportCity_SternsShipyard_2F_MapEvents: @ 0x08507B20
	@ struct MapEvents
	semantic_map_events 3, 1, 0, 0, SlateportCity_SternsShipyard_2F_ObjectEvents, SlateportCity_SternsShipyard_2F_WarpEvents, 0, 0
SlateportCity_BattleTentLobby_ObjectEvents: @ 0x08507B34
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 6, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_081FB1AD, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x31, 0x00, 1, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081FB340, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 3, 7, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_081FB381, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x08, 0x00, 1, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081FB38A, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x14, 0x00, 11, 8, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_081FB393, 0x0000
SlateportCity_BattleTentLobby_WarpEvents: @ 0x08507BAC
	@ WarpEvent 0
	semantic_warp_event 6, 9, 0x00, 0x03, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 7, 9, 0x00, 0x03, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
SlateportCity_BattleTentLobby_BgEvents: @ 0x08507BBC
	@ BgEvent 0
	semantic_bg_script_event 4, 5, 0x00, 0x00, EventScript_JP_081FB39C
SlateportCity_BattleTentLobby_MapEvents: @ 0x08507BC8
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 1, SlateportCity_BattleTentLobby_ObjectEvents, SlateportCity_BattleTentLobby_WarpEvents, 0, SlateportCity_BattleTentLobby_BgEvents
SlateportCity_BattleTentCorridor_ObjectEvents: @ 0x08507BDC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 2, 6, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
SlateportCity_BattleTentCorridor_MapEvents: @ 0x08507BF4
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, SlateportCity_BattleTentCorridor_ObjectEvents, 0, 0, 0
SlateportCity_BattleTentBattleRoom_ObjectEvents: @ 0x08507C08
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 1, 4, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 5, 1, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 4, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
SlateportCity_BattleTentBattleRoom_MapEvents: @ 0x08507C50
	@ struct MapEvents
	semantic_map_events 3, 0, 0, 0, SlateportCity_BattleTentBattleRoom_ObjectEvents, 0, 0, 0
SlateportCity_NameRatersHouse_ObjectEvents: @ 0x08507C64
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 7, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FBD9E, 0x0000
SlateportCity_NameRatersHouse_WarpEvents: @ 0x08507C7C
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x06, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x06, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
SlateportCity_NameRatersHouse_MapEvents: @ 0x08507C8C
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, SlateportCity_NameRatersHouse_ObjectEvents, SlateportCity_NameRatersHouse_WarpEvents, 0, 0
SlateportCity_PokemonFanClub_ObjectEvents: @ 0x08507CA0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 11, 4, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FC37A, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x06, 0x00, 1, 5, 0x00, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_081FC383, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x44, 0x00, 11, 5, 0x00, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08253D5B, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x1A, 0x00, 6, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081FC310, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x30, 0x00, 6, 5, 0x04, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FC028, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xD0, 0x00, 3, 9, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081FC39F, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xCB, 0x00, 8, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081FC38C, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xD2, 0x00, 10, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081FC3B2, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x41, 0x00, 11, 8, 0x00, 0x09, 0, 1, 0x0000, 0x0000, SlateportCity_PokemonFanClub_EventScript_SwaggerTutor, 0x0000
SlateportCity_PokemonFanClub_WarpEvents: @ 0x08507D78
	@ WarpEvent 0
	semantic_warp_event 6, 10, 0x00, 0x04, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 7, 10, 0x00, 0x04, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
SlateportCity_PokemonFanClub_MapEvents: @ 0x08507D88
	@ struct MapEvents
	semantic_map_events 9, 2, 0, 0, SlateportCity_PokemonFanClub_ObjectEvents, SlateportCity_PokemonFanClub_WarpEvents, 0, 0
SlateportCity_OceanicMuseum_1F_ObjectEvents: @ 0x08507D9C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2D, 0x00, 7, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FCA3F, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x75, 0x00, 18, 5, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081FCB08, 0x0373
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x75, 0x00, 12, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081FCB11, 0x0373
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x75, 0x00, 2, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081FCAFF, 0x0373
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x76, 0x00, 3, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081FCAF6, 0x0373
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x75, 0x00, 14, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FCB1A, 0x0373
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2D, 0x00, 12, 7, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081FCA3F, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x75, 0x00, 8, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FCB23, 0x0373
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x22, 0x00, 4, 2, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081FCB7D, 0x03C1
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x27, 0x00, 10, 2, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_081FCB86, 0x03C1
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x19, 0x00, 17, 7, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081FCB8F, 0x03C1
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x0C, 0x00, 18, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_081FCB98, 0x03C1
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x75, 0x00, 9, 4, 0x03, 0x15, 1, 1, 0x0000, 0x0000, EventScript_JP_081FCBA1, 0x03C5
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x43, 0x00, 7, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08253C9B, 0x03C1
SlateportCity_OceanicMuseum_1F_WarpEvents: @ 0x08507EEC
	@ WarpEvent 0
	semantic_warp_event 9, 8, 0x00, 0x05, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 10, 8, 0x00, 0x07, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 2
	semantic_warp_event 6, 1, 0x00, 0x00, MAP_NUM_SLATEPORT_CITY_OCEANIC_MUSEUM_2F, MAP_GROUP_SLATEPORT_CITY_OCEANIC_MUSEUM_2F
SlateportCity_OceanicMuseum_1F_CoordEvents: @ 0x08507F04
	@ CoordEvent 0
	semantic_coord_event 9, 7, 0x03, 0x40AA, 0x0000, EventScript_JP_081FCA48
	@ CoordEvent 1
	semantic_coord_event 10, 7, 0x03, 0x40AA, 0x0000, EventScript_JP_081FCA59
SlateportCity_OceanicMuseum_1F_BgEvents: @ 0x08507F24
	@ BgEvent 0
	semantic_bg_script_event 2, 7, 0x00, 0x00, EventScript_JP_081FCB2C
	@ BgEvent 1
	semantic_bg_script_event 2, 4, 0x00, 0x00, EventScript_JP_081FCB35
	@ BgEvent 2
	semantic_bg_script_event 9, 1, 0x00, 0x00, EventScript_JP_081FCB3E
	@ BgEvent 3
	semantic_bg_script_event 12, 1, 0x00, 0x00, EventScript_JP_081FCB47
	@ BgEvent 4
	semantic_bg_script_event 10, 1, 0x00, 0x00, EventScript_JP_081FCB3E
	@ BgEvent 5
	semantic_bg_script_event 13, 1, 0x00, 0x00, EventScript_JP_081FCB47
	@ BgEvent 6
	semantic_bg_script_event 15, 4, 0x00, 0x00, EventScript_JP_081FCB50
	@ BgEvent 7
	semantic_bg_script_event 18, 4, 0x00, 0x00, EventScript_JP_081FCB59
	@ BgEvent 8
	semantic_bg_script_event 18, 7, 0x00, 0x00, EventScript_JP_081FCB62
	@ BgEvent 9
	semantic_bg_script_event 2, 1, 0x00, 0x00, EventScript_JP_081FCB6B
	@ BgEvent 10
	semantic_bg_script_event 3, 1, 0x00, 0x00, EventScript_JP_081FCB6B
	@ BgEvent 11
	semantic_bg_script_event 16, 1, 0x00, 0x00, EventScript_JP_081FCB74
	@ BgEvent 12
	semantic_bg_script_event 17, 1, 0x00, 0x00, EventScript_JP_081FCB74
SlateportCity_OceanicMuseum_1F_MapEvents: @ 0x08507FC0
	@ struct MapEvents
	semantic_map_events 14, 3, 2, 13, SlateportCity_OceanicMuseum_1F_ObjectEvents, SlateportCity_OceanicMuseum_1F_WarpEvents, SlateportCity_OceanicMuseum_1F_CoordEvents, SlateportCity_OceanicMuseum_1F_BgEvents
SlateportCity_OceanicMuseum_2F_ObjectEvents: @ 0x08507FD4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 13, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FD30A, 0x0377
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xC3, 0x00, 6, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0376
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x75, 0x00, 6, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0374
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x75, 0x00, 6, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0375
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x1D, 0x00, 12, 7, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081FD56E, 0x03C1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x12, 0x00, 9, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_081FD577, 0x03C1
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x05, 0x00, 1, 3, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_081FD580, 0x03C1
SlateportCity_OceanicMuseum_2F_WarpEvents: @ 0x0850807C
	@ WarpEvent 0
	semantic_warp_event 6, 1, 0x00, 0x02, MAP_NUM_SLATEPORT_CITY_OCEANIC_MUSEUM_1F, MAP_GROUP_SLATEPORT_CITY_OCEANIC_MUSEUM_1F
SlateportCity_OceanicMuseum_2F_BgEvents: @ 0x08508084
	@ BgEvent 0
	semantic_bg_script_event 18, 4, 0x00, 0x00, EventScript_JP_081FD514
	@ BgEvent 1
	semantic_bg_script_event 18, 7, 0x00, 0x00, EventScript_JP_081FD51D
	@ BgEvent 2
	semantic_bg_script_event 4, 3, 0x00, 0x00, EventScript_JP_081FD55C
	@ BgEvent 3
	semantic_bg_script_event 4, 4, 0x00, 0x00, EventScript_JP_081FD55C
	@ BgEvent 4
	semantic_bg_script_event 3, 3, 0x00, 0x00, EventScript_JP_081FD553
	@ BgEvent 5
	semantic_bg_script_event 2, 3, 0x00, 0x00, EventScript_JP_081FD553
	@ BgEvent 6
	semantic_bg_script_event 3, 4, 0x00, 0x00, EventScript_JP_081FD553
	@ BgEvent 7
	semantic_bg_script_event 3, 6, 0x00, 0x00, EventScript_JP_081FD54A
	@ BgEvent 8
	semantic_bg_script_event 4, 6, 0x00, 0x00, EventScript_JP_081FD54A
	@ BgEvent 9
	semantic_bg_script_event 13, 7, 0x00, 0x00, EventScript_JP_081FD565
	@ BgEvent 10
	semantic_bg_script_event 14, 7, 0x03, 0x00, EventScript_JP_081FD565
	@ BgEvent 11
	semantic_bg_script_event 18, 1, 0x00, 0x00, EventScript_JP_081FD541
	@ BgEvent 12
	semantic_bg_script_event 19, 1, 0x00, 0x00, EventScript_JP_081FD541
	@ BgEvent 13
	semantic_bg_script_event 15, 1, 0x00, 0x00, EventScript_JP_081FD538
	@ BgEvent 14
	semantic_bg_script_event 16, 1, 0x00, 0x00, EventScript_JP_081FD538
	@ BgEvent 15
	semantic_bg_script_event 8, 1, 0x00, 0x00, EventScript_JP_081FD52F
	@ BgEvent 16
	semantic_bg_script_event 9, 1, 0x00, 0x00, EventScript_JP_081FD52F
	@ BgEvent 17
	semantic_bg_script_event 12, 1, 0x00, 0x00, EventScript_JP_081FD526
	@ BgEvent 18
	semantic_bg_script_event 13, 1, 0x00, 0x00, EventScript_JP_081FD526
	@ BgEvent 19
	semantic_bg_script_event 3, 7, 0x00, 0x00, EventScript_JP_081FD54A
	@ BgEvent 20
	semantic_bg_script_event 4, 7, 0x00, 0x00, EventScript_JP_081FD54A
SlateportCity_OceanicMuseum_2F_MapEvents: @ 0x08508180
	@ struct MapEvents
	semantic_map_events 7, 1, 0, 21, SlateportCity_OceanicMuseum_2F_ObjectEvents, SlateportCity_OceanicMuseum_2F_WarpEvents, 0, SlateportCity_OceanicMuseum_2F_BgEvents
SlateportCity_Harbor_ObjectEvents: @ 0x08508194
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2D, 0x00, 8, 10, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FDDE2, 0x0389
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x31, 0x00, 4, 12, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081FDF43, 0x0389
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x11, 0x00, 1, 12, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FDF8A, 0x0389
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2E, 0x00, 6, 13, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081FDF93, 0x0349
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x8C, 0x00, 8, 9, 0x01, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x035C
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x75, 0x00, 7, 10, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x034D
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xC3, 0x00, 8, 10, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x034E
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x8D, 0x00, 7, 9, 0x01, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0350
SlateportCity_Harbor_WarpEvents: @ 0x08508254
	@ WarpEvent 0
	semantic_warp_event 11, 14, 0x00, 0x08, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 12, 14, 0x00, 0x08, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 2
	semantic_warp_event 19, 15, 0x00, 0x09, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 3
	semantic_warp_event 20, 15, 0x00, 0x09, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
SlateportCity_Harbor_CoordEvents: @ 0x08508274
	@ CoordEvent 0
	semantic_coord_event 8, 11, 0x03, 0x40A0, 0x0001, EventScript_JP_081FDCAC
	@ CoordEvent 1
	semantic_coord_event 8, 12, 0x03, 0x40A0, 0x0001, EventScript_JP_081FDCB8
	@ CoordEvent 2
	semantic_coord_event 8, 13, 0x03, 0x40A0, 0x0001, EventScript_JP_081FDCC4
	@ CoordEvent 3
	semantic_coord_event 8, 14, 0x03, 0x40A0, 0x0001, EventScript_JP_081FDCD0
SlateportCity_Harbor_MapEvents: @ 0x085082B4
	@ struct MapEvents
	semantic_map_events 8, 4, 4, 0, SlateportCity_Harbor_ObjectEvents, SlateportCity_Harbor_WarpEvents, SlateportCity_Harbor_CoordEvents, 0
SlateportCity_House_ObjectEvents: @ 0x085082C8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x19, 0x00, 4, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FE773, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 7, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081FE77C, 0x0000
SlateportCity_House_WarpEvents: @ 0x085082F8
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x0A, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x0A, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
SlateportCity_House_MapEvents: @ 0x08508308
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, SlateportCity_House_ObjectEvents, SlateportCity_House_WarpEvents, 0, 0
SlateportCity_PokemonCenter_1F_ObjectEvents: @ 0x0850831C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FE81D, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x31, 0x00, 2, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FE82B, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x22, 0x00, 10, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FE834, 0x0000
SlateportCity_PokemonCenter_1F_WarpEvents: @ 0x08508364
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x00, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x00, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_SLATEPORT_CITY_POKEMON_CENTER_2F, MAP_GROUP_SLATEPORT_CITY_POKEMON_CENTER_2F
SlateportCity_PokemonCenter_1F_MapEvents: @ 0x0850837C
	@ struct MapEvents
	semantic_map_events 3, 3, 0, 0, SlateportCity_PokemonCenter_1F_ObjectEvents, SlateportCity_PokemonCenter_1F_WarpEvents, 0, 0
SlateportCity_PokemonCenter_2F_ObjectEvents: @ 0x08508390
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
SlateportCity_PokemonCenter_2F_WarpEvents: @ 0x085083F0
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_SLATEPORT_CITY_POKEMON_CENTER_1F, MAP_GROUP_SLATEPORT_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
SlateportCity_PokemonCenter_2F_MapEvents: @ 0x08508408
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, SlateportCity_PokemonCenter_2F_ObjectEvents, SlateportCity_PokemonCenter_2F_WarpEvents, 0, 0
SlateportCity_Mart_ObjectEvents: @ 0x0850841C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FE8FA, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2C, 0x00, 4, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_081FE92A, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 5, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_081FE933, 0x0000
SlateportCity_Mart_WarpEvents: @ 0x08508464
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x01, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x01, MAP_NUM_SLATEPORT_CITY, MAP_GROUP_SLATEPORT_CITY
SlateportCity_Mart_MapEvents: @ 0x08508474
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, SlateportCity_Mart_ObjectEvents, SlateportCity_Mart_WarpEvents, 0, 0
MauvilleCity_Gym_ObjectEvents: @ 0x08508488
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x7F, 0x00, 5, 2, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FEB31, 0x0391
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x42, 0x00, 7, 8, 0x03, 0x08, 0, 0, 0x0001, 0x0001, EventScript_JP_081FED16, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0E, 0x00, 1, 16, 0x00, 0x07, 0, 0, 0x0001, 0x0002, EventScript_JP_081FED44, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x23, 0x00, 5, 10, 0x00, 0x09, 0, 0, 0x0001, 0x0002, EventScript_JP_081FED2D, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x42, 0x00, 1, 13, 0x00, 0x08, 0, 0, 0x0001, 0x0002, EventScript_JP_081FECFF, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x17, 0x00, 7, 20, 0x00, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081FED72, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x27, 0x00, 7, 10, 0x03, 0x07, 1, 1, 0x0001, 0x0001, EventScript_JP_081FED5B, 0x0000
MauvilleCity_Gym_WarpEvents: @ 0x08508530
	@ WarpEvent 0
	semantic_warp_event 4, 20, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
	@ WarpEvent 1
	semantic_warp_event 5, 20, 0x00, 0x00, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
MauvilleCity_Gym_CoordEvents: @ 0x08508540
	@ CoordEvent 0
	semantic_coord_event 4, 12, 0x03, 0x4000, 0x0000, EventScript_JP_081FEC64
	@ CoordEvent 1
	semantic_coord_event 3, 9, 0x03, 0x4000, 0x0000, EventScript_JP_081FEC89
	@ CoordEvent 2
	semantic_coord_event 0, 15, 0x03, 0x4000, 0x0000, EventScript_JP_081FEC3F
	@ CoordEvent 3
	semantic_coord_event 8, 9, 0x03, 0x4000, 0x0000, EventScript_JP_081FECAE
MauvilleCity_Gym_BgEvents: @ 0x08508580
	@ BgEvent 0
	semantic_bg_script_event 3, 18, 0x00, 0x01, EventScript_JP_081FED91
	@ BgEvent 1
	semantic_bg_script_event 6, 18, 0x00, 0x01, EventScript_JP_081FEDA1
MauvilleCity_Gym_MapEvents: @ 0x08508598
	@ struct MapEvents
	semantic_map_events 7, 2, 4, 2, MauvilleCity_Gym_ObjectEvents, MauvilleCity_Gym_WarpEvents, MauvilleCity_Gym_CoordEvents, MauvilleCity_Gym_BgEvents
MauvilleCity_BikeShop_ObjectEvents: @ 0x085085AC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x17, 0x00, 2, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_081FF3EC, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x42, 0x00, 7, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_081FF561, 0x0000
MauvilleCity_BikeShop_WarpEvents: @ 0x085085DC
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x02, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x02, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
MauvilleCity_BikeShop_BgEvents: @ 0x085085EC
	@ BgEvent 0
	semantic_bg_script_event 8, 1, 0x00, 0x00, EventScript_JP_081FF56A
	@ BgEvent 1
	semantic_bg_script_event 11, 1, 0x00, 0x00, EventScript_JP_081FF5DE
MauvilleCity_BikeShop_MapEvents: @ 0x08508604
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 2, MauvilleCity_BikeShop_ObjectEvents, MauvilleCity_BikeShop_WarpEvents, 0, MauvilleCity_BikeShop_BgEvents
MauvilleCity_House1_ObjectEvents: @ 0x08508618
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 4, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_081FFD78, 0x0000
MauvilleCity_House1_WarpEvents: @ 0x08508630
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x04, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x04, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
MauvilleCity_House1_MapEvents: @ 0x08508640
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, MauvilleCity_House1_ObjectEvents, MauvilleCity_House1_WarpEvents, 0, 0
MauvilleCity_GameCorner_ObjectEvents: @ 0x08508654
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 12, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08200454, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 16, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820045D, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2D, 0x00, 11, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_081FFEE8, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2D, 0x00, 14, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08200020, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x0A, 0x00, 7, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08200466, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x19, 0x00, 19, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820054C, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x1D, 0x00, 20, 8, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_082005A8, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x1B, 0x00, 6, 8, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082005B8, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x2D, 0x00, 13, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_082001CE, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x21, 0x00, 1, 7, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_082005C8, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x27, 0x00, 9, 8, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_082005E5, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x22, 0x00, 4, 6, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_082005F5, 0x0000
MauvilleCity_GameCorner_WarpEvents: @ 0x08508774
	@ WarpEvent 0
	semantic_warp_event 11, 10, 0x03, 0x05, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
	@ WarpEvent 1
	semantic_warp_event 12, 10, 0x03, 0x05, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
MauvilleCity_GameCorner_BgEvents: @ 0x08508784
	@ BgEvent 0
	semantic_bg_script_event 2, 6, 0x00, 0x03, EventScript_JP_08200605
	@ BgEvent 1
	semantic_bg_script_event 2, 8, 0x00, 0x03, EventScript_JP_08200625
	@ BgEvent 2
	semantic_bg_script_event 2, 9, 0x00, 0x03, EventScript_JP_08200645
	@ BgEvent 3
	semantic_bg_script_event 3, 7, 0x00, 0x04, EventScript_JP_08200665
	@ BgEvent 4
	semantic_bg_script_event 3, 8, 0x00, 0x04, EventScript_JP_08200685
	@ BgEvent 5
	semantic_bg_script_event 3, 9, 0x00, 0x04, EventScript_JP_082006A5
	@ BgEvent 6
	semantic_bg_script_event 7, 6, 0x00, 0x03, EventScript_JP_082006C5
	@ BgEvent 7
	semantic_bg_script_event 7, 7, 0x00, 0x03, EventScript_JP_082006E5
	@ BgEvent 8
	semantic_bg_script_event 7, 9, 0x00, 0x03, EventScript_JP_08200705
	@ BgEvent 9
	semantic_bg_script_event 8, 6, 0x00, 0x04, EventScript_JP_08200725
	@ BgEvent 10
	semantic_bg_script_event 8, 7, 0x00, 0x04, EventScript_JP_08200745
	@ BgEvent 11
	semantic_bg_script_event 8, 9, 0x00, 0x04, EventScript_JP_08200765
	@ BgEvent 12
	semantic_bg_script_event 14, 6, 0x00, 0x00, Roulette_EventScript_Table1
	@ BgEvent 13
	semantic_bg_script_event 15, 6, 0x00, 0x00, Roulette_EventScript_Table1
	@ BgEvent 14
	semantic_bg_script_event 14, 7, 0x00, 0x00, Roulette_EventScript_Table1
	@ BgEvent 15
	semantic_bg_script_event 15, 7, 0x00, 0x00, Roulette_EventScript_Table1
	@ BgEvent 16
	semantic_bg_script_event 14, 8, 0x00, 0x00, Roulette_EventScript_Table1
	@ BgEvent 17
	semantic_bg_script_event 15, 8, 0x00, 0x00, Roulette_EventScript_Table1
	@ BgEvent 18
	semantic_bg_script_event 18, 6, 0x00, 0x00, Roulette_EventScript_Table2
	@ BgEvent 19
	semantic_bg_script_event 19, 6, 0x00, 0x00, Roulette_EventScript_Table2
	@ BgEvent 20
	semantic_bg_script_event 18, 7, 0x00, 0x00, Roulette_EventScript_Table2
	@ BgEvent 21
	semantic_bg_script_event 19, 7, 0x00, 0x00, Roulette_EventScript_Table2
	@ BgEvent 22
	semantic_bg_script_event 18, 8, 0x00, 0x00, Roulette_EventScript_Table2
	@ BgEvent 23
	semantic_bg_script_event 19, 8, 0x00, 0x00, Roulette_EventScript_Table2
MauvilleCity_GameCorner_MapEvents: @ 0x085088A4
	@ struct MapEvents
	semantic_map_events 12, 2, 0, 24, MauvilleCity_GameCorner_ObjectEvents, MauvilleCity_GameCorner_WarpEvents, 0, MauvilleCity_GameCorner_BgEvents
MauvilleCity_House2_ObjectEvents: @ 0x085088B8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x18, 0x00, 4, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08200C5B, 0x0000
MauvilleCity_House2_WarpEvents: @ 0x085088D0
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x06, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x06, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
MauvilleCity_House2_MapEvents: @ 0x085088E0
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, MauvilleCity_House2_ObjectEvents, MauvilleCity_House2_WarpEvents, 0, 0
MauvilleCity_PokemonCenter_1F_ObjectEvents: @ 0x085088F4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08200DF1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 2, 3, 0x03, 0x09, 1, 0, 0x0000, 0x0000, MauvilleCity_PokemonCenter_1F_EventScript_MauvilleOldMan, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x10, 0x00, 8, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08200DFF, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x22, 0x00, 11, 4, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_08200E08, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x23, 0x00, 2, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08200E11, 0x0000
MauvilleCity_PokemonCenter_1F_WarpEvents: @ 0x0850896C
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x01, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x01, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_MAUVILLE_CITY_POKEMON_CENTER_2F, MAP_GROUP_MAUVILLE_CITY_POKEMON_CENTER_2F
MauvilleCity_PokemonCenter_1F_MapEvents: @ 0x08508984
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, MauvilleCity_PokemonCenter_1F_ObjectEvents, MauvilleCity_PokemonCenter_1F_WarpEvents, 0, 0
MauvilleCity_PokemonCenter_2F_ObjectEvents: @ 0x08508998
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x23, 0x00, 8, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08200EF6, 0x0000
MauvilleCity_PokemonCenter_2F_WarpEvents: @ 0x08508A10
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_MAUVILLE_CITY_POKEMON_CENTER_1F, MAP_GROUP_MAUVILLE_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
MauvilleCity_PokemonCenter_2F_MapEvents: @ 0x08508A28
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, MauvilleCity_PokemonCenter_2F_ObjectEvents, MauvilleCity_PokemonCenter_2F_WarpEvents, 0, 0
MauvilleCity_Mart_ObjectEvents: @ 0x08508A3C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08200F50, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 5, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08200F84, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 5, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08200F8D, 0x0000
MauvilleCity_Mart_WarpEvents: @ 0x08508A84
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x03, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x03, MAP_NUM_MAUVILLE_CITY, MAP_GROUP_MAUVILLE_CITY
MauvilleCity_Mart_MapEvents: @ 0x08508A94
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, MauvilleCity_Mart_ObjectEvents, MauvilleCity_Mart_WarpEvents, 0, 0
RustboroCity_DevonCorp_1F_ObjectEvents: @ 0x08508AA8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x74, 0x00, 2, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820104C, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x74, 0x00, 15, 5, 0x03, 0x02, 2, 1, 0x0000, 0x0000, EventScript_JP_0820107E, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x18, 0x00, 5, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082010B9, 0x0000
RustboroCity_DevonCorp_1F_WarpEvents: @ 0x08508AF0
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x00, 0x05, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x00, 0x06, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 2
	semantic_warp_event 14, 1, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_DEVON_CORP_2F, MAP_GROUP_RUSTBORO_CITY_DEVON_CORP_2F
RustboroCity_DevonCorp_1F_BgEvents: @ 0x08508B08
	@ BgEvent 0
	semantic_bg_script_event 3, 2, 0x00, 0x00, EventScript_JP_082010FD
	@ BgEvent 1
	semantic_bg_script_event 8, 2, 0x00, 0x00, EventScript_JP_082010F4
RustboroCity_DevonCorp_1F_MapEvents: @ 0x08508B20
	@ struct MapEvents
	semantic_map_events 3, 3, 0, 2, RustboroCity_DevonCorp_1F_ObjectEvents, RustboroCity_DevonCorp_1F_WarpEvents, 0, RustboroCity_DevonCorp_1F_BgEvents
RustboroCity_DevonCorp_2F_ObjectEvents: @ 0x08508B34
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 6, 5, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08201441, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2E, 0x00, 1, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08201458, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2E, 0x00, 2, 6, 0x03, 0x0F, 0, 0, 0x0000, 0x0000, EventScript_JP_08201482, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2E, 0x00, 10, 5, 0x03, 0x07, 0, 10, 0x0000, 0x0000, EventScript_JP_082014AC, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2E, 0x00, 14, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_082014C3, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2E, 0x00, 14, 5, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_082017A1, 0x0000
RustboroCity_DevonCorp_2F_WarpEvents: @ 0x08508BC4
	@ WarpEvent 0
	semantic_warp_event 14, 1, 0x00, 0x02, MAP_NUM_RUSTBORO_CITY_DEVON_CORP_1F, MAP_GROUP_RUSTBORO_CITY_DEVON_CORP_1F
	@ WarpEvent 1
	semantic_warp_event 2, 1, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_DEVON_CORP_3F, MAP_GROUP_RUSTBORO_CITY_DEVON_CORP_3F
RustboroCity_DevonCorp_2F_MapEvents: @ 0x08508BD4
	@ struct MapEvents
	semantic_map_events 6, 2, 0, 0, RustboroCity_DevonCorp_2F_ObjectEvents, RustboroCity_DevonCorp_2F_WarpEvents, 0, 0
RustboroCity_DevonCorp_3F_ObjectEvents: @ 0x08508BE8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x30, 0x00, 17, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08201D68, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x17, 0x00, 3, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08201DDD, 0x03B5
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x30, 0x00, 15, 5, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, EventScript_JP_08201D68, 0x0000
RustboroCity_DevonCorp_3F_WarpEvents: @ 0x08508C30
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x00, 0x01, MAP_NUM_RUSTBORO_CITY_DEVON_CORP_2F, MAP_GROUP_RUSTBORO_CITY_DEVON_CORP_2F
RustboroCity_DevonCorp_3F_BgEvents: @ 0x08508C38
	@ BgEvent 0
	semantic_bg_script_event 1, 5, 0x03, 0x00, EventScript_JP_08201DFC
	@ BgEvent 1
	semantic_bg_script_event 1, 7, 0x03, 0x00, EventScript_JP_08201DFC
RustboroCity_DevonCorp_3F_MapEvents: @ 0x08508C50
	@ struct MapEvents
	semantic_map_events 3, 1, 0, 2, RustboroCity_DevonCorp_3F_ObjectEvents, RustboroCity_DevonCorp_3F_WarpEvents, 0, RustboroCity_DevonCorp_3F_BgEvents
RustboroCity_Gym_ObjectEvents: @ 0x08508C64
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x7D, 0x00, 5, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082022C6, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x23, 0x00, 5, 13, 0x03, 0x08, 0, 0, 0x0001, 0x0002, EventScript_JP_08202378, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x23, 0x00, 3, 9, 0x03, 0x09, 0, 0, 0x0001, 0x0003, EventScript_JP_0820238F, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x17, 0x00, 3, 18, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082023BD, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x37, 0x00, 1, 6, 0x03, 0x08, 1, 1, 0x0001, 0x0003, EventScript_JP_082023A6, 0x0000
RustboroCity_Gym_WarpEvents: @ 0x08508CDC
	@ WarpEvent 0
	semantic_warp_event 5, 19, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 19, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
RustboroCity_Gym_BgEvents: @ 0x08508CEC
	@ BgEvent 0
	semantic_bg_script_event 2, 18, 0x00, 0x01, EventScript_JP_082023DC
	@ BgEvent 1
	semantic_bg_script_event 8, 18, 0x00, 0x01, EventScript_JP_082023EC
RustboroCity_Gym_MapEvents: @ 0x08508D04
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 2, RustboroCity_Gym_ObjectEvents, RustboroCity_Gym_WarpEvents, 0, RustboroCity_Gym_BgEvents
RustboroCity_PokemonSchool_ObjectEvents: @ 0x08508D18
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xBD, 0x00, 8, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08202CD1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xBD, 0x00, 9, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08202CDA, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0F, 0x00, 3, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08202CE3, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2F, 0x00, 10, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08202CEC, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x26, 0x00, 3, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08202CF5, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x30, 0x00, 5, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08202D07, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xDB, 0x00, 0, 10, 0x00, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08202DB2, 0x03E7
RustboroCity_PokemonSchool_WarpEvents: @ 0x08508DC0
	@ WarpEvent 0
	semantic_warp_event 5, 10, 0x00, 0x04, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 10, 0x00, 0x04, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
RustboroCity_PokemonSchool_BgEvents: @ 0x08508DD0
	@ BgEvent 0
	semantic_bg_script_event 5, 2, 0x00, 0x00, EventScript_JP_08202C1B
	@ BgEvent 1
	semantic_bg_script_event 4, 2, 0x00, 0x00, EventScript_JP_08202C1B
	@ BgEvent 2
	semantic_bg_script_event 6, 2, 0x00, 0x00, EventScript_JP_08202C1B
	@ BgEvent 3
	semantic_bg_script_event 7, 2, 0x00, 0x00, EventScript_JP_08202C1B
	@ BgEvent 4
	semantic_bg_script_event 3, 5, 0x00, 0x00, EventScript_JP_08202CFE
RustboroCity_PokemonSchool_MapEvents: @ 0x08508E0C
	@ struct MapEvents
	semantic_map_events 7, 2, 0, 5, RustboroCity_PokemonSchool_ObjectEvents, RustboroCity_PokemonSchool_WarpEvents, 0, RustboroCity_PokemonSchool_BgEvents
RustboroCity_PokemonCenter_1F_ObjectEvents: @ 0x08508E20
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082034C7, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x13, 0x00, 11, 2, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_082034D5, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x07, 0x00, 3, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_082034DE, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0E, 0x00, 10, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082034E7, 0x0000
RustboroCity_PokemonCenter_1F_WarpEvents: @ 0x08508E80
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x03, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x03, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_RUSTBORO_CITY_POKEMON_CENTER_2F, MAP_GROUP_RUSTBORO_CITY_POKEMON_CENTER_2F
RustboroCity_PokemonCenter_1F_MapEvents: @ 0x08508E98
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, RustboroCity_PokemonCenter_1F_ObjectEvents, RustboroCity_PokemonCenter_1F_WarpEvents, 0, 0
RustboroCity_PokemonCenter_2F_ObjectEvents: @ 0x08508EAC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
RustboroCity_PokemonCenter_2F_WarpEvents: @ 0x08508F0C
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_RUSTBORO_CITY_POKEMON_CENTER_1F, MAP_GROUP_RUSTBORO_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
RustboroCity_PokemonCenter_2F_MapEvents: @ 0x08508F24
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, RustboroCity_PokemonCenter_2F_ObjectEvents, RustboroCity_PokemonCenter_2F_WarpEvents, 0, 0
RustboroCity_Mart_ObjectEvents: @ 0x08508F38
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082035E1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x07, 0x00, 2, 5, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08203659, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x12, 0x00, 8, 4, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_08203650, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x24, 0x00, 8, 2, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08203662, 0x0000
RustboroCity_Mart_WarpEvents: @ 0x08508F98
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x02, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x02, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
RustboroCity_Mart_MapEvents: @ 0x08508FA8
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, RustboroCity_Mart_ObjectEvents, RustboroCity_Mart_WarpEvents, 0, 0
RustboroCity_Flat1_1F_ObjectEvents: @ 0x08508FBC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x21, 0x00, 9, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08203715, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x22, 0x00, 12, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820371E, 0x0000
RustboroCity_Flat1_1F_WarpEvents: @ 0x08508FEC
	@ WarpEvent 0
	semantic_warp_event 6, 7, 0x00, 0x01, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 7, 7, 0x00, 0x01, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 2
	semantic_warp_event 2, 1, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_FLAT1_2F, MAP_GROUP_RUSTBORO_CITY_FLAT1_2F
RustboroCity_Flat1_1F_MapEvents: @ 0x08509004
	@ struct MapEvents
	semantic_map_events 2, 3, 0, 0, RustboroCity_Flat1_1F_ObjectEvents, RustboroCity_Flat1_1F_WarpEvents, 0, 0
RustboroCity_Flat1_2F_ObjectEvents: @ 0x08509018
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x12, 0x00, 4, 6, 0x03, 0x05, 3, 1, 0x0000, 0x0000, EventScript_JP_08203874, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x06, 0x00, 9, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xA2, 0x00, 9, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820387D, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x9A, 0x00, 10, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820387D, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x9B, 0x00, 10, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820387D, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x13, 0x00, 8, 5, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_08203771, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x9C, 0x00, 8, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820387D, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x8F, 0x00, 9, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820387D, 0x0000
RustboroCity_Flat1_2F_WarpEvents: @ 0x085090D8
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x00, 0x02, MAP_NUM_RUSTBORO_CITY_FLAT1_1F, MAP_GROUP_RUSTBORO_CITY_FLAT1_1F
RustboroCity_Flat1_2F_MapEvents: @ 0x085090E0
	@ struct MapEvents
	semantic_map_events 8, 1, 0, 0, RustboroCity_Flat1_2F_ObjectEvents, RustboroCity_Flat1_2F_WarpEvents, 0, 0
RustboroCity_House1_ObjectEvents: @ 0x085090F4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1F, 0x00, 6, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08203BC9, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x37, 0x00, 9, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08203C69, 0x0000
RustboroCity_House1_WarpEvents: @ 0x08509124
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x07, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 7, 0x00, 0x07, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
RustboroCity_House1_MapEvents: @ 0x08509134
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, RustboroCity_House1_ObjectEvents, RustboroCity_House1_WarpEvents, 0, 0
RustboroCity_CuttersHouse_ObjectEvents: @ 0x08509148
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x19, 0x00, 7, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08203D7D, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2F, 0x00, 9, 2, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_08203DB3, 0x0000
RustboroCity_CuttersHouse_WarpEvents: @ 0x08509178
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x00, 0x08, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x00, 0x08, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
RustboroCity_CuttersHouse_MapEvents: @ 0x08509188
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, RustboroCity_CuttersHouse_ObjectEvents, RustboroCity_CuttersHouse_WarpEvents, 0, 0
RustboroCity_House2_ObjectEvents: @ 0x0850919C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x12, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08203F16, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0C, 0x00, 4, 5, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08203F1F, 0x0000
RustboroCity_House2_WarpEvents: @ 0x085091CC
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x00, 0x09, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x00, 0x09, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
RustboroCity_House2_MapEvents: @ 0x085091DC
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, RustboroCity_House2_ObjectEvents, RustboroCity_House2_WarpEvents, 0, 0
RustboroCity_Flat2_1F_ObjectEvents: @ 0x085091F0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xCB, 0x00, 11, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08203FA3, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1E, 0x00, 8, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08203F9A, 0x0000
RustboroCity_Flat2_1F_WarpEvents: @ 0x08509220
	@ WarpEvent 0
	semantic_warp_event 2, 8, 0x00, 0x0A, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 3, 8, 0x00, 0x0A, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 2
	semantic_warp_event 3, 1, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_FLAT2_2F, MAP_GROUP_RUSTBORO_CITY_FLAT2_2F
RustboroCity_Flat2_1F_MapEvents: @ 0x08509238
	@ struct MapEvents
	semantic_map_events 2, 3, 0, 0, RustboroCity_Flat2_1F_ObjectEvents, RustboroCity_Flat2_1F_WarpEvents, 0, 0
RustboroCity_Flat2_2F_ObjectEvents: @ 0x0850924C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1D, 0x00, 11, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08203FE9, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x05, 0x00, 7, 3, 0x03, 0x05, 2, 0, 0x0000, 0x0000, EventScript_JP_08203FF2, 0x0000
RustboroCity_Flat2_2F_WarpEvents: @ 0x0850927C
	@ WarpEvent 0
	semantic_warp_event 3, 1, 0x00, 0x02, MAP_NUM_RUSTBORO_CITY_FLAT2_1F, MAP_GROUP_RUSTBORO_CITY_FLAT2_1F
	@ WarpEvent 1
	semantic_warp_event 1, 1, 0x00, 0x00, MAP_NUM_RUSTBORO_CITY_FLAT2_3F, MAP_GROUP_RUSTBORO_CITY_FLAT2_3F
RustboroCity_Flat2_2F_MapEvents: @ 0x0850928C
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, RustboroCity_Flat2_2F_ObjectEvents, RustboroCity_Flat2_2F_WarpEvents, 0, 0
RustboroCity_Flat2_3F_ObjectEvents: @ 0x085092A0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x74, 0x00, 7, 3, 0x03, 0x05, 2, 0, 0x0000, 0x0000, EventScript_JP_082040B6, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x10, 0x00, 12, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082040BF, 0x0000
RustboroCity_Flat2_3F_WarpEvents: @ 0x085092D0
	@ WarpEvent 0
	semantic_warp_event 1, 1, 0x00, 0x01, MAP_NUM_RUSTBORO_CITY_FLAT2_2F, MAP_GROUP_RUSTBORO_CITY_FLAT2_2F
RustboroCity_Flat2_3F_MapEvents: @ 0x085092D8
	@ struct MapEvents
	semantic_map_events 2, 1, 0, 0, RustboroCity_Flat2_3F_ObjectEvents, RustboroCity_Flat2_3F_WarpEvents, 0, 0
RustboroCity_House3_ObjectEvents: @ 0x085092EC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1D, 0x00, 4, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08204118, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1E, 0x00, 7, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08204121, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xD1, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820412A, 0x0000
RustboroCity_House3_WarpEvents: @ 0x08509334
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x00, 0x0B, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x00, 0x0B, MAP_NUM_RUSTBORO_CITY, MAP_GROUP_RUSTBORO_CITY
RustboroCity_House3_MapEvents: @ 0x08509344
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, RustboroCity_House3_ObjectEvents, RustboroCity_House3_WarpEvents, 0, 0
FortreeCity_House1_ObjectEvents: @ 0x08509358
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x05, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082041CB, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xD0, 0x00, 2, 3, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08204278, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x16, 0x00, 7, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820426F, 0x0000
FortreeCity_House1_WarpEvents: @ 0x085093A0
	@ WarpEvent 0
	semantic_warp_event 3, 5, 0x00, 0x01, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 5, 0x00, 0x01, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
FortreeCity_House1_MapEvents: @ 0x085093B0
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, FortreeCity_House1_ObjectEvents, FortreeCity_House1_WarpEvents, 0, 0
FortreeCity_Gym_ObjectEvents: @ 0x085093C4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x82, 0x00, 15, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082043BB, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x42, 0x00, 4, 14, 0x03, 0x08, 0, 0, 0x0001, 0x0003, EventScript_JP_0820449B, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1F, 0x00, 10, 10, 0x03, 0x09, 0, 0, 0x0001, 0x0002, EventScript_JP_082044C9, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x20, 0x00, 5, 17, 0x03, 0x09, 0, 0, 0x0001, 0x0001, EventScript_JP_082044E0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x42, 0x00, 9, 8, 0x03, 0x08, 0, 0, 0x0001, 0x0002, EventScript_JP_082044B2, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x17, 0x00, 15, 21, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08204525, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x42, 0x00, 4, 23, 0x03, 0x0A, 1, 1, 0x0001, 0x0001, EventScript_JP_082044F7, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x42, 0x00, 1, 10, 0x03, 0x07, 1, 1, 0x0001, 0x0003, EventScript_JP_0820450E, 0x0000
FortreeCity_Gym_WarpEvents: @ 0x08509484
	@ WarpEvent 0
	semantic_warp_event 15, 24, 0x00, 0x02, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 16, 24, 0x00, 0x02, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
FortreeCity_Gym_BgEvents: @ 0x08509494
	@ BgEvent 0
	semantic_bg_script_event 14, 21, 0x00, 0x01, EventScript_JP_08204544
	@ BgEvent 1
	semantic_bg_script_event 17, 21, 0x00, 0x01, EventScript_JP_08204554
FortreeCity_Gym_MapEvents: @ 0x085094AC
	@ struct MapEvents
	semantic_map_events 8, 2, 0, 2, FortreeCity_Gym_ObjectEvents, FortreeCity_Gym_WarpEvents, 0, FortreeCity_Gym_BgEvents
FortreeCity_PokemonCenter_1F_ObjectEvents: @ 0x085094C0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08204C6C, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 4, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08204C7A, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 8, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08204C83, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0D, 0x00, 2, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08204C8C, 0x0000
FortreeCity_PokemonCenter_1F_WarpEvents: @ 0x08509520
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x00, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x00, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_FORTREE_CITY_POKEMON_CENTER_2F, MAP_GROUP_FORTREE_CITY_POKEMON_CENTER_2F
FortreeCity_PokemonCenter_1F_MapEvents: @ 0x08509538
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, FortreeCity_PokemonCenter_1F_ObjectEvents, FortreeCity_PokemonCenter_1F_WarpEvents, 0, 0
FortreeCity_PokemonCenter_2F_ObjectEvents: @ 0x0850954C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
FortreeCity_PokemonCenter_2F_WarpEvents: @ 0x085095AC
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_FORTREE_CITY_POKEMON_CENTER_1F, MAP_GROUP_FORTREE_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
FortreeCity_PokemonCenter_2F_MapEvents: @ 0x085095C4
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, FortreeCity_PokemonCenter_2F_ObjectEvents, FortreeCity_PokemonCenter_2F_WarpEvents, 0, 0
FortreeCity_Mart_ObjectEvents: @ 0x085095D8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08204DBE, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x14, 0x00, 9, 3, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08204DF0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0E, 0x00, 8, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08204DF9, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x09, 0x00, 5, 6, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_08204E02, 0x0000
FortreeCity_Mart_WarpEvents: @ 0x08509638
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x03, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x03, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
FortreeCity_Mart_MapEvents: @ 0x08509648
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, FortreeCity_Mart_ObjectEvents, FortreeCity_Mart_WarpEvents, 0, 0
FortreeCity_House2_ObjectEvents: @ 0x0850965C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x16, 0x00, 2, 3, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_08204E9C, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 6, 3, 0x03, 0x09, 1, 0, 0x0000, 0x0000, EventScript_JP_08276A3A, 0x0000
FortreeCity_House2_WarpEvents: @ 0x0850968C
	@ WarpEvent 0
	semantic_warp_event 3, 5, 0x00, 0x04, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 5, 0x00, 0x04, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
FortreeCity_House2_MapEvents: @ 0x0850969C
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, FortreeCity_House2_ObjectEvents, FortreeCity_House2_WarpEvents, 0, 0
FortreeCity_House3_ObjectEvents: @ 0x085096B0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x27, 0x00, 0, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082050D1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x26, 0x00, 5, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_082050DA, 0x0000
FortreeCity_House3_WarpEvents: @ 0x085096E0
	@ WarpEvent 0
	semantic_warp_event 3, 5, 0x00, 0x05, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 5, 0x00, 0x05, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
FortreeCity_House3_MapEvents: @ 0x085096F0
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, FortreeCity_House3_ObjectEvents, FortreeCity_House3_WarpEvents, 0, 0
FortreeCity_House4_ObjectEvents: @ 0x08509704
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1A, 0x00, 6, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_082051A3, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0D, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082051AC, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xD3, 0x00, 2, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08205242, 0x03A5
FortreeCity_House4_WarpEvents: @ 0x0850974C
	@ WarpEvent 0
	semantic_warp_event 3, 5, 0x00, 0x06, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 5, 0x00, 0x06, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
FortreeCity_House4_MapEvents: @ 0x0850975C
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, FortreeCity_House4_ObjectEvents, FortreeCity_House4_WarpEvents, 0, 0
FortreeCity_House5_ObjectEvents: @ 0x08509770
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x12, 0x00, 6, 4, 0x03, 0x14, 0, 0, 0x0000, 0x0000, EventScript_JP_08205344, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xD0, 0x00, 6, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08205356, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x13, 0x00, 2, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820534D, 0x0000
FortreeCity_House5_WarpEvents: @ 0x085097B8
	@ WarpEvent 0
	semantic_warp_event 3, 5, 0x00, 0x07, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 5, 0x00, 0x07, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
FortreeCity_House5_MapEvents: @ 0x085097C8
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, FortreeCity_House5_ObjectEvents, FortreeCity_House5_WarpEvents, 0, 0
FortreeCity_DecorationShop_ObjectEvents: @ 0x085097DC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x19, 0x00, 6, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082053F1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 0, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_082053FA, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x53, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08205403, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x53, 0x00, 6, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08205430, 0x0000
FortreeCity_DecorationShop_WarpEvents: @ 0x0850983C
	@ WarpEvent 0
	semantic_warp_event 3, 5, 0x00, 0x08, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 5, 0x00, 0x08, MAP_NUM_FORTREE_CITY, MAP_GROUP_FORTREE_CITY
FortreeCity_DecorationShop_MapEvents: @ 0x0850984C
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, FortreeCity_DecorationShop_ObjectEvents, FortreeCity_DecorationShop_WarpEvents, 0, 0
LilycoveCity_CoveLilyMotel_1F_ObjectEvents: @ 0x08509860
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 10, 3, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082054FD, 0x0000
LilycoveCity_CoveLilyMotel_1F_WarpEvents: @ 0x08509878
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x00, 0x01, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x00, 0x01, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 2
	semantic_warp_event 2, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_COVE_LILY_MOTEL_2F, MAP_GROUP_LILYCOVE_CITY_COVE_LILY_MOTEL_2F
LilycoveCity_CoveLilyMotel_1F_CoordEvents: @ 0x08509890
	@ CoordEvent 0
	semantic_coord_event 10, 2, 0x03, 0x4001, 0x0000, EventScript_JP_08205585
LilycoveCity_CoveLilyMotel_1F_MapEvents: @ 0x085098A0
	@ struct MapEvents
	semantic_map_events 1, 3, 1, 0, LilycoveCity_CoveLilyMotel_1F_ObjectEvents, LilycoveCity_CoveLilyMotel_1F_WarpEvents, LilycoveCity_CoveLilyMotel_1F_CoordEvents, 0
LilycoveCity_CoveLilyMotel_2F_ObjectEvents: @ 0x085098B4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x21, 0x00, 4, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08205888, 0x039D
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2E, 0x00, 1, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082058DE, 0x039D
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x11, 0x00, 7, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082058E7, 0x039D
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x41, 0x00, 10, 3, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_082058D5, 0x039D
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xBD, 0x00, 7, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_082058F9, 0x039D
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x14, 0x00, 4, 4, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_082058F0, 0x039D
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xDB, 0x00, 1, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08205902, 0x0313
LilycoveCity_CoveLilyMotel_2F_WarpEvents: @ 0x0850995C
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x00, 0x02, MAP_NUM_LILYCOVE_CITY_COVE_LILY_MOTEL_1F, MAP_GROUP_LILYCOVE_CITY_COVE_LILY_MOTEL_1F
LilycoveCity_CoveLilyMotel_2F_MapEvents: @ 0x08509964
	@ struct MapEvents
	semantic_map_events 7, 1, 0, 0, LilycoveCity_CoveLilyMotel_2F_ObjectEvents, LilycoveCity_CoveLilyMotel_2F_WarpEvents, 0, 0
LilycoveCity_LilycoveMuseum_1F_ObjectEvents: @ 0x08509978
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2D, 0x00, 5, 12, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08205BE3, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 16, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08205BEC, 0x0307
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x26, 0x00, 13, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08205D1F, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x63, 0x00, 13, 10, 0x03, 0x05, 2, 0, 0x0000, 0x0000, EventScript_JP_08205D28, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x05, 0x00, 2, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08205D31, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x1A, 0x00, 3, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08205D3A, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x14, 0x00, 11, 3, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08205D43, 0x0308
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x63, 0x00, 19, 3, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08205D55, 0x030B
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x11, 0x00, 2, 2, 0x03, 0x02, 2, 2, 0x0000, 0x0000, EventScript_JP_08205D6C, 0x030C
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x25, 0x00, 6, 2, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08205D4C, 0x030A
LilycoveCity_LilycoveMuseum_1F_WarpEvents: @ 0x08509A68
	@ WarpEvent 0
	semantic_warp_event 9, 13, 0x00, 0x03, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 10, 13, 0x00, 0x0D, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 2
	semantic_warp_event 16, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, MAP_GROUP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F
LilycoveCity_LilycoveMuseum_1F_BgEvents: @ 0x08509A80
	@ BgEvent 0
	semantic_bg_script_event 1, 1, 0x00, 0x00, EventScript_JP_08205CD7
	@ BgEvent 1
	semantic_bg_script_event 2, 1, 0x00, 0x00, EventScript_JP_08205CD7
	@ BgEvent 2
	semantic_bg_script_event 5, 1, 0x00, 0x00, EventScript_JP_08205CFB
	@ BgEvent 3
	semantic_bg_script_event 6, 1, 0x00, 0x00, EventScript_JP_08205CFB
	@ BgEvent 4
	semantic_bg_script_event 9, 1, 0x00, 0x00, EventScript_JP_08205CCE
	@ BgEvent 5
	semantic_bg_script_event 3, 6, 0x00, 0x00, EventScript_JP_08205CE0
	@ BgEvent 6
	semantic_bg_script_event 2, 6, 0x00, 0x00, EventScript_JP_08205CE0
	@ BgEvent 7
	semantic_bg_script_event 15, 12, 0x00, 0x00, EventScript_JP_08205D04
	@ BgEvent 8
	semantic_bg_script_event 11, 1, 0x00, 0x00, EventScript_JP_08205CCE
	@ BgEvent 9
	semantic_bg_script_event 6, 6, 0x00, 0x00, EventScript_JP_08205CF2
	@ BgEvent 10
	semantic_bg_script_event 17, 9, 0x00, 0x00, EventScript_JP_08205D16
	@ BgEvent 11
	semantic_bg_script_event 19, 1, 0x00, 0x00, EventScript_JP_08205CE9
	@ BgEvent 12
	semantic_bg_script_event 20, 1, 0x00, 0x00, EventScript_JP_08205CE9
	@ BgEvent 13
	semantic_bg_script_event 18, 9, 0x00, 0x00, EventScript_JP_08205D16
	@ BgEvent 14
	semantic_bg_script_event 18, 11, 0x00, 0x00, EventScript_JP_08205D0D
	@ BgEvent 15
	semantic_bg_script_event 16, 9, 0x00, 0x00, EventScript_JP_08205D16
LilycoveCity_LilycoveMuseum_1F_MapEvents: @ 0x08509B40
	@ struct MapEvents
	semantic_map_events 10, 3, 0, 16, LilycoveCity_LilycoveMuseum_1F_ObjectEvents, LilycoveCity_LilycoveMuseum_1F_WarpEvents, 0, LilycoveCity_LilycoveMuseum_1F_BgEvents
LilycoveCity_LilycoveMuseum_2F_ObjectEvents: @ 0x08509B54
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x30, 0x00, 10, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08206312, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0A, 0x00, 19, 10, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08206436, 0x0309
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x15, 0x00, 7, 3, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820643F, 0x030C
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0F, 0x00, 14, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08206448, 0x030C
LilycoveCity_LilycoveMuseum_2F_WarpEvents: @ 0x08509BB4
	@ WarpEvent 0
	semantic_warp_event 13, 1, 0x00, 0x02, MAP_NUM_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F, MAP_GROUP_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F
LilycoveCity_LilycoveMuseum_2F_BgEvents: @ 0x08509BBC
	@ BgEvent 0
	semantic_bg_script_event 14, 10, 0x00, 0x00, EventScript_JP_082063D7
	@ BgEvent 1
	semantic_bg_script_event 15, 10, 0x00, 0x00, EventScript_JP_082063D7
	@ BgEvent 2
	semantic_bg_script_event 3, 6, 0x00, 0x00, EventScript_JP_082063EA
	@ BgEvent 3
	semantic_bg_script_event 2, 6, 0x00, 0x00, EventScript_JP_082063EA
	@ BgEvent 4
	semantic_bg_script_event 10, 6, 0x00, 0x00, EventScript_JP_082063FD
	@ BgEvent 5
	semantic_bg_script_event 11, 6, 0x00, 0x00, EventScript_JP_082063FD
	@ BgEvent 6
	semantic_bg_script_event 19, 6, 0x00, 0x00, EventScript_JP_08206410
	@ BgEvent 7
	semantic_bg_script_event 18, 6, 0x00, 0x00, EventScript_JP_08206410
	@ BgEvent 8
	semantic_bg_script_event 6, 10, 0x00, 0x00, EventScript_JP_08206423
	@ BgEvent 9
	semantic_bg_script_event 7, 10, 0x00, 0x00, EventScript_JP_08206423
	@ BgEvent 10
	semantic_bg_script_event 11, 2, 0x00, 0x00, EventScript_JP_08205D04
	@ BgEvent 11
	semantic_bg_script_event 15, 2, 0x00, 0x00, EventScript_JP_08205D04
LilycoveCity_LilycoveMuseum_2F_MapEvents: @ 0x08509C4C
	@ struct MapEvents
	semantic_map_events 4, 1, 0, 12, LilycoveCity_LilycoveMuseum_2F_ObjectEvents, LilycoveCity_LilycoveMuseum_2F_WarpEvents, 0, LilycoveCity_LilycoveMuseum_2F_BgEvents
LilycoveCity_ContestLobby_ObjectEvents: @ 0x08509C60
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 14, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08206C14, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 15, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08206EC6, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x41, 0x00, 26, 9, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082590D2, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x63, 0x00, 9, 1, 0x00, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x0306
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2C, 0x00, 18, 8, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08206DC8, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x0A, 0x00, 4, 9, 0x03, 0x02, 2, 2, 0x0000, 0x0000, EventScript_JP_08206DD1, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x63, 0x00, 3, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08206DDA, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x43, 0x00, 13, 10, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08253E71, 0x0322
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x07, 0x00, 23, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08206E28, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x06, 0x00, 28, 9, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_082590E4, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x63, 0x00, 21, 1, 0x00, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x037F
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x32, 0x00, 5, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08206DEC, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x11, 0x00, 0, 8, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08206DE3, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x05, 0x00, 8, 7, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_08206DF5, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x12, 0x00, 22, 9, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082590DB, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x15, 0x00, 26, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082590ED, 0x0369
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x08, 0x00, 24, 9, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08206E31, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x42, 0x00, 27, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08206E73, 0x0340
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x1F, 0x00, 28, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08206E7E, 0x0340
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x0C, 0x00, 28, 7, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08206E89, 0x0340
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x73, 0x00, 26, 7, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08206E99, 0x0340
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x10, 0x00, 27, 7, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08206EA9, 0x0340
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x05, 0x00, 26, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08206E68, 0x0340
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x1D, 0x00, 26, 5, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_08206E58, 0x0340
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x0C, 0x00, 9, 10, 0x03, 0x0A, 2, 2, 0x0000, 0x0000, EventScript_JP_082073B1, 0x0000
LilycoveCity_ContestLobby_WarpEvents: @ 0x08509EB8
	@ WarpEvent 0
	semantic_warp_event 14, 11, 0x00, 0x04, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 15, 11, 0x00, 0x04, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_CONTEST_HALL, MAP_GROUP_LILYCOVE_CITY_CONTEST_HALL
	@ WarpEvent 3
	semantic_warp_event 21, 1, 0x00, 0x01, MAP_NUM_LILYCOVE_CITY_CONTEST_HALL, MAP_GROUP_LILYCOVE_CITY_CONTEST_HALL
LilycoveCity_ContestLobby_BgEvents: @ 0x08509ED8
	@ BgEvent 0
	semantic_bg_script_event 23, 5, 0x00, 0x00, EventScript_JP_08259185
	@ BgEvent 1
	semantic_bg_script_event 23, 9, 0x00, 0x00, EventScript_JP_08258F4E
	@ BgEvent 2
	semantic_bg_script_event 23, 1, 0x00, 0x00, EventScript_JP_08206E13
	@ BgEvent 3
	semantic_bg_script_event 25, 1, 0x00, 0x00, EventScript_JP_08206E1A
	@ BgEvent 4
	semantic_bg_script_event 27, 1, 0x00, 0x00, EventScript_JP_08206E21
	@ BgEvent 5
	semantic_bg_script_event 30, 1, 0x00, 0x00, EventScript_JP_08206E3A
	@ BgEvent 6
	semantic_bg_script_event 3, 1, 0x00, 0x00, EventScript_JP_08206DFE
	@ BgEvent 7
	semantic_bg_script_event 5, 1, 0x00, 0x00, EventScript_JP_08206E05
	@ BgEvent 8
	semantic_bg_script_event 7, 1, 0x00, 0x00, EventScript_JP_08206E0C
	@ BgEvent 9
	semantic_bg_script_event 27, 5, 0x00, 0x00, EventScript_JP_08258D6E
	@ BgEvent 10
	semantic_bg_script_event 27, 9, 0x00, 0x00, EventScript_JP_08258E7D
	@ BgEvent 11
	semantic_bg_script_event 18, 3, 0x00, 0x00, EventScript_JP_08206E44
LilycoveCity_ContestLobby_MapEvents: @ 0x08509F68
	@ struct MapEvents
	semantic_map_events 25, 4, 0, 12, LilycoveCity_ContestLobby_ObjectEvents, LilycoveCity_ContestLobby_WarpEvents, 0, LilycoveCity_ContestLobby_BgEvents
LilycoveCity_ContestHall_ObjectEvents: @ 0x08509F7C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x07, 0x00, 30, 30, 0x03, 0x02, 4, 4, 0x0000, 0x0000, EventScript_JP_082077BA, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0D, 0x00, 11, 7, 0x03, 0x02, 3, 3, 0x0000, 0x0000, EventScript_JP_082077C3, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0E, 0x00, 40, 8, 0x03, 0x02, 2, 2, 0x0000, 0x0000, EventScript_JP_082077CC, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x18, 0x00, 12, 22, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082077DE, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xBE, 0x00, 15, 22, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082077F5, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2C, 0x00, 10, 25, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820780C, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x15, 0x00, 12, 25, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08207823, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x27, 0x00, 14, 25, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820783A, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x1C, 0x00, 16, 25, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08207851, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x16, 0x00, 8, 24, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08207868, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x22, 0x00, 18, 24, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820789F, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x07, 0x00, 8, 22, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08207871, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x18, 0x00, 24, 10, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082078B6, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xBE, 0x00, 27, 10, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082078CD, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x1A, 0x00, 22, 13, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082078E4, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x06, 0x00, 24, 13, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082078FB, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x25, 0x00, 26, 13, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08207912, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x12, 0x00, 28, 13, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08207929, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x14, 0x00, 20, 10, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08207940, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x10, 0x00, 30, 11, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820796E, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x13, 0x00, 26, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08207957, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x1F, 0x00, 13, 20, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08207888, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x18, 0x00, 36, 22, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08207985, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0xBE, 0x00, 39, 22, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820799C, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x09, 0x00, 34, 25, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082079B3, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x0A, 0x00, 36, 25, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082079CA, 0x0000
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x0D, 0x00, 38, 25, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082079E1, 0x0000
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x16, 0x00, 40, 25, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082079F8, 0x0000
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x14, 0x00, 32, 23, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08207A0F, 0x0000
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0x13, 0x00, 37, 20, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08207A51, 0x0000
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0x0C, 0x00, 42, 24, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08207A3A, 0x0000
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x31, 0x00, 23, 26, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_082077D5, 0x0000
LilycoveCity_ContestHall_WarpEvents: @ 0x0850A27C
	@ WarpEvent 0
	semantic_warp_event 19, 32, 0x00, 0x02, MAP_NUM_LILYCOVE_CITY_CONTEST_LOBBY, MAP_GROUP_LILYCOVE_CITY_CONTEST_LOBBY
	@ WarpEvent 1
	semantic_warp_event 30, 32, 0x00, 0x03, MAP_NUM_LILYCOVE_CITY_CONTEST_LOBBY, MAP_GROUP_LILYCOVE_CITY_CONTEST_LOBBY
	@ WarpEvent 2
	semantic_warp_event 20, 32, 0x00, 0x02, MAP_NUM_LILYCOVE_CITY_CONTEST_LOBBY, MAP_GROUP_LILYCOVE_CITY_CONTEST_LOBBY
	@ WarpEvent 3
	semantic_warp_event 31, 32, 0x00, 0x03, MAP_NUM_LILYCOVE_CITY_CONTEST_LOBBY, MAP_GROUP_LILYCOVE_CITY_CONTEST_LOBBY
LilycoveCity_ContestHall_BgEvents: @ 0x0850A29C
	@ BgEvent 0
	semantic_bg_script_event 27, 16, 0x00, 0x00, EventScript_JP_08207A68
	@ BgEvent 1
	semantic_bg_script_event 39, 28, 0x00, 0x00, EventScript_JP_08207A71
	@ BgEvent 2
	semantic_bg_script_event 11, 28, 0x00, 0x00, EventScript_JP_08207A7A
	@ BgEvent 3
	semantic_bg_script_event 15, 28, 0x00, 0x00, EventScript_JP_08207A7A
	@ BgEvent 4
	semantic_bg_script_event 23, 16, 0x00, 0x00, EventScript_JP_08207A68
	@ BgEvent 5
	semantic_bg_script_event 35, 28, 0x00, 0x00, EventScript_JP_08207A71
LilycoveCity_ContestHall_MapEvents: @ 0x0850A2E4
	@ struct MapEvents
	semantic_map_events 32, 4, 0, 6, LilycoveCity_ContestHall_ObjectEvents, LilycoveCity_ContestHall_WarpEvents, 0, LilycoveCity_ContestHall_BgEvents
LilycoveCity_PokemonCenter_1F_ObjectEvents: @ 0x0850A2F8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08208280, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x07, 0x00, 10, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820828E, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x27, 0x00, 11, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08208297, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF0, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, LilycoveCity_PokemonCenter_1F_EventScript_LilycoveLady, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF1, 0x00, 2, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, LilycoveCity_PokemonCenter_1F_EventScript_ContestLadyMon, 0x03E1
LilycoveCity_PokemonCenter_1F_WarpEvents: @ 0x0850A370
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x02, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x02, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_LILYCOVE_CITY_POKEMON_CENTER_2F, MAP_GROUP_LILYCOVE_CITY_POKEMON_CENTER_2F
LilycoveCity_PokemonCenter_1F_MapEvents: @ 0x0850A388
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, LilycoveCity_PokemonCenter_1F_ObjectEvents, LilycoveCity_PokemonCenter_1F_WarpEvents, 0, 0
LilycoveCity_PokemonCenter_2F_ObjectEvents: @ 0x0850A39C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
LilycoveCity_PokemonCenter_2F_WarpEvents: @ 0x0850A3FC
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_LILYCOVE_CITY_POKEMON_CENTER_1F, MAP_GROUP_LILYCOVE_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
LilycoveCity_PokemonCenter_2F_MapEvents: @ 0x0850A414
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, LilycoveCity_PokemonCenter_2F_ObjectEvents, LilycoveCity_PokemonCenter_2F_WarpEvents, 0, 0
LilycoveCity_UnusedMart_WarpEvents: @ 0x0850A428
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
LilycoveCity_UnusedMart_MapEvents: @ 0x0850A438
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, LilycoveCity_UnusedMart_WarpEvents, 0, 0
LilycoveCity_PokemonTrainerFanClub_ObjectEvents: @ 0x0850A44C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2F, 0x00, 3, 11, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_082086A7, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x41, 0x00, 8, 10, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08208630, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x19, 0x00, 6, 11, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820871E, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0C, 0x00, 5, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08208795, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x05, 0x00, 7, 11, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820880C, 0x0317
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x09, 0x00, 1, 9, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820886E, 0x0316
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x18, 0x00, 3, 10, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082088D0, 0x0318
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x16, 0x00, 10, 10, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08208932, 0x0315
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x07, 0x00, 11, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08208994, 0x02DA
LilycoveCity_PokemonTrainerFanClub_WarpEvents: @ 0x0850A524
	@ WarpEvent 0
	semantic_warp_event 6, 13, 0x00, 0x05, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 5, 13, 0x00, 0x05, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
LilycoveCity_PokemonTrainerFanClub_MapEvents: @ 0x0850A534
	@ struct MapEvents
	semantic_map_events 9, 2, 0, 0, LilycoveCity_PokemonTrainerFanClub_ObjectEvents, LilycoveCity_PokemonTrainerFanClub_WarpEvents, 0, 0
LilycoveCity_Harbor_ObjectEvents: @ 0x0850A548
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2D, 0x00, 8, 10, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082094E3, 0x038C
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x8C, 0x00, 8, 9, 0x01, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x035D
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x31, 0x00, 3, 13, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08209B0B, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x31, 0x00, 8, 10, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x038D
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x15, 0x00, 8, 10, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x02EC
LilycoveCity_Harbor_WarpEvents: @ 0x0850A5C0
	@ WarpEvent 0
	semantic_warp_event 11, 14, 0x00, 0x0C, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 12, 14, 0x00, 0x0C, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
LilycoveCity_Harbor_MapEvents: @ 0x0850A5D0
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 0, LilycoveCity_Harbor_ObjectEvents, LilycoveCity_Harbor_WarpEvents, 0, 0
LilycoveCity_MoveDeletersHouse_ObjectEvents: @ 0x0850A5E4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08209D71, 0x0000
LilycoveCity_MoveDeletersHouse_WarpEvents: @ 0x0850A5FC
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x07, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x07, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
LilycoveCity_MoveDeletersHouse_MapEvents: @ 0x0850A60C
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, LilycoveCity_MoveDeletersHouse_ObjectEvents, LilycoveCity_MoveDeletersHouse_WarpEvents, 0, 0
LilycoveCity_House1_ObjectEvents: @ 0x0850A620
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 4, 5, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_08209F67, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xCC, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08209F70, 0x0000
LilycoveCity_House1_WarpEvents: @ 0x0850A650
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x08, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x08, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
LilycoveCity_House1_MapEvents: @ 0x0850A660
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, LilycoveCity_House1_ObjectEvents, LilycoveCity_House1_WarpEvents, 0, 0
LilycoveCity_House2_ObjectEvents: @ 0x0850A674
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x11, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08209FDD, 0x0000
LilycoveCity_House2_WarpEvents: @ 0x0850A68C
	@ WarpEvent 0
	semantic_warp_event 2, 7, 0x00, 0x09, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 3, 7, 0x00, 0x09, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
LilycoveCity_House2_MapEvents: @ 0x0850A69C
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, LilycoveCity_House2_ObjectEvents, LilycoveCity_House2_WarpEvents, 0, 0
LilycoveCity_House3_ObjectEvents: @ 0x0850A6B0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xBD, 0x00, 3, 4, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A166, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 7, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820A074, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xBD, 0x00, 1, 4, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A0FE, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xBD, 0x00, 2, 5, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A132, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xBD, 0x00, 2, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A0CA, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x13, 0x00, 7, 5, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A0B3, 0x0000
LilycoveCity_House3_WarpEvents: @ 0x0850A740
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x0A, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x0A, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
LilycoveCity_House3_MapEvents: @ 0x0850A750
	@ struct MapEvents
	semantic_map_events 6, 2, 0, 0, LilycoveCity_House3_ObjectEvents, LilycoveCity_House3_WarpEvents, 0, 0
LilycoveCity_House4_ObjectEvents: @ 0x0850A764
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x41, 0x00, 1, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A51B, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x13, 0x00, 7, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A524, 0x0000
LilycoveCity_House4_WarpEvents: @ 0x0850A794
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x0B, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x0B, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
LilycoveCity_House4_MapEvents: @ 0x0850A7A4
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, LilycoveCity_House4_ObjectEvents, LilycoveCity_House4_WarpEvents, 0, 0
LilycoveCity_DepartmentStore_1F_ObjectEvents: @ 0x0850A7B8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2D, 0x00, 8, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820A5B0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2D, 0x00, 10, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820A5B9, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x12, 0x00, 14, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A74C, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0C, 0x00, 4, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A755, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x19, 0x00, 3, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A75E, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xD2, 0x00, 2, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A767, 0x0000
LilycoveCity_DepartmentStore_1F_WarpEvents: @ 0x0850A848
	@ WarpEvent 0
	semantic_warp_event 8, 7, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 9, 7, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 2
	semantic_warp_event 16, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_2F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_2F
	@ WarpEvent 3
	semantic_warp_event 2, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR
LilycoveCity_DepartmentStore_1F_BgEvents: @ 0x0850A868
	@ BgEvent 0
	semantic_bg_script_event 0, 8, 0x00, 0x01, EventScript_JP_0820A77A
LilycoveCity_DepartmentStore_1F_MapEvents: @ 0x0850A874
	@ struct MapEvents
	semantic_map_events 6, 4, 0, 1, LilycoveCity_DepartmentStore_1F_ObjectEvents, LilycoveCity_DepartmentStore_1F_WarpEvents, 0, LilycoveCity_DepartmentStore_1F_BgEvents
LilycoveCity_DepartmentStore_2F_ObjectEvents: @ 0x0850A888
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1B, 0x00, 8, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820A921, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 0, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A92A, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x31, 0x00, 13, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820A933, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x18, 0x00, 10, 6, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820A96E, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x18, 0x00, 7, 6, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820A93C, 0x0000
LilycoveCity_DepartmentStore_2F_WarpEvents: @ 0x0850A900
	@ WarpEvent 0
	semantic_warp_event 16, 1, 0x00, 0x02, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_1F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_1F
	@ WarpEvent 1
	semantic_warp_event 13, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_3F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_3F
	@ WarpEvent 2
	semantic_warp_event 2, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR
LilycoveCity_DepartmentStore_2F_MapEvents: @ 0x0850A918
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, LilycoveCity_DepartmentStore_2F_ObjectEvents, LilycoveCity_DepartmentStore_2F_WarpEvents, 0, 0
LilycoveCity_DepartmentStore_3F_ObjectEvents: @ 0x0850A92C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x33, 0x00, 0, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AA6E, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x19, 0x00, 7, 7, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AA77, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x22, 0x00, 13, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AA80, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x18, 0x00, 8, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820AA1A, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x18, 0x00, 10, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AA44, 0x0000
LilycoveCity_DepartmentStore_3F_WarpEvents: @ 0x0850A9A4
	@ WarpEvent 0
	semantic_warp_event 13, 1, 0x00, 0x01, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_2F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_2F
	@ WarpEvent 1
	semantic_warp_event 16, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_4F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_4F
	@ WarpEvent 2
	semantic_warp_event 2, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR
LilycoveCity_DepartmentStore_3F_MapEvents: @ 0x0850A9BC
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, LilycoveCity_DepartmentStore_3F_ObjectEvents, LilycoveCity_DepartmentStore_3F_WarpEvents, 0, 0
LilycoveCity_DepartmentStore_4F_ObjectEvents: @ 0x0850A9D0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x30, 0x00, 0, 2, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AB4F, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x14, 0x00, 6, 2, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AB58, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x23, 0x00, 13, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AB61, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x18, 0x00, 7, 6, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820AB6A, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x18, 0x00, 9, 6, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820AB90, 0x0000
LilycoveCity_DepartmentStore_4F_WarpEvents: @ 0x0850AA48
	@ WarpEvent 0
	semantic_warp_event 16, 1, 0x00, 0x01, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_3F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_3F
	@ WarpEvent 1
	semantic_warp_event 13, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_5F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_5F
	@ WarpEvent 2
	semantic_warp_event 2, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR
LilycoveCity_DepartmentStore_4F_MapEvents: @ 0x0850AA60
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, LilycoveCity_DepartmentStore_4F_ObjectEvents, LilycoveCity_DepartmentStore_4F_WarpEvents, 0, 0
LilycoveCity_DepartmentStore_5F_ObjectEvents: @ 0x0850AA74
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0C, 0x00, 1, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AD90, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 7, 7, 0x03, 0x11, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AD40, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x18, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820AC7A, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x18, 0x00, 9, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820ACB0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x18, 0x00, 15, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820ACDE, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x18, 0x00, 17, 6, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820AD0E, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x14, 0x00, 9, 5, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AD49, 0x0000
LilycoveCity_DepartmentStore_5F_WarpEvents: @ 0x0850AB1C
	@ WarpEvent 0
	semantic_warp_event 13, 1, 0x00, 0x01, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_4F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_4F
	@ WarpEvent 1
	semantic_warp_event 2, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR
	@ WarpEvent 2
	semantic_warp_event 16, 1, 0x00, 0x00, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_ROOFTOP, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_ROOFTOP
LilycoveCity_DepartmentStore_5F_MapEvents: @ 0x0850AB34
	@ struct MapEvents
	semantic_map_events 7, 3, 0, 0, LilycoveCity_DepartmentStore_5F_ObjectEvents, LilycoveCity_DepartmentStore_5F_WarpEvents, 0, 0
LilycoveCity_DepartmentStoreRooftop_ObjectEvents: @ 0x0850AB48
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x17, 0x00, 4, 4, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820AEB4, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x21, 0x00, 7, 5, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_0820AED8, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x54, 0x00, 6, 1, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0820AE7B, 0x03C2
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x18, 0x00, 15, 5, 0x03, 0x08, 1, 0, 0x0000, 0x0000, EventScript_JP_08276AA2, 0x0000
LilycoveCity_DepartmentStoreRooftop_WarpEvents: @ 0x0850ABA8
	@ WarpEvent 0
	semantic_warp_event 13, 3, 0x00, 0x02, MAP_NUM_LILYCOVE_CITY_DEPARTMENT_STORE_5F, MAP_GROUP_LILYCOVE_CITY_DEPARTMENT_STORE_5F
LilycoveCity_DepartmentStoreRooftop_BgEvents: @ 0x0850ABB0
	@ BgEvent 0
	semantic_bg_script_event 9, 1, 0x00, 0x00, EventScript_JP_0820AEE1
	@ BgEvent 1
	semantic_bg_script_event 10, 1, 0x00, 0x00, EventScript_JP_0820AEE1
LilycoveCity_DepartmentStoreRooftop_MapEvents: @ 0x0850ABC8
	@ struct MapEvents
	semantic_map_events 4, 1, 0, 2, LilycoveCity_DepartmentStoreRooftop_ObjectEvents, LilycoveCity_DepartmentStoreRooftop_WarpEvents, 0, LilycoveCity_DepartmentStoreRooftop_BgEvents
LilycoveCity_DepartmentStoreElevator_ObjectEvents: @ 0x0850ABDC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820B18D, 0x0000
LilycoveCity_DepartmentStoreElevator_WarpEvents: @ 0x0850ABF4
	@ WarpEvent 0
	semantic_warp_event 1, 5, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 1
	semantic_warp_event 2, 5, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
LilycoveCity_DepartmentStoreElevator_MapEvents: @ 0x0850AC04
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, LilycoveCity_DepartmentStoreElevator_ObjectEvents, LilycoveCity_DepartmentStoreElevator_WarpEvents, 0, 0
MossdeepCity_Gym_ObjectEvents: @ 0x0850AC18
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x84, 0x00, 23, 7, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820B401, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x25, 0x00, 1, 30, 0x03, 0x08, 0, 0, 0x0001, 0x0001, EventScript_JP_0820B666, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x25, 0x00, 5, 20, 0x03, 0x07, 0, 0, 0x0001, 0x0001, EventScript_JP_0820B694, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2F, 0x00, 4, 29, 0x03, 0x07, 0, 0, 0x0001, 0x0001, EventScript_JP_0820B6D9, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2F, 0x00, 4, 23, 0x00, 0x07, 0, 0, 0x0001, 0x0001, EventScript_JP_0820B6C2, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x25, 0x00, 6, 9, 0x03, 0x08, 0, 0, 0x0001, 0x0001, EventScript_JP_0820B67D, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2F, 0x00, 6, 3, 0x00, 0x08, 0, 0, 0x0001, 0x0001, EventScript_JP_0820B6AB, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x17, 0x00, 5, 33, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820B77A, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x83, 0x00, 24, 7, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820B401, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xE0, 0x00, 2, 30, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xE0, 0x00, 1, 29, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xE0, 0x00, 4, 30, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xE0, 0x00, 5, 29, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xE0, 0x00, 5, 21, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xE0, 0x00, 7, 9, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0xE0, 0x00, 10, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x30, 0x00, 9, 8, 0x03, 0x07, 1, 1, 0x0001, 0x0001, EventScript_JP_0820B707, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x28, 0x00, 7, 5, 0x03, 0x0A, 1, 1, 0x0001, 0x0001, EventScript_JP_0820B6F0, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0xE0, 0x00, 6, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0xE0, 0x00, 12, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0xE0, 0x00, 11, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0xE0, 0x00, 11, 34, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0xE0, 0x00, 12, 33, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0xE0, 0x00, 12, 34, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x30, 0x00, 22, 25, 0x03, 0x07, 1, 1, 0x0001, 0x0001, EventScript_JP_0820B735, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0xE0, 0x00, 23, 26, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x2F, 0x00, 25, 25, 0x00, 0x09, 1, 1, 0x0001, 0x0001, EventScript_JP_0820B71E, 0x0000
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x28, 0x00, 22, 23, 0x03, 0x08, 1, 1, 0x0001, 0x0001, EventScript_JP_0820B763, 0x0000
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0xE0, 0x00, 21, 23, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0xE0, 0x00, 21, 22, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 30
	semantic_object_event 0x1F, 0xE0, 0x00, 22, 22, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 31
	semantic_object_event 0x20, 0x25, 0x00, 25, 22, 0x03, 0x07, 1, 1, 0x0001, 0x0001, EventScript_JP_0820B74C, 0x0000
	@ ObjectEventTemplate 32
	semantic_object_event 0x21, 0xE0, 0x00, 24, 22, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 33
	semantic_object_event 0x22, 0xE0, 0x00, 24, 23, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 34
	semantic_object_event 0x23, 0xE0, 0x00, 6, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 35
	semantic_object_event 0x24, 0xE0, 0x00, 23, 25, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
MossdeepCity_Gym_WarpEvents: @ 0x0850AF78
	@ WarpEvent 0
	semantic_warp_event 6, 35, 0x03, 0x01, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 7, 35, 0x03, 0x01, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 2
	semantic_warp_event 3, 28, 0x00, 0x03, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 3
	semantic_warp_event 1, 23, 0x03, 0x02, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 4
	semantic_warp_event 7, 18, 0x00, 0x05, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 5
	semantic_warp_event 8, 12, 0x00, 0x04, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 6
	semantic_warp_event 9, 18, 0x00, 0x07, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 7
	semantic_warp_event 23, 20, 0x00, 0x06, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 8
	semantic_warp_event 1, 33, 0x03, 0x09, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 9
	semantic_warp_event 20, 24, 0x00, 0x08, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 10
	semantic_warp_event 11, 3, 0x00, 0x0B, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 11
	semantic_warp_event 11, 35, 0x03, 0x0A, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 12
	semantic_warp_event 13, 32, 0x00, 0x0D, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
	@ WarpEvent 13
	semantic_warp_event 21, 10, 0x00, 0x0C, MAP_NUM_MOSSDEEP_CITY_GYM, MAP_GROUP_MOSSDEEP_CITY_GYM
MossdeepCity_Gym_CoordEvents: @ 0x0850AFE8
	@ CoordEvent 0
	semantic_coord_event 2, 21, 0x03, 0x4001, 0x0000, EventScript_JP_0820B7D0
	@ CoordEvent 1
	semantic_coord_event 8, 10, 0x03, 0x4001, 0x0000, EventScript_JP_0820B7E6
	@ CoordEvent 2
	semantic_coord_event 6, 7, 0x03, 0x4001, 0x0000, EventScript_JP_0820B7E6
	@ CoordEvent 3
	semantic_coord_event 15, 34, 0x03, 0x4001, 0x0000, EventScript_JP_0820B7FC
	@ CoordEvent 4
	semantic_coord_event 23, 24, 0x03, 0x4001, 0x0000, EventScript_JP_0820B812
	@ CoordEvent 5
	semantic_coord_event 23, 21, 0x03, 0x4001, 0x0000, EventScript_JP_0820B812
	@ CoordEvent 6
	semantic_coord_event 8, 6, 0x03, 0x4001, 0x0000, EventScript_JP_0820B828
	@ CoordEvent 7
	semantic_coord_event 21, 6, 0x00, 0x4001, 0x0000, EventScript_JP_0820B65A
	@ CoordEvent 8
	semantic_coord_event 3, 30, 0x03, 0x4001, 0x0000, EventScript_JP_0820B7D0
MossdeepCity_Gym_BgEvents: @ 0x0850B078
	@ BgEvent 0
	semantic_bg_script_event 4, 34, 0x00, 0x01, EventScript_JP_0820B79C
	@ BgEvent 1
	semantic_bg_script_event 8, 34, 0x00, 0x01, EventScript_JP_0820B7AC
MossdeepCity_Gym_MapEvents: @ 0x0850B090
	@ struct MapEvents
	semantic_map_events 36, 14, 9, 2, MossdeepCity_Gym_ObjectEvents, MossdeepCity_Gym_WarpEvents, MossdeepCity_Gym_CoordEvents, MossdeepCity_Gym_BgEvents
MossdeepCity_House1_ObjectEvents: @ 0x0850B0A4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 3, 3, 0x03, 0x03, 1, 1, 0x0000, 0x0000, EventScript_JP_0820C333, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x14, 0x00, 7, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C363, 0x0000
MossdeepCity_House1_WarpEvents: @ 0x0850B0D4
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
MossdeepCity_House1_MapEvents: @ 0x0850B0E4
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, MossdeepCity_House1_ObjectEvents, MossdeepCity_House1_WarpEvents, 0, 0
MossdeepCity_House2_ObjectEvents: @ 0x0850B0F8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x41, 0x00, 6, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C3D3, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x06, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C3DC, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xD3, 0x00, 4, 5, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C3E5, 0x03A6
MossdeepCity_House2_WarpEvents: @ 0x0850B140
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x03, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x03, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
MossdeepCity_House2_MapEvents: @ 0x0850B150
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, MossdeepCity_House2_ObjectEvents, MossdeepCity_House2_WarpEvents, 0, 0
MossdeepCity_PokemonCenter_1F_ObjectEvents: @ 0x0850B164
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C4C1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x14, 0x00, 8, 4, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C4CF, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x08, 0x00, 3, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C4D8, 0x0000
MossdeepCity_PokemonCenter_1F_WarpEvents: @ 0x0850B1AC
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x02, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x02, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_MOSSDEEP_CITY_POKEMON_CENTER_2F, MAP_GROUP_MOSSDEEP_CITY_POKEMON_CENTER_2F
MossdeepCity_PokemonCenter_1F_MapEvents: @ 0x0850B1C4
	@ struct MapEvents
	semantic_map_events 3, 3, 0, 0, MossdeepCity_PokemonCenter_1F_ObjectEvents, MossdeepCity_PokemonCenter_1F_WarpEvents, 0, 0
MossdeepCity_PokemonCenter_2F_ObjectEvents: @ 0x0850B1D8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x22, 0x00, 11, 7, 0x03, 0x05, 1, 1, 0x0000, 0x0000, EventScript_JP_0820C571, 0x0000
MossdeepCity_PokemonCenter_2F_WarpEvents: @ 0x0850B250
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_MOSSDEEP_CITY_POKEMON_CENTER_1F, MAP_GROUP_MOSSDEEP_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
MossdeepCity_PokemonCenter_2F_MapEvents: @ 0x0850B268
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, MossdeepCity_PokemonCenter_2F_ObjectEvents, MossdeepCity_PokemonCenter_2F_WarpEvents, 0, 0
MossdeepCity_Mart_ObjectEvents: @ 0x0850B27C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C5B3, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x22, 0x00, 1, 5, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C5E2, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x09, 0x00, 8, 3, 0x03, 0x03, 0, 1, 0x0000, 0x0000, EventScript_JP_0820C5EB, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x31, 0x00, 5, 3, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820C5F4, 0x0000
MossdeepCity_Mart_WarpEvents: @ 0x0850B2DC
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x04, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x04, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
MossdeepCity_Mart_MapEvents: @ 0x0850B2EC
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, MossdeepCity_Mart_ObjectEvents, MossdeepCity_Mart_WarpEvents, 0, 0
MossdeepCity_House3_ObjectEvents: @ 0x0850B300
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x32, 0x00, 4, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C6FB, 0x0000
MossdeepCity_House3_WarpEvents: @ 0x0850B318
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x05, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x05, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
MossdeepCity_House3_MapEvents: @ 0x0850B328
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, MossdeepCity_House3_ObjectEvents, MossdeepCity_House3_WarpEvents, 0, 0
MossdeepCity_StevensHouse_ObjectEvents: @ 0x0850B33C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x86, 0x00, 9, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820C9A4, 0x03C7
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 4, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820C8D3, 0x03C8
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x05, 0x00, 6, 4, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, EventScript_JP_0820C9AD, 0x02D7
MossdeepCity_StevensHouse_WarpEvents: @ 0x0850B384
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x06, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x06, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
MossdeepCity_StevensHouse_BgEvents: @ 0x0850B394
	@ BgEvent 0
	semantic_bg_script_event 0, 1, 0x00, 0x00, EventScript_JP_0820C99B
	@ BgEvent 1
	semantic_bg_script_event 1, 1, 0x00, 0x00, EventScript_JP_0820C99B
	@ BgEvent 2
	semantic_bg_script_event 10, 4, 0x03, 0x00, EventScript_JP_0820C99B
	@ BgEvent 3
	semantic_bg_script_event 10, 6, 0x03, 0x00, EventScript_JP_0820C99B
MossdeepCity_StevensHouse_MapEvents: @ 0x0850B3C4
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 4, MossdeepCity_StevensHouse_ObjectEvents, MossdeepCity_StevensHouse_WarpEvents, 0, MossdeepCity_StevensHouse_BgEvents
MossdeepCity_House4_ObjectEvents: @ 0x0850B3D8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 3, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820CC5C, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x05, 0x00, 6, 6, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_0820CC7B, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xCB, 0x00, 2, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820CCA2, 0x0000
MossdeepCity_House4_WarpEvents: @ 0x0850B420
	@ WarpEvent 0
	semantic_warp_event 4, 7, 0x00, 0x07, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 3, 7, 0x00, 0x07, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
MossdeepCity_House4_MapEvents: @ 0x0850B430
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, MossdeepCity_House4_ObjectEvents, MossdeepCity_House4_WarpEvents, 0, 0
MossdeepCity_SpaceCenter_1F_ObjectEvents: @ 0x0850B444
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 7, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820CDF4, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2E, 0x00, 2, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820CE7F, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x31, 0x00, 6, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820CEAA, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x1D, 0x00, 10, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820CF84, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x1A, 0x00, 14, 7, 0x03, 0x03, 1, 1, 0x0000, 0x0000, EventScript_JP_0820CF49, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x78, 0x00, 12, 9, 0x03, 0x09, 1, 1, 0x0001, 0x0002, EventScript_JP_0820CFF6, 0x02F4
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x77, 0x00, 11, 6, 0x03, 0x09, 1, 1, 0x0001, 0x0002, EventScript_JP_0820D00D, 0x02F4
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x77, 0x00, 10, 2, 0x03, 0x08, 1, 1, 0x0001, 0x0002, EventScript_JP_0820D024, 0x02F4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x77, 0x00, 13, 2, 0x03, 0x08, 1, 1, 0x0001, 0x0000, EventScript_JP_0820D03B, 0x02F4
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x05, 0x00, 2, 5, 0x00, 0x4C, 1, 1, 0x0000, 0x0000, EventScript_JP_0820CFEB, 0x02E1
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x86, 0x00, 1, 4, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0820CFD5, 0x02F1
MossdeepCity_SpaceCenter_1F_WarpEvents: @ 0x0850B54C
	@ WarpEvent 0
	semantic_warp_event 7, 9, 0x00, 0x08, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 8, 9, 0x00, 0x08, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_SPACE_CENTER_2F, MAP_GROUP_MOSSDEEP_CITY_SPACE_CENTER_2F
MossdeepCity_SpaceCenter_1F_MapEvents: @ 0x0850B564
	@ struct MapEvents
	semantic_map_events 11, 3, 0, 0, MossdeepCity_SpaceCenter_1F_ObjectEvents, MossdeepCity_SpaceCenter_1F_WarpEvents, 0, 0
MossdeepCity_SpaceCenter_2F_ObjectEvents: @ 0x0850B578
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0F, 0x00, 6, 2, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820D82D, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 11, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0820D7F2, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2E, 0x00, 5, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820D7B7, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x86, 0x00, 1, 8, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0820D8A4, 0x035F
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x77, 0x00, 12, 2, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_0820D868, 0x035E
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x77, 0x00, 13, 3, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_0820D87A, 0x035E
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x77, 0x00, 14, 2, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_0820D871, 0x035E
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x77, 0x00, 0, 8, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_0820D883, 0x035E
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xC4, 0x00, 1, 9, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_0820D899, 0x035E
MossdeepCity_SpaceCenter_2F_WarpEvents: @ 0x0850B650
	@ WarpEvent 0
	semantic_warp_event 13, 1, 0x00, 0x02, MAP_NUM_MOSSDEEP_CITY_SPACE_CENTER_1F, MAP_GROUP_MOSSDEEP_CITY_SPACE_CENTER_1F
MossdeepCity_SpaceCenter_2F_MapEvents: @ 0x0850B658
	@ struct MapEvents
	semantic_map_events 9, 1, 0, 0, MossdeepCity_SpaceCenter_2F_ObjectEvents, MossdeepCity_SpaceCenter_2F_WarpEvents, 0, 0
MossdeepCity_GameCorner_1F_ObjectEvents: @ 0x0850B66C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 6, 2, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820E04B, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x41, 0x00, 4, 2, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820E042, 0x0000
MossdeepCity_GameCorner_1F_WarpEvents: @ 0x0850B69C
	@ WarpEvent 0
	semantic_warp_event 5, 9, 0x00, 0x09, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 9, 0x00, 0x09, MAP_NUM_MOSSDEEP_CITY, MAP_GROUP_MOSSDEEP_CITY
	@ WarpEvent 2
	semantic_warp_event 2, 0, 0x00, 0x00, MAP_NUM_MOSSDEEP_CITY_GAME_CORNER_B1F, MAP_GROUP_MOSSDEEP_CITY_GAME_CORNER_B1F
MossdeepCity_GameCorner_1F_BgEvents: @ 0x0850B6B4
	@ BgEvent 0
	semantic_bg_script_event 3, 0, 0x00, 0x00, EventScript_JP_0820E054
	@ BgEvent 1
	semantic_bg_script_event 0, 1, 0x00, 0x00, MossdeepCity_GameCorner_1F_EventScript_DodrioBerryPickingRecords
	@ BgEvent 2
	semantic_bg_script_event 1, 1, 0x00, 0x00, MossdeepCity_GameCorner_1F_EventScript_PokemonJumpRecords
MossdeepCity_GameCorner_1F_MapEvents: @ 0x0850B6D8
	@ struct MapEvents
	semantic_map_events 2, 3, 0, 3, MossdeepCity_GameCorner_1F_ObjectEvents, MossdeepCity_GameCorner_1F_WarpEvents, 0, MossdeepCity_GameCorner_1F_BgEvents
MossdeepCity_GameCorner_B1F_ObjectEvents: @ 0x0850B6EC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF0, 0x00, 6, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x0000
MossdeepCity_GameCorner_B1F_WarpEvents: @ 0x0850B704
	@ WarpEvent 0
	semantic_warp_event 3, 1, 0x00, 0x02, MAP_NUM_MOSSDEEP_CITY_GAME_CORNER_1F, MAP_GROUP_MOSSDEEP_CITY_GAME_CORNER_1F
MossdeepCity_GameCorner_B1F_MapEvents: @ 0x0850B70C
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, MossdeepCity_GameCorner_B1F_ObjectEvents, MossdeepCity_GameCorner_B1F_WarpEvents, 0, 0
SootopolisCity_Gym_1F_ObjectEvents: @ 0x0850B720
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xDA, 0x00, 8, 2, 0x00, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820E31C, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x17, 0x00, 7, 24, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820E418, 0x0000
SootopolisCity_Gym_1F_WarpEvents: @ 0x0850B750
	@ WarpEvent 0
	semantic_warp_event 8, 25, 0x00, 0x02, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 9, 25, 0x00, 0x02, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 2
	semantic_warp_event 11, 22, 0x03, 0x00, MAP_NUM_SOOTOPOLIS_CITY_GYM_B1F, MAP_GROUP_SOOTOPOLIS_CITY_GYM_B1F
SootopolisCity_Gym_1F_BgEvents: @ 0x0850B768
	@ BgEvent 0
	semantic_bg_script_event 6, 24, 0x00, 0x00, EventScript_JP_0820E437
	@ BgEvent 1
	semantic_bg_script_event 10, 24, 0x00, 0x01, EventScript_JP_0820E447
SootopolisCity_Gym_1F_MapEvents: @ 0x0850B780
	@ struct MapEvents
	semantic_map_events 2, 3, 0, 2, SootopolisCity_Gym_1F_ObjectEvents, SootopolisCity_Gym_1F_WarpEvents, 0, SootopolisCity_Gym_1F_BgEvents
SootopolisCity_Gym_B1F_ObjectEvents: @ 0x0850B794
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2F, 0x00, 7, 17, 0x03, 0x0A, 0, 0, 0x0001, 0x0001, EventScript_JP_0820EAC7, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2D, 0x00, 9, 19, 0x03, 0x09, 0, 0, 0x0001, 0x0001, EventScript_JP_0820EB0C, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x14, 0x00, 12, 7, 0x03, 0x09, 0, 0, 0x0001, 0x0001, EventScript_JP_0820EAF5, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2D, 0x00, 11, 9, 0x00, 0x07, 0, 0, 0x0001, 0x0005, EventScript_JP_0820EB23, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2D, 0x00, 5, 6, 0x03, 0x08, 0, 0, 0x0001, 0x0004, EventScript_JP_0820EB51, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x12, 0x00, 7, 8, 0x03, 0x0A, 0, 0, 0x0001, 0x0002, EventScript_JP_0820EB68, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2F, 0x00, 4, 8, 0x03, 0x0A, 0, 0, 0x0001, 0x0002, EventScript_JP_0820EADE, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x2D, 0x00, 9, 7, 0x03, 0x08, 0, 0, 0x0001, 0x0003, EventScript_JP_0820EB3A, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x14, 0x00, 6, 13, 0x03, 0x0A, 1, 1, 0x0001, 0x0003, EventScript_JP_0820EB96, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x12, 0x00, 10, 13, 0x03, 0x09, 1, 1, 0x0001, 0x0003, EventScript_JP_0820EB7F, 0x0000
SootopolisCity_Gym_B1F_WarpEvents: @ 0x0850B884
	@ WarpEvent 0
	semantic_warp_event 11, 22, 0x03, 0x02, MAP_NUM_SOOTOPOLIS_CITY_GYM_1F, MAP_GROUP_SOOTOPOLIS_CITY_GYM_1F
SootopolisCity_Gym_B1F_MapEvents: @ 0x0850B88C
	@ struct MapEvents
	semantic_map_events 10, 1, 0, 0, SootopolisCity_Gym_B1F_ObjectEvents, SootopolisCity_Gym_B1F_WarpEvents, 0, 0
SootopolisCity_PokemonCenter_1F_ObjectEvents: @ 0x0850B8A0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820EFE4, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 12, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820EFF2, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x22, 0x00, 4, 7, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_0820F01C, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x10, 0x00, 2, 3, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08276B72, 0x0000
SootopolisCity_PokemonCenter_1F_WarpEvents: @ 0x0850B900
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x00, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x00, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_SOOTOPOLIS_CITY_POKEMON_CENTER_2F, MAP_GROUP_SOOTOPOLIS_CITY_POKEMON_CENTER_2F
SootopolisCity_PokemonCenter_1F_MapEvents: @ 0x0850B918
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, SootopolisCity_PokemonCenter_1F_ObjectEvents, SootopolisCity_PokemonCenter_1F_WarpEvents, 0, 0
SootopolisCity_PokemonCenter_2F_ObjectEvents: @ 0x0850B92C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
SootopolisCity_PokemonCenter_2F_WarpEvents: @ 0x0850B98C
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_SOOTOPOLIS_CITY_POKEMON_CENTER_1F, MAP_GROUP_SOOTOPOLIS_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
SootopolisCity_PokemonCenter_2F_MapEvents: @ 0x0850B9A4
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, SootopolisCity_PokemonCenter_2F_ObjectEvents, SootopolisCity_PokemonCenter_2F_WarpEvents, 0, 0
SootopolisCity_Mart_ObjectEvents: @ 0x0850B9B8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F1B8, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x11, 0x00, 5, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F1E6, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x30, 0x00, 9, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F210, 0x0000
SootopolisCity_Mart_WarpEvents: @ 0x0850BA00
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x01, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x01, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_Mart_MapEvents: @ 0x0850BA10
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, SootopolisCity_Mart_ObjectEvents, SootopolisCity_Mart_WarpEvents, 0, 0
SootopolisCity_House1_ObjectEvents: @ 0x0850BA24
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 2, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F301, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xCC, 0x00, 2, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F342, 0x0000
SootopolisCity_House1_WarpEvents: @ 0x0850BA54
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x04, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 6, 0x00, 0x04, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_House1_MapEvents: @ 0x0850BA64
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, SootopolisCity_House1_ObjectEvents, SootopolisCity_House1_WarpEvents, 0, 0
SootopolisCity_House2_ObjectEvents: @ 0x0850BA78
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x16, 0x00, 3, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F3C7, 0x0000
SootopolisCity_House2_WarpEvents: @ 0x0850BA90
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x05, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 6, 0x00, 0x05, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_House2_MapEvents: @ 0x0850BAA0
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, SootopolisCity_House2_ObjectEvents, SootopolisCity_House2_WarpEvents, 0, 0
SootopolisCity_House3_ObjectEvents: @ 0x0850BAB4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1A, 0x00, 2, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F47A, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0A, 0x00, 6, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820F4A3, 0x0000
SootopolisCity_House3_WarpEvents: @ 0x0850BAE4
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x06, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 6, 0x00, 0x06, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_House3_MapEvents: @ 0x0850BAF4
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, SootopolisCity_House3_ObjectEvents, SootopolisCity_House3_WarpEvents, 0, 0
SootopolisCity_House4_ObjectEvents: @ 0x0850BB08
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 2, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F594, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1A, 0x00, 5, 2, 0x03, 0x07, 1, 2, 0x0000, 0x0000, EventScript_JP_0820F59D, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xD2, 0x00, 2, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0820F5A6, 0x0000
SootopolisCity_House4_WarpEvents: @ 0x0850BB50
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x07, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 6, 0x00, 0x07, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_House4_MapEvents: @ 0x0850BB60
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, SootopolisCity_House4_ObjectEvents, SootopolisCity_House4_WarpEvents, 0, 0
SootopolisCity_House5_ObjectEvents: @ 0x0850BB74
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x27, 0x00, 3, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F658, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 6, 3, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F661, 0x0000
SootopolisCity_House5_WarpEvents: @ 0x0850BBA4
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x08, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 6, 0x00, 0x08, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_House5_MapEvents: @ 0x0850BBB4
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, SootopolisCity_House5_ObjectEvents, SootopolisCity_House5_WarpEvents, 0, 0
SootopolisCity_House6_ObjectEvents: @ 0x0850BBC8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 4, 3, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820F6D1, 0x0000
SootopolisCity_House6_WarpEvents: @ 0x0850BBE0
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x09, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 6, 0x00, 0x09, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_House6_MapEvents: @ 0x0850BBF0
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, SootopolisCity_House6_ObjectEvents, SootopolisCity_House6_WarpEvents, 0, 0
SootopolisCity_House7_ObjectEvents: @ 0x0850BC04
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1D, 0x00, 5, 3, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F7BB, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 1, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0820F7C4, 0x0000
SootopolisCity_House7_WarpEvents: @ 0x0850BC34
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x0A, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 6, 0x00, 0x0A, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_House7_MapEvents: @ 0x0850BC44
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, SootopolisCity_House7_ObjectEvents, SootopolisCity_House7_WarpEvents, 0, 0
SootopolisCity_LotadAndSeedotHouse_ObjectEvents: @ 0x0850BC58
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x32, 0x00, 2, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F8F3, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x37, 0x00, 5, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_0820F862, 0x0000
SootopolisCity_LotadAndSeedotHouse_WarpEvents: @ 0x0850BC88
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x0B, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 6, 0x00, 0x0B, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
SootopolisCity_LotadAndSeedotHouse_BgEvents: @ 0x0850BC98
	@ BgEvent 0
	semantic_bg_script_event 5, 1, 0x00, 0x00, EventScript_JP_0820F984
	@ BgEvent 1
	semantic_bg_script_event 2, 1, 0x00, 0x00, EventScript_JP_0820F992
SootopolisCity_LotadAndSeedotHouse_MapEvents: @ 0x0850BCB0
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 2, SootopolisCity_LotadAndSeedotHouse_ObjectEvents, SootopolisCity_LotadAndSeedotHouse_WarpEvents, 0, SootopolisCity_LotadAndSeedotHouse_BgEvents
SootopolisCity_MysteryEventsHouse_1F_ObjectEvents: @ 0x0850BCC4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1D, 0x00, 6, 4, 0x00, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_0820FE31, 0x0000
SootopolisCity_MysteryEventsHouse_1F_WarpEvents: @ 0x0850BCDC
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x0C, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x0C, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 2
	semantic_warp_event 3, 1, 0x03, 0x00, MAP_NUM_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F, MAP_GROUP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F
SootopolisCity_MysteryEventsHouse_1F_MapEvents: @ 0x0850BCF4
	@ struct MapEvents
	semantic_map_events 1, 3, 0, 0, SootopolisCity_MysteryEventsHouse_1F_ObjectEvents, SootopolisCity_MysteryEventsHouse_1F_WarpEvents, 0, 0
SootopolisCity_MysteryEventsHouse_B1F_ObjectEvents: @ 0x0850BD08
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF0, 0x00, 6, 5, 0x00, 0x09, 1, 1, 0x0000, 0x0000, 0, 0x0000
SootopolisCity_MysteryEventsHouse_B1F_WarpEvents: @ 0x0850BD20
	@ WarpEvent 0
	semantic_warp_event 3, 1, 0x00, 0x02, MAP_NUM_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, MAP_GROUP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F
SootopolisCity_MysteryEventsHouse_B1F_MapEvents: @ 0x0850BD28
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, SootopolisCity_MysteryEventsHouse_B1F_ObjectEvents, SootopolisCity_MysteryEventsHouse_B1F_WarpEvents, 0, 0
EverGrandeCity_SidneysRoom_ObjectEvents: @ 0x0850BD3C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x79, 0x00, 6, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08210249, 0x0000
EverGrandeCity_SidneysRoom_WarpEvents: @ 0x0850BD54
	@ WarpEvent 0
	semantic_warp_event 6, 13, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_HALL5, MAP_GROUP_EVER_GRANDE_CITY_HALL5
	@ WarpEvent 1
	semantic_warp_event 6, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_HALL1, MAP_GROUP_EVER_GRANDE_CITY_HALL1
EverGrandeCity_SidneysRoom_MapEvents: @ 0x0850BD64
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, EverGrandeCity_SidneysRoom_ObjectEvents, EverGrandeCity_SidneysRoom_WarpEvents, 0, 0
EverGrandeCity_PhoebesRoom_ObjectEvents: @ 0x0850BD78
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x7A, 0x00, 6, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082103C8, 0x0000
EverGrandeCity_PhoebesRoom_WarpEvents: @ 0x0850BD90
	@ WarpEvent 0
	semantic_warp_event 6, 13, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_HALL1, MAP_GROUP_EVER_GRANDE_CITY_HALL1
	@ WarpEvent 1
	semantic_warp_event 6, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_HALL2, MAP_GROUP_EVER_GRANDE_CITY_HALL2
EverGrandeCity_PhoebesRoom_MapEvents: @ 0x0850BDA0
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, EverGrandeCity_PhoebesRoom_ObjectEvents, EverGrandeCity_PhoebesRoom_WarpEvents, 0, 0
EverGrandeCity_GlaciasRoom_ObjectEvents: @ 0x0850BDB4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x7B, 0x00, 6, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0821057A, 0x0000
EverGrandeCity_GlaciasRoom_WarpEvents: @ 0x0850BDCC
	@ WarpEvent 0
	semantic_warp_event 6, 13, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_HALL2, MAP_GROUP_EVER_GRANDE_CITY_HALL2
	@ WarpEvent 1
	semantic_warp_event 6, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_HALL3, MAP_GROUP_EVER_GRANDE_CITY_HALL3
EverGrandeCity_GlaciasRoom_MapEvents: @ 0x0850BDDC
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, EverGrandeCity_GlaciasRoom_ObjectEvents, EverGrandeCity_GlaciasRoom_WarpEvents, 0, 0
EverGrandeCity_DrakesRoom_ObjectEvents: @ 0x0850BDF0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x7C, 0x00, 6, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08210715, 0x0000
EverGrandeCity_DrakesRoom_WarpEvents: @ 0x0850BE08
	@ WarpEvent 0
	semantic_warp_event 6, 13, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_HALL3, MAP_GROUP_EVER_GRANDE_CITY_HALL3
	@ WarpEvent 1
	semantic_warp_event 6, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_HALL4, MAP_GROUP_EVER_GRANDE_CITY_HALL4
EverGrandeCity_DrakesRoom_MapEvents: @ 0x0850BE18
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, EverGrandeCity_DrakesRoom_ObjectEvents, EverGrandeCity_DrakesRoom_WarpEvents, 0, 0
EverGrandeCity_ChampionsRoom_ObjectEvents: @ 0x0850BE2C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x85, 0x00, 6, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 6, 12, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0398
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x40, 0x00, 6, 12, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0399
EverGrandeCity_ChampionsRoom_WarpEvents: @ 0x0850BE74
	@ WarpEvent 0
	semantic_warp_event 6, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_HALL4, MAP_GROUP_EVER_GRANDE_CITY_HALL4
	@ WarpEvent 1
	semantic_warp_event 6, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_HALL_OF_FAME, MAP_GROUP_EVER_GRANDE_CITY_HALL_OF_FAME
EverGrandeCity_ChampionsRoom_MapEvents: @ 0x0850BE84
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, EverGrandeCity_ChampionsRoom_ObjectEvents, EverGrandeCity_ChampionsRoom_WarpEvents, 0, 0
EverGrandeCity_Hall1_WarpEvents: @ 0x0850BE98
	@ WarpEvent 0
	semantic_warp_event 5, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_SIDNEYS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_SIDNEYS_ROOM
	@ WarpEvent 1
	semantic_warp_event 5, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_PHOEBES_ROOM, MAP_GROUP_EVER_GRANDE_CITY_PHOEBES_ROOM
	@ WarpEvent 2
	semantic_warp_event 4, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_SIDNEYS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_SIDNEYS_ROOM
	@ WarpEvent 3
	semantic_warp_event 6, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_SIDNEYS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_SIDNEYS_ROOM
EverGrandeCity_Hall1_MapEvents: @ 0x0850BEB8
	@ struct MapEvents
	semantic_map_events 0, 4, 0, 0, 0, EverGrandeCity_Hall1_WarpEvents, 0, 0
EverGrandeCity_Hall2_WarpEvents: @ 0x0850BECC
	@ WarpEvent 0
	semantic_warp_event 5, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_PHOEBES_ROOM, MAP_GROUP_EVER_GRANDE_CITY_PHOEBES_ROOM
	@ WarpEvent 1
	semantic_warp_event 5, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_GLACIAS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_GLACIAS_ROOM
	@ WarpEvent 2
	semantic_warp_event 4, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_PHOEBES_ROOM, MAP_GROUP_EVER_GRANDE_CITY_PHOEBES_ROOM
	@ WarpEvent 3
	semantic_warp_event 6, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_PHOEBES_ROOM, MAP_GROUP_EVER_GRANDE_CITY_PHOEBES_ROOM
EverGrandeCity_Hall2_MapEvents: @ 0x0850BEEC
	@ struct MapEvents
	semantic_map_events 0, 4, 0, 0, 0, EverGrandeCity_Hall2_WarpEvents, 0, 0
EverGrandeCity_Hall3_WarpEvents: @ 0x0850BF00
	@ WarpEvent 0
	semantic_warp_event 5, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_GLACIAS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_GLACIAS_ROOM
	@ WarpEvent 1
	semantic_warp_event 5, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_DRAKES_ROOM, MAP_GROUP_EVER_GRANDE_CITY_DRAKES_ROOM
	@ WarpEvent 2
	semantic_warp_event 4, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_GLACIAS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_GLACIAS_ROOM
	@ WarpEvent 3
	semantic_warp_event 6, 12, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_GLACIAS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_GLACIAS_ROOM
EverGrandeCity_Hall3_MapEvents: @ 0x0850BF20
	@ struct MapEvents
	semantic_map_events 0, 4, 0, 0, 0, EverGrandeCity_Hall3_WarpEvents, 0, 0
EverGrandeCity_Hall4_WarpEvents: @ 0x0850BF34
	@ WarpEvent 0
	semantic_warp_event 5, 33, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_DRAKES_ROOM, MAP_GROUP_EVER_GRANDE_CITY_DRAKES_ROOM
	@ WarpEvent 1
	semantic_warp_event 5, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_CHAMPIONS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_CHAMPIONS_ROOM
EverGrandeCity_Hall4_MapEvents: @ 0x0850BF44
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, EverGrandeCity_Hall4_WarpEvents, 0, 0
EverGrandeCity_Hall5_WarpEvents: @ 0x0850BF58
	@ WarpEvent 0
	semantic_warp_event 5, 12, 0x03, 0x02, MAP_NUM_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F
	@ WarpEvent 1
	semantic_warp_event 5, 2, 0x00, 0x00, MAP_NUM_EVER_GRANDE_CITY_SIDNEYS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_SIDNEYS_ROOM
	@ WarpEvent 2
	semantic_warp_event 4, 12, 0x03, 0x02, MAP_NUM_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F
	@ WarpEvent 3
	semantic_warp_event 6, 12, 0x03, 0x02, MAP_NUM_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F
EverGrandeCity_Hall5_MapEvents: @ 0x0850BF78
	@ struct MapEvents
	semantic_map_events 0, 4, 0, 0, 0, EverGrandeCity_Hall5_WarpEvents, 0, 0
EverGrandeCity_PokemonLeague_1F_ObjectEvents: @ 0x0850BF8C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 3, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082110FE, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x53, 0x00, 16, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0821110C, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 8, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08211136, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x21, 0x00, 11, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08211136, 0x0000
EverGrandeCity_PokemonLeague_1F_WarpEvents: @ 0x0850BFEC
	@ WarpEvent 0
	semantic_warp_event 9, 11, 0x03, 0x00, MAP_NUM_EVER_GRANDE_CITY, MAP_GROUP_EVER_GRANDE_CITY
	@ WarpEvent 1
	semantic_warp_event 10, 11, 0x03, 0x00, MAP_NUM_EVER_GRANDE_CITY, MAP_GROUP_EVER_GRANDE_CITY
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_EVER_GRANDE_CITY_HALL5, MAP_GROUP_EVER_GRANDE_CITY_HALL5
	@ WarpEvent 3
	semantic_warp_event 10, 1, 0x03, 0x00, MAP_NUM_EVER_GRANDE_CITY_HALL5, MAP_GROUP_EVER_GRANDE_CITY_HALL5
	@ WarpEvent 4
	semantic_warp_event 1, 7, 0x04, 0x00, MAP_NUM_EVER_GRANDE_CITY_POKEMON_LEAGUE_2F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_LEAGUE_2F
EverGrandeCity_PokemonLeague_1F_MapEvents: @ 0x0850C014
	@ struct MapEvents
	semantic_map_events 4, 5, 0, 0, EverGrandeCity_PokemonLeague_1F_ObjectEvents, EverGrandeCity_PokemonLeague_1F_WarpEvents, 0, 0
EverGrandeCity_HallOfFame_ObjectEvents: @ 0x0850C028
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x85, 0x00, 6, 16, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
EverGrandeCity_HallOfFame_WarpEvents: @ 0x0850C040
	@ WarpEvent 0
	semantic_warp_event 7, 11, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY_CHAMPIONS_ROOM, MAP_GROUP_EVER_GRANDE_CITY_CHAMPIONS_ROOM
EverGrandeCity_HallOfFame_MapEvents: @ 0x0850C048
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, EverGrandeCity_HallOfFame_ObjectEvents, EverGrandeCity_HallOfFame_WarpEvents, 0, 0
EverGrandeCity_PokemonCenter_1F_ObjectEvents: @ 0x0850C05C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08211421, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x22, 0x00, 5, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_0821142F, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x15, 0x00, 10, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08211438, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDB, 0x00, 9, 4, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08211441, 0x0319
EverGrandeCity_PokemonCenter_1F_WarpEvents: @ 0x0850C0BC
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY, MAP_GROUP_EVER_GRANDE_CITY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x01, MAP_NUM_EVER_GRANDE_CITY, MAP_GROUP_EVER_GRANDE_CITY
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_EVER_GRANDE_CITY_POKEMON_CENTER_2F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_CENTER_2F
EverGrandeCity_PokemonCenter_1F_MapEvents: @ 0x0850C0D4
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, EverGrandeCity_PokemonCenter_1F_ObjectEvents, EverGrandeCity_PokemonCenter_1F_WarpEvents, 0, 0
EverGrandeCity_PokemonCenter_2F_ObjectEvents: @ 0x0850C0E8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
EverGrandeCity_PokemonCenter_2F_WarpEvents: @ 0x0850C148
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_EVER_GRANDE_CITY_POKEMON_CENTER_1F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
EverGrandeCity_PokemonCenter_2F_MapEvents: @ 0x0850C160
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, EverGrandeCity_PokemonCenter_2F_ObjectEvents, EverGrandeCity_PokemonCenter_2F_WarpEvents, 0, 0
EverGrandeCity_PokemonLeague_2F_ObjectEvents: @ 0x0850C174
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
EverGrandeCity_PokemonLeague_2F_WarpEvents: @ 0x0850C1D4
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x04, MAP_NUM_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, MAP_GROUP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
EverGrandeCity_PokemonLeague_2F_MapEvents: @ 0x0850C1EC
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, EverGrandeCity_PokemonLeague_2F_ObjectEvents, EverGrandeCity_PokemonLeague_2F_WarpEvents, 0, 0
Route104_MrBrineysHouse_ObjectEvents: @ 0x0850C200
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 5, 3, 0x03, 0x32, 3, 3, 0x0000, 0x0000, EventScript_JP_08211629, 0x02E3
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xD3, 0x00, 6, 3, 0x03, 0x08, 3, 3, 0x0000, 0x0000, EventScript_JP_0821171F, 0x0371
Route104_MrBrineysHouse_WarpEvents: @ 0x0850C230
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x00, 0x00, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x00, 0x00, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
Route104_MrBrineysHouse_MapEvents: @ 0x0850C240
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, Route104_MrBrineysHouse_ObjectEvents, Route104_MrBrineysHouse_WarpEvents, 0, 0
Route104_PrettyPetalFlowerShop_ObjectEvents: @ 0x0850C254
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 0, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_082119DB, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 7, 3, 0x03, 0x05, 1, 0, 0x0000, 0x0000, EventScript_JP_08211A74, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x08, 0x00, 11, 6, 0x04, 0x02, 2, 2, 0x0000, 0x0000, EventScript_JP_08211AAA, 0x0000
Route104_PrettyPetalFlowerShop_WarpEvents: @ 0x0850C29C
	@ WarpEvent 0
	semantic_warp_event 2, 8, 0x00, 0x01, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
	@ WarpEvent 1
	semantic_warp_event 3, 8, 0x00, 0x01, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
Route104_PrettyPetalFlowerShop_MapEvents: @ 0x0850C2AC
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, Route104_PrettyPetalFlowerShop_ObjectEvents, Route104_PrettyPetalFlowerShop_WarpEvents, 0, 0
Route111_WinstrateFamilysHouse_ObjectEvents: @ 0x0850C2C0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2F, 0x00, 7, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08211B50, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x13, 0x00, 4, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08211AF5, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x12, 0x00, 7, 4, 0x03, 0x09, 1, 0, 0x0000, 0x0000, EventScript_JP_08211B0A, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x16, 0x00, 4, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08211B65, 0x0000
Route111_WinstrateFamilysHouse_WarpEvents: @ 0x0850C320
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x00, MAP_NUM_ROUTE111, MAP_GROUP_ROUTE111
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x00, MAP_NUM_ROUTE111, MAP_GROUP_ROUTE111
Route111_WinstrateFamilysHouse_MapEvents: @ 0x0850C330
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, Route111_WinstrateFamilysHouse_ObjectEvents, Route111_WinstrateFamilysHouse_WarpEvents, 0, 0
Route111_OldLadysRestStop_ObjectEvents: @ 0x0850C344
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x16, 0x00, 6, 3, 0x03, 0x09, 0, 0, 0x0000, 0x0000, EventScript_JP_08211DF7, 0x0000
Route111_OldLadysRestStop_WarpEvents: @ 0x0850C35C
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x02, MAP_NUM_ROUTE111, MAP_GROUP_ROUTE111
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x02, MAP_NUM_ROUTE111, MAP_GROUP_ROUTE111
Route111_OldLadysRestStop_MapEvents: @ 0x0850C36C
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, Route111_OldLadysRestStop_ObjectEvents, Route111_OldLadysRestStop_WarpEvents, 0, 0
Route112_CableCarStation_ObjectEvents: @ 0x0850C380
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2D, 0x00, 6, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route112_CableCarStation_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x72, 0x00, 6, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x0000
Route112_CableCarStation_WarpEvents: @ 0x0850C3B0
	@ WarpEvent 0
	semantic_warp_event 6, 11, 0x00, 0x00, MAP_NUM_ROUTE112, MAP_GROUP_ROUTE112
	@ WarpEvent 1
	semantic_warp_event 7, 11, 0x00, 0x01, MAP_NUM_ROUTE112, MAP_GROUP_ROUTE112
Route112_CableCarStation_MapEvents: @ 0x0850C3C0
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, Route112_CableCarStation_ObjectEvents, Route112_CableCarStation_WarpEvents, 0, 0
MtChimney_CableCarStation_ObjectEvents: @ 0x0850C3D4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2D, 0x00, 6, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, MtChimney_CableCarStation_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x72, 0x00, 6, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x0000
MtChimney_CableCarStation_WarpEvents: @ 0x0850C404
	@ WarpEvent 0
	semantic_warp_event 6, 11, 0x00, 0x00, MAP_NUM_MT_CHIMNEY, MAP_GROUP_MT_CHIMNEY
	@ WarpEvent 1
	semantic_warp_event 7, 11, 0x00, 0x01, MAP_NUM_MT_CHIMNEY, MAP_GROUP_MT_CHIMNEY
MtChimney_CableCarStation_MapEvents: @ 0x0850C414
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, MtChimney_CableCarStation_ObjectEvents, MtChimney_CableCarStation_WarpEvents, 0, 0
Route114_FossilManiacsHouse_ObjectEvents: @ 0x0850C428
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x05, 0x00, 3, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother, 0x0000
Route114_FossilManiacsHouse_WarpEvents: @ 0x0850C440
	@ WarpEvent 0
	semantic_warp_event 4, 7, 0x00, 0x01, MAP_NUM_ROUTE114, MAP_GROUP_ROUTE114
	@ WarpEvent 1
	semantic_warp_event 5, 7, 0x00, 0x01, MAP_NUM_ROUTE114, MAP_GROUP_ROUTE114
	@ WarpEvent 2
	semantic_warp_event 4, 1, 0x00, 0x00, MAP_NUM_ROUTE114_FOSSIL_MANIACS_TUNNEL, MAP_GROUP_ROUTE114_FOSSIL_MANIACS_TUNNEL
Route114_FossilManiacsHouse_BgEvents: @ 0x0850C458
	@ BgEvent 0
	semantic_bg_script_event 5, 3, 0x00, 0x01, Route114_FossilManiacsHouse_EventScript_RockDisplay
	@ BgEvent 1
	semantic_bg_script_event 6, 3, 0x00, 0x01, Route114_FossilManiacsHouse_EventScript_RockDisplay
	@ BgEvent 2
	semantic_bg_script_event 7, 2, 0x00, 0x01, Route114_FossilManiacsHouse_EventScript_Bookshelf
	@ BgEvent 3
	semantic_bg_script_event 8, 2, 0x00, 0x01, Route114_FossilManiacsHouse_EventScript_Bookshelf
Route114_FossilManiacsHouse_MapEvents: @ 0x0850C488
	@ struct MapEvents
	semantic_map_events 1, 3, 0, 4, Route114_FossilManiacsHouse_ObjectEvents, Route114_FossilManiacsHouse_WarpEvents, 0, Route114_FossilManiacsHouse_BgEvents
Route114_FossilManiacsTunnel_ObjectEvents: @ 0x0850C49C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x27, 0x00, 5, 3, 0x03, 0x07, 1, 1, 0x0000, 0x0000, Route114_FossilManiacsTunnel_EventScript_FossilManiac, 0x0000
Route114_FossilManiacsTunnel_WarpEvents: @ 0x0850C4B4
	@ WarpEvent 0
	semantic_warp_event 6, 25, 0x03, 0x02, MAP_NUM_ROUTE114_FOSSIL_MANIACS_HOUSE, MAP_GROUP_ROUTE114_FOSSIL_MANIACS_HOUSE
	@ WarpEvent 1
	semantic_warp_event 7, 25, 0x03, 0x02, MAP_NUM_ROUTE114_FOSSIL_MANIACS_HOUSE, MAP_GROUP_ROUTE114_FOSSIL_MANIACS_HOUSE
	@ WarpEvent 2
	semantic_warp_event 6, 2, 0x00, 0x00, MAP_NUM_DESERT_UNDERPASS, MAP_GROUP_DESERT_UNDERPASS
Route114_FossilManiacsTunnel_CoordEvents: @ 0x0850C4CC
	@ CoordEvent 0
	semantic_coord_event 5, 4, 0x03, 0x40CC, 0x0001, Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn
	@ CoordEvent 1
	semantic_coord_event 6, 4, 0x03, 0x40CC, 0x0001, Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn
Route114_FossilManiacsTunnel_MapEvents: @ 0x0850C4EC
	@ struct MapEvents
	semantic_map_events 1, 3, 2, 0, Route114_FossilManiacsTunnel_ObjectEvents, Route114_FossilManiacsTunnel_WarpEvents, Route114_FossilManiacsTunnel_CoordEvents, 0
Route114_LanettesHouse_ObjectEvents: @ 0x0850C500
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 5, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, Route114_LanettesHouse_EventScript_Lanette, 0x0366
Route114_LanettesHouse_WarpEvents: @ 0x0850C518
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x02, MAP_NUM_ROUTE114, MAP_GROUP_ROUTE114
	@ WarpEvent 1
	semantic_warp_event 6, 7, 0x00, 0x02, MAP_NUM_ROUTE114, MAP_GROUP_ROUTE114
Route114_LanettesHouse_BgEvents: @ 0x0850C528
	@ BgEvent 0
	semantic_bg_script_event 5, 1, 0x00, 0x00, Route114_LanettesHouse_EventScript_Notebook
	@ BgEvent 1
	semantic_bg_script_event 8, 1, 0x00, 0x00, Route114_LanettesHouse_EventScript_PC
	@ BgEvent 2
	semantic_bg_script_event 7, 1, 0x00, 0x00, Route114_LanettesHouse_EventScript_PC
Route114_LanettesHouse_MapEvents: @ 0x0850C54C
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 3, Route114_LanettesHouse_ObjectEvents, Route114_LanettesHouse_WarpEvents, 0, Route114_LanettesHouse_BgEvents
Route116_TunnelersRestHouse_ObjectEvents: @ 0x0850C560
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x19, 0x00, 6, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, Route116_TunnelersRestHouse_EventScript_Tunneler1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x19, 0x00, 3, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, Route116_TunnelersRestHouse_EventScript_Tunneler3, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x19, 0x00, 7, 2, 0x03, 0x07, 1, 0, 0x0000, 0x0000, Route116_TunnelersRestHouse_EventScript_Tunneler2, 0x0000
Route116_TunnelersRestHouse_WarpEvents: @ 0x0850C5A8
	@ WarpEvent 0
	semantic_warp_event 4, 8, 0x00, 0x01, MAP_NUM_ROUTE116, MAP_GROUP_ROUTE116
	@ WarpEvent 1
	semantic_warp_event 5, 8, 0x00, 0x01, MAP_NUM_ROUTE116, MAP_GROUP_ROUTE116
Route116_TunnelersRestHouse_MapEvents: @ 0x0850C5B8
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, Route116_TunnelersRestHouse_ObjectEvents, Route116_TunnelersRestHouse_WarpEvents, 0, 0
Route117_PokemonDayCare_ObjectEvents: @ 0x0850C5CC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1E, 0x00, 2, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_082577DA, 0x0000
Route117_PokemonDayCare_WarpEvents: @ 0x0850C5E4
	@ WarpEvent 0
	semantic_warp_event 2, 8, 0x00, 0x00, MAP_NUM_ROUTE117, MAP_GROUP_ROUTE117
	@ WarpEvent 1
	semantic_warp_event 3, 8, 0x00, 0x00, MAP_NUM_ROUTE117, MAP_GROUP_ROUTE117
Route117_PokemonDayCare_MapEvents: @ 0x0850C5F4
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, Route117_PokemonDayCare_ObjectEvents, Route117_PokemonDayCare_WarpEvents, 0, 0
Route121_SafariZoneEntrance_ObjectEvents: @ 0x0850C608
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x20, 0x00, 17, 9, 0x03, 0x09, 0, 0, 0x0000, 0x0000, Route121_SafariZoneEntrance_EventScript_WelcomeAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1F, 0x00, 10, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route121_SafariZoneEntrance_EventScript_InfoAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1F, 0x00, 8, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0000
Route121_SafariZoneEntrance_WarpEvents: @ 0x0850C650
	@ WarpEvent 0
	semantic_warp_event 2, 5, 0x00, 0x00, MAP_NUM_SAFARI_ZONE_SOUTH, MAP_GROUP_SAFARI_ZONE_SOUTH
	@ WarpEvent 1
	semantic_warp_event 3, 5, 0x00, 0x00, MAP_NUM_SAFARI_ZONE_SOUTH, MAP_GROUP_SAFARI_ZONE_SOUTH
	@ WarpEvent 2
	semantic_warp_event 14, 13, 0x00, 0x00, MAP_NUM_ROUTE121, MAP_GROUP_ROUTE121
	@ WarpEvent 3
	semantic_warp_event 15, 13, 0x00, 0x00, MAP_NUM_ROUTE121, MAP_GROUP_ROUTE121
Route121_SafariZoneEntrance_CoordEvents: @ 0x0850C670
	@ CoordEvent 0
	semantic_coord_event 8, 4, 0x03, 0x4001, 0x0000, Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger
Route121_SafariZoneEntrance_BgEvents: @ 0x0850C680
	@ BgEvent 0
	semantic_bg_script_event 15, 1, 0x00, 0x00, Route121_SafariZoneEntrance_EventScript_TrainerTipSign
Route121_SafariZoneEntrance_MapEvents: @ 0x0850C68C
	@ struct MapEvents
	semantic_map_events 3, 4, 1, 1, Route121_SafariZoneEntrance_ObjectEvents, Route121_SafariZoneEntrance_WarpEvents, Route121_SafariZoneEntrance_CoordEvents, Route121_SafariZoneEntrance_BgEvents
MeteorFalls_1F_1R_ObjectEvents: @ 0x0850C6A0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 2, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256F02, 0x0414
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 2, 14, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256F1C, 0x0416
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 27, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256F0F, 0x0415
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 26, 32, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256F29, 0x0417
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x77, 0x00, 12, 20, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x03AB
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x77, 0x00, 14, 21, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x03AB
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xC3, 0x00, 6, 20, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x03AA
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x75, 0x00, 6, 20, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x03AA
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x75, 0x00, 6, 21, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x03AA
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x2E, 0x00, 13, 23, 0x03, 0x15, 0, 0, 0x0000, 0x0000, MeteorFalls_1F_1R_EventScript_ProfCozmo, 0x03AE
MeteorFalls_1F_1R_WarpEvents: @ 0x0850C790
	@ WarpEvent 0
	semantic_warp_event 27, 18, 0x04, 0x00, MAP_NUM_ROUTE114, MAP_GROUP_ROUTE114
	@ WarpEvent 1
	semantic_warp_event 6, 39, 0x03, 0x00, MAP_NUM_ROUTE115, MAP_GROUP_ROUTE115
	@ WarpEvent 2
	semantic_warp_event 10, 3, 0x03, 0x00, MAP_NUM_METEOR_FALLS_1_F_2_R, MAP_GROUP_METEOR_FALLS_1_F_2_R
	@ WarpEvent 3
	semantic_warp_event 5, 4, 0x03, 0x04, MAP_NUM_METEOR_FALLS_B1_F_1_R, MAP_GROUP_METEOR_FALLS_B1_F_1_R
	@ WarpEvent 4
	semantic_warp_event 26, 28, 0x03, 0x05, MAP_NUM_METEOR_FALLS_B1_F_1_R, MAP_GROUP_METEOR_FALLS_B1_F_1_R
	@ WarpEvent 5
	semantic_warp_event 4, 2, 0x00, 0x00, MAP_NUM_METEOR_FALLS_STEVENS_CAVE, MAP_GROUP_METEOR_FALLS_STEVENS_CAVE
MeteorFalls_1F_1R_CoordEvents: @ 0x0850C7C0
	@ CoordEvent 0
	semantic_coord_event 14, 18, 0x04, 0x40BF, 0x0000, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene
MeteorFalls_1F_1R_BgEvents: @ 0x0850C7D0
	@ BgEvent 0
	semantic_bg_script_event 9, 58, 0x00, 0x00, 0
MeteorFalls_1F_1R_MapEvents: @ 0x0850C7DC
	@ struct MapEvents
	semantic_map_events 10, 6, 1, 1, MeteorFalls_1F_1R_ObjectEvents, MeteorFalls_1F_1R_WarpEvents, MeteorFalls_1F_1R_CoordEvents, MeteorFalls_1F_1R_BgEvents
MeteorFalls_1F_2R_ObjectEvents: @ 0x0850C7F0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x21, 0x00, 13, 2, 0x03, 0x08, 0, 0, 0x0001, 0x0001, MeteorFalls_1F_2R_EventScript_Nicolas, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 6, 12, 0x03, 0x08, 1, 1, 0x0001, 0x0001, MeteorFalls_1F_2R_EventScript_John, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x16, 0x00, 7, 12, 0x03, 0x08, 1, 1, 0x0001, 0x0001, MeteorFalls_1F_2R_EventScript_Jay, 0x0000
MeteorFalls_1F_2R_WarpEvents: @ 0x0850C838
	@ WarpEvent 0
	semantic_warp_event 10, 29, 0x03, 0x02, MAP_NUM_METEOR_FALLS_1_F_1_R, MAP_GROUP_METEOR_FALLS_1_F_1_R
	@ WarpEvent 1
	semantic_warp_event 4, 14, 0x03, 0x00, MAP_NUM_METEOR_FALLS_B1_F_1_R, MAP_GROUP_METEOR_FALLS_B1_F_1_R
	@ WarpEvent 2
	semantic_warp_event 7, 20, 0x03, 0x01, MAP_NUM_METEOR_FALLS_B1_F_1_R, MAP_GROUP_METEOR_FALLS_B1_F_1_R
	@ WarpEvent 3
	semantic_warp_event 21, 23, 0x03, 0x02, MAP_NUM_METEOR_FALLS_B1_F_1_R, MAP_GROUP_METEOR_FALLS_B1_F_1_R
MeteorFalls_1F_2R_BgEvents: @ 0x0850C858
	@ BgEvent 0
	semantic_bg_script_event 9, 58, 0x00, 0x00, 0
MeteorFalls_1F_2R_MapEvents: @ 0x0850C864
	@ struct MapEvents
	semantic_map_events 3, 4, 0, 1, MeteorFalls_1F_2R_ObjectEvents, MeteorFalls_1F_2R_WarpEvents, 0, MeteorFalls_1F_2R_BgEvents
MeteorFalls_B1F_1R_WarpEvents: @ 0x0850C878
	@ WarpEvent 0
	semantic_warp_event 5, 6, 0x04, 0x01, MAP_NUM_METEOR_FALLS_1_F_2_R, MAP_GROUP_METEOR_FALLS_1_F_2_R
	@ WarpEvent 1
	semantic_warp_event 7, 11, 0x05, 0x02, MAP_NUM_METEOR_FALLS_1_F_2_R, MAP_GROUP_METEOR_FALLS_1_F_2_R
	@ WarpEvent 2
	semantic_warp_event 18, 15, 0x04, 0x03, MAP_NUM_METEOR_FALLS_1_F_2_R, MAP_GROUP_METEOR_FALLS_1_F_2_R
	@ WarpEvent 3
	semantic_warp_event 17, 3, 0x03, 0x00, MAP_NUM_METEOR_FALLS_B1_F_2_R, MAP_GROUP_METEOR_FALLS_B1_F_2_R
	@ WarpEvent 4
	semantic_warp_event 3, 23, 0x05, 0x03, MAP_NUM_METEOR_FALLS_1_F_1_R, MAP_GROUP_METEOR_FALLS_1_F_1_R
	@ WarpEvent 5
	semantic_warp_event 20, 36, 0x03, 0x04, MAP_NUM_METEOR_FALLS_1_F_1_R, MAP_GROUP_METEOR_FALLS_1_F_1_R
MeteorFalls_B1F_1R_MapEvents: @ 0x0850C8A8
	@ struct MapEvents
	semantic_map_events 0, 6, 0, 0, 0, MeteorFalls_B1F_1R_WarpEvents, 0, 0
MeteorFalls_B1F_2R_ObjectEvents: @ 0x0850C8BC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 5, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256F36, 0x0438
MeteorFalls_B1F_2R_WarpEvents: @ 0x0850C8D4
	@ WarpEvent 0
	semantic_warp_event 5, 15, 0x03, 0x03, MAP_NUM_METEOR_FALLS_B1_F_1_R, MAP_GROUP_METEOR_FALLS_B1_F_1_R
MeteorFalls_B1F_2R_MapEvents: @ 0x0850C8DC
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, MeteorFalls_B1F_2R_ObjectEvents, MeteorFalls_B1F_2R_WarpEvents, 0, 0
RusturfTunnel_ObjectEvents: @ 0x0850C8F0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 23, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, RusturfTunnel_EventScript_WandasBoyfriend, 0x0327
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x56, 0x00, 24, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x03A3
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 3, 1, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E8D, 0x0418
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 30, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E9A, 0x0419
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x15, 0x00, 5, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x036F
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x75, 0x00, 14, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, RusturfTunnel_EventScript_Grunt, 0x036E
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xD3, 0x00, 14, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, RusturfTunnel_EventScript_Peeko, 0x0370
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x56, 0x00, 24, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x03A4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x37, 0x00, 32, 13, 0x03, 0x09, 1, 1, 0x0001, 0x0003, RusturfTunnel_EventScript_Mike, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x14, 0x00, 25, 4, 0x03, 0x09, 1, 1, 0x0000, 0x0000, RusturfTunnel_EventScript_Wanda, 0x03D7
RusturfTunnel_WarpEvents: @ 0x0850C9E0
	@ WarpEvent 0
	semantic_warp_event 4, 10, 0x03, 0x00, MAP_NUM_ROUTE116, MAP_GROUP_ROUTE116
	@ WarpEvent 1
	semantic_warp_event 29, 16, 0x03, 0x04, MAP_NUM_VERDANTURF_TOWN, MAP_GROUP_VERDANTURF_TOWN
	@ WarpEvent 2
	semantic_warp_event 18, 20, 0x03, 0x02, MAP_NUM_ROUTE116, MAP_GROUP_ROUTE116
RusturfTunnel_CoordEvents: @ 0x0850C9F8
	@ CoordEvent 0
	semantic_coord_event 23, 4, 0x03, 0x0000, 0x0000, RusturfTunnel_EventScript_TunnelBlockagePos1
	@ CoordEvent 1
	semantic_coord_event 9, 4, 0x03, 0x409A, 0x0002, RusturfTunnel_EventScript_AquaGruntBackUp
	@ CoordEvent 2
	semantic_coord_event 9, 5, 0x03, 0x409A, 0x0002, RusturfTunnel_EventScript_AquaGruntBackUp
	@ CoordEvent 3
	semantic_coord_event 25, 4, 0x03, 0x0000, 0x0000, RusturfTunnel_EventScript_TunnelBlockagePos2
	@ CoordEvent 4
	semantic_coord_event 25, 5, 0x03, 0x0000, 0x0000, RusturfTunnel_EventScript_TunnelBlockagePos3
RusturfTunnel_MapEvents: @ 0x0850CA48
	@ struct MapEvents
	semantic_map_events 10, 3, 5, 0, RusturfTunnel_ObjectEvents, RusturfTunnel_WarpEvents, RusturfTunnel_CoordEvents, 0
Underwater_SootopolisCity_WarpEvents: @ 0x0850CA5C
	@ WarpEvent 0
	semantic_warp_event 9, 8, 0x00, 0x00, MAP_NUM_UNDERWATER_ROUTE126, MAP_GROUP_UNDERWATER_ROUTE126
	@ WarpEvent 1
	semantic_warp_event 10, 8, 0x00, 0x00, MAP_NUM_UNDERWATER_ROUTE126, MAP_GROUP_UNDERWATER_ROUTE126
Underwater_SootopolisCity_MapEvents: @ 0x0850CA6C
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, Underwater_SootopolisCity_WarpEvents, 0, 0
DesertRuins_ObjectEvents: @ 0x0850CA80
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC8, 0x00, 8, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, DesertRuins_EventScript_Regirock, 0x03A7
DesertRuins_WarpEvents: @ 0x0850CA98
	@ WarpEvent 0
	semantic_warp_event 8, 29, 0x03, 0x01, MAP_NUM_ROUTE111, MAP_GROUP_ROUTE111
	@ WarpEvent 1
	semantic_warp_event 8, 20, 0x00, 0x02, MAP_NUM_DESERT_RUINS, MAP_GROUP_DESERT_RUINS
	@ WarpEvent 2
	semantic_warp_event 8, 11, 0x03, 0x01, MAP_NUM_DESERT_RUINS, MAP_GROUP_DESERT_RUINS
DesertRuins_BgEvents: @ 0x0850CAB0
	@ BgEvent 0
	semantic_bg_script_event 8, 20, 0x00, 0x00, DesertRuins_EventScript_CaveEntranceMiddle
	@ BgEvent 1
	semantic_bg_script_event 7, 20, 0x00, 0x00, DesertRuins_EventScript_CaveEntranceSide
	@ BgEvent 2
	semantic_bg_script_event 9, 20, 0x00, 0x00, DesertRuins_EventScript_CaveEntranceSide
DesertRuins_MapEvents: @ 0x0850CAD4
	@ struct MapEvents
	semantic_map_events 1, 3, 0, 3, DesertRuins_ObjectEvents, DesertRuins_WarpEvents, 0, DesertRuins_BgEvents
GraniteCave_1F_ObjectEvents: @ 0x0850CAE8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x37, 0x00, 36, 9, 0x03, 0x01, 0, 0, 0x0000, 0x0000, GraniteCave_1F_EventScript_Hiker, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 17, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08256EA7, 0x041A
GraniteCave_1F_WarpEvents: @ 0x0850CB18
	@ WarpEvent 0
	semantic_warp_event 37, 12, 0x03, 0x00, MAP_NUM_ROUTE106, MAP_GROUP_ROUTE106
	@ WarpEvent 1
	semantic_warp_event 35, 3, 0x03, 0x00, MAP_NUM_GRANITE_CAVE_B1_F, MAP_GROUP_GRANITE_CAVE_B1_F
	@ WarpEvent 2
	semantic_warp_event 17, 11, 0x03, 0x01, MAP_NUM_GRANITE_CAVE_B1_F, MAP_GROUP_GRANITE_CAVE_B1_F
	@ WarpEvent 3
	semantic_warp_event 5, 10, 0x03, 0x00, MAP_NUM_GRANITE_CAVE_STEVENS_ROOM, MAP_GROUP_GRANITE_CAVE_STEVENS_ROOM
GraniteCave_1F_MapEvents: @ 0x0850CB38
	@ struct MapEvents
	semantic_map_events 2, 4, 0, 0, GraniteCave_1F_ObjectEvents, GraniteCave_1F_WarpEvents, 0, 0
GraniteCave_B1F_ObjectEvents: @ 0x0850CB4C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 15, 21, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256EB4, 0x041B
GraniteCave_B1F_WarpEvents: @ 0x0850CB64
	@ WarpEvent 0
	semantic_warp_event 25, 13, 0x03, 0x01, MAP_NUM_GRANITE_CAVE_1_F, MAP_GROUP_GRANITE_CAVE_1_F
	@ WarpEvent 1
	semantic_warp_event 4, 21, 0x03, 0x02, MAP_NUM_GRANITE_CAVE_1_F, MAP_GROUP_GRANITE_CAVE_1_F
	@ WarpEvent 2
	semantic_warp_event 29, 13, 0x03, 0x00, MAP_NUM_GRANITE_CAVE_B2_F, MAP_GROUP_GRANITE_CAVE_B2_F
	@ WarpEvent 3
	semantic_warp_event 28, 21, 0x03, 0x01, MAP_NUM_GRANITE_CAVE_B2_F, MAP_GROUP_GRANITE_CAVE_B2_F
	@ WarpEvent 4
	semantic_warp_event 8, 5, 0x03, 0x02, MAP_NUM_GRANITE_CAVE_B2_F, MAP_GROUP_GRANITE_CAVE_B2_F
	@ WarpEvent 5
	semantic_warp_event 12, 3, 0x03, 0x03, MAP_NUM_GRANITE_CAVE_B2_F, MAP_GROUP_GRANITE_CAVE_B2_F
	@ WarpEvent 6
	semantic_warp_event 29, 2, 0x03, 0x04, MAP_NUM_GRANITE_CAVE_B2_F, MAP_GROUP_GRANITE_CAVE_B2_F
GraniteCave_B1F_MapEvents: @ 0x0850CB9C
	@ struct MapEvents
	semantic_map_events 1, 7, 0, 0, GraniteCave_B1F_ObjectEvents, GraniteCave_B1F_WarpEvents, 0, 0
GraniteCave_B2F_ObjectEvents: @ 0x0850CBB0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 4, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256EC1, 0x041D
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 29, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256ECE, 0x041E
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x56, 0x00, 5, 14, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0011
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x56, 0x00, 3, 14, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0012
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x56, 0x00, 2, 16, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0013
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x56, 0x00, 7, 12, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0014
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x56, 0x00, 4, 22, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0015
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x56, 0x00, 6, 22, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0016
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x56, 0x00, 3, 21, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0017
GraniteCave_B2F_WarpEvents: @ 0x0850CC88
	@ WarpEvent 0
	semantic_warp_event 29, 13, 0x03, 0x02, MAP_NUM_GRANITE_CAVE_B1_F, MAP_GROUP_GRANITE_CAVE_B1_F
	@ WarpEvent 1
	semantic_warp_event 28, 21, 0x03, 0x03, MAP_NUM_GRANITE_CAVE_B1_F, MAP_GROUP_GRANITE_CAVE_B1_F
	@ WarpEvent 2
	semantic_warp_event 8, 5, 0x03, 0x04, MAP_NUM_GRANITE_CAVE_B1_F, MAP_GROUP_GRANITE_CAVE_B1_F
	@ WarpEvent 3
	semantic_warp_event 12, 3, 0x03, 0x05, MAP_NUM_GRANITE_CAVE_B1_F, MAP_GROUP_GRANITE_CAVE_B1_F
	@ WarpEvent 4
	semantic_warp_event 29, 2, 0x03, 0x06, MAP_NUM_GRANITE_CAVE_B1_F, MAP_GROUP_GRANITE_CAVE_B1_F
GraniteCave_B2F_BgEvents: @ 0x0850CCB0
	@ BgEvent 0
	semantic_bg_hidden_item_event 28, 6, 0x03, ITEM_EVERSTONE, 0x0030
	@ BgEvent 1
	semantic_bg_hidden_item_event 15, 11, 0x03, ITEM_EVERSTONE, 0x0031
GraniteCave_B2F_MapEvents: @ 0x0850CCC8
	@ struct MapEvents
	semantic_map_events 9, 5, 0, 2, GraniteCave_B2F_ObjectEvents, GraniteCave_B2F_WarpEvents, 0, GraniteCave_B2F_BgEvents
GraniteCave_StevensRoom_ObjectEvents: @ 0x0850CCDC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x86, 0x00, 7, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, GraniteCave_StevensRoom_EventScript_Steven, 0x0341
GraniteCave_StevensRoom_WarpEvents: @ 0x0850CCF4
	@ WarpEvent 0
	semantic_warp_event 7, 3, 0x03, 0x03, MAP_NUM_GRANITE_CAVE_1_F, MAP_GROUP_GRANITE_CAVE_1_F
GraniteCave_StevensRoom_MapEvents: @ 0x0850CCFC
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, GraniteCave_StevensRoom_ObjectEvents, GraniteCave_StevensRoom_WarpEvents, 0, 0
PetalburgWoods_ObjectEvents: @ 0x0850CD10
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x52, 0x00, 19, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0011
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x52, 0x00, 19, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0012
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x75, 0x00, 26, 17, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x02D5
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x17, 0x00, 26, 20, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x02D4
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 45, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E66, 0x0420
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 35, 20, 0x03, 0x08, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E59, 0x041F
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 4, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256E73, 0x0422
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x09, 0x00, 15, 19, 0x03, 0x03, 1, 2, 0x0000, 0x0000, PetalburgWoods_EventScript_Boy1, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x24, 0x00, 7, 32, 0x03, 0x16, 0, 0, 0x0001, 0x0003, PetalburgWoods_EventScript_Lyle, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x24, 0x00, 4, 14, 0x03, 0x14, 0, 0, 0x0001, 0x0003, PetalburgWoods_EventScript_James, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x0D, 0x00, 30, 34, 0x03, 0x02, 2, 1, 0x0000, 0x0000, PetalburgWoods_EventScript_Boy2, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x3B, 0x00, 4, 26, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256E80, 0x045D
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x0A, 0x00, 33, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, PetalburgWoods_EventScript_Girl, 0x0000
PetalburgWoods_WarpEvents: @ 0x0850CE48
	@ WarpEvent 0
	semantic_warp_event 14, 5, 0x00, 0x02, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
	@ WarpEvent 1
	semantic_warp_event 15, 5, 0x00, 0x03, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
	@ WarpEvent 2
	semantic_warp_event 16, 38, 0x00, 0x04, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
	@ WarpEvent 3
	semantic_warp_event 17, 38, 0x00, 0x05, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
	@ WarpEvent 4
	semantic_warp_event 36, 38, 0x00, 0x06, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
	@ WarpEvent 5
	semantic_warp_event 37, 38, 0x00, 0x07, MAP_NUM_ROUTE104, MAP_GROUP_ROUTE104
PetalburgWoods_CoordEvents: @ 0x0850CE78
	@ CoordEvent 0
	semantic_coord_event 26, 23, 0x03, 0x4098, 0x0000, PetalburgWoods_EventScript_DevonResearcherLeft
	@ CoordEvent 1
	semantic_coord_event 27, 23, 0x03, 0x4098, 0x0000, PetalburgWoods_EventScript_DevonResearcherRight
PetalburgWoods_BgEvents: @ 0x0850CE98
	@ BgEvent 0
	semantic_bg_script_event 14, 32, 0x03, 0x00, PetalburgWoods_EventScript_Sign1
	@ BgEvent 1
	semantic_bg_hidden_item_event 39, 35, 0x03, ITEM_POTION, 0x003A
	@ BgEvent 2
	semantic_bg_hidden_item_event 26, 6, 0x03, ITEM_TINY_MUSHROOM, 0x003B
	@ BgEvent 3
	semantic_bg_hidden_item_event 40, 29, 0x03, ITEM_TINY_MUSHROOM, 0x003C
	@ BgEvent 4
	semantic_bg_hidden_item_event 4, 19, 0x03, ITEM_POKE_BALL, 0x003D
	@ BgEvent 5
	semantic_bg_script_event 11, 8, 0x03, 0x00, PetalburgWoods_EventScript_Sign2
PetalburgWoods_MapEvents: @ 0x0850CEE0
	@ struct MapEvents
	semantic_map_events 13, 6, 2, 6, PetalburgWoods_ObjectEvents, PetalburgWoods_WarpEvents, PetalburgWoods_CoordEvents, PetalburgWoods_BgEvents
MtChimney_ObjectEvents: @ 0x0850CEF4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC3, 0x00, 24, 19, 0x03, 0x09, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_Archie, 0x039E
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xC4, 0x00, 13, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_Maxie, 0x039F
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x77, 0x00, 12, 11, 0x03, 0x09, 0, 0, 0x0001, 0x0002, MtChimney_EventScript_Tabitha, 0x039F
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x77, 0x00, 32, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyMagmaGrunt5, 0x039F
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x77, 0x00, 28, 12, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyMagmaGrunt4, 0x039F
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x75, 0x00, 19, 39, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyAquaGrunt2, 0x039E
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x75, 0x00, 29, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyAquaGrunt1, 0x039E
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x75, 0x00, 31, 12, 0x03, 0x09, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyAquaGrunt3, 0x039E
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x1E, 0x00, 19, 39, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_LavaCookieLady, 0x03E2
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x77, 0x00, 22, 39, 0x03, 0x09, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyMagmaGrunt6, 0x039F
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xDC, 0x00, 23, 19, 0x03, 0x4A, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_AquaPoochyena, 0x039E
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xDC, 0x00, 23, 18, 0x03, 0x40, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_MagmaPoochyena, 0x039F
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x77, 0x00, 23, 17, 0x03, 0x08, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyMagmaGrunt2, 0x039F
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xDC, 0x00, 23, 20, 0x03, 0x41, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_MagmaPoochyena, 0x039F
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xDC, 0x00, 22, 19, 0x03, 0x43, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_MagmaPoochyena, 0x039F
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x77, 0x00, 23, 21, 0x03, 0x07, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyMagmaGrunt3, 0x039F
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x77, 0x00, 21, 19, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_BusyMagmaGrunt1, 0x039F
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0xDC, 0x00, 30, 12, 0x03, 0x42, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_AquaPoochyena, 0x039E
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0xDC, 0x00, 29, 12, 0x03, 0x43, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_MagmaPoochyena, 0x039F
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0xDC, 0x00, 30, 5, 0x03, 0x43, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_AquaPoochyena, 0x039E
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0xDC, 0x00, 31, 5, 0x03, 0x42, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_MagmaPoochyena, 0x039F
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x77, 0x00, 9, 16, 0x03, 0x0A, 0, 0, 0x0001, 0x0003, MtChimney_EventScript_Grunt2, 0x039F
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0xDC, 0x00, 20, 39, 0x03, 0x43, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_AquaPoochyena, 0x039E
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0xDC, 0x00, 21, 39, 0x03, 0x42, 0, 0, 0x0000, 0x0000, MtChimney_EventScript_MagmaPoochyena, 0x039F
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x16, 0x00, 16, 18, 0x03, 0x0D, 0, 0, 0x0001, 0x0003, MtChimney_EventScript_Shelby, 0x036D
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x2D, 0x00, 14, 7, 0x03, 0x46, 0, 0, 0x0001, 0x0006, MtChimney_EventScript_Melissa, 0x036D
	@ ObjectEventTemplate 26
	semantic_object_event 0x1B, 0x2D, 0x00, 29, 7, 0x03, 0x11, 1, 1, 0x0001, 0x0003, MtChimney_EventScript_Sheila, 0x036D
	@ ObjectEventTemplate 27
	semantic_object_event 0x1C, 0x2D, 0x00, 27, 17, 0x03, 0x10, 1, 1, 0x0001, 0x0003, MtChimney_EventScript_Shirley, 0x036D
	@ ObjectEventTemplate 28
	semantic_object_event 0x1D, 0x78, 0x00, 13, 16, 0x03, 0x09, 1, 1, 0x0001, 0x0003, MtChimney_EventScript_Grunt1, 0x039F
	@ ObjectEventTemplate 29
	semantic_object_event 0x1E, 0x37, 0x00, 7, 7, 0x03, 0x0A, 1, 1, 0x0001, 0x0006, MtChimney_EventScript_Sawyer, 0x036D
MtChimney_WarpEvents: @ 0x0850D1C4
	@ WarpEvent 0
	semantic_warp_event 17, 36, 0x00, 0x00, MAP_NUM_MT_CHIMNEY_CABLE_CAR_STATION, MAP_GROUP_MT_CHIMNEY_CABLE_CAR_STATION
	@ WarpEvent 1
	semantic_warp_event 18, 36, 0x00, 0x01, MAP_NUM_MT_CHIMNEY_CABLE_CAR_STATION, MAP_GROUP_MT_CHIMNEY_CABLE_CAR_STATION
	@ WarpEvent 2
	semantic_warp_event 20, 41, 0x03, 0x02, MAP_NUM_JAGGED_PASS, MAP_GROUP_JAGGED_PASS
	@ WarpEvent 3
	semantic_warp_event 21, 41, 0x03, 0x03, MAP_NUM_JAGGED_PASS, MAP_GROUP_JAGGED_PASS
MtChimney_BgEvents: @ 0x0850D1E4
	@ BgEvent 0
	semantic_bg_script_event 14, 6, 0x00, 0x00, MtChimney_EventScript_MeteoriteMachine
	@ BgEvent 1
	semantic_bg_script_event 24, 37, 0x03, 0x00, MtChimney_EventScript_RouteSign
MtChimney_MapEvents: @ 0x0850D1FC
	@ struct MapEvents
	semantic_map_events 30, 4, 0, 2, MtChimney_ObjectEvents, MtChimney_WarpEvents, 0, MtChimney_BgEvents
JaggedPass_ObjectEvents: @ 0x0850D210
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x37, 0x00, 10, 8, 0x03, 0x0A, 0, 0, 0x0001, 0x0003, JaggedPass_EventScript_Eric, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1F, 0x00, 16, 35, 0x03, 0x0E, 0, 0, 0x0001, 0x0004, JaggedPass_EventScript_Ethan, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 23, 24, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256EDB, 0x042E
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x20, 0x00, 9, 21, 0x03, 0x10, 1, 1, 0x0001, 0x0003, JaggedPass_EventScript_Diana, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x77, 0x00, 16, 19, 0x03, 0x07, 1, 1, 0x0000, 0x0000, JaggedPass_EventScript_MagmaHideoutGuard, 0x034F
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x20, 0x00, 14, 25, 0x03, 0x0A, 1, 1, 0x0001, 0x0003, JaggedPass_EventScript_Autumn, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x38, 0x00, 18, 25, 0x03, 0x09, 1, 1, 0x0001, 0x0003, JaggedPass_EventScript_Julio, 0x0000
JaggedPass_WarpEvents: @ 0x0850D2B8
	@ WarpEvent 0
	semantic_warp_event 14, 40, 0x03, 0x02, MAP_NUM_ROUTE112, MAP_GROUP_ROUTE112
	@ WarpEvent 1
	semantic_warp_event 15, 40, 0x03, 0x03, MAP_NUM_ROUTE112, MAP_GROUP_ROUTE112
	@ WarpEvent 2
	semantic_warp_event 13, 5, 0x03, 0x02, MAP_NUM_MT_CHIMNEY, MAP_GROUP_MT_CHIMNEY
	@ WarpEvent 3
	semantic_warp_event 14, 5, 0x03, 0x03, MAP_NUM_MT_CHIMNEY, MAP_GROUP_MT_CHIMNEY
	@ WarpEvent 4
	semantic_warp_event 16, 18, 0x00, 0x00, MAP_NUM_MAGMA_HIDEOUT_1_F, MAP_GROUP_MAGMA_HIDEOUT_1_F
JaggedPass_CoordEvents: @ 0x0850D2E0
	@ CoordEvent 0
	semantic_coord_event 13, 15, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 1
	semantic_coord_event 21, 12, 0x03, 0x0008, 0x0000, 0
	@ CoordEvent 2
	semantic_coord_event 14, 15, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 3
	semantic_coord_event 18, 17, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 4
	semantic_coord_event 22, 19, 0x03, 0x0002, 0x0000, 0
	@ CoordEvent 5
	semantic_coord_event 21, 15, 0x03, 0x40C8, 0x0001, JaggedPass_EventScript_OpenMagmaHideout
	@ CoordEvent 6
	semantic_coord_event 22, 20, 0x03, 0x40C8, 0x0001, JaggedPass_EventScript_OpenMagmaHideout
	@ CoordEvent 7
	semantic_coord_event 21, 20, 0x03, 0x40C8, 0x0001, JaggedPass_EventScript_OpenMagmaHideout
	@ CoordEvent 8
	semantic_coord_event 14, 15, 0x03, 0x40C8, 0x0001, JaggedPass_EventScript_OpenMagmaHideout
	@ CoordEvent 9
	semantic_coord_event 13, 15, 0x03, 0x40C8, 0x0001, JaggedPass_EventScript_OpenMagmaHideout
JaggedPass_BgEvents: @ 0x0850D380
	@ BgEvent 0
	semantic_bg_hidden_item_event 8, 10, 0x03, ITEM_FULL_HEAL, 0x004D
	@ BgEvent 1
	semantic_bg_hidden_item_event 7, 29, 0x03, ITEM_GREAT_BALL, 0x004C
JaggedPass_MapEvents: @ 0x0850D398
	@ struct MapEvents
	semantic_map_events 7, 5, 10, 2, JaggedPass_ObjectEvents, JaggedPass_WarpEvents, JaggedPass_CoordEvents, JaggedPass_BgEvents
FieryPath_ObjectEvents: @ 0x0850D3AC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 8, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256EF5, 0x0443
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x57, 0x00, 10, 15, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x57, 0x00, 17, 15, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x57, 0x00, 8, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0013
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x57, 0x00, 3, 12, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0014
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x57, 0x00, 6, 23, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0015
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x57, 0x00, 5, 24, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0016
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3B, 0x00, 7, 32, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256EE8, 0x0457
FieryPath_WarpEvents: @ 0x0850D46C
	@ WarpEvent 0
	semantic_warp_event 26, 36, 0x03, 0x04, MAP_NUM_ROUTE112, MAP_GROUP_ROUTE112
	@ WarpEvent 1
	semantic_warp_event 26, 4, 0x03, 0x05, MAP_NUM_ROUTE112, MAP_GROUP_ROUTE112
FieryPath_MapEvents: @ 0x0850D47C
	@ struct MapEvents
	semantic_map_events 8, 2, 0, 0, FieryPath_ObjectEvents, FieryPath_WarpEvents, 0, 0
MtPyre_1F_ObjectEvents: @ 0x0850D490
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1E, 0x00, 21, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, MtPyre_1F_EventScript_CleanseTagWoman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 17, 8, 0x03, 0x07, 1, 1, 0x0000, 0x0000, MtPyre_1F_EventScript_PokefanF, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x41, 0x00, 13, 10, 0x03, 0x09, 1, 1, 0x0000, 0x0000, MtPyre_1F_EventScript_Man, 0x0000
MtPyre_1F_WarpEvents: @ 0x0850D4D8
	@ WarpEvent 0
	semantic_warp_event 17, 18, 0x03, 0x00, MAP_NUM_ROUTE122, MAP_GROUP_ROUTE122
	@ WarpEvent 1
	semantic_warp_event 3, 6, 0x03, 0x00, MAP_NUM_MT_PYRE_EXTERIOR, MAP_GROUP_MT_PYRE_EXTERIOR
	@ WarpEvent 2
	semantic_warp_event 18, 18, 0x03, 0x00, MAP_NUM_ROUTE122, MAP_GROUP_ROUTE122
	@ WarpEvent 3
	semantic_warp_event 4, 6, 0x03, 0x00, MAP_NUM_MT_PYRE_EXTERIOR, MAP_GROUP_MT_PYRE_EXTERIOR
	@ WarpEvent 4
	semantic_warp_event 11, 1, 0x03, 0x00, MAP_NUM_MT_PYRE_2_F, MAP_GROUP_MT_PYRE_2_F
	@ WarpEvent 5
	semantic_warp_event 20, 9, 0x03, 0x04, MAP_NUM_MT_PYRE_2_F, MAP_GROUP_MT_PYRE_2_F
MtPyre_1F_MapEvents: @ 0x0850D508
	@ struct MapEvents
	semantic_map_events 3, 6, 0, 0, MtPyre_1F_ObjectEvents, MtPyre_1F_WarpEvents, 0, 0
MtPyre_2F_ObjectEvents: @ 0x0850D51C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x27, 0x00, 3, 6, 0x03, 0x0A, 1, 1, 0x0001, 0x0002, MtPyre_2F_EventScript_Mark, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 0, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257054, 0x0469
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x10, 0x00, 9, 3, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, MtPyre_2F_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x19, 0x00, 12, 10, 0x03, 0x08, 1, 1, 0x0000, 0x0000, MtPyre_2F_EventScript_PokefanM, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x1A, 0x00, 2, 9, 0x03, 0x08, 1, 1, 0x0001, 0x0001, MtPyre_2F_EventScript_Dez, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x41, 0x00, 3, 9, 0x03, 0x08, 1, 1, 0x0001, 0x0001, MtPyre_2F_EventScript_Luke, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2C, 0x00, 6, 9, 0x03, 0x07, 1, 1, 0x0001, 0x0002, MtPyre_2F_EventScript_Zander, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x28, 0x00, 6, 6, 0x03, 0x11, 1, 1, 0x0001, 0x0002, MtPyre_2F_EventScript_Leah, 0x0000
MtPyre_2F_WarpEvents: @ 0x0850D5DC
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x03, 0x04, MAP_NUM_MT_PYRE_1_F, MAP_GROUP_MT_PYRE_1_F
	@ WarpEvent 1
	semantic_warp_event 10, 1, 0x03, 0x00, MAP_NUM_MT_PYRE_3_F, MAP_GROUP_MT_PYRE_3_F
	@ WarpEvent 2
	semantic_warp_event 10, 12, 0x03, 0x04, MAP_NUM_MT_PYRE_3_F, MAP_GROUP_MT_PYRE_3_F
	@ WarpEvent 3
	semantic_warp_event 6, 12, 0x03, 0x05, MAP_NUM_MT_PYRE_3_F, MAP_GROUP_MT_PYRE_3_F
	@ WarpEvent 4
	semantic_warp_event 11, 9, 0x03, 0x05, MAP_NUM_MT_PYRE_1_F, MAP_GROUP_MT_PYRE_1_F
MtPyre_2F_MapEvents: @ 0x0850D604
	@ struct MapEvents
	semantic_map_events 8, 5, 0, 0, MtPyre_2F_ObjectEvents, MtPyre_2F_WarpEvents, 0, 0
MtPyre_3F_ObjectEvents: @ 0x0850D618
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x25, 0x00, 1, 4, 0x03, 0x12, 1, 1, 0x0001, 0x0004, MtPyre_3F_EventScript_William, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2F, 0x00, 11, 4, 0x03, 0x11, 1, 1, 0x0001, 0x0004, MtPyre_3F_EventScript_Kayla, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 0, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257061, 0x0460
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x14, 0x00, 6, 4, 0x03, 0x0E, 1, 1, 0x0001, 0x0004, MtPyre_3F_EventScript_Gabrielle, 0x0000
MtPyre_3F_WarpEvents: @ 0x0850D678
	@ WarpEvent 0
	semantic_warp_event 10, 1, 0x03, 0x01, MAP_NUM_MT_PYRE_2_F, MAP_GROUP_MT_PYRE_2_F
	@ WarpEvent 1
	semantic_warp_event 2, 1, 0x03, 0x01, MAP_NUM_MT_PYRE_4_F, MAP_GROUP_MT_PYRE_4_F
	@ WarpEvent 2
	semantic_warp_event 9, 10, 0x03, 0x04, MAP_NUM_MT_PYRE_4_F, MAP_GROUP_MT_PYRE_4_F
	@ WarpEvent 3
	semantic_warp_event 1, 12, 0x03, 0x05, MAP_NUM_MT_PYRE_4_F, MAP_GROUP_MT_PYRE_4_F
	@ WarpEvent 4
	semantic_warp_event 10, 12, 0x03, 0x02, MAP_NUM_MT_PYRE_2_F, MAP_GROUP_MT_PYRE_2_F
	@ WarpEvent 5
	semantic_warp_event 6, 12, 0x03, 0x03, MAP_NUM_MT_PYRE_2_F, MAP_GROUP_MT_PYRE_2_F
MtPyre_3F_MapEvents: @ 0x0850D6A8
	@ struct MapEvents
	semantic_map_events 4, 6, 0, 0, MtPyre_3F_ObjectEvents, MtPyre_3F_WarpEvents, 0, 0
MtPyre_4F_ObjectEvents: @ 0x0850D6BC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x28, 0x00, 11, 7, 0x03, 0x18, 1, 1, 0x0001, 0x0002, MtPyre_4F_EventScript_Tasha, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 3, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825706E, 0x046A
MtPyre_4F_WarpEvents: @ 0x0850D6EC
	@ WarpEvent 0
	semantic_warp_event 10, 1, 0x03, 0x01, MAP_NUM_MT_PYRE_5_F, MAP_GROUP_MT_PYRE_5_F
	@ WarpEvent 1
	semantic_warp_event 2, 5, 0x03, 0x01, MAP_NUM_MT_PYRE_3_F, MAP_GROUP_MT_PYRE_3_F
	@ WarpEvent 2
	semantic_warp_event 12, 10, 0x03, 0x03, MAP_NUM_MT_PYRE_5_F, MAP_GROUP_MT_PYRE_5_F
	@ WarpEvent 3
	semantic_warp_event 12, 12, 0x03, 0x04, MAP_NUM_MT_PYRE_5_F, MAP_GROUP_MT_PYRE_5_F
	@ WarpEvent 4
	semantic_warp_event 9, 10, 0x03, 0x02, MAP_NUM_MT_PYRE_3_F, MAP_GROUP_MT_PYRE_3_F
	@ WarpEvent 5
	semantic_warp_event 2, 12, 0x03, 0x03, MAP_NUM_MT_PYRE_3_F, MAP_GROUP_MT_PYRE_3_F
MtPyre_4F_MapEvents: @ 0x0850D71C
	@ struct MapEvents
	semantic_map_events 2, 6, 0, 0, MtPyre_4F_ObjectEvents, MtPyre_4F_WarpEvents, 0, 0
MtPyre_5F_ObjectEvents: @ 0x0850D730
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 3, 7, 0x03, 0x11, 1, 1, 0x0001, 0x0002, MtPyre_5F_EventScript_Atsushi, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 6, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825707B, 0x041C
MtPyre_5F_WarpEvents: @ 0x0850D760
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x03, 0x00, MAP_NUM_MT_PYRE_6_F, MAP_GROUP_MT_PYRE_6_F
	@ WarpEvent 1
	semantic_warp_event 10, 5, 0x03, 0x00, MAP_NUM_MT_PYRE_4_F, MAP_GROUP_MT_PYRE_4_F
	@ WarpEvent 2
	semantic_warp_event 1, 10, 0x03, 0x01, MAP_NUM_MT_PYRE_6_F, MAP_GROUP_MT_PYRE_6_F
	@ WarpEvent 3
	semantic_warp_event 12, 10, 0x03, 0x02, MAP_NUM_MT_PYRE_4_F, MAP_GROUP_MT_PYRE_4_F
	@ WarpEvent 4
	semantic_warp_event 12, 12, 0x03, 0x03, MAP_NUM_MT_PYRE_4_F, MAP_GROUP_MT_PYRE_4_F
MtPyre_5F_MapEvents: @ 0x0850D788
	@ struct MapEvents
	semantic_map_events 2, 5, 0, 0, MtPyre_5F_ObjectEvents, MtPyre_5F_WarpEvents, 0, 0
MtPyre_6F_ObjectEvents: @ 0x0850D79C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x28, 0x00, 6, 3, 0x03, 0x17, 1, 1, 0x0001, 0x0003, MtPyre_6F_EventScript_Valerie, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 6, 9, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257088, 0x0441
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x25, 0x00, 10, 3, 0x03, 0x18, 1, 1, 0x0001, 0x0003, MtPyre_6F_EventScript_Cedric, 0x0000
MtPyre_6F_WarpEvents: @ 0x0850D7E4
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x03, 0x00, MAP_NUM_MT_PYRE_5_F, MAP_GROUP_MT_PYRE_5_F
	@ WarpEvent 1
	semantic_warp_event 1, 10, 0x03, 0x02, MAP_NUM_MT_PYRE_5_F, MAP_GROUP_MT_PYRE_5_F
MtPyre_6F_MapEvents: @ 0x0850D7F4
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, MtPyre_6F_ObjectEvents, MtPyre_6F_WarpEvents, 0, 0
MtPyre_Exterior_ObjectEvents: @ 0x0850D808
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 27, 15, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08257095, 0x0431
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 19, 40, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_082570A2, 0x0432
MtPyre_Exterior_WarpEvents: @ 0x0850D838
	@ WarpEvent 0
	semantic_warp_event 10, 42, 0x03, 0x01, MAP_NUM_MT_PYRE_1_F, MAP_GROUP_MT_PYRE_1_F
	@ WarpEvent 1
	semantic_warp_event 19, 10, 0x03, 0x01, MAP_NUM_MT_PYRE_SUMMIT, MAP_GROUP_MT_PYRE_SUMMIT
	@ WarpEvent 2
	semantic_warp_event 20, 10, 0x03, 0x01, MAP_NUM_MT_PYRE_SUMMIT, MAP_GROUP_MT_PYRE_SUMMIT
MtPyre_Exterior_CoordEvents: @ 0x0850D850
	@ CoordEvent 0
	semantic_coord_event 24, 21, 0x03, 0x0000, 0x0000, MtPyre_Exterior_EventScript_FogTrigger
	@ CoordEvent 1
	semantic_coord_event 25, 21, 0x03, 0x0000, 0x0000, MtPyre_Exterior_EventScript_FogTrigger
	@ CoordEvent 2
	semantic_coord_event 22, 27, 0x03, 0x0000, 0x0000, MtPyre_Exterior_EventScript_SunTrigger
	@ CoordEvent 3
	semantic_coord_event 23, 28, 0x03, 0x0000, 0x0000, MtPyre_Exterior_EventScript_SunTrigger
	@ CoordEvent 4
	semantic_coord_event 26, 21, 0x03, 0x0000, 0x0000, MtPyre_Exterior_EventScript_FogTrigger
MtPyre_Exterior_BgEvents: @ 0x0850D8A0
	@ BgEvent 0
	semantic_bg_hidden_item_event 9, 8, 0x00, ITEM_ULTRA_BALL, 0x001D
	@ BgEvent 1
	semantic_bg_hidden_item_event 16, 22, 0x00, ITEM_MAX_ETHER, 0x004E
MtPyre_Exterior_MapEvents: @ 0x0850D8B8
	@ struct MapEvents
	semantic_map_events 2, 3, 5, 2, MtPyre_Exterior_ObjectEvents, MtPyre_Exterior_WarpEvents, MtPyre_Exterior_CoordEvents, MtPyre_Exterior_BgEvents
MtPyre_Summit_ObjectEvents: @ 0x0850D8CC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1D, 0x00, 22, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, MtPyre_Summit_EventScript_OldMan, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xC3, 0x00, 23, 6, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0394
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x16, 0x00, 23, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, MtPyre_Summit_EventScript_OldLady, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x75, 0x00, 21, 15, 0x03, 0x0A, 0, 0, 0x0001, 0x0003, MtPyre_Summit_EventScript_Grunt1, 0x0395
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x75, 0x00, 25, 18, 0x03, 0x09, 0, 0, 0x0001, 0x0003, MtPyre_Summit_EventScript_Grunt2, 0x0395
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x75, 0x00, 21, 11, 0x03, 0x0A, 0, 0, 0x0001, 0x0003, MtPyre_Summit_EventScript_Grunt3, 0x0395
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x76, 0x00, 25, 11, 0x03, 0x09, 1, 1, 0x0001, 0x0003, MtPyre_Summit_EventScript_Grunt4, 0x0395
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xC4, 0x00, 23, 6, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0358
MtPyre_Summit_WarpEvents: @ 0x0850D98C
	@ WarpEvent 0
	semantic_warp_event 22, 31, 0x03, 0x01, MAP_NUM_MT_PYRE_EXTERIOR, MAP_GROUP_MT_PYRE_EXTERIOR
	@ WarpEvent 1
	semantic_warp_event 23, 31, 0x03, 0x01, MAP_NUM_MT_PYRE_EXTERIOR, MAP_GROUP_MT_PYRE_EXTERIOR
	@ WarpEvent 2
	semantic_warp_event 24, 31, 0x03, 0x01, MAP_NUM_MT_PYRE_EXTERIOR, MAP_GROUP_MT_PYRE_EXTERIOR
MtPyre_Summit_CoordEvents: @ 0x0850D9A4
	@ CoordEvent 0
	semantic_coord_event 22, 7, 0x03, 0x40B9, 0x0000, MtPyre_Summit_EventScript_TeamAquaTrigger0
	@ CoordEvent 1
	semantic_coord_event 23, 7, 0x03, 0x40B9, 0x0000, MtPyre_Summit_EventScript_TeamAquaTrigger1
	@ CoordEvent 2
	semantic_coord_event 24, 7, 0x03, 0x40B9, 0x0000, MtPyre_Summit_EventScript_TeamAquaTrigger2
	@ CoordEvent 3
	semantic_coord_event 22, 9, 0x03, 0x40B9, 0x0002, MtPyre_Summit_EventScript_ArchieMaxieTrigger0
	@ CoordEvent 4
	semantic_coord_event 23, 9, 0x03, 0x40B9, 0x0002, MtPyre_Summit_EventScript_ArchieMaxieTrigger1
	@ CoordEvent 5
	semantic_coord_event 24, 9, 0x03, 0x40B9, 0x0002, MtPyre_Summit_EventScript_ArchieMaxieTrigger2
MtPyre_Summit_BgEvents: @ 0x0850DA04
	@ BgEvent 0
	semantic_bg_hidden_item_event 9, 25, 0x00, ITEM_ZINC, 0x004F
	@ BgEvent 1
	semantic_bg_hidden_item_event 37, 7, 0x03, ITEM_RARE_CANDY, 0x0050
MtPyre_Summit_MapEvents: @ 0x0850DA1C
	@ struct MapEvents
	semantic_map_events 8, 3, 6, 2, MtPyre_Summit_ObjectEvents, MtPyre_Summit_WarpEvents, MtPyre_Summit_CoordEvents, MtPyre_Summit_BgEvents
AquaHideout_1F_ObjectEvents: @ 0x0850DA30
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x75, 0x00, 13, 11, 0x03, 0x08, 0, 0, 0x0000, 0x0000, AquaHideout_1F_EventScript_HideoutEntranceGrunt1, 0x0335
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x75, 0x00, 14, 11, 0x03, 0x08, 0, 0, 0x0000, 0x0000, AquaHideout_1F_EventScript_HideoutEntranceGrunt2, 0x0336
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x75, 0x00, 20, 4, 0x03, 0x32, 13, 5, 0x0001, 0x0003, AquaHideout_1F_EventScript_Grunt1, 0x039C
AquaHideout_1F_WarpEvents: @ 0x0850DA78
	@ WarpEvent 0
	semantic_warp_event 13, 27, 0x01, 0x06, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 1
	semantic_warp_event 14, 27, 0x01, 0x06, MAP_NUM_LILYCOVE_CITY, MAP_GROUP_LILYCOVE_CITY
	@ WarpEvent 2
	semantic_warp_event 22, 1, 0x03, 0x00, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
AquaHideout_1F_MapEvents: @ 0x0850DA90
	@ struct MapEvents
	semantic_map_events 3, 3, 0, 0, AquaHideout_1F_ObjectEvents, AquaHideout_1F_WarpEvents, 0, 0
AquaHideout_B1F_ObjectEvents: @ 0x0850DAA4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x75, 0x00, 28, 16, 0x03, 0x08, 0, 0, 0x0001, 0x0004, AquaHideout_B1F_EventScript_Grunt2, 0x039C
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x75, 0x00, 6, 6, 0x03, 0x09, 0, 0, 0x0001, 0x0005, AquaHideout_B1F_EventScript_Grunt3, 0x039C
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 29, 12, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_082570C9, 0x042F
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x76, 0x00, 20, 18, 0x03, 0x17, 4, 0, 0x0001, 0x0004, AquaHideout_B1F_EventScript_Grunt5, 0x039C
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 15, 9, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082570AF, 0x0464
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 16, 9, 0x03, 0x01, 1, 1, 0x0000, 0x0000, AquaHideout_B1F_EventScript_Electrode1, 0x03D1
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 15, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082570BC, 0x046C
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3B, 0x00, 16, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, AquaHideout_B1F_EventScript_Electrode2, 0x03D2
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x76, 0x00, 28, 21, 0x03, 0x07, 1, 1, 0x0001, 0x0004, AquaHideout_B1F_EventScript_Grunt7, 0x039C
AquaHideout_B1F_WarpEvents: @ 0x0850DB7C
	@ WarpEvent 0
	semantic_warp_event 29, 1, 0x03, 0x02, MAP_NUM_AQUA_HIDEOUT_1F, MAP_GROUP_AQUA_HIDEOUT_1F
	@ WarpEvent 1
	semantic_warp_event 18, 1, 0x03, 0x00, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 2
	semantic_warp_event 12, 1, 0x03, 0x01, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 3
	semantic_warp_event 3, 3, 0x03, 0x02, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 4
	semantic_warp_event 31, 4, 0x03, 0x07, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 5
	semantic_warp_event 27, 4, 0x03, 0x08, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 6
	semantic_warp_event 20, 4, 0x03, 0x0A, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 7
	semantic_warp_event 27, 12, 0x03, 0x04, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 8
	semantic_warp_event 3, 15, 0x03, 0x05, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 9
	semantic_warp_event 3, 20, 0x03, 0x0C, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 10
	semantic_warp_event 32, 19, 0x03, 0x06, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 11
	semantic_warp_event 23, 10, 0x03, 0x16, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 12
	semantic_warp_event 45, 3, 0x03, 0x09, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 13
	semantic_warp_event 42, 5, 0x03, 0x12, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 14
	semantic_warp_event 45, 5, 0x03, 0x0C, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 15
	semantic_warp_event 48, 5, 0x03, 0x10, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 16
	semantic_warp_event 42, 9, 0x03, 0x0F, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 17
	semantic_warp_event 45, 9, 0x03, 0x14, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 18
	semantic_warp_event 48, 9, 0x03, 0x0D, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 19
	semantic_warp_event 42, 13, 0x03, 0x18, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 20
	semantic_warp_event 45, 13, 0x03, 0x11, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 21
	semantic_warp_event 48, 13, 0x03, 0x0C, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 22
	semantic_warp_event 42, 17, 0x03, 0x0B, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 23
	semantic_warp_event 45, 17, 0x03, 0x11, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 24
	semantic_warp_event 48, 17, 0x03, 0x13, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
AquaHideout_B1F_MapEvents: @ 0x0850DC44
	@ struct MapEvents
	semantic_map_events 9, 25, 0, 0, AquaHideout_B1F_ObjectEvents, AquaHideout_B1F_WarpEvents, 0, 0
AquaHideout_B2F_ObjectEvents: @ 0x0850DC58
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x75, 0x00, 23, 19, 0x03, 0x09, 0, 0, 0x0000, 0x0000, AquaHideout_B2F_EventScript_Matt, 0x039C
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x75, 0x00, 23, 10, 0x03, 0x2D, 4, 3, 0x0001, 0x0003, AquaHideout_B2F_EventScript_Grunt4, 0x039C
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 3, 13, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_082570D6, 0x0430
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x8D, 0x00, 19, 20, 0x01, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x03AF
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x76, 0x00, 7, 5, 0x03, 0x0A, 1, 1, 0x0001, 0x0005, AquaHideout_B2F_EventScript_Grunt6, 0x039C
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x75, 0x00, 13, 5, 0x03, 0x09, 1, 1, 0x0001, 0x0005, AquaHideout_B2F_EventScript_Grunt8, 0x039C
AquaHideout_B2F_WarpEvents: @ 0x0850DCE8
	@ WarpEvent 0
	semantic_warp_event 18, 1, 0x03, 0x01, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 1
	semantic_warp_event 12, 1, 0x03, 0x02, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 2
	semantic_warp_event 3, 3, 0x03, 0x03, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
	@ WarpEvent 3
	semantic_warp_event 31, 8, 0x03, 0x05, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 4
	semantic_warp_event 8, 8, 0x03, 0x08, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 5
	semantic_warp_event 5, 8, 0x03, 0x03, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 6
	semantic_warp_event 18, 13, 0x03, 0x07, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 7
	semantic_warp_event 12, 13, 0x03, 0x06, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 8
	semantic_warp_event 31, 17, 0x03, 0x04, MAP_NUM_AQUA_HIDEOUT_B2F, MAP_GROUP_AQUA_HIDEOUT_B2F
	@ WarpEvent 9
	semantic_warp_event 32, 20, 0x03, 0x04, MAP_NUM_AQUA_HIDEOUT_B1F, MAP_GROUP_AQUA_HIDEOUT_B1F
AquaHideout_B2F_CoordEvents: @ 0x0850DD38
	@ CoordEvent 0
	semantic_coord_event 28, 17, 0x03, 0x4001, 0x0000, AquaHideout_B2F_EventScript_MattNoticePlayer
	@ CoordEvent 1
	semantic_coord_event 28, 16, 0x03, 0x4001, 0x0000, AquaHideout_B2F_EventScript_MattNoticePlayer
AquaHideout_B2F_MapEvents: @ 0x0850DD58
	@ struct MapEvents
	semantic_map_events 6, 10, 2, 0, AquaHideout_B2F_ObjectEvents, AquaHideout_B2F_WarpEvents, AquaHideout_B2F_CoordEvents, 0
Underwater_SeafloorCavern_ObjectEvents: @ 0x0850DD6C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x64, 0x00, 5, 4, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Underwater_SeafloorCavern_EventScript_CheckStolenSub, 0x03D4
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x64, 0x00, 6, 4, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Underwater_SeafloorCavern_EventScript_CheckStolenSub, 0x03D4
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x64, 0x00, 7, 4, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Underwater_SeafloorCavern_EventScript_CheckStolenSub, 0x03D4
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x64, 0x00, 8, 4, 0x03, 0x4C, 1, 1, 0x0000, 0x0000, Underwater_SeafloorCavern_EventScript_CheckStolenSub, 0x03D4
Underwater_SeafloorCavern_WarpEvents: @ 0x0850DDCC
	@ WarpEvent 0
	semantic_warp_event 6, 7, 0x00, 0x00, MAP_NUM_UNDERWATER_ROUTE128, MAP_GROUP_UNDERWATER_ROUTE128
Underwater_SeafloorCavern_MapEvents: @ 0x0850DDD4
	@ struct MapEvents
	semantic_map_events 4, 1, 0, 0, Underwater_SeafloorCavern_ObjectEvents, Underwater_SeafloorCavern_WarpEvents, 0, 0
SeafloorCavern_Entrance_ObjectEvents: @ 0x0850DDE8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x75, 0x00, 10, 2, 0x03, 0x07, 1, 1, 0x0000, 0x0000, SeafloorCavern_Entrance_EventScript_Grunt, 0x03AD
SeafloorCavern_Entrance_WarpEvents: @ 0x0850DE00
	@ WarpEvent 0
	semantic_warp_event 10, 18, 0x03, 0x00, MAP_NUM_UNDERWATER_ROUTE128, MAP_GROUP_UNDERWATER_ROUTE128
	@ WarpEvent 1
	semantic_warp_event 10, 1, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM1, MAP_GROUP_SEAFLOOR_CAVERN_ROOM1
SeafloorCavern_Entrance_MapEvents: @ 0x0850DE10
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, SeafloorCavern_Entrance_ObjectEvents, SeafloorCavern_Entrance_WarpEvents, 0, 0
SeafloorCavern_Room1_ObjectEvents: @ 0x0850DE24
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x57, 0x00, 5, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x57, 0x00, 12, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x56, 0x00, 5, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0013
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x75, 0x00, 8, 6, 0x03, 0x01, 1, 1, 0x0001, 0x0002, SeafloorCavern_Room1_EventScript_Grunt1, 0x03B2
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x75, 0x00, 15, 10, 0x03, 0x10, 1, 1, 0x0001, 0x0003, SeafloorCavern_Room1_EventScript_Grunt2, 0x03B2
SeafloorCavern_Room1_WarpEvents: @ 0x0850DE9C
	@ WarpEvent 0
	semantic_warp_event 5, 18, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ENTRANCE, MAP_GROUP_SEAFLOOR_CAVERN_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 17, 13, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM5, MAP_GROUP_SEAFLOOR_CAVERN_ROOM5
	@ WarpEvent 2
	semantic_warp_event 6, 2, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM2, MAP_GROUP_SEAFLOOR_CAVERN_ROOM2
SeafloorCavern_Room1_MapEvents: @ 0x0850DEB4
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, SeafloorCavern_Room1_ObjectEvents, SeafloorCavern_Room1_WarpEvents, 0, 0
SeafloorCavern_Room2_ObjectEvents: @ 0x0850DEC8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x57, 0x00, 13, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x57, 0x00, 10, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0013
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x57, 0x00, 13, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x57, 0x00, 4, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0015
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x57, 0x00, 7, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0016
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x56, 0x00, 8, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0018
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x56, 0x00, 9, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0019
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x57, 0x00, 4, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0017
SeafloorCavern_Room2_WarpEvents: @ 0x0850DF88
	@ WarpEvent 0
	semantic_warp_event 10, 7, 0x03, 0x02, MAP_NUM_SEAFLOOR_CAVERN_ROOM1, MAP_GROUP_SEAFLOOR_CAVERN_ROOM1
	@ WarpEvent 1
	semantic_warp_event 4, 10, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM4, MAP_GROUP_SEAFLOOR_CAVERN_ROOM4
	@ WarpEvent 2
	semantic_warp_event 6, 1, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM6, MAP_GROUP_SEAFLOOR_CAVERN_ROOM6
	@ WarpEvent 3
	semantic_warp_event 11, 1, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM7, MAP_GROUP_SEAFLOOR_CAVERN_ROOM7
SeafloorCavern_Room2_MapEvents: @ 0x0850DFA8
	@ struct MapEvents
	semantic_map_events 8, 4, 0, 0, SeafloorCavern_Room2_ObjectEvents, SeafloorCavern_Room2_WarpEvents, 0, 0
SeafloorCavern_Room3_ObjectEvents: @ 0x0850DFBC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x57, 0x00, 13, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x57, 0x00, 11, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0014
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x57, 0x00, 12, 9, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0015
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x57, 0x00, 12, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0016
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x57, 0x00, 11, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0017
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x57, 0x00, 12, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0018
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x57, 0x00, 13, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0019
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x76, 0x00, 9, 5, 0x03, 0x09, 1, 1, 0x0001, 0x0006, SeafloorCavern_Room3_EventScript_Shelly, 0x03B2
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x75, 0x00, 5, 5, 0x03, 0x0A, 1, 1, 0x0001, 0x0004, SeafloorCavern_Room3_EventScript_Grunt5, 0x03B2
SeafloorCavern_Room3_WarpEvents: @ 0x0850E094
	@ WarpEvent 0
	semantic_warp_event 8, 1, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ROOM8, MAP_GROUP_SEAFLOOR_CAVERN_ROOM8
	@ WarpEvent 1
	semantic_warp_event 9, 13, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ROOM7, MAP_GROUP_SEAFLOOR_CAVERN_ROOM7
	@ WarpEvent 2
	semantic_warp_event 4, 15, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ROOM6, MAP_GROUP_SEAFLOOR_CAVERN_ROOM6
SeafloorCavern_Room3_MapEvents: @ 0x0850E0AC
	@ struct MapEvents
	semantic_map_events 9, 3, 0, 0, SeafloorCavern_Room3_ObjectEvents, SeafloorCavern_Room3_WarpEvents, 0, 0
SeafloorCavern_Room4_ObjectEvents: @ 0x0850E0C0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x75, 0x00, 5, 8, 0x03, 0x11, 1, 1, 0x0001, 0x0003, SeafloorCavern_Room4_EventScript_Grunt3, 0x03B2
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x76, 0x00, 5, 12, 0x03, 0x07, 1, 1, 0x0001, 0x0003, SeafloorCavern_Room4_EventScript_Grunt4, 0x03B2
SeafloorCavern_Room4_WarpEvents: @ 0x0850E0F0
	@ WarpEvent 0
	semantic_warp_event 13, 1, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ROOM2, MAP_GROUP_SEAFLOOR_CAVERN_ROOM2
	@ WarpEvent 1
	semantic_warp_event 4, 1, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ROOM5, MAP_GROUP_SEAFLOOR_CAVERN_ROOM5
	@ WarpEvent 2
	semantic_warp_event 9, 10, 0x03, 0x02, MAP_NUM_SEAFLOOR_CAVERN_ROOM5, MAP_GROUP_SEAFLOOR_CAVERN_ROOM5
	@ WarpEvent 3
	semantic_warp_event 10, 15, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ENTRANCE, MAP_GROUP_SEAFLOOR_CAVERN_ENTRANCE
SeafloorCavern_Room4_MapEvents: @ 0x0850E110
	@ struct MapEvents
	semantic_map_events 2, 4, 0, 0, SeafloorCavern_Room4_ObjectEvents, SeafloorCavern_Room4_WarpEvents, 0, 0
SeafloorCavern_Room5_ObjectEvents: @ 0x0850E124
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x57, 0x00, 3, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x57, 0x00, 4, 11, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x57, 0x00, 11, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0013
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x56, 0x00, 3, 13, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0015
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x56, 0x00, 13, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0016
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x57, 0x00, 12, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0014
SeafloorCavern_Room5_WarpEvents: @ 0x0850E1B4
	@ WarpEvent 0
	semantic_warp_event 4, 1, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ROOM1, MAP_GROUP_SEAFLOOR_CAVERN_ROOM1
	@ WarpEvent 1
	semantic_warp_event 15, 12, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ROOM4, MAP_GROUP_SEAFLOOR_CAVERN_ROOM4
	@ WarpEvent 2
	semantic_warp_event 7, 17, 0x03, 0x02, MAP_NUM_SEAFLOOR_CAVERN_ROOM4, MAP_GROUP_SEAFLOOR_CAVERN_ROOM4
SeafloorCavern_Room5_MapEvents: @ 0x0850E1CC
	@ struct MapEvents
	semantic_map_events 6, 3, 0, 0, SeafloorCavern_Room5_ObjectEvents, SeafloorCavern_Room5_WarpEvents, 0, 0
SeafloorCavern_Room6_WarpEvents: @ 0x0850E1E0
	@ WarpEvent 0
	semantic_warp_event 11, 21, 0x03, 0x02, MAP_NUM_SEAFLOOR_CAVERN_ROOM2, MAP_GROUP_SEAFLOOR_CAVERN_ROOM2
	@ WarpEvent 1
	semantic_warp_event 4, 1, 0x03, 0x02, MAP_NUM_SEAFLOOR_CAVERN_ROOM3, MAP_GROUP_SEAFLOOR_CAVERN_ROOM3
	@ WarpEvent 2
	semantic_warp_event 14, 8, 0x01, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ENTRANCE, MAP_GROUP_SEAFLOOR_CAVERN_ENTRANCE
SeafloorCavern_Room6_MapEvents: @ 0x0850E1F8
	@ struct MapEvents
	semantic_map_events 0, 3, 0, 0, 0, SeafloorCavern_Room6_WarpEvents, 0, 0
SeafloorCavern_Room7_WarpEvents: @ 0x0850E20C
	@ WarpEvent 0
	semantic_warp_event 3, 23, 0x03, 0x03, MAP_NUM_SEAFLOOR_CAVERN_ROOM2, MAP_GROUP_SEAFLOOR_CAVERN_ROOM2
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x01, MAP_NUM_SEAFLOOR_CAVERN_ROOM3, MAP_GROUP_SEAFLOOR_CAVERN_ROOM3
SeafloorCavern_Room7_MapEvents: @ 0x0850E21C
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, SeafloorCavern_Room7_WarpEvents, 0, 0
SeafloorCavern_Room8_ObjectEvents: @ 0x0850E230
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x57, 0x00, 4, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x57, 0x00, 5, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x57, 0x00, 6, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0013
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x57, 0x00, 3, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0014
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x57, 0x00, 7, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0015
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x57, 0x00, 4, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0016
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x57, 0x00, 5, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0017
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x57, 0x00, 6, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0018
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x57, 0x00, 3, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0019
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x57, 0x00, 4, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x001A
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x57, 0x00, 6, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x001B
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x57, 0x00, 7, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x001C
SeafloorCavern_Room8_WarpEvents: @ 0x0850E350
	@ WarpEvent 0
	semantic_warp_event 5, 2, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM9, MAP_GROUP_SEAFLOOR_CAVERN_ROOM9
	@ WarpEvent 1
	semantic_warp_event 5, 12, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM3, MAP_GROUP_SEAFLOOR_CAVERN_ROOM3
SeafloorCavern_Room8_MapEvents: @ 0x0850E360
	@ struct MapEvents
	semantic_map_events 12, 2, 0, 0, SeafloorCavern_Room8_ObjectEvents, SeafloorCavern_Room8_WarpEvents, 0, 0
SeafloorCavern_Room9_ObjectEvents: @ 0x0850E374
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC5, 0x00, 17, 38, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x035B
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xC3, 0x00, 9, 42, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x033C
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xC4, 0x00, 9, 42, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x033D
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x77, 0x00, 8, 41, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x033F
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x78, 0x00, 8, 42, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x033F
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 14, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257158, 0x0442
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xCD, 0x00, 17, 38, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x02DD
SeafloorCavern_Room9_WarpEvents: @ 0x0850E41C
	@ WarpEvent 0
	semantic_warp_event 5, 4, 0x03, 0x00, MAP_NUM_SEAFLOOR_CAVERN_ROOM8, MAP_GROUP_SEAFLOOR_CAVERN_ROOM8
SeafloorCavern_Room9_CoordEvents: @ 0x0850E424
	@ CoordEvent 0
	semantic_coord_event 17, 42, 0x03, 0x40A2, 0x0000, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre
SeafloorCavern_Room9_MapEvents: @ 0x0850E434
	@ struct MapEvents
	semantic_map_events 7, 1, 1, 0, SeafloorCavern_Room9_ObjectEvents, SeafloorCavern_Room9_WarpEvents, SeafloorCavern_Room9_CoordEvents, 0
CaveOfOrigin_Entrance_WarpEvents: @ 0x0850E448
	@ WarpEvent 0
	semantic_warp_event 9, 20, 0x03, 0x03, MAP_NUM_SOOTOPOLIS_CITY, MAP_GROUP_SOOTOPOLIS_CITY
	@ WarpEvent 1
	semantic_warp_event 9, 5, 0x03, 0x00, MAP_NUM_CAVE_OF_ORIGIN_1_F, MAP_GROUP_CAVE_OF_ORIGIN_1_F
CaveOfOrigin_Entrance_MapEvents: @ 0x0850E458
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, CaveOfOrigin_Entrance_WarpEvents, 0, 0
CaveOfOrigin_1F_WarpEvents: @ 0x0850E46C
	@ WarpEvent 0
	semantic_warp_event 11, 17, 0x03, 0x01, MAP_NUM_CAVE_OF_ORIGIN_ENTRANCE, MAP_GROUP_CAVE_OF_ORIGIN_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 14, 5, 0x03, 0x00, MAP_NUM_CAVE_OF_ORIGIN_B1F, MAP_GROUP_CAVE_OF_ORIGIN_B1F
CaveOfOrigin_1F_MapEvents: @ 0x0850E47C
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, CaveOfOrigin_1F_WarpEvents, 0, 0
CaveOfOrigin_UnusedRubySapphireMap1_WarpEvents: @ 0x0850E490
	@ WarpEvent 0
	semantic_warp_event 13, 5, 0x03, 0x01, MAP_NUM_CAVE_OF_ORIGIN_1_F, MAP_GROUP_CAVE_OF_ORIGIN_1_F
	@ WarpEvent 1
	semantic_warp_event 5, 11, 0x03, 0x00, MAP_NUM_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP2, MAP_GROUP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP2
CaveOfOrigin_UnusedRubySapphireMap1_MapEvents: @ 0x0850E4A0
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, CaveOfOrigin_UnusedRubySapphireMap1_WarpEvents, 0, 0
CaveOfOrigin_UnusedRubySapphireMap2_WarpEvents: @ 0x0850E4B4
	@ WarpEvent 0
	semantic_warp_event 5, 10, 0x03, 0x01, MAP_NUM_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP1, MAP_GROUP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP1
	@ WarpEvent 1
	semantic_warp_event 8, 14, 0x03, 0x00, MAP_NUM_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP3, MAP_GROUP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP3
CaveOfOrigin_UnusedRubySapphireMap2_MapEvents: @ 0x0850E4C4
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, CaveOfOrigin_UnusedRubySapphireMap2_WarpEvents, 0, 0
CaveOfOrigin_UnusedRubySapphireMap3_WarpEvents: @ 0x0850E4D8
	@ WarpEvent 0
	semantic_warp_event 7, 14, 0x03, 0x01, MAP_NUM_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP2, MAP_GROUP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP2
	@ WarpEvent 1
	semantic_warp_event 12, 6, 0x03, 0x00, MAP_NUM_CAVE_OF_ORIGIN_B1F, MAP_GROUP_CAVE_OF_ORIGIN_B1F
CaveOfOrigin_UnusedRubySapphireMap3_MapEvents: @ 0x0850E4E8
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, CaveOfOrigin_UnusedRubySapphireMap3_WarpEvents, 0, 0
CaveOfOrigin_B1F_ObjectEvents: @ 0x0850E4FC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x85, 0x00, 9, 13, 0x03, 0x07, 1, 1, 0x0000, 0x0000, CaveOfOrigin_B1F_EventScript_Wallace, 0x0334
CaveOfOrigin_B1F_WarpEvents: @ 0x0850E514
	@ WarpEvent 0
	semantic_warp_event 9, 3, 0x03, 0x01, MAP_NUM_CAVE_OF_ORIGIN_1_F, MAP_GROUP_CAVE_OF_ORIGIN_1_F
CaveOfOrigin_B1F_MapEvents: @ 0x0850E51C
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, CaveOfOrigin_B1F_ObjectEvents, CaveOfOrigin_B1F_WarpEvents, 0, 0
VictoryRoad_1F_ObjectEvents: @ 0x0850E530
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x21, 0x00, 33, 22, 0x03, 0x08, 0, 0, 0x0001, 0x0003, VictoryRoad_1F_EventScript_Edgar, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x22, 0x00, 6, 15, 0x04, 0x09, 0, 0, 0x0001, 0x0004, VictoryRoad_1F_EventScript_Hope, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 27, 34, 0x03, 0x12, 0, 0, 0x0001, 0x0003, VictoryRoad_1F_EventScript_Albert, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x87, 0x00, 12, 25, 0x04, 0x08, 1, 1, 0x0000, 0x0000, VictoryRoad_1F_EventScript_EntranceWally, 0x035A
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 40, 26, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082571DA, 0x043C
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 37, 39, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082571E7, 0x043D
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x87, 0x00, 31, 9, 0x03, 0x01, 1, 1, 0x0000, 0x0000, VictoryRoad_1F_EventScript_ExitWally, 0x02EF
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x22, 0x00, 29, 17, 0x03, 0x0A, 1, 1, 0x0001, 0x0002, VictoryRoad_1F_EventScript_Katelynn, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x21, 0x00, 32, 17, 0x03, 0x09, 1, 1, 0x0001, 0x0002, VictoryRoad_1F_EventScript_Quincy, 0x0000
VictoryRoad_1F_WarpEvents: @ 0x0850E608
	@ WarpEvent 0
	semantic_warp_event 15, 40, 0x03, 0x02, MAP_NUM_EVER_GRANDE_CITY, MAP_GROUP_EVER_GRANDE_CITY
	@ WarpEvent 1
	semantic_warp_event 39, 5, 0x03, 0x03, MAP_NUM_EVER_GRANDE_CITY, MAP_GROUP_EVER_GRANDE_CITY
	@ WarpEvent 2
	semantic_warp_event 21, 32, 0x03, 0x05, MAP_NUM_VICTORY_ROAD_B1_F, MAP_GROUP_VICTORY_ROAD_B1_F
	@ WarpEvent 3
	semantic_warp_event 42, 38, 0x04, 0x02, MAP_NUM_VICTORY_ROAD_B1_F, MAP_GROUP_VICTORY_ROAD_B1_F
	@ WarpEvent 4
	semantic_warp_event 9, 14, 0x04, 0x04, MAP_NUM_VICTORY_ROAD_B1_F, MAP_GROUP_VICTORY_ROAD_B1_F
VictoryRoad_1F_CoordEvents: @ 0x0850E630
	@ CoordEvent 0
	semantic_coord_event 2, 23, 0x04, 0x40C3, 0x0000, VictoryRoad_1F_EventScript_WallyBattleTrigger1
	@ CoordEvent 1
	semantic_coord_event 3, 23, 0x04, 0x40C3, 0x0000, VictoryRoad_1F_EventScript_WallyBattleTrigger2
VictoryRoad_1F_BgEvents: @ 0x0850E650
	@ BgEvent 0
	semantic_bg_hidden_item_event 30, 39, 0x04, ITEM_ULTRA_BALL, 0x0051
VictoryRoad_1F_MapEvents: @ 0x0850E65C
	@ struct MapEvents
	semantic_map_events 9, 5, 2, 1, VictoryRoad_1F_ObjectEvents, VictoryRoad_1F_WarpEvents, VictoryRoad_1F_CoordEvents, VictoryRoad_1F_BgEvents
VictoryRoad_B1F_ObjectEvents: @ 0x0850E670
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x57, 0x00, 20, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0013
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x57, 0x00, 21, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0014
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x57, 0x00, 4, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x57, 0x00, 9, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x57, 0x00, 20, 26, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0017
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x57, 0x00, 21, 25, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0016
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x57, 0x00, 35, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x001E
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x56, 0x00, 19, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x0019
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x56, 0x00, 20, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x001A
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x56, 0x00, 18, 12, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x001B
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x56, 0x00, 20, 25, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x001C
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x56, 0x00, 21, 26, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_RockSmash, 0x001D
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x57, 0x00, 34, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x001F
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x21, 0x00, 37, 12, 0x03, 0x09, 0, 0, 0x0001, 0x0003, VictoryRoad_B1F_EventScript_Samuel, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x22, 0x00, 26, 16, 0x03, 0x07, 0, 0, 0x0001, 0x0004, VictoryRoad_B1F_EventScript_Shannon, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x22, 0x00, 5, 21, 0x03, 0x09, 0, 0, 0x0001, 0x0002, VictoryRoad_B1F_EventScript_Michelle, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x56, 0x00, 34, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0015
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x3B, 0x00, 42, 8, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082571F4, 0x043E
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x3B, 0x00, 32, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257201, 0x043F
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x21, 0x00, 14, 16, 0x03, 0x08, 1, 1, 0x0001, 0x0004, VictoryRoad_B1F_EventScript_Mitchell, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x22, 0x00, 14, 20, 0x03, 0x10, 1, 1, 0x0001, 0x0003, VictoryRoad_B1F_EventScript_Halle, 0x0000
VictoryRoad_B1F_WarpEvents: @ 0x0850E868
	@ WarpEvent 0
	semantic_warp_event 30, 25, 0x03, 0x00, MAP_NUM_VICTORY_ROAD_B2_F, MAP_GROUP_VICTORY_ROAD_B2_F
	@ WarpEvent 1
	semantic_warp_event 17, 16, 0x03, 0x02, MAP_NUM_VICTORY_ROAD_B2_F, MAP_GROUP_VICTORY_ROAD_B2_F
	@ WarpEvent 2
	semantic_warp_event 42, 25, 0x03, 0x03, MAP_NUM_VICTORY_ROAD_1_F, MAP_GROUP_VICTORY_ROAD_1_F
	@ WarpEvent 3
	semantic_warp_event 42, 2, 0x04, 0x01, MAP_NUM_VICTORY_ROAD_B2_F, MAP_GROUP_VICTORY_ROAD_B2_F
	@ WarpEvent 4
	semantic_warp_event 8, 3, 0x03, 0x04, MAP_NUM_VICTORY_ROAD_1_F, MAP_GROUP_VICTORY_ROAD_1_F
	@ WarpEvent 5
	semantic_warp_event 20, 21, 0x03, 0x02, MAP_NUM_VICTORY_ROAD_1_F, MAP_GROUP_VICTORY_ROAD_1_F
	@ WarpEvent 6
	semantic_warp_event 5, 26, 0x03, 0x03, MAP_NUM_VICTORY_ROAD_B2_F, MAP_GROUP_VICTORY_ROAD_B2_F
VictoryRoad_B1F_MapEvents: @ 0x0850E8A0
	@ struct MapEvents
	semantic_map_events 21, 7, 0, 0, VictoryRoad_B1F_ObjectEvents, VictoryRoad_B1F_WarpEvents, 0, 0
VictoryRoad_B2F_ObjectEvents: @ 0x0850E8B4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x21, 0x00, 15, 6, 0x03, 0x08, 1, 1, 0x0001, 0x0002, VictoryRoad_B2F_EventScript_Vito, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x21, 0x00, 43, 14, 0x03, 0x07, 1, 1, 0x0001, 0x0004, VictoryRoad_B2F_EventScript_Owen, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x22, 0x00, 2, 17, 0x03, 0x08, 1, 1, 0x0001, 0x0002, VictoryRoad_B2F_EventScript_Caroline, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x22, 0x00, 35, 22, 0x03, 0x09, 1, 1, 0x0001, 0x0002, VictoryRoad_B2F_EventScript_Julie, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 13, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825720E, 0x0440
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x22, 0x00, 25, 18, 0x04, 0x08, 1, 1, 0x0001, 0x0002, VictoryRoad_B2F_EventScript_Dianne, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x21, 0x00, 25, 21, 0x04, 0x07, 1, 1, 0x0001, 0x0002, VictoryRoad_B2F_EventScript_Felix, 0x0000
VictoryRoad_B2F_WarpEvents: @ 0x0850E95C
	@ WarpEvent 0
	semantic_warp_event 30, 25, 0x03, 0x00, MAP_NUM_VICTORY_ROAD_B1_F, MAP_GROUP_VICTORY_ROAD_B1_F
	@ WarpEvent 1
	semantic_warp_event 43, 2, 0x03, 0x03, MAP_NUM_VICTORY_ROAD_B1_F, MAP_GROUP_VICTORY_ROAD_B1_F
	@ WarpEvent 2
	semantic_warp_event 19, 12, 0x03, 0x01, MAP_NUM_VICTORY_ROAD_B1_F, MAP_GROUP_VICTORY_ROAD_B1_F
	@ WarpEvent 3
	semantic_warp_event 5, 26, 0x03, 0x06, MAP_NUM_VICTORY_ROAD_B1_F, MAP_GROUP_VICTORY_ROAD_B1_F
VictoryRoad_B2F_BgEvents: @ 0x0850E97C
	@ BgEvent 0
	semantic_bg_hidden_item_event 28, 5, 0x03, ITEM_ELIXIR, 0x0052
	@ BgEvent 1
	semantic_bg_hidden_item_event 37, 1, 0x03, ITEM_MAX_REPEL, 0x0053
VictoryRoad_B2F_MapEvents: @ 0x0850E994
	@ struct MapEvents
	semantic_map_events 7, 4, 0, 2, VictoryRoad_B2F_ObjectEvents, VictoryRoad_B2F_WarpEvents, 0, VictoryRoad_B2F_BgEvents
ShoalCave_LowTideEntranceRoom_ObjectEvents: @ 0x0850E9A8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 30, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257117, 0x0439
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x15, 0x00, 18, 15, 0x03, 0x09, 1, 1, 0x0000, 0x0000, ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert, 0x0000
ShoalCave_LowTideEntranceRoom_WarpEvents: @ 0x0850E9D8
	@ WarpEvent 0
	semantic_warp_event 20, 30, 0x03, 0x00, MAP_NUM_ROUTE125, MAP_GROUP_ROUTE125
	@ WarpEvent 1
	semantic_warp_event 19, 5, 0x03, 0x00, MAP_NUM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	@ WarpEvent 2
	semantic_warp_event 6, 2, 0x03, 0x06, MAP_NUM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	@ WarpEvent 3
	semantic_warp_event 27, 2, 0x03, 0x07, MAP_NUM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
ShoalCave_LowTideEntranceRoom_MapEvents: @ 0x0850E9F8
	@ struct MapEvents
	semantic_map_events 2, 4, 0, 0, ShoalCave_LowTideEntranceRoom_ObjectEvents, ShoalCave_LowTideEntranceRoom_WarpEvents, 0, 0
ShoalCave_LowTideInnerRoom_ObjectEvents: @ 0x0850EA0C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 26, 14, 0x05, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257124, 0x043A
ShoalCave_LowTideInnerRoom_WarpEvents: @ 0x0850EA24
	@ WarpEvent 0
	semantic_warp_event 34, 29, 0x03, 0x01, MAP_NUM_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
	@ WarpEvent 1
	semantic_warp_event 38, 15, 0x03, 0x00, MAP_NUM_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM
	@ WarpEvent 2
	semantic_warp_event 42, 4, 0x03, 0x01, MAP_NUM_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM
	@ WarpEvent 3
	semantic_warp_event 19, 14, 0x04, 0x00, MAP_NUM_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM
	@ WarpEvent 4
	semantic_warp_event 15, 19, 0x03, 0x01, MAP_NUM_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM
	@ WarpEvent 5
	semantic_warp_event 30, 25, 0x03, 0x02, MAP_NUM_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM
	@ WarpEvent 6
	semantic_warp_event 14, 33, 0x05, 0x02, MAP_NUM_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
	@ WarpEvent 7
	semantic_warp_event 40, 33, 0x05, 0x03, MAP_NUM_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
ShoalCave_LowTideInnerRoom_BgEvents: @ 0x0850EA64
	@ BgEvent 0
	semantic_bg_script_event 31, 8, 0x05, 0x00, ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1
	@ BgEvent 1
	semantic_bg_script_event 14, 26, 0x03, 0x00, ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2
	@ BgEvent 2
	semantic_bg_script_event 41, 20, 0x05, 0x00, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1
	@ BgEvent 3
	semantic_bg_script_event 41, 10, 0x05, 0x00, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2
	@ BgEvent 4
	semantic_bg_script_event 6, 9, 0x03, 0x00, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3
	@ BgEvent 5
	semantic_bg_script_event 16, 13, 0x05, 0x00, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4
ShoalCave_LowTideInnerRoom_MapEvents: @ 0x0850EAAC
	@ struct MapEvents
	semantic_map_events 1, 8, 0, 6, ShoalCave_LowTideInnerRoom_ObjectEvents, ShoalCave_LowTideInnerRoom_WarpEvents, 0, ShoalCave_LowTideInnerRoom_BgEvents
ShoalCave_LowTideStairsRoom_ObjectEvents: @ 0x0850EAC0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 13, 12, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257131, 0x043B
ShoalCave_LowTideStairsRoom_WarpEvents: @ 0x0850EAD8
	@ WarpEvent 0
	semantic_warp_event 3, 12, 0x03, 0x01, MAP_NUM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	@ WarpEvent 1
	semantic_warp_event 7, 4, 0x03, 0x02, MAP_NUM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
ShoalCave_LowTideStairsRoom_BgEvents: @ 0x0850EAE8
	@ BgEvent 0
	semantic_bg_script_event 11, 11, 0x03, 0x00, ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3
ShoalCave_LowTideStairsRoom_MapEvents: @ 0x0850EAF4
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 1, ShoalCave_LowTideStairsRoom_ObjectEvents, ShoalCave_LowTideStairsRoom_WarpEvents, 0, ShoalCave_LowTideStairsRoom_BgEvents
ShoalCave_LowTideLowerRoom_ObjectEvents: @ 0x0850EB08
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x57, 0x00, 25, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2C, 0x00, 11, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, ShoalCave_LowTideLowerRoom_EventScript_BlackBelt, 0x0000
ShoalCave_LowTideLowerRoom_WarpEvents: @ 0x0850EB38
	@ WarpEvent 0
	semantic_warp_event 7, 2, 0x03, 0x03, MAP_NUM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	@ WarpEvent 1
	semantic_warp_event 2, 6, 0x03, 0x04, MAP_NUM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	@ WarpEvent 2
	semantic_warp_event 19, 11, 0x03, 0x05, MAP_NUM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	@ WarpEvent 3
	semantic_warp_event 28, 11, 0x03, 0x00, MAP_NUM_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM
ShoalCave_LowTideLowerRoom_BgEvents: @ 0x0850EB58
	@ BgEvent 0
	semantic_bg_script_event 18, 2, 0x03, 0x00, ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4
ShoalCave_LowTideLowerRoom_MapEvents: @ 0x0850EB64
	@ struct MapEvents
	semantic_map_events 2, 4, 0, 1, ShoalCave_LowTideLowerRoom_ObjectEvents, ShoalCave_LowTideLowerRoom_WarpEvents, 0, ShoalCave_LowTideLowerRoom_BgEvents
	.globl ShoalCave_HighTideEntranceRoom_MapEvents
ShoalCave_HighTideEntranceRoom_MapEvents: @ 0x0850EB78
	@ struct MapEvents (empty)
	semantic_map_events 0, 0, 0, 0, 0, 0, 0, 0
	.globl ShoalCave_HighTideInnerRoom_MapEvents
ShoalCave_HighTideInnerRoom_MapEvents: @ 0x0850EB8C
	@ struct MapEvents (empty)
	semantic_map_events 0, 0, 0, 0, 0, 0, 0, 0
NewMauville_Entrance_WarpEvents: @ 0x0850EBA0
	@ WarpEvent 0
	semantic_warp_event 4, 6, 0x03, 0x00, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 1
	semantic_warp_event 4, 1, 0x03, 0x00, MAP_NUM_NEW_MAUVILLE_INSIDE, MAP_GROUP_NEW_MAUVILLE_INSIDE
NewMauville_Entrance_CoordEvents: @ 0x0850EBB0
	@ CoordEvent 0
	semantic_coord_event 4, 2, 0x03, 0x40BA, 0x0000, NewMauville_Entrance_EventScript_Door
NewMauville_Entrance_MapEvents: @ 0x0850EBC0
	@ struct MapEvents
	semantic_map_events 0, 2, 1, 0, 0, NewMauville_Entrance_WarpEvents, NewMauville_Entrance_CoordEvents, 0
NewMauville_Inside_ObjectEvents: @ 0x0850EBD4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 32, 25, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256F43, 0x0433
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 16, 22, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256F50, 0x0434
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 39, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256F5D, 0x0456
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 17, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256F6A, 0x0462
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 2, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256F77, 0x0463
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 25, 18, 0x03, 0x01, 1, 1, 0x0000, 0x0000, NewMauville_Inside_EventScript_Voltorb1, 0x03CE
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 6, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, NewMauville_Inside_EventScript_Voltorb2, 0x03CF
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3B, 0x00, 13, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, NewMauville_Inside_EventScript_Voltorb3, 0x03D0
NewMauville_Inside_WarpEvents: @ 0x0850EC94
	@ WarpEvent 0
	semantic_warp_event 32, 33, 0x03, 0x01, MAP_NUM_NEW_MAUVILLE_ENTRANCE, MAP_GROUP_NEW_MAUVILLE_ENTRANCE
NewMauville_Inside_CoordEvents: @ 0x0850EC9C
	@ CoordEvent 0
	semantic_coord_event 30, 38, 0x03, 0x4001, 0x0000, NewMauville_Inside_EventScript_BlueButton
	@ CoordEvent 1
	semantic_coord_event 18, 36, 0x03, 0x4002, 0x0000, NewMauville_Inside_EventScript_GreenButton
	@ CoordEvent 2
	semantic_coord_event 4, 26, 0x03, 0x4001, 0x0000, NewMauville_Inside_EventScript_BlueButton
	@ CoordEvent 3
	semantic_coord_event 16, 22, 0x03, 0x4001, 0x0000, NewMauville_Inside_EventScript_BlueButton
	@ CoordEvent 4
	semantic_coord_event 25, 18, 0x03, 0x4002, 0x0000, NewMauville_Inside_EventScript_GreenButton
	@ CoordEvent 5
	semantic_coord_event 2, 11, 0x03, 0x4002, 0x0000, NewMauville_Inside_EventScript_GreenButton
	@ CoordEvent 6
	semantic_coord_event 6, 11, 0x03, 0x4001, 0x0000, NewMauville_Inside_EventScript_BlueButton
	@ CoordEvent 7
	semantic_coord_event 13, 10, 0x03, 0x4001, 0x0000, NewMauville_Inside_EventScript_BlueButton
	@ CoordEvent 8
	semantic_coord_event 17, 10, 0x03, 0x4002, 0x0000, NewMauville_Inside_EventScript_GreenButton
	@ CoordEvent 9
	semantic_coord_event 33, 6, 0x03, 0x40BA, 0x0001, NewMauville_Inside_EventScript_RedButton
NewMauville_Inside_BgEvents: @ 0x0850ED3C
	@ BgEvent 0
	semantic_bg_script_event 32, 4, 0x03, 0x00, NewMauville_Inside_EventScript_Generator
	@ BgEvent 1
	semantic_bg_script_event 32, 3, 0x03, 0x00, NewMauville_Inside_EventScript_Generator
	@ BgEvent 2
	semantic_bg_script_event 32, 2, 0x00, 0x00, NewMauville_Inside_EventScript_Generator
	@ BgEvent 3
	semantic_bg_script_event 33, 4, 0x03, 0x00, NewMauville_Inside_EventScript_Generator
	@ BgEvent 4
	semantic_bg_script_event 34, 4, 0x03, 0x00, NewMauville_Inside_EventScript_Generator
	@ BgEvent 5
	semantic_bg_script_event 35, 4, 0x03, 0x00, NewMauville_Inside_EventScript_Generator
	@ BgEvent 6
	semantic_bg_script_event 35, 3, 0x03, 0x00, NewMauville_Inside_EventScript_Generator
	@ BgEvent 7
	semantic_bg_script_event 35, 2, 0x00, 0x00, NewMauville_Inside_EventScript_Generator
NewMauville_Inside_MapEvents: @ 0x0850ED9C
	@ struct MapEvents
	semantic_map_events 8, 1, 10, 8, NewMauville_Inside_ObjectEvents, NewMauville_Inside_WarpEvents, NewMauville_Inside_CoordEvents, NewMauville_Inside_BgEvents
AbandonedShip_Deck_WarpEvents: @ 0x0850EDB0
	@ WarpEvent 0
	semantic_warp_event 13, 15, 0x03, 0x00, MAP_NUM_ROUTE108, MAP_GROUP_ROUTE108
	@ WarpEvent 1
	semantic_warp_event 14, 15, 0x03, 0x00, MAP_NUM_ROUTE108, MAP_GROUP_ROUTE108
	@ WarpEvent 2
	semantic_warp_event 13, 9, 0x03, 0x01, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 3
	semantic_warp_event 8, 9, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 4
	semantic_warp_event 12, 5, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_CAPTAINS_OFFICE, MAP_GROUP_ABANDONED_SHIP_CAPTAINS_OFFICE
AbandonedShip_Deck_MapEvents: @ 0x0850EDD8
	@ struct MapEvents
	semantic_map_events 0, 5, 0, 0, 0, AbandonedShip_Deck_WarpEvents, 0, 0
AbandonedShip_Corridors_1F_ObjectEvents: @ 0x0850EDEC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x23, 0x00, 17, 7, 0x03, 0x02, 1, 1, 0x0000, 0x0000, AbandonedShip_Corridors_1F_EventScript_Youngster, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x36, 0x00, 5, 10, 0x03, 0x2D, 4, 7, 0x0001, 0x0003, AbandonedShip_Corridors_1F_EventScript_Charlie, 0x0000
AbandonedShip_Corridors_1F_WarpEvents: @ 0x0850EE1C
	@ WarpEvent 0
	semantic_warp_event 9, 11, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_DECK, MAP_GROUP_ABANDONED_SHIP_DECK
	@ WarpEvent 1
	semantic_warp_event 8, 11, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_DECK, MAP_GROUP_ABANDONED_SHIP_DECK
	@ WarpEvent 2
	semantic_warp_event 0, 11, 0x03, 0x03, MAP_NUM_ABANDONED_SHIP_DECK, MAP_GROUP_ABANDONED_SHIP_DECK
	@ WarpEvent 3
	semantic_warp_event 1, 11, 0x03, 0x03, MAP_NUM_ABANDONED_SHIP_DECK, MAP_GROUP_ABANDONED_SHIP_DECK
	@ WarpEvent 4
	semantic_warp_event 11, 9, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_ROOMS_1F, MAP_GROUP_ABANDONED_SHIP_ROOMS_1F
	@ WarpEvent 5
	semantic_warp_event 14, 9, 0x03, 0x03, MAP_NUM_ABANDONED_SHIP_ROOMS_1F, MAP_GROUP_ABANDONED_SHIP_ROOMS_1F
	@ WarpEvent 6
	semantic_warp_event 11, 3, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_ROOMS_1F, MAP_GROUP_ABANDONED_SHIP_ROOMS_1F
	@ WarpEvent 7
	semantic_warp_event 14, 3, 0x03, 0x04, MAP_NUM_ABANDONED_SHIP_ROOMS_1F, MAP_GROUP_ABANDONED_SHIP_ROOMS_1F
	@ WarpEvent 8
	semantic_warp_event 3, 9, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_ROOMS2_1F, MAP_GROUP_ABANDONED_SHIP_ROOMS2_1F
	@ WarpEvent 9
	semantic_warp_event 16, 2, 0x03, 0x07, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
	@ WarpEvent 10
	semantic_warp_event 5, 2, 0x03, 0x06, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
	@ WarpEvent 11
	semantic_warp_event 3, 3, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_ROOMS2_1F, MAP_GROUP_ABANDONED_SHIP_ROOMS2_1F
AbandonedShip_Corridors_1F_MapEvents: @ 0x0850EE7C
	@ struct MapEvents
	semantic_map_events 2, 12, 0, 0, AbandonedShip_Corridors_1F_ObjectEvents, AbandonedShip_Corridors_1F_WarpEvents, 0, 0
AbandonedShip_Rooms_1F_ObjectEvents: @ 0x0850EE90
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x30, 0x00, 12, 5, 0x03, 0x02, 1, 1, 0x0000, 0x0000, AbandonedShip_Rooms_1F_EventScript_Gentleman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 4, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256F84, 0x0447
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2D, 0x00, 10, 11, 0x03, 0x08, 1, 1, 0x0001, 0x0004, AbandonedShip_Rooms_1F_EventScript_Thalia, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x23, 0x00, 10, 16, 0x03, 0x10, 1, 1, 0x0001, 0x0004, AbandonedShip_Rooms_1F_EventScript_Demetrius, 0x0000
AbandonedShip_Rooms_1F_WarpEvents: @ 0x0850EEF0
	@ WarpEvent 0
	semantic_warp_event 4, 16, 0x03, 0x04, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 1
	semantic_warp_event 5, 16, 0x03, 0x04, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 2
	semantic_warp_event 4, 1, 0x03, 0x06, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 3
	semantic_warp_event 13, 16, 0x03, 0x05, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 4
	semantic_warp_event 13, 1, 0x03, 0x07, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 5
	semantic_warp_event 14, 16, 0x03, 0x05, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
AbandonedShip_Rooms_1F_MapEvents: @ 0x0850EF20
	@ struct MapEvents
	semantic_map_events 4, 6, 0, 0, AbandonedShip_Rooms_1F_ObjectEvents, AbandonedShip_Rooms_1F_WarpEvents, 0, 0
AbandonedShip_Corridors_B1F_ObjectEvents: @ 0x0850EF34
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x36, 0x00, 2, 8, 0x03, 0x02, 1, 1, 0x0000, 0x0000, AbandonedShip_Corridors_B1F_EventScript_TuberM, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x31, 0x00, 9, 6, 0x03, 0x0E, 0, 0, 0x0001, 0x0004, AbandonedShip_Corridors_B1F_EventScript_Duncan, 0x0000
AbandonedShip_Corridors_B1F_WarpEvents: @ 0x0850EF64
	@ WarpEvent 0
	semantic_warp_event 6, 4, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_ROOMS2_B1F, MAP_GROUP_ABANDONED_SHIP_ROOMS2_B1F
	@ WarpEvent 1
	semantic_warp_event 3, 4, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_ROOMS2_B1F, MAP_GROUP_ABANDONED_SHIP_ROOMS2_B1F
	@ WarpEvent 2
	semantic_warp_event 5, 7, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_ROOMS_B1_F, MAP_GROUP_ABANDONED_SHIP_ROOMS_B1_F
	@ WarpEvent 3
	semantic_warp_event 8, 7, 0x03, 0x01, MAP_NUM_ABANDONED_SHIP_ROOMS_B1_F, MAP_GROUP_ABANDONED_SHIP_ROOMS_B1_F
	@ WarpEvent 4
	semantic_warp_event 11, 7, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_ROOMS_B1_F, MAP_GROUP_ABANDONED_SHIP_ROOMS_B1_F
	@ WarpEvent 5
	semantic_warp_event 11, 4, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_ROOM_B1F, MAP_GROUP_ABANDONED_SHIP_ROOM_B1F
	@ WarpEvent 6
	semantic_warp_event 0, 2, 0x03, 0x0A, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 7
	semantic_warp_event 8, 2, 0x03, 0x09, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
AbandonedShip_Corridors_B1F_BgEvents: @ 0x0850EFA4
	@ BgEvent 0
	semantic_bg_script_event 11, 4, 0x03, 0x00, AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor
AbandonedShip_Corridors_B1F_MapEvents: @ 0x0850EFB0
	@ struct MapEvents
	semantic_map_events 2, 8, 0, 1, AbandonedShip_Corridors_B1F_ObjectEvents, AbandonedShip_Corridors_B1F_WarpEvents, 0, AbandonedShip_Corridors_B1F_BgEvents
AbandonedShip_Rooms_B1F_ObjectEvents: @ 0x0850EFC4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x11, 0x00, 25, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, AbandonedShip_Rooms_B1F_EventScript_FatMan, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 6, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256F91, 0x0448
AbandonedShip_Rooms_B1F_WarpEvents: @ 0x0850EFF4
	@ WarpEvent 0
	semantic_warp_event 4, 1, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
	@ WarpEvent 1
	semantic_warp_event 13, 1, 0x03, 0x03, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
	@ WarpEvent 2
	semantic_warp_event 22, 1, 0x03, 0x04, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
AbandonedShip_Rooms_B1F_MapEvents: @ 0x0850F00C
	@ struct MapEvents
	semantic_map_events 2, 3, 0, 0, AbandonedShip_Rooms_B1F_ObjectEvents, AbandonedShip_Rooms_B1F_WarpEvents, 0, 0
AbandonedShip_Rooms2_B1F_ObjectEvents: @ 0x0850F020
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1F, 0x00, 3, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, AbandonedShip_Rooms2_B1F_EventScript_Camper, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 13, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256F9E, 0x0449
AbandonedShip_Rooms2_B1F_WarpEvents: @ 0x0850F050
	@ WarpEvent 0
	semantic_warp_event 4, 7, 0x03, 0x01, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
	@ WarpEvent 1
	semantic_warp_event 5, 7, 0x03, 0x01, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
	@ WarpEvent 2
	semantic_warp_event 13, 7, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
	@ WarpEvent 3
	semantic_warp_event 14, 7, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
AbandonedShip_Rooms2_B1F_MapEvents: @ 0x0850F070
	@ struct MapEvents
	semantic_map_events 2, 4, 0, 0, AbandonedShip_Rooms2_B1F_ObjectEvents, AbandonedShip_Rooms2_B1F_WarpEvents, 0, 0
AbandonedShip_Underwater1_WarpEvents: @ 0x0850F084
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_UNDERWATER2, MAP_GROUP_ABANDONED_SHIP_UNDERWATER2
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_UNDERWATER2, MAP_GROUP_ABANDONED_SHIP_UNDERWATER2
AbandonedShip_Underwater1_MapEvents: @ 0x0850F094
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, AbandonedShip_Underwater1_WarpEvents, 0, 0
AbandonedShip_Room_B1F_ObjectEvents: @ 0x0850F0A8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 4, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256FAB, 0x044A
AbandonedShip_Room_B1F_WarpEvents: @ 0x0850F0C0
	@ WarpEvent 0
	semantic_warp_event 4, 7, 0x03, 0x05, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
	@ WarpEvent 1
	semantic_warp_event 5, 7, 0x03, 0x05, MAP_NUM_ABANDONED_SHIP_CORRIDORS_B1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_B1F
AbandonedShip_Room_B1F_MapEvents: @ 0x0850F0D0
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, AbandonedShip_Room_B1F_ObjectEvents, AbandonedShip_Room_B1F_WarpEvents, 0, 0
AbandonedShip_Rooms2_1F_ObjectEvents: @ 0x0850F0E4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x41, 0x00, 7, 13, 0x03, 0x08, 0, 0, 0x0001, 0x0001, AbandonedShip_Rooms2_1F_EventScript_Dan, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1A, 0x00, 6, 13, 0x03, 0x08, 0, 0, 0x0001, 0x0001, AbandonedShip_Rooms2_1F_EventScript_Kira, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 4, 4, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256FB8, 0x044B
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x37, 0x00, 3, 2, 0x03, 0x0A, 1, 1, 0x0001, 0x0003, AbandonedShip_Rooms2_1F_EventScript_Garrison, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x35, 0x00, 7, 2, 0x03, 0x09, 1, 1, 0x0001, 0x0003, AbandonedShip_Rooms2_1F_EventScript_Jani, 0x0000
AbandonedShip_Rooms2_1F_WarpEvents: @ 0x0850F15C
	@ WarpEvent 0
	semantic_warp_event 4, 16, 0x03, 0x08, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 1
	semantic_warp_event 5, 16, 0x03, 0x08, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
	@ WarpEvent 2
	semantic_warp_event 4, 1, 0x03, 0x0B, MAP_NUM_ABANDONED_SHIP_CORRIDORS_1F, MAP_GROUP_ABANDONED_SHIP_CORRIDORS_1F
AbandonedShip_Rooms2_1F_MapEvents: @ 0x0850F174
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, AbandonedShip_Rooms2_1F_ObjectEvents, AbandonedShip_Rooms2_1F_WarpEvents, 0, 0
AbandonedShip_CaptainsOffice_ObjectEvents: @ 0x0850F188
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 3, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 0, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256FC5, 0x044C
AbandonedShip_CaptainsOffice_WarpEvents: @ 0x0850F1B8
	@ WarpEvent 0
	semantic_warp_event 7, 6, 0x03, 0x04, MAP_NUM_ABANDONED_SHIP_DECK, MAP_GROUP_ABANDONED_SHIP_DECK
	@ WarpEvent 1
	semantic_warp_event 8, 6, 0x03, 0x04, MAP_NUM_ABANDONED_SHIP_DECK, MAP_GROUP_ABANDONED_SHIP_DECK
AbandonedShip_CaptainsOffice_MapEvents: @ 0x0850F1C8
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, AbandonedShip_CaptainsOffice_ObjectEvents, AbandonedShip_CaptainsOffice_WarpEvents, 0, 0
AbandonedShip_Underwater2_WarpEvents: @ 0x0850F1DC
	@ WarpEvent 0
	semantic_warp_event 3, 1, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_UNDERWATER1, MAP_GROUP_ABANDONED_SHIP_UNDERWATER1
AbandonedShip_Underwater2_MapEvents: @ 0x0850F1E4
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 0, 0, AbandonedShip_Underwater2_WarpEvents, 0, 0
AbandonedShip_HiddenFloorCorridors_WarpEvents: @ 0x0850F1F8
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	@ WarpEvent 2
	semantic_warp_event 9, 8, 0x03, 0x04, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	@ WarpEvent 3
	semantic_warp_event 3, 3, 0x03, 0x06, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	@ WarpEvent 4
	semantic_warp_event 6, 3, 0x03, 0x07, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
	@ WarpEvent 5
	semantic_warp_event 9, 3, 0x03, 0x08, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS
AbandonedShip_HiddenFloorCorridors_BgEvents: @ 0x0850F228
	@ BgEvent 0
	semantic_bg_script_event 3, 8, 0x03, 0x00, AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door
	@ BgEvent 1
	semantic_bg_script_event 6, 8, 0x03, 0x00, AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door
	@ BgEvent 2
	semantic_bg_script_event 3, 4, 0x00, 0x00, AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door
	@ BgEvent 3
	semantic_bg_script_event 9, 4, 0x00, 0x00, AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door
AbandonedShip_HiddenFloorCorridors_MapEvents: @ 0x0850F258
	@ struct MapEvents
	semantic_map_events 0, 6, 0, 4, 0, AbandonedShip_HiddenFloorCorridors_WarpEvents, 0, AbandonedShip_HiddenFloorCorridors_BgEvents
AbandonedShip_HiddenFloorRooms_ObjectEvents: @ 0x0850F26C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 41, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256FD2, 0x0435
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 16, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08256FDF, 0x0436
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 5, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256FF9, 0x044E
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 31, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08256FEC, 0x044D
AbandonedShip_HiddenFloorRooms_WarpEvents: @ 0x0850F2CC
	@ WarpEvent 0
	semantic_warp_event 6, 14, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	@ WarpEvent 1
	semantic_warp_event 7, 14, 0x03, 0x00, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	@ WarpEvent 2
	semantic_warp_event 21, 14, 0x03, 0x01, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	@ WarpEvent 3
	semantic_warp_event 22, 14, 0x03, 0x01, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	@ WarpEvent 4
	semantic_warp_event 36, 14, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	@ WarpEvent 5
	semantic_warp_event 37, 14, 0x03, 0x02, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	@ WarpEvent 6
	semantic_warp_event 6, 1, 0x03, 0x03, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	@ WarpEvent 7
	semantic_warp_event 21, 1, 0x03, 0x04, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
	@ WarpEvent 8
	semantic_warp_event 36, 1, 0x03, 0x05, MAP_NUM_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS, MAP_GROUP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS
AbandonedShip_HiddenFloorRooms_BgEvents: @ 0x0850F314
	@ BgEvent 0
	semantic_bg_hidden_item_event 42, 10, 0x03, ITEM_0119, 0x001F
	@ BgEvent 1
	semantic_bg_hidden_item_event 20, 5, 0x03, ITEM_011A, 0x0020
	@ BgEvent 2
	semantic_bg_hidden_item_event 1, 12, 0x03, ITEM_011B, 0x0021
	@ BgEvent 3
	semantic_bg_hidden_item_event 1, 2, 0x00, ITEM_011C, 0x0022
	@ BgEvent 4
	semantic_bg_script_event 8, 5, 0x03, 0x00, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	@ BgEvent 5
	semantic_bg_script_event 11, 3, 0x03, 0x00, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	@ BgEvent 6
	semantic_bg_script_event 10, 10, 0x03, 0x00, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	@ BgEvent 7
	semantic_bg_script_event 16, 3, 0x03, 0x00, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	@ BgEvent 8
	semantic_bg_script_event 25, 2, 0x03, 0x00, AbandonedShip_HiddenFloorRooms_EventScript_Trash
	@ BgEvent 9
	semantic_bg_script_event 24, 6, 0x03, 0x00, AbandonedShip_HiddenFloorRooms_EventScript_Trash
AbandonedShip_HiddenFloorRooms_MapEvents: @ 0x0850F38C
	@ struct MapEvents
	semantic_map_events 4, 9, 0, 10, AbandonedShip_HiddenFloorRooms_ObjectEvents, AbandonedShip_HiddenFloorRooms_WarpEvents, 0, AbandonedShip_HiddenFloorRooms_BgEvents
IslandCave_ObjectEvents: @ 0x0850F3A0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC9, 0x00, 8, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, IslandCave_EventScript_Regice, 0x03A8
IslandCave_WarpEvents: @ 0x0850F3B8
	@ WarpEvent 0
	semantic_warp_event 8, 29, 0x03, 0x00, MAP_NUM_ROUTE105, MAP_GROUP_ROUTE105
	@ WarpEvent 1
	semantic_warp_event 8, 20, 0x00, 0x02, MAP_NUM_ISLAND_CAVE, MAP_GROUP_ISLAND_CAVE
	@ WarpEvent 2
	semantic_warp_event 8, 11, 0x03, 0x01, MAP_NUM_ISLAND_CAVE, MAP_GROUP_ISLAND_CAVE
IslandCave_BgEvents: @ 0x0850F3D0
	@ BgEvent 0
	semantic_bg_script_event 8, 20, 0x00, 0x00, IslandCave_EventScript_CaveEntranceMiddle
	@ BgEvent 1
	semantic_bg_script_event 7, 20, 0x00, 0x00, IslandCave_EventScript_CaveEntranceSide
	@ BgEvent 2
	semantic_bg_script_event 9, 20, 0x00, 0x00, IslandCave_EventScript_CaveEntranceSide
IslandCave_MapEvents: @ 0x0850F3F4
	@ struct MapEvents
	semantic_map_events 1, 3, 0, 3, IslandCave_ObjectEvents, IslandCave_WarpEvents, 0, IslandCave_BgEvents
AncientTomb_ObjectEvents: @ 0x0850F408
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xCA, 0x00, 8, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, AncientTomb_EventScript_Registeel, 0x03A9
AncientTomb_WarpEvents: @ 0x0850F420
	@ WarpEvent 0
	semantic_warp_event 8, 29, 0x03, 0x00, MAP_NUM_ROUTE120, MAP_GROUP_ROUTE120
	@ WarpEvent 1
	semantic_warp_event 8, 20, 0x00, 0x02, MAP_NUM_ANCIENT_TOMB, MAP_GROUP_ANCIENT_TOMB
	@ WarpEvent 2
	semantic_warp_event 8, 11, 0x03, 0x01, MAP_NUM_ANCIENT_TOMB, MAP_GROUP_ANCIENT_TOMB
AncientTomb_BgEvents: @ 0x0850F438
	@ BgEvent 0
	semantic_bg_script_event 8, 20, 0x00, 0x00, AncientTomb_EventScript_CaveEntranceMiddle
	@ BgEvent 1
	semantic_bg_script_event 7, 20, 0x00, 0x00, AncientTomb_EventScript_CaveEntranceSide
	@ BgEvent 2
	semantic_bg_script_event 9, 20, 0x00, 0x00, AncientTomb_EventScript_CaveEntranceSide
AncientTomb_MapEvents: @ 0x0850F45C
	@ struct MapEvents
	semantic_map_events 1, 3, 0, 3, AncientTomb_ObjectEvents, AncientTomb_WarpEvents, 0, AncientTomb_BgEvents
Underwater_Route134_WarpEvents: @ 0x0850F470
	@ WarpEvent 0
	semantic_warp_event 8, 8, 0x00, 0x00, MAP_NUM_UNDERWATER_SEALED_CHAMBER, MAP_GROUP_UNDERWATER_SEALED_CHAMBER
Underwater_Route134_MapEvents: @ 0x0850F478
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 0, 0, Underwater_Route134_WarpEvents, 0, 0
Underwater_SealedChamber_WarpEvents: @ 0x0850F48C
	@ WarpEvent 0
	semantic_warp_event 7, 1, 0x00, 0x00, MAP_NUM_UNDERWATER_ROUTE134, MAP_GROUP_UNDERWATER_ROUTE134
Underwater_SealedChamber_BgEvents: @ 0x0850F494
	@ BgEvent 0
	semantic_bg_script_event 12, 43, 0x00, 0x00, Underwater_SealedChamber_EventScript_Braille
Underwater_SealedChamber_MapEvents: @ 0x0850F4A0
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 1, 0, Underwater_SealedChamber_WarpEvents, 0, Underwater_SealedChamber_BgEvents
SealedChamber_OuterRoom_WarpEvents: @ 0x0850F4B4
	@ WarpEvent 0
	semantic_warp_event 10, 2, 0x03, 0x00, MAP_NUM_SEALED_CHAMBER_INNER_ROOM, MAP_GROUP_SEALED_CHAMBER_INNER_ROOM
SealedChamber_OuterRoom_BgEvents: @ 0x0850F4BC
	@ BgEvent 0
	semantic_bg_script_event 5, 6, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleABC
	@ BgEvent 1
	semantic_bg_script_event 5, 9, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleGHI
	@ BgEvent 2
	semantic_bg_script_event 5, 12, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleMNO
	@ BgEvent 3
	semantic_bg_script_event 5, 15, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleTUV
	@ BgEvent 4
	semantic_bg_script_event 11, 6, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleDEF
	@ BgEvent 5
	semantic_bg_script_event 11, 9, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleJKL
	@ BgEvent 6
	semantic_bg_script_event 11, 12, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BraillePQRS
	@ BgEvent 7
	semantic_bg_script_event 11, 15, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleWXYZ
	@ BgEvent 8
	semantic_bg_script_event 16, 6, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BraillePeriod
	@ BgEvent 9
	semantic_bg_script_event 16, 9, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleComma
	@ BgEvent 10
	semantic_bg_script_event 10, 2, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall
	@ BgEvent 11
	semantic_bg_script_event 6, 6, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleABC
	@ BgEvent 12
	semantic_bg_script_event 4, 6, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleABC
	@ BgEvent 13
	semantic_bg_script_event 4, 9, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleGHI
	@ BgEvent 14
	semantic_bg_script_event 6, 9, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleGHI
	@ BgEvent 15
	semantic_bg_script_event 4, 12, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleMNO
	@ BgEvent 16
	semantic_bg_script_event 6, 12, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleMNO
	@ BgEvent 17
	semantic_bg_script_event 4, 15, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleTUV
	@ BgEvent 18
	semantic_bg_script_event 6, 15, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleTUV
	@ BgEvent 19
	semantic_bg_script_event 10, 6, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleDEF
	@ BgEvent 20
	semantic_bg_script_event 12, 6, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleDEF
	@ BgEvent 21
	semantic_bg_script_event 10, 9, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleJKL
	@ BgEvent 22
	semantic_bg_script_event 12, 9, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleJKL
	@ BgEvent 23
	semantic_bg_script_event 10, 12, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BraillePQRS
	@ BgEvent 24
	semantic_bg_script_event 12, 12, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BraillePQRS
	@ BgEvent 25
	semantic_bg_script_event 10, 15, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleWXYZ
	@ BgEvent 26
	semantic_bg_script_event 12, 15, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleWXYZ
	@ BgEvent 27
	semantic_bg_script_event 9, 2, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleDigHere
	@ BgEvent 28
	semantic_bg_script_event 11, 2, 0x00, 0x00, SealedChamber_OuterRoom_EventScript_BrailleDigHere
SealedChamber_OuterRoom_MapEvents: @ 0x0850F618
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 29, 0, SealedChamber_OuterRoom_WarpEvents, 0, SealedChamber_OuterRoom_BgEvents
SealedChamber_InnerRoom_WarpEvents: @ 0x0850F62C
	@ WarpEvent 0
	semantic_warp_event 10, 19, 0x03, 0x00, MAP_NUM_SEALED_CHAMBER_OUTER_ROOM, MAP_GROUP_SEALED_CHAMBER_OUTER_ROOM
SealedChamber_InnerRoom_BgEvents: @ 0x0850F634
	@ BgEvent 0
	semantic_bg_script_event 10, 4, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleBackWall
	@ BgEvent 1
	semantic_bg_script_event 6, 8, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleStoryPart1
	@ BgEvent 2
	semantic_bg_script_event 14, 8, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleStoryPart2
	@ BgEvent 3
	semantic_bg_script_event 4, 13, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleStoryPart3
	@ BgEvent 4
	semantic_bg_script_event 16, 13, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleStoryPart4
	@ BgEvent 5
	semantic_bg_script_event 6, 18, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleStoryPart5
	@ BgEvent 6
	semantic_bg_script_event 14, 18, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleStoryPart6
	@ BgEvent 7
	semantic_bg_script_event 9, 4, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleBackWall
	@ BgEvent 8
	semantic_bg_script_event 11, 4, 0x00, 0x00, SealedChamber_InnerRoom_EventScript_BrailleBackWall
SealedChamber_InnerRoom_MapEvents: @ 0x0850F6A0
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 9, 0, SealedChamber_InnerRoom_WarpEvents, 0, SealedChamber_InnerRoom_BgEvents
ScorchedSlab_ObjectEvents: @ 0x0850F6B4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 7, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08257006, 0x0437
ScorchedSlab_WarpEvents: @ 0x0850F6CC
	@ WarpEvent 0
	semantic_warp_event 7, 16, 0x01, 0x01, MAP_NUM_ROUTE120, MAP_GROUP_ROUTE120
ScorchedSlab_MapEvents: @ 0x0850F6D4
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, ScorchedSlab_ObjectEvents, ScorchedSlab_WarpEvents, 0, 0
	.globl AquaHideout_UnusedRubyMap1_MapEvents
AquaHideout_UnusedRubyMap1_MapEvents: @ 0x0850F6E8
	@ struct MapEvents (empty)
	semantic_map_events 0, 0, 0, 0, 0, 0, 0, 0
	.globl AquaHideout_UnusedRubyMap2_MapEvents
AquaHideout_UnusedRubyMap2_MapEvents: @ 0x0850F6FC
	@ struct MapEvents (empty)
	semantic_map_events 0, 0, 0, 0, 0, 0, 0, 0
	.globl AquaHideout_UnusedRubyMap3_MapEvents
AquaHideout_UnusedRubyMap3_MapEvents: @ 0x0850F710
	@ struct MapEvents (empty)
	semantic_map_events 0, 0, 0, 0, 0, 0, 0, 0
SkyPillar_Entrance_WarpEvents: @ 0x0850F724
	@ WarpEvent 0
	semantic_warp_event 6, 16, 0x03, 0x00, MAP_NUM_ROUTE131, MAP_GROUP_ROUTE131
	@ WarpEvent 1
	semantic_warp_event 14, 4, 0x03, 0x00, MAP_NUM_SKY_PILLAR_OUTSIDE, MAP_GROUP_SKY_PILLAR_OUTSIDE
SkyPillar_Entrance_MapEvents: @ 0x0850F734
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, SkyPillar_Entrance_WarpEvents, 0, 0
SkyPillar_Outside_ObjectEvents: @ 0x0850F748
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x85, 0x00, 13, 7, 0x03, 0x08, 1, 1, 0x0000, 0x0000, SkyPillar_Outside_EventScript_Wallace, 0x0357
SkyPillar_Outside_WarpEvents: @ 0x0850F760
	@ WarpEvent 0
	semantic_warp_event 17, 13, 0x03, 0x01, MAP_NUM_SKY_PILLAR_ENTRANCE, MAP_GROUP_SKY_PILLAR_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 14, 5, 0x00, 0x00, MAP_NUM_SKY_PILLAR_1_F, MAP_GROUP_SKY_PILLAR_1_F
SkyPillar_Outside_MapEvents: @ 0x0850F770
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, SkyPillar_Outside_ObjectEvents, SkyPillar_Outside_WarpEvents, 0, 0
SkyPillar_1F_WarpEvents: @ 0x0850F784
	@ WarpEvent 0
	semantic_warp_event 6, 13, 0x03, 0x01, MAP_NUM_SKY_PILLAR_OUTSIDE, MAP_GROUP_SKY_PILLAR_OUTSIDE
	@ WarpEvent 1
	semantic_warp_event 7, 13, 0x03, 0x01, MAP_NUM_SKY_PILLAR_OUTSIDE, MAP_GROUP_SKY_PILLAR_OUTSIDE
	@ WarpEvent 2
	semantic_warp_event 10, 1, 0x03, 0x00, MAP_NUM_SKY_PILLAR_2F, MAP_GROUP_SKY_PILLAR_2F
SkyPillar_1F_MapEvents: @ 0x0850F79C
	@ struct MapEvents
	semantic_map_events 0, 3, 0, 0, 0, SkyPillar_1F_WarpEvents, 0, 0
SkyPillar_2F_WarpEvents: @ 0x0850F7B0
	@ WarpEvent 0
	semantic_warp_event 10, 1, 0x03, 0x02, MAP_NUM_SKY_PILLAR_1_F, MAP_GROUP_SKY_PILLAR_1_F
	@ WarpEvent 1
	semantic_warp_event 3, 1, 0x03, 0x00, MAP_NUM_SKY_PILLAR_3_F, MAP_GROUP_SKY_PILLAR_3_F
SkyPillar_2F_MapEvents: @ 0x0850F7C0
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, SkyPillar_2F_WarpEvents, 0, 0
SkyPillar_3F_WarpEvents: @ 0x0850F7D4
	@ WarpEvent 0
	semantic_warp_event 3, 1, 0x03, 0x01, MAP_NUM_SKY_PILLAR_2F, MAP_GROUP_SKY_PILLAR_2F
	@ WarpEvent 1
	semantic_warp_event 11, 1, 0x03, 0x00, MAP_NUM_SKY_PILLAR_4F, MAP_GROUP_SKY_PILLAR_4F
	@ WarpEvent 2
	semantic_warp_event 7, 1, 0x03, 0x01, MAP_NUM_SKY_PILLAR_4F, MAP_GROUP_SKY_PILLAR_4F
SkyPillar_3F_MapEvents: @ 0x0850F7EC
	@ struct MapEvents
	semantic_map_events 0, 3, 0, 0, 0, SkyPillar_3F_WarpEvents, 0, 0
SkyPillar_4F_WarpEvents: @ 0x0850F800
	@ WarpEvent 0
	semantic_warp_event 11, 1, 0x03, 0x01, MAP_NUM_SKY_PILLAR_3_F, MAP_GROUP_SKY_PILLAR_3_F
	@ WarpEvent 1
	semantic_warp_event 7, 1, 0x03, 0x02, MAP_NUM_SKY_PILLAR_3_F, MAP_GROUP_SKY_PILLAR_3_F
	@ WarpEvent 2
	semantic_warp_event 3, 1, 0x03, 0x00, MAP_NUM_SKY_PILLAR_5_F, MAP_GROUP_SKY_PILLAR_5_F
SkyPillar_4F_MapEvents: @ 0x0850F818
	@ struct MapEvents
	semantic_map_events 0, 3, 0, 0, 0, SkyPillar_4F_WarpEvents, 0, 0
ShoalCave_LowTideIceRoom_ObjectEvents: @ 0x0850F82C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 12, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825713E, 0x0458
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 12, 21, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825714B, 0x0459
ShoalCave_LowTideIceRoom_WarpEvents: @ 0x0850F85C
	@ WarpEvent 0
	semantic_warp_event 17, 10, 0x03, 0x03, MAP_NUM_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM, MAP_GROUP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM
ShoalCave_LowTideIceRoom_MapEvents: @ 0x0850F864
	@ struct MapEvents
	semantic_map_events 2, 1, 0, 0, ShoalCave_LowTideIceRoom_ObjectEvents, ShoalCave_LowTideIceRoom_WarpEvents, 0, 0
SkyPillar_5F_WarpEvents: @ 0x0850F878
	@ WarpEvent 0
	semantic_warp_event 3, 1, 0x03, 0x02, MAP_NUM_SKY_PILLAR_4F, MAP_GROUP_SKY_PILLAR_4F
	@ WarpEvent 1
	semantic_warp_event 10, 1, 0x03, 0x00, MAP_NUM_SKY_PILLAR_TOP, MAP_GROUP_SKY_PILLAR_TOP
SkyPillar_5F_MapEvents: @ 0x0850F888
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, SkyPillar_5F_WarpEvents, 0, 0
SkyPillar_Top_ObjectEvents: @ 0x0850F89C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xCF, 0x00, 14, 7, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0305
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x29, 0x00, 14, 6, 0x03, 0x08, 1, 1, 0x0000, 0x0000, SkyPillar_Top_EventScript_Rayquaza, 0x0050
SkyPillar_Top_WarpEvents: @ 0x0850F8CC
	@ WarpEvent 0
	semantic_warp_event 16, 14, 0x03, 0x01, MAP_NUM_SKY_PILLAR_5_F, MAP_GROUP_SKY_PILLAR_5_F
SkyPillar_Top_CoordEvents: @ 0x0850F8D4
	@ CoordEvent 0
	semantic_coord_event 14, 9, 0x03, 0x40D7, 0x0000, SkyPillar_Top_EventScript_AwakenRayquaza
SkyPillar_Top_MapEvents: @ 0x0850F8E4
	@ struct MapEvents
	semantic_map_events 2, 1, 1, 0, SkyPillar_Top_ObjectEvents, SkyPillar_Top_WarpEvents, SkyPillar_Top_CoordEvents, 0
MagmaHideout_1F_ObjectEvents: @ 0x0850F8F8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x77, 0x00, 4, 5, 0x00, 0x0A, 1, 1, 0x0001, 0x0002, MagmaHideout_1F_EventScript_Grunt1, 0x0359
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 3, 20, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257235, 0x047F
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x77, 0x00, 30, 20, 0x03, 0x09, 1, 1, 0x0001, 0x0004, MagmaHideout_1F_EventScript_Grunt2, 0x0359
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x57, 0x00, 5, 22, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x57, 0x00, 7, 22, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x57, 0x00, 6, 23, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0013
MagmaHideout_1F_WarpEvents: @ 0x0850F988
	@ WarpEvent 0
	semantic_warp_event 10, 34, 0x03, 0x04, MAP_NUM_JAGGED_PASS, MAP_GROUP_JAGGED_PASS
	@ WarpEvent 1
	semantic_warp_event 25, 34, 0x03, 0x01, MAP_NUM_MAGMA_HIDEOUT_2_F_1_R, MAP_GROUP_MAGMA_HIDEOUT_2_F_1_R
	@ WarpEvent 2
	semantic_warp_event 31, 3, 0x00, 0x01, MAP_NUM_MAGMA_HIDEOUT_2_F_2_R, MAP_GROUP_MAGMA_HIDEOUT_2_F_2_R
	@ WarpEvent 3
	semantic_warp_event 20, 22, 0x00, 0x00, MAP_NUM_MAGMA_HIDEOUT_2_F_3_R, MAP_GROUP_MAGMA_HIDEOUT_2_F_3_R
MagmaHideout_1F_MapEvents: @ 0x0850F9A8
	@ struct MapEvents
	semantic_map_events 6, 4, 0, 0, MagmaHideout_1F_ObjectEvents, MagmaHideout_1F_WarpEvents, 0, 0
MagmaHideout_2F_1R_ObjectEvents: @ 0x0850F9BC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x77, 0x00, 18, 19, 0x03, 0x33, 5, 4, 0x0001, 0x0001, MagmaHideout_2F_1R_EventScript_Grunt4, 0x0359
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x77, 0x00, 12, 14, 0x03, 0x2E, 7, 6, 0x0001, 0x0003, MagmaHideout_2F_1R_EventScript_Grunt5, 0x0359
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x78, 0x00, 8, 8, 0x03, 0x0A, 1, 1, 0x0001, 0x0007, MagmaHideout_2F_1R_EventScript_Grunt14, 0x0359
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x77, 0x00, 21, 11, 0x03, 0x07, 1, 1, 0x0001, 0x0003, MagmaHideout_2F_1R_EventScript_Grunt3, 0x0359
MagmaHideout_2F_1R_WarpEvents: @ 0x0850FA1C
	@ WarpEvent 0
	semantic_warp_event 11, 23, 0x00, 0x00, MAP_NUM_MAGMA_HIDEOUT_2_F_2_R, MAP_GROUP_MAGMA_HIDEOUT_2_F_2_R
	@ WarpEvent 1
	semantic_warp_event 8, 2, 0x00, 0x01, MAP_NUM_MAGMA_HIDEOUT_1_F, MAP_GROUP_MAGMA_HIDEOUT_1_F
	@ WarpEvent 2
	semantic_warp_event 17, 33, 0x03, 0x02, MAP_NUM_MAGMA_HIDEOUT_3_F_1_R, MAP_GROUP_MAGMA_HIDEOUT_3_F_1_R
MagmaHideout_2F_1R_MapEvents: @ 0x0850FA34
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, MagmaHideout_2F_1R_ObjectEvents, MagmaHideout_2F_1R_WarpEvents, 0, 0
MagmaHideout_2F_2R_ObjectEvents: @ 0x0850FA48
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x77, 0x00, 29, 8, 0x03, 0x09, 1, 1, 0x0001, 0x0007, MagmaHideout_2F_2R_EventScript_Grunt8, 0x0359
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x77, 0x00, 25, 11, 0x03, 0x0A, 1, 1, 0x0001, 0x0002, MagmaHideout_2F_2R_EventScript_Grunt7, 0x0359
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 21, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257242, 0x048C
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x77, 0x00, 8, 9, 0x03, 0x08, 1, 1, 0x0001, 0x0004, MagmaHideout_2F_2R_EventScript_Grunt6, 0x0359
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x78, 0x00, 7, 13, 0x03, 0x0A, 1, 1, 0x0001, 0x0001, MagmaHideout_2F_2R_EventScript_Grunt15, 0x0359
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 14, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825724F, 0x048D
MagmaHideout_2F_2R_WarpEvents: @ 0x0850FAD8
	@ WarpEvent 0
	semantic_warp_event 10, 22, 0x03, 0x00, MAP_NUM_MAGMA_HIDEOUT_2_F_1_R, MAP_GROUP_MAGMA_HIDEOUT_2_F_1_R
	@ WarpEvent 1
	semantic_warp_event 36, 4, 0x00, 0x02, MAP_NUM_MAGMA_HIDEOUT_1_F, MAP_GROUP_MAGMA_HIDEOUT_1_F
MagmaHideout_2F_2R_MapEvents: @ 0x0850FAE8
	@ struct MapEvents
	semantic_map_events 6, 2, 0, 0, MagmaHideout_2F_2R_ObjectEvents, MagmaHideout_2F_2R_WarpEvents, 0, 0
MagmaHideout_3F_1R_ObjectEvents: @ 0x0850FAFC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x77, 0x00, 2, 7, 0x04, 0x0A, 1, 1, 0x0001, 0x0005, MagmaHideout_3F_1R_EventScript_Grunt9, 0x0359
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x78, 0x00, 21, 21, 0x00, 0x09, 1, 1, 0x0001, 0x0004, MagmaHideout_3F_1R_EventScript_Grunt16, 0x0359
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x3B, 0x00, 9, 16, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825725C, 0x048E
MagmaHideout_3F_1R_WarpEvents: @ 0x0850FB44
	@ WarpEvent 0
	semantic_warp_event 7, 21, 0x00, 0x00, MAP_NUM_MAGMA_HIDEOUT_4_F, MAP_GROUP_MAGMA_HIDEOUT_4_F
	@ WarpEvent 1
	semantic_warp_event 21, 9, 0x00, 0x00, MAP_NUM_MAGMA_HIDEOUT_3_F_2_R, MAP_GROUP_MAGMA_HIDEOUT_3_F_2_R
	@ WarpEvent 2
	semantic_warp_event 23, 3, 0x00, 0x02, MAP_NUM_MAGMA_HIDEOUT_2_F_1_R, MAP_GROUP_MAGMA_HIDEOUT_2_F_1_R
MagmaHideout_3F_1R_MapEvents: @ 0x0850FB5C
	@ struct MapEvents
	semantic_map_events 3, 3, 0, 0, MagmaHideout_3F_1R_ObjectEvents, MagmaHideout_3F_1R_WarpEvents, 0, 0
MagmaHideout_3F_2R_ObjectEvents: @ 0x0850FB70
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x77, 0x00, 16, 3, 0x00, 0x11, 1, 1, 0x0001, 0x0003, MagmaHideout_3F_2R_EventScript_Grunt10, 0x0359
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 5, 9, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257269, 0x048F
MagmaHideout_3F_2R_WarpEvents: @ 0x0850FBA0
	@ WarpEvent 0
	semantic_warp_event 12, 15, 0x00, 0x01, MAP_NUM_MAGMA_HIDEOUT_3_F_1_R, MAP_GROUP_MAGMA_HIDEOUT_3_F_1_R
MagmaHideout_3F_2R_MapEvents: @ 0x0850FBA8
	@ struct MapEvents
	semantic_map_events 2, 1, 0, 0, MagmaHideout_3F_2R_ObjectEvents, MagmaHideout_3F_2R_WarpEvents, 0, 0
MagmaHideout_4F_ObjectEvents: @ 0x0850FBBC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC6, 0x00, 16, 17, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0355
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x77, 0x00, 31, 22, 0x00, 0x0A, 1, 1, 0x0001, 0x0003, MagmaHideout_4F_EventScript_Grunt11, 0x0359
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x77, 0x00, 30, 13, 0x00, 0x09, 1, 1, 0x0001, 0x0003, MagmaHideout_4F_EventScript_Grunt12, 0x0359
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x77, 0x00, 26, 13, 0x00, 0x0A, 1, 1, 0x0001, 0x0003, MagmaHideout_4F_EventScript_Grunt13, 0x0359
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x77, 0x00, 22, 4, 0x00, 0x08, 1, 1, 0x0001, 0x0004, MagmaHideout_4F_EventScript_Tabitha, 0x0359
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xC4, 0x00, 16, 21, 0x00, 0x07, 1, 1, 0x0000, 0x0000, MagmaHideout_4F_EventScript_Maxie, 0x0359
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xCE, 0x00, 16, 17, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0352
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x3B, 0x00, 3, 7, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257276, 0x0490
MagmaHideout_4F_WarpEvents: @ 0x0850FC7C
	@ WarpEvent 0
	semantic_warp_event 46, 7, 0x00, 0x00, MAP_NUM_MAGMA_HIDEOUT_3_F_1_R, MAP_GROUP_MAGMA_HIDEOUT_3_F_1_R
	@ WarpEvent 1
	semantic_warp_event 20, 21, 0x00, 0x01, MAP_NUM_MAGMA_HIDEOUT_3_F_3_R, MAP_GROUP_MAGMA_HIDEOUT_3_F_3_R
MagmaHideout_4F_MapEvents: @ 0x0850FC8C
	@ struct MapEvents
	semantic_map_events 8, 2, 0, 0, MagmaHideout_4F_ObjectEvents, MagmaHideout_4F_WarpEvents, 0, 0
MagmaHideout_3F_3R_ObjectEvents: @ 0x0850FCA0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 9, 19, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257283, 0x0423
MagmaHideout_3F_3R_WarpEvents: @ 0x0850FCB8
	@ WarpEvent 0
	semantic_warp_event 16, 1, 0x00, 0x01, MAP_NUM_MAGMA_HIDEOUT_2_F_3_R, MAP_GROUP_MAGMA_HIDEOUT_2_F_3_R
	@ WarpEvent 1
	semantic_warp_event 16, 21, 0x00, 0x01, MAP_NUM_MAGMA_HIDEOUT_4_F, MAP_GROUP_MAGMA_HIDEOUT_4_F
MagmaHideout_3F_3R_MapEvents: @ 0x0850FCC8
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, MagmaHideout_3F_3R_ObjectEvents, MagmaHideout_3F_3R_WarpEvents, 0, 0
MagmaHideout_2F_3R_WarpEvents: @ 0x0850FCDC
	@ WarpEvent 0
	semantic_warp_event 16, 1, 0x00, 0x03, MAP_NUM_MAGMA_HIDEOUT_1_F, MAP_GROUP_MAGMA_HIDEOUT_1_F
	@ WarpEvent 1
	semantic_warp_event 16, 13, 0x00, 0x00, MAP_NUM_MAGMA_HIDEOUT_3_F_3_R, MAP_GROUP_MAGMA_HIDEOUT_3_F_3_R
MagmaHideout_2F_3R_MapEvents: @ 0x0850FCEC
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, MagmaHideout_2F_3R_WarpEvents, 0, 0
MirageTower_1F_WarpEvents: @ 0x0850FD00
	@ WarpEvent 0
	semantic_warp_event 10, 14, 0x03, 0x03, MAP_NUM_ROUTE111, MAP_GROUP_ROUTE111
	@ WarpEvent 1
	semantic_warp_event 15, 2, 0x03, 0x01, MAP_NUM_MIRAGE_TOWER_2_F, MAP_GROUP_MIRAGE_TOWER_2_F
MirageTower_1F_MapEvents: @ 0x0850FD10
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, MirageTower_1F_WarpEvents, 0, 0
MirageTower_2F_WarpEvents: @ 0x0850FD24
	@ WarpEvent 0
	semantic_warp_event 18, 12, 0x03, 0x00, MAP_NUM_MIRAGE_TOWER_3_F, MAP_GROUP_MIRAGE_TOWER_3_F
	@ WarpEvent 1
	semantic_warp_event 15, 2, 0x03, 0x01, MAP_NUM_MIRAGE_TOWER_1_F, MAP_GROUP_MIRAGE_TOWER_1_F
MirageTower_2F_MapEvents: @ 0x0850FD34
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, MirageTower_2F_WarpEvents, 0, 0
MirageTower_3F_ObjectEvents: @ 0x0850FD48
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x56, 0x00, 3, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0011
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x56, 0x00, 4, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0012
MirageTower_3F_WarpEvents: @ 0x0850FD78
	@ WarpEvent 0
	semantic_warp_event 18, 12, 0x03, 0x00, MAP_NUM_MIRAGE_TOWER_2_F, MAP_GROUP_MIRAGE_TOWER_2_F
	@ WarpEvent 1
	semantic_warp_event 2, 4, 0x00, 0x00, MAP_NUM_MIRAGE_TOWER_4_F, MAP_GROUP_MIRAGE_TOWER_4_F
MirageTower_3F_MapEvents: @ 0x0850FD88
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, MirageTower_3F_ObjectEvents, MirageTower_3F_WarpEvents, 0, 0
MirageTower_4F_ObjectEvents: @ 0x0850FD9C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC7, 0x00, 5, 4, 0x04, 0x08, 1, 1, 0x0000, 0x0000, MirageTower_4F_EventScript_RootFossil, 0x03C3
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xC7, 0x00, 7, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, MirageTower_4F_EventScript_ClawFossil, 0x03C4
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x56, 0x00, 6, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0011
MirageTower_4F_WarpEvents: @ 0x0850FDE4
	@ WarpEvent 0
	semantic_warp_event 1, 4, 0x03, 0x01, MAP_NUM_MIRAGE_TOWER_3_F, MAP_GROUP_MIRAGE_TOWER_3_F
MirageTower_4F_MapEvents: @ 0x0850FDEC
	@ struct MapEvents
	semantic_map_events 3, 1, 0, 0, MirageTower_4F_ObjectEvents, MirageTower_4F_WarpEvents, 0, 0
DesertUnderpass_ObjectEvents: @ 0x0850FE00
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC7, 0x00, 132, 10, 0x00, 0x08, 1, 1, 0x0000, 0x0000, DesertUnderpass_EventScript_Fossil, 0x036A
DesertUnderpass_WarpEvents: @ 0x0850FE18
	@ WarpEvent 0
	semantic_warp_event 10, 12, 0x00, 0x02, MAP_NUM_ROUTE114_FOSSIL_MANIACS_TUNNEL, MAP_GROUP_ROUTE114_FOSSIL_MANIACS_TUNNEL
DesertUnderpass_MapEvents: @ 0x0850FE20
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, DesertUnderpass_ObjectEvents, DesertUnderpass_WarpEvents, 0, 0
ArtisanCave_B1F_ObjectEvents: @ 0x0850FE34
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 32, 38, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825721B, 0x048A
ArtisanCave_B1F_WarpEvents: @ 0x0850FE4C
	@ WarpEvent 0
	semantic_warp_event 8, 48, 0x00, 0x0A, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 38, 5, 0x00, 0x01, MAP_NUM_ARTISAN_CAVE_1_F, MAP_GROUP_ARTISAN_CAVE_1_F
ArtisanCave_B1F_BgEvents: @ 0x0850FE5C
	@ BgEvent 0
	semantic_bg_hidden_item_event 32, 29, 0x00, ITEM_ZINC, 0x0066
	@ BgEvent 1
	semantic_bg_hidden_item_event 27, 8, 0x00, ITEM_CALCIUM, 0x0065
	@ BgEvent 2
	semantic_bg_hidden_item_event 7, 5, 0x00, ITEM_PROTEIN, 0x0067
	@ BgEvent 3
	semantic_bg_hidden_item_event 19, 43, 0x00, ITEM_IRON, 0x0068
ArtisanCave_B1F_MapEvents: @ 0x0850FE8C
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 4, ArtisanCave_B1F_ObjectEvents, ArtisanCave_B1F_WarpEvents, 0, ArtisanCave_B1F_BgEvents
ArtisanCave_1F_ObjectEvents: @ 0x0850FEA0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3B, 0x00, 14, 5, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257228, 0x048B
ArtisanCave_1F_WarpEvents: @ 0x0850FEB8
	@ WarpEvent 0
	semantic_warp_event 10, 17, 0x00, 0x0D, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 1
	semantic_warp_event 6, 5, 0x00, 0x01, MAP_NUM_ARTISAN_CAVE_B1_F, MAP_GROUP_ARTISAN_CAVE_B1_F
ArtisanCave_1F_MapEvents: @ 0x0850FEC8
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, ArtisanCave_1F_ObjectEvents, ArtisanCave_1F_WarpEvents, 0, 0
Underwater_MarineCave_WarpEvents: @ 0x0850FEDC
	@ WarpEvent 0
	semantic_warp_event 9, 8, 0x00, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
Underwater_MarineCave_MapEvents: @ 0x0850FEE4
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 0, 0, Underwater_MarineCave_WarpEvents, 0, 0
MarineCave_Entrance_WarpEvents: @ 0x0850FEF8
	@ WarpEvent 0
	semantic_warp_event 14, 1, 0x03, 0x00, MAP_NUM_MARINE_CAVE_END, MAP_GROUP_MARINE_CAVE_END
MarineCave_Entrance_MapEvents: @ 0x0850FF00
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 0, 0, MarineCave_Entrance_WarpEvents, 0, 0
MarineCave_End_ObjectEvents: @ 0x0850FF14
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC5, 0x00, 9, 22, 0x01, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x030E
MarineCave_End_WarpEvents: @ 0x0850FF2C
	@ WarpEvent 0
	semantic_warp_event 20, 4, 0x00, 0x00, MAP_NUM_MARINE_CAVE_ENTRANCE, MAP_GROUP_MARINE_CAVE_ENTRANCE
MarineCave_End_CoordEvents: @ 0x0850FF34
	@ CoordEvent 0
	semantic_coord_event 9, 26, 0x03, 0x4001, 0x0001, MarineCave_End_EventScript_Kyogre
MarineCave_End_MapEvents: @ 0x0850FF44
	@ struct MapEvents
	semantic_map_events 1, 1, 1, 0, MarineCave_End_ObjectEvents, MarineCave_End_WarpEvents, MarineCave_End_CoordEvents, 0
TerraCave_Entrance_WarpEvents: @ 0x0850FF58
	@ WarpEvent 0
	semantic_warp_event 8, 18, 0x00, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 1
	semantic_warp_event 14, 1, 0x03, 0x00, MAP_NUM_TERRA_CAVE_END, MAP_GROUP_TERRA_CAVE_END
TerraCave_Entrance_MapEvents: @ 0x0850FF68
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, TerraCave_Entrance_WarpEvents, 0, 0
TerraCave_End_ObjectEvents: @ 0x0850FF7C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xC6, 0x00, 17, 22, 0x01, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x030F
TerraCave_End_WarpEvents: @ 0x0850FF94
	@ WarpEvent 0
	semantic_warp_event 5, 4, 0x03, 0x01, MAP_NUM_TERRA_CAVE_ENTRANCE, MAP_GROUP_TERRA_CAVE_ENTRANCE
TerraCave_End_CoordEvents: @ 0x0850FF9C
	@ CoordEvent 0
	semantic_coord_event 17, 26, 0x03, 0x4001, 0x0001, TerraCave_End_EventScript_Groudon
TerraCave_End_MapEvents: @ 0x0850FFAC
	@ struct MapEvents
	semantic_map_events 1, 1, 1, 0, TerraCave_End_ObjectEvents, TerraCave_End_WarpEvents, TerraCave_End_CoordEvents, 0
AlteringCave_WarpEvents: @ 0x0850FFC0
	@ WarpEvent 0
	semantic_warp_event 18, 22, 0x00, 0x00, MAP_NUM_ROUTE103, MAP_GROUP_ROUTE103
AlteringCave_MapEvents: @ 0x0850FFC8
	@ struct MapEvents
	semantic_map_events 0, 1, 0, 0, 0, AlteringCave_WarpEvents, 0, 0
MeteorFalls_StevensCave_ObjectEvents: @ 0x0850FFDC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x86, 0x00, 19, 3, 0x03, 0x07, 1, 1, 0x0000, 0x0000, MeteorFalls_StevensCave_EventScript_Steven, 0x0000
MeteorFalls_StevensCave_WarpEvents: @ 0x0850FFF4
	@ WarpEvent 0
	semantic_warp_event 10, 29, 0x03, 0x05, MAP_NUM_METEOR_FALLS_1_F_1_R, MAP_GROUP_METEOR_FALLS_1_F_1_R
MeteorFalls_StevensCave_MapEvents: @ 0x0850FFFC
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, MeteorFalls_StevensCave_ObjectEvents, MeteorFalls_StevensCave_WarpEvents, 0, 0
SecretBase_RedCave1_ObjectEvents: @ 0x08510010
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 7, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_RedCave1_WarpEvents: @ 0x08510178
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_RedCave1_MapEvents: @ 0x08510180
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_RedCave1_ObjectEvents, SecretBase_RedCave1_WarpEvents, 0, 0
SecretBase_BrownCave1_ObjectEvents: @ 0x08510194
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 5, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_BrownCave1_WarpEvents: @ 0x085102FC
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_BrownCave1_MapEvents: @ 0x08510304
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_BrownCave1_ObjectEvents, SecretBase_BrownCave1_WarpEvents, 0, 0
SecretBase_BlueCave1_ObjectEvents: @ 0x08510318
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 4, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_BlueCave1_WarpEvents: @ 0x08510480
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_BlueCave1_MapEvents: @ 0x08510488
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_BlueCave1_ObjectEvents, SecretBase_BlueCave1_WarpEvents, 0, 0
SecretBase_YellowCave1_ObjectEvents: @ 0x0851049C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 3, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_YellowCave1_WarpEvents: @ 0x08510604
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_YellowCave1_MapEvents: @ 0x0851060C
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_YellowCave1_ObjectEvents, SecretBase_YellowCave1_WarpEvents, 0, 0
SecretBase_Tree1_ObjectEvents: @ 0x08510620
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 5, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_Tree1_WarpEvents: @ 0x08510788
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_Tree1_MapEvents: @ 0x08510790
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_Tree1_ObjectEvents, SecretBase_Tree1_WarpEvents, 0, 0
SecretBase_Shrub1_ObjectEvents: @ 0x085107A4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 5, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_Shrub1_WarpEvents: @ 0x0851090C
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_Shrub1_MapEvents: @ 0x08510914
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_Shrub1_ObjectEvents, SecretBase_Shrub1_WarpEvents, 0, 0
SecretBase_RedCave2_ObjectEvents: @ 0x08510928
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 3, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_RedCave2_WarpEvents: @ 0x08510A90
	@ WarpEvent 0
	semantic_warp_event 3, 14, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_RedCave2_MapEvents: @ 0x08510A98
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_RedCave2_ObjectEvents, SecretBase_RedCave2_WarpEvents, 0, 0
SecretBase_BrownCave2_ObjectEvents: @ 0x08510AAC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 11, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_BrownCave2_WarpEvents: @ 0x08510C14
	@ WarpEvent 0
	semantic_warp_event 1, 7, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_BrownCave2_MapEvents: @ 0x08510C1C
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_BrownCave2_ObjectEvents, SecretBase_BrownCave2_WarpEvents, 0, 0
SecretBase_BlueCave2_ObjectEvents: @ 0x08510C30
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 2, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_BlueCave2_WarpEvents: @ 0x08510D98
	@ WarpEvent 0
	semantic_warp_event 7, 5, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_BlueCave2_MapEvents: @ 0x08510DA0
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_BlueCave2_ObjectEvents, SecretBase_BlueCave2_WarpEvents, 0, 0
SecretBase_YellowCave2_ObjectEvents: @ 0x08510DB4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_YellowCave2_WarpEvents: @ 0x08510F1C
	@ WarpEvent 0
	semantic_warp_event 12, 7, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_YellowCave2_MapEvents: @ 0x08510F24
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_YellowCave2_ObjectEvents, SecretBase_YellowCave2_WarpEvents, 0, 0
SecretBase_Tree2_ObjectEvents: @ 0x08510F38
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 3, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_Tree2_WarpEvents: @ 0x085110A0
	@ WarpEvent 0
	semantic_warp_event 3, 14, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_Tree2_MapEvents: @ 0x085110A8
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_Tree2_ObjectEvents, SecretBase_Tree2_WarpEvents, 0, 0
SecretBase_Shrub2_ObjectEvents: @ 0x085110BC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 13, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_Shrub2_WarpEvents: @ 0x08511224
	@ WarpEvent 0
	semantic_warp_event 7, 5, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_Shrub2_MapEvents: @ 0x0851122C
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_Shrub2_ObjectEvents, SecretBase_Shrub2_WarpEvents, 0, 0
SecretBase_RedCave3_ObjectEvents: @ 0x08511240
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 12, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_RedCave3_WarpEvents: @ 0x085113A8
	@ WarpEvent 0
	semantic_warp_event 3, 6, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_RedCave3_MapEvents: @ 0x085113B0
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_RedCave3_ObjectEvents, SecretBase_RedCave3_WarpEvents, 0, 0
SecretBase_BrownCave3_ObjectEvents: @ 0x085113C4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 1, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_BrownCave3_WarpEvents: @ 0x0851152C
	@ WarpEvent 0
	semantic_warp_event 11, 9, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_BrownCave3_MapEvents: @ 0x08511534
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_BrownCave3_ObjectEvents, SecretBase_BrownCave3_WarpEvents, 0, 0
SecretBase_BlueCave3_ObjectEvents: @ 0x08511548
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 5, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_BlueCave3_WarpEvents: @ 0x085116B0
	@ WarpEvent 0
	semantic_warp_event 4, 15, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_BlueCave3_MapEvents: @ 0x085116B8
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_BlueCave3_ObjectEvents, SecretBase_BlueCave3_WarpEvents, 0, 0
SecretBase_YellowCave3_ObjectEvents: @ 0x085116CC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 7, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_YellowCave3_WarpEvents: @ 0x08511834
	@ WarpEvent 0
	semantic_warp_event 5, 9, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_YellowCave3_MapEvents: @ 0x0851183C
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_YellowCave3_ObjectEvents, SecretBase_YellowCave3_WarpEvents, 0, 0
SecretBase_Tree3_ObjectEvents: @ 0x08511850
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_Tree3_WarpEvents: @ 0x085119B8
	@ WarpEvent 0
	semantic_warp_event 8, 6, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_Tree3_MapEvents: @ 0x085119C0
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_Tree3_ObjectEvents, SecretBase_Tree3_WarpEvents, 0, 0
SecretBase_Shrub3_ObjectEvents: @ 0x085119D4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 5, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_Shrub3_WarpEvents: @ 0x08511B3C
	@ WarpEvent 0
	semantic_warp_event 6, 9, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_Shrub3_MapEvents: @ 0x08511B44
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_Shrub3_ObjectEvents, SecretBase_Shrub3_WarpEvents, 0, 0
SecretBase_RedCave4_ObjectEvents: @ 0x08511B58
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 5, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_RedCave4_WarpEvents: @ 0x08511CC0
	@ WarpEvent 0
	semantic_warp_event 2, 12, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_RedCave4_MapEvents: @ 0x08511CC8
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_RedCave4_ObjectEvents, SecretBase_RedCave4_WarpEvents, 0, 0
SecretBase_BrownCave4_ObjectEvents: @ 0x08511CDC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 2, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_BrownCave4_WarpEvents: @ 0x08511E44
	@ WarpEvent 0
	semantic_warp_event 2, 8, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_BrownCave4_MapEvents: @ 0x08511E4C
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_BrownCave4_ObjectEvents, SecretBase_BrownCave4_WarpEvents, 0, 0
SecretBase_BlueCave4_ObjectEvents: @ 0x08511E60
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 5, 13, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_BlueCave4_WarpEvents: @ 0x08511FC8
	@ WarpEvent 0
	semantic_warp_event 4, 15, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_BlueCave4_MapEvents: @ 0x08511FD0
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_BlueCave4_ObjectEvents, SecretBase_BlueCave4_WarpEvents, 0, 0
SecretBase_YellowCave4_ObjectEvents: @ 0x08511FE4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 9, 8, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_YellowCave4_WarpEvents: @ 0x0851214C
	@ WarpEvent 0
	semantic_warp_event 6, 12, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_YellowCave4_MapEvents: @ 0x08512154
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_YellowCave4_ObjectEvents, SecretBase_YellowCave4_WarpEvents, 0, 0
SecretBase_Tree4_ObjectEvents: @ 0x08512168
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 10, 9, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_Tree4_WarpEvents: @ 0x085122D0
	@ WarpEvent 0
	semantic_warp_event 7, 12, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_Tree4_MapEvents: @ 0x085122D8
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_Tree4_ObjectEvents, SecretBase_Tree4_WarpEvents, 0, 0
SecretBase_Shrub4_ObjectEvents: @ 0x085122EC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 9, 7, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SecretBase_EventScript_RecordMixTrainer, 0x00AD
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 0, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AE
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 0, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00AF
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 0, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B0
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 0, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B1
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 0, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B2
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 0, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B3
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 0, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B4
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 1, 0, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B5
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF8, 0x00, 1, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B6
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xF9, 0x00, 1, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B7
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xFA, 0x00, 1, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B8
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xFB, 0x00, 1, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00B9
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xFC, 0x00, 1, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BA
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xFD, 0x00, 1, 6, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x00BB
SecretBase_Shrub4_WarpEvents: @ 0x08512454
	@ WarpEvent 0
	semantic_warp_event 11, 8, 0x00, 0x7E, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
SecretBase_Shrub4_MapEvents: @ 0x0851245C
	@ struct MapEvents
	semantic_map_events 15, 1, 0, 0, SecretBase_Shrub4_ObjectEvents, SecretBase_Shrub4_WarpEvents, 0, 0
BattleColosseum_2P_ObjectEvents: @ 0x08512470
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1C, 0x00, 9, 3, 0x03, 0x09, 0, 0, 0x0000, 0x0000, BattleColosseum_2P_EventScript_Attendant, 0x0000
BattleColosseum_2P_WarpEvents: @ 0x08512488
	@ WarpEvent 0
	semantic_warp_event 6, 8, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 1
	semantic_warp_event 7, 8, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
BattleColosseum_2P_CoordEvents: @ 0x08512498
	@ CoordEvent 0
	semantic_coord_event 3, 5, 0x03, 0x4000, 0x0000, EventScript_BattleColosseum_2P_PlayerSpot0
	@ CoordEvent 1
	semantic_coord_event 10, 5, 0x03, 0x4000, 0x0000, EventScript_BattleColosseum_2P_PlayerSpot1
BattleColosseum_2P_MapEvents: @ 0x085124B8
	@ struct MapEvents
	semantic_map_events 1, 2, 2, 0, BattleColosseum_2P_ObjectEvents, BattleColosseum_2P_WarpEvents, BattleColosseum_2P_CoordEvents, 0
TradeCenter_ObjectEvents: @ 0x085124CC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1C, 0x00, 9, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, TradeCenter_EventScript_Attendant, 0x0000
TradeCenter_WarpEvents: @ 0x085124E4
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
TradeCenter_CoordEvents: @ 0x085124F4
	@ CoordEvent 0
	semantic_coord_event 4, 5, 0x03, 0x4000, 0x0000, EventScript_TradeCenter_Chair0
	@ CoordEvent 1
	semantic_coord_event 7, 5, 0x03, 0x4000, 0x0000, EventScript_TradeCenter_Chair1
TradeCenter_MapEvents: @ 0x08512514
	@ struct MapEvents
	semantic_map_events 1, 2, 2, 0, TradeCenter_ObjectEvents, TradeCenter_WarpEvents, TradeCenter_CoordEvents, 0
RecordCorner_ObjectEvents: @ 0x08512528
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1C, 0x00, 10, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, RecordCorner_EventScript_Attendant, 0x0000
RecordCorner_WarpEvents: @ 0x08512540
	@ WarpEvent 0
	semantic_warp_event 8, 9, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 1
	semantic_warp_event 9, 9, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 2
	semantic_warp_event 11, 9, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 3
	semantic_warp_event 10, 9, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
RecordCorner_CoordEvents: @ 0x08512560
	@ CoordEvent 0
	semantic_coord_event 6, 4, 0x03, 0x4000, 0x0000, EventScript_RecordCenter_Spot0
	@ CoordEvent 1
	semantic_coord_event 6, 6, 0x03, 0x4000, 0x0000, EventScript_RecordCenter_Spot2
	@ CoordEvent 2
	semantic_coord_event 13, 4, 0x03, 0x4000, 0x0000, EventScript_RecordCenter_Spot1
	@ CoordEvent 3
	semantic_coord_event 13, 6, 0x03, 0x4000, 0x0000, EventScript_RecordCenter_Spot3
RecordCorner_MapEvents: @ 0x085125A0
	@ struct MapEvents
	semantic_map_events 1, 4, 4, 0, RecordCorner_ObjectEvents, RecordCorner_WarpEvents, RecordCorner_CoordEvents, 0
BattleColosseum_4P_WarpEvents: @ 0x085125B4
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 2
	semantic_warp_event 7, 8, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 3
	semantic_warp_event 8, 8, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
BattleColosseum_4P_CoordEvents: @ 0x085125D4
	@ CoordEvent 0
	semantic_coord_event 3, 4, 0x03, 0x4000, 0x0000, EventScript_BattleColosseum_4P_PlayerSpot0
	@ CoordEvent 1
	semantic_coord_event 3, 6, 0x03, 0x4000, 0x0000, EventScript_BattleColosseum_4P_PlayerSpot2
	@ CoordEvent 2
	semantic_coord_event 10, 4, 0x03, 0x4000, 0x0000, EventScript_BattleColosseum_4P_PlayerSpot1
	@ CoordEvent 3
	semantic_coord_event 10, 6, 0x03, 0x4000, 0x0000, EventScript_BattleColosseum_4P_PlayerSpot3
BattleColosseum_4P_MapEvents: @ 0x08512614
	@ struct MapEvents
	semantic_map_events 0, 4, 4, 0, 0, BattleColosseum_4P_WarpEvents, BattleColosseum_4P_CoordEvents, 0
ContestHallShared_ObjectEvents: @ 0x08512628
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x18, 0x00, 6, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xBE, 0x00, 7, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF0, 0x00, 4, 7, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF1, 0x00, 6, 7, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF2, 0x00, 8, 7, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 2, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF6, 0x00, 4, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF7, 0x00, 5, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF8, 0x00, 9, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0xF9, 0x00, 10, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0xFA, 0x00, 12, 5, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0xF5, 0x00, 2, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x3B, 0x00, 7, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, 0, 0x0056
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xF3, 0x00, 10, 7, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x63, 0x00, 12, 6, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x0000
ContestHallShared_MapEvents: @ 0x08512790
.globl ContestHall_MapEvents
ContestHall_MapEvents:
.globl UnusedContestHall1_MapEvents
UnusedContestHall1_MapEvents:
.globl UnusedContestHall2_MapEvents
UnusedContestHall2_MapEvents:
.globl UnusedContestHall3_MapEvents
UnusedContestHall3_MapEvents:
.globl UnusedContestHall4_MapEvents
UnusedContestHall4_MapEvents:
.globl UnusedContestHall5_MapEvents
UnusedContestHall5_MapEvents:
.globl UnusedContestHall6_MapEvents
UnusedContestHall6_MapEvents:
.globl ContestHallBeauty_MapEvents
ContestHallBeauty_MapEvents:
.globl ContestHallTough_MapEvents
ContestHallTough_MapEvents:
.globl ContestHallCool_MapEvents
ContestHallCool_MapEvents:
.globl ContestHallSmart_MapEvents
ContestHallSmart_MapEvents:
.globl ContestHallCute_MapEvents
ContestHallCute_MapEvents:
	@ struct MapEvents
	semantic_map_events 15, 0, 0, 0, ContestHallShared_ObjectEvents, 0, 0, 0
InsideOfTruck_ObjectEvents: @ 0x085127A4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x71, 0x00, 0, 0, 0x08, 0x08, 0, 0, 0x0000, 0x0000, InsideOfTruck_EventScript_MovingBox, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x71, 0x00, 0, 3, 0x08, 0x08, 0, 0, 0x0000, 0x0000, InsideOfTruck_EventScript_MovingBox, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x71, 0x00, 2, 3, 0x08, 0x08, 0, 0, 0x0000, 0x0000, InsideOfTruck_EventScript_MovingBox, 0x0000
InsideOfTruck_WarpEvents: @ 0x085127EC
	@ WarpEvent 0
	semantic_warp_event 4, 1, 0x00, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 1
	semantic_warp_event 4, 2, 0x00, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 2
	semantic_warp_event 4, 3, 0x00, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
InsideOfTruck_CoordEvents: @ 0x08512804
	@ CoordEvent 0
	semantic_coord_event 3, 1, 0x03, 0x4092, 0x0000, InsideOfTruck_EventScript_SetIntroFlags
	@ CoordEvent 1
	semantic_coord_event 3, 2, 0x03, 0x4092, 0x0000, InsideOfTruck_EventScript_SetIntroFlags
	@ CoordEvent 2
	semantic_coord_event 3, 3, 0x03, 0x4092, 0x0000, InsideOfTruck_EventScript_SetIntroFlags
InsideOfTruck_BgEvents: @ 0x08512834
	@ BgEvent 0
	semantic_bg_script_event 1, 0, 0x00, 0x00, InsideOfTruck_EventScript_MovingBox
	@ BgEvent 1
	semantic_bg_script_event 3, 4, 0x00, 0x00, InsideOfTruck_EventScript_MovingBox
	@ BgEvent 2
	semantic_bg_script_event 2, 3, 0x00, 0x00, InsideOfTruck_EventScript_MovingBox
	@ BgEvent 3
	semantic_bg_script_event 0, 1, 0x00, 0x00, InsideOfTruck_EventScript_MovingBox
	@ BgEvent 4
	semantic_bg_script_event 0, 2, 0x00, 0x00, InsideOfTruck_EventScript_MovingBox
InsideOfTruck_MapEvents: @ 0x08512870
	@ struct MapEvents
	semantic_map_events 3, 3, 3, 5, InsideOfTruck_ObjectEvents, InsideOfTruck_WarpEvents, InsideOfTruck_CoordEvents, InsideOfTruck_BgEvents
SSTidalCorridor_ObjectEvents: @ 0x08512884
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 1, 11, 0x03, 0x07, 0, 0, 0x0000, 0x0000, SSTidalCorridor_EventScript_ExitSailor, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x31, 0x00, 16, 7, 0x03, 0x03, 0, 2, 0x0000, 0x0000, SSTidalCorridor_EventScript_Sailor, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x15, 0x00, 9, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, SSTidalCorridor_EventScript_Briney, 0x03B6
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xD3, 0x00, 7, 2, 0x03, 0x01, 1, 1, 0x0000, 0x0000, SSTidalCorridor_EventScript_Peeko, 0x03B6
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xDB, 0x00, 9, 10, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x032A
SSTidalCorridor_WarpEvents: @ 0x085128FC
	@ WarpEvent 0
	semantic_warp_event 4, 9, 0x03, 0x00, MAP_NUM_SS_TIDAL_ROOMS, MAP_GROUP_SS_TIDAL_ROOMS
	@ WarpEvent 1
	semantic_warp_event 7, 9, 0x03, 0x02, MAP_NUM_SS_TIDAL_ROOMS, MAP_GROUP_SS_TIDAL_ROOMS
	@ WarpEvent 2
	semantic_warp_event 10, 9, 0x03, 0x04, MAP_NUM_SS_TIDAL_ROOMS, MAP_GROUP_SS_TIDAL_ROOMS
	@ WarpEvent 3
	semantic_warp_event 13, 9, 0x03, 0x06, MAP_NUM_SS_TIDAL_ROOMS, MAP_GROUP_SS_TIDAL_ROOMS
	@ WarpEvent 4
	semantic_warp_event 4, 3, 0x03, 0x08, MAP_NUM_SS_TIDAL_ROOMS, MAP_GROUP_SS_TIDAL_ROOMS
	@ WarpEvent 5
	semantic_warp_event 7, 3, 0x03, 0x09, MAP_NUM_SS_TIDAL_ROOMS, MAP_GROUP_SS_TIDAL_ROOMS
	@ WarpEvent 6
	semantic_warp_event 10, 3, 0x03, 0x0A, MAP_NUM_SS_TIDAL_ROOMS, MAP_GROUP_SS_TIDAL_ROOMS
	@ WarpEvent 7
	semantic_warp_event 13, 3, 0x03, 0x0B, MAP_NUM_SS_TIDAL_ROOMS, MAP_GROUP_SS_TIDAL_ROOMS
	@ WarpEvent 8
	semantic_warp_event 16, 2, 0x03, 0x00, MAP_NUM_SS_TIDAL_LOWER_DECK, MAP_GROUP_SS_TIDAL_LOWER_DECK
SSTidalCorridor_BgEvents: @ 0x08512944
	@ BgEvent 0
	semantic_bg_script_event 2, 1, 0x00, 0x00, SSTidalCorridor_EventScript_Porthole
	@ BgEvent 1
	semantic_bg_script_event 4, 1, 0x00, 0x00, SSTidalCorridor_EventScript_Porthole
	@ BgEvent 2
	semantic_bg_script_event 6, 1, 0x00, 0x00, SSTidalCorridor_EventScript_Porthole
	@ BgEvent 3
	semantic_bg_script_event 8, 1, 0x00, 0x00, SSTidalCorridor_EventScript_Porthole
	@ BgEvent 4
	semantic_bg_script_event 10, 1, 0x00, 0x00, SSTidalCorridor_EventScript_Porthole
	@ BgEvent 5
	semantic_bg_script_event 12, 1, 0x00, 0x00, SSTidalCorridor_EventScript_Porthole
	@ BgEvent 6
	semantic_bg_script_event 14, 1, 0x00, 0x00, SSTidalCorridor_EventScript_Porthole
	@ BgEvent 7
	semantic_bg_script_event 16, 1, 0x00, 0x00, SSTidalCorridor_EventScript_Porthole
	@ BgEvent 8
	semantic_bg_script_event 5, 9, 0x00, 0x01, SSTidalCorridor_EventScript_Cabin1Sign
	@ BgEvent 9
	semantic_bg_script_event 8, 9, 0x00, 0x01, SSTidalCorridor_EventScript_Cabin2Sign
	@ BgEvent 10
	semantic_bg_script_event 11, 9, 0x00, 0x01, SSTidalCorridor_EventScript_Cabin3Sign
	@ BgEvent 11
	semantic_bg_script_event 14, 9, 0x00, 0x01, SSTidalCorridor_EventScript_Cabin4Sign
SSTidalCorridor_MapEvents: @ 0x085129D4
	@ struct MapEvents
	semantic_map_events 5, 9, 0, 12, SSTidalCorridor_ObjectEvents, SSTidalCorridor_WarpEvents, 0, SSTidalCorridor_BgEvents
SSTidalLowerDeck_ObjectEvents: @ 0x085129E8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 10, 4, 0x03, 0x2E, 4, 4, 0x0001, 0x0003, SSTidalLowerDeck_EventScript_Phillip, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x31, 0x00, 7, 4, 0x03, 0x32, 7, 4, 0x0001, 0x0003, SSTidalLowerDeck_EventScript_Leonard, 0x0000
SSTidalLowerDeck_WarpEvents: @ 0x08512A18
	@ WarpEvent 0
	semantic_warp_event 15, 2, 0x03, 0x08, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
SSTidalLowerDeck_BgEvents: @ 0x08512A20
	@ BgEvent 0
	semantic_bg_hidden_item_event 0, 2, 0x00, ITEM_LEFTOVERS, 0x0023
SSTidalLowerDeck_MapEvents: @ 0x08512A2C
	@ struct MapEvents
	semantic_map_events 2, 1, 0, 1, SSTidalLowerDeck_ObjectEvents, SSTidalLowerDeck_WarpEvents, 0, SSTidalLowerDeck_BgEvents
SSTidalRooms_ObjectEvents: @ 0x08512A40
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x19, 0x00, 4, 7, 0x03, 0x0A, 0, 0, 0x0001, 0x0000, SSTidalRooms_EventScript_Colton, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 34, 11, 0x03, 0x09, 0, 0, 0x0001, 0x0003, SSTidalRooms_EventScript_Micah, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x30, 0x00, 21, 5, 0x03, 0x0A, 0, 0, 0x0001, 0x0000, SSTidalRooms_EventScript_Thomas, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x41, 0x00, 5, 14, 0x03, 0x08, 0, 0, 0x0001, 0x0001, SSTidalRooms_EventScript_Jed, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x1A, 0x00, 4, 14, 0x03, 0x08, 0, 0, 0x0001, 0x0001, SSTidalRooms_EventScript_Lea, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x0F, 0x00, 22, 11, 0x03, 0x08, 1, 1, 0x0001, 0x0003, SSTidalRooms_EventScript_Garret, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x14, 0x00, 15, 6, 0x03, 0x09, 0, 0, 0x0001, 0x0000, SSTidalRooms_EventScript_Naomi, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x27, 0x00, 28, 5, 0x03, 0x07, 1, 1, 0x0000, 0x0000, SSTidalRooms_EventScript_SnatchGiver, 0x03B7
SSTidalRooms_WarpEvents: @ 0x08512B00
	@ WarpEvent 0
	semantic_warp_event 4, 16, 0x00, 0x00, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 1
	semantic_warp_event 5, 16, 0x00, 0x00, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 2
	semantic_warp_event 13, 16, 0x00, 0x01, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 3
	semantic_warp_event 14, 16, 0x00, 0x01, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 4
	semantic_warp_event 22, 16, 0x00, 0x02, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 5
	semantic_warp_event 23, 16, 0x00, 0x02, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 6
	semantic_warp_event 31, 16, 0x00, 0x03, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 7
	semantic_warp_event 32, 16, 0x00, 0x03, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 8
	semantic_warp_event 4, 1, 0x00, 0x04, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 9
	semantic_warp_event 13, 1, 0x00, 0x05, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 10
	semantic_warp_event 22, 1, 0x00, 0x06, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
	@ WarpEvent 11
	semantic_warp_event 31, 1, 0x00, 0x07, MAP_NUM_SS_TIDAL_CORRIDOR, MAP_GROUP_SS_TIDAL_CORRIDOR
SSTidalRooms_BgEvents: @ 0x08512B60
	@ BgEvent 0
	semantic_bg_script_event 15, 11, 0x00, 0x00, SSTidalRooms_EventScript_Bed
	@ BgEvent 1
	semantic_bg_script_event 15, 12, 0x00, 0x00, SSTidalRooms_EventScript_Bed
SSTidalRooms_MapEvents: @ 0x08512B78
	@ struct MapEvents
	semantic_map_events 8, 12, 0, 2, SSTidalRooms_ObjectEvents, SSTidalRooms_WarpEvents, 0, SSTidalRooms_BgEvents
BattlePyramidSquare01_ObjectEvents: @ 0x08512B8C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x05, 0x00, 2, 3, 0x04, 0x12, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 5, 3, 0x04, 0x11, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0F, 0x00, 2, 6, 0x04, 0x10, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x09, 0x00, 6, 6, 0x04, 0x09, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 4, 1, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 7, 4, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 0, 4, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare01_MapEvents: @ 0x08512C34
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare01_ObjectEvents, 0, 0, 0
BattlePyramidSquare02_ObjectEvents: @ 0x08512C48
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0D, 0x00, 2, 1, 0x04, 0x12, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 5, 6, 0x04, 0x0F, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x11, 0x00, 2, 6, 0x04, 0x10, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x06, 0x00, 5, 1, 0x04, 0x11, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 6, 5, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 7, 0, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 0, 2, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare02_MapEvents: @ 0x08512CF0
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare02_ObjectEvents, 0, 0, 0
BattlePyramidSquare03_ObjectEvents: @ 0x08512D04
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x07, 0x00, 2, 1, 0x04, 0x12, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0B, 0x00, 6, 1, 0x04, 0x11, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x32, 0x00, 6, 4, 0x04, 0x0F, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x21, 0x00, 3, 4, 0x04, 0x12, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 4, 2, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 0, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 2, 7, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare03_MapEvents: @ 0x08512DAC
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare03_ObjectEvents, 0, 0, 0
BattlePyramidSquare04_ObjectEvents: @ 0x08512DC0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 7, 2, 0x04, 0x11, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x08, 0x00, 7, 7, 0x04, 0x0F, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0F, 0x00, 1, 4, 0x04, 0x12, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0E, 0x00, 6, 4, 0x04, 0x0F, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 2, 6, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 5, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 3, 0, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare04_MapEvents: @ 0x08512E68
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare04_ObjectEvents, 0, 0, 0
BattlePyramidSquare05_ObjectEvents: @ 0x08512E7C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x09, 0x00, 6, 4, 0x04, 0x07, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x09, 0x00, 3, 7, 0x04, 0x10, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x09, 0x00, 3, 1, 0x04, 0x08, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x09, 0x00, 6, 0, 0x04, 0x11, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 0, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 7, 6, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 4, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare05_MapEvents: @ 0x08512F24
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare05_ObjectEvents, 0, 0, 0
BattlePyramidSquare06_ObjectEvents: @ 0x08512F38
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0A, 0x00, 5, 2, 0x04, 0x11, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0A, 0x00, 2, 5, 0x04, 0x10, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0A, 0x00, 5, 5, 0x04, 0x0F, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0A, 0x00, 2, 2, 0x04, 0x12, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 7, 7, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 4, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 0, 0, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare06_MapEvents: @ 0x08512FE0
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare06_ObjectEvents, 0, 0, 0
BattlePyramidSquare07_ObjectEvents: @ 0x08512FF4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0B, 0x00, 0, 6, 0x04, 0x0A, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0B, 0x00, 4, 0, 0x04, 0x11, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0B, 0x00, 6, 0, 0x04, 0x08, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0B, 0x00, 4, 4, 0x04, 0x0F, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 7, 4, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 1, 1, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 3, 7, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare07_MapEvents: @ 0x0851309C
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare07_ObjectEvents, 0, 0, 0
BattlePyramidSquare08_ObjectEvents: @ 0x085130B0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0C, 0x00, 1, 2, 0x04, 0x12, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0C, 0x00, 6, 5, 0x04, 0x0F, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0C, 0x00, 1, 5, 0x04, 0x10, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0C, 0x00, 6, 2, 0x04, 0x0F, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 4, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 3, 6, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 1, 0, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare08_MapEvents: @ 0x08513158
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare08_ObjectEvents, 0, 0, 0
BattlePyramidSquare09_ObjectEvents: @ 0x0851316C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0C, 0x00, 3, 0, 0x04, 0x08, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0C, 0x00, 6, 4, 0x04, 0x0F, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0C, 0x00, 6, 0, 0x04, 0x11, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0C, 0x00, 3, 5, 0x04, 0x0F, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 7, 0, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 1, 0, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 1, 6, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare09_MapEvents: @ 0x08513214
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare09_ObjectEvents, 0, 0, 0
BattlePyramidSquare10_ObjectEvents: @ 0x08513228
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0E, 0x00, 3, 0, 0x04, 0x11, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 0, 3, 0x04, 0x0A, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0E, 0x00, 6, 5, 0x04, 0x09, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0E, 0x00, 0, 5, 0x04, 0x0A, 1, 1, 0x0001, 0x0007, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 3, 6, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 5, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 1, 1, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare10_MapEvents: @ 0x085132D0
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare10_ObjectEvents, 0, 0, 0
BattlePyramidSquare11_ObjectEvents: @ 0x085132E4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0F, 0x00, 3, 2, 0x04, 0x08, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0F, 0x00, 3, 6, 0x04, 0x0E, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0F, 0x00, 6, 4, 0x04, 0x08, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0F, 0x00, 6, 7, 0x04, 0x07, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 6, 2, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 1, 2, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 1, 5, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare11_MapEvents: @ 0x0851338C
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare11_ObjectEvents, 0, 0, 0
BattlePyramidSquare12_ObjectEvents: @ 0x085133A0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x10, 0x00, 7, 5, 0x04, 0x09, 1, 1, 0x0001, 0x0007, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x10, 0x00, 0, 5, 0x04, 0x0A, 1, 1, 0x0001, 0x0007, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x10, 0x00, 3, 0, 0x04, 0x08, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x10, 0x00, 3, 3, 0x04, 0x07, 1, 1, 0x0001, 0x0003, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 7, 2, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 0, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 7, 7, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare12_MapEvents: @ 0x08513448
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare12_ObjectEvents, 0, 0, 0
BattlePyramidSquare13_ObjectEvents: @ 0x0851345C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x11, 0x00, 5, 1, 0x04, 0x08, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x11, 0x00, 5, 6, 0x04, 0x07, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x11, 0x00, 1, 1, 0x04, 0x08, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x11, 0x00, 1, 6, 0x04, 0x07, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 3, 1, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 7, 0, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 0, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare13_MapEvents: @ 0x08513504
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare13_ObjectEvents, 0, 0, 0
BattlePyramidSquare14_ObjectEvents: @ 0x08513518
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x12, 0x00, 7, 1, 0x04, 0x11, 1, 1, 0x0001, 0x0007, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 1, 1, 0x04, 0x12, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x12, 0x00, 6, 5, 0x04, 0x0F, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x12, 0x00, 0, 5, 0x04, 0x10, 1, 1, 0x0001, 0x0007, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 5, 3, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 0, 7, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 7, 5, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare14_MapEvents: @ 0x085135C0
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare14_ObjectEvents, 0, 0, 0
BattlePyramidSquare15_ObjectEvents: @ 0x085135D4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x12, 0x00, 2, 5, 0x04, 0x10, 1, 1, 0x0001, 0x0005, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 2, 1, 0x04, 0x12, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x12, 0x00, 6, 4, 0x04, 0x0F, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x12, 0x00, 6, 0, 0x04, 0x11, 1, 1, 0x0001, 0x0004, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 0, 7, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 7, 5, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 1, 2, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare15_MapEvents: @ 0x0851367C
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare15_ObjectEvents, 0, 0, 0
BattlePyramidSquare16_ObjectEvents: @ 0x08513690
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x12, 0x00, 0, 6, 0x04, 0x10, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x12, 0x00, 1, 0, 0x00, 0x12, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x12, 0x00, 6, 7, 0x04, 0x0F, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x12, 0x00, 6, 0, 0x04, 0x11, 1, 1, 0x0001, 0x0006, EventScript_JP_0822D718, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 0, 7, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x3B, 0x00, 7, 7, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x3B, 0x00, 5, 2, 0x04, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822D733, 0x0000
BattlePyramidSquare16_MapEvents: @ 0x08513738
	@ struct MapEvents
	semantic_map_events 7, 0, 0, 0, BattlePyramidSquare16_ObjectEvents, 0, 0, 0
UnionRoom_ObjectEvents: @ 0x0851374C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xE3, 0x00, 3, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, UnionRoom_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF3, 0x00, 1, 8, 0x03, 0x02, 1, 1, 0x0000, 0x0000, UnionRoom_EventScript_Player4, 0x02C2
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF7, 0x00, 7, 8, 0x03, 0x02, 1, 1, 0x0000, 0x0000, UnionRoom_EventScript_Player8, 0x02C6
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF6, 0x00, 1, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, UnionRoom_EventScript_Player7, 0x02C5
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF5, 0x00, 7, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, UnionRoom_EventScript_Player6, 0x02C4
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 13, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, UnionRoom_EventScript_Player5, 0x02C3
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF2, 0x00, 10, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, UnionRoom_EventScript_Player3, 0x02C1
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF1, 0x00, 13, 8, 0x03, 0x02, 1, 1, 0x0000, 0x0000, UnionRoom_EventScript_Player2, 0x02C0
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF0, 0x00, 4, 6, 0x03, 0x02, 1, 1, 0x0000, 0x0000, UnionRoom_EventScript_Player1, 0x02BF
UnionRoom_WarpEvents: @ 0x08513824
	@ WarpEvent 0
	semantic_warp_event 7, 11, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
	@ WarpEvent 1
	semantic_warp_event 8, 11, 0x03, 0x7F, MAP_NUM_UNDEFINED, MAP_GROUP_UNDEFINED
UnionRoom_MapEvents: @ 0x08513834
	@ struct MapEvents
	semantic_map_events 9, 2, 0, 0, UnionRoom_ObjectEvents, UnionRoom_WarpEvents, 0, 0
SafariZone_Northwest_ObjectEvents: @ 0x08513848
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 8, 8, 0x05, 0x08, 0, 0, 0x0000, 0x0000, SafariZone_Northwest_EventScript_Man, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 33, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257013, 0x0446
SafariZone_Northwest_MapEvents: @ 0x08513878
	@ struct MapEvents
	semantic_map_events 2, 0, 0, 0, SafariZone_Northwest_ObjectEvents, 0, 0, 0
SafariZone_North_ObjectEvents: @ 0x0851388C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x32, 0x00, 22, 9, 0x03, 0x02, 1, 1, 0x0000, 0x0000, SafariZone_North_EventScript_Fisherman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x41, 0x00, 6, 29, 0x03, 0x02, 1, 1, 0x0000, 0x0000, SafariZone_North_EventScript_Man, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x56, 0x00, 25, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0011
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x56, 0x00, 25, 13, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0012
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x56, 0x00, 28, 14, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0013
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x56, 0x00, 23, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0014
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x56, 0x00, 20, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0015
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x56, 0x00, 27, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0016
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3B, 0x00, 7, 6, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257020, 0x045F
SafariZone_North_MapEvents: @ 0x08513964
	@ struct MapEvents
	semantic_map_events 9, 0, 0, 0, SafariZone_North_ObjectEvents, 0, 0, 0
SafariZone_Southwest_ObjectEvents: @ 0x08513978
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x14, 0x00, 22, 9, 0x03, 0x08, 0, 0, 0x0000, 0x0000, SafariZone_Southwest_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3B, 0x00, 0, 37, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825702D, 0x046B
SafariZone_Southwest_WarpEvents: @ 0x085139A8
	@ WarpEvent 0
	semantic_warp_event 29, 7, 0x03, 0x00, MAP_NUM_SAFARI_ZONE_REST_HOUSE, MAP_GROUP_SAFARI_ZONE_REST_HOUSE
SafariZone_Southwest_BgEvents: @ 0x085139B0
	@ BgEvent 0
	semantic_bg_script_event 32, 7, 0x03, 0x00, SafariZone_Southwest_EventScript_RestHouseSign
SafariZone_Southwest_MapEvents: @ 0x085139BC
	@ struct MapEvents
	semantic_map_events 2, 1, 0, 1, SafariZone_Southwest_ObjectEvents, SafariZone_Southwest_WarpEvents, 0, SafariZone_Southwest_BgEvents
SafariZone_South_ObjectEvents: @ 0x085139D0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1F, 0x00, 32, 34, 0x04, 0x08, 0, 0, 0x0000, 0x0000, SafariZone_South_EventScript_ExitAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x07, 0x00, 26, 28, 0x03, 0x02, 1, 1, 0x0000, 0x0000, SafariZone_South_EventScript_Boy, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x41, 0x00, 16, 6, 0x05, 0x08, 0, 0, 0x0000, 0x0000, SafariZone_South_EventScript_Man, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x23, 0x00, 15, 31, 0x03, 0x02, 1, 1, 0x0000, 0x0000, SafariZone_South_EventScript_Youngster, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x1F, 0x00, 36, 16, 0x03, 0x09, 1, 1, 0x0000, 0x0000, SafariZone_South_EventScript_ConstructionWorker1, 0x02CD
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x1F, 0x00, 36, 17, 0x03, 0x09, 1, 1, 0x0000, 0x0000, SafariZone_South_EventScript_ConstructionWorker2, 0x02CD
SafariZone_South_WarpEvents: @ 0x08513A60
	@ WarpEvent 0
	semantic_warp_event 32, 33, 0x00, 0x00, MAP_NUM_ROUTE121_SAFARI_ZONE_ENTRANCE, MAP_GROUP_ROUTE121_SAFARI_ZONE_ENTRANCE
SafariZone_South_MapEvents: @ 0x08513A68
	@ struct MapEvents
	semantic_map_events 6, 1, 0, 0, SafariZone_South_ObjectEvents, SafariZone_South_WarpEvents, 0, 0
BattleFrontier_OutsideWest_ObjectEvents: @ 0x08513A7C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x09, 0x00, 26, 38, 0x00, 0x02, 2, 2, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Boy1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x8C, 0x00, 20, 70, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2D, 0x00, 19, 68, 0x00, 0x07, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_FerryAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x15, 0x00, 26, 20, 0x00, 0x05, 8, 0, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_ExpertM, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x21, 0x00, 27, 30, 0x00, 0x02, 1, 3, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Man1, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x22, 0x00, 33, 41, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Woman1, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x11, 0x00, 28, 43, 0x00, 0x03, 0, 3, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_FatMan1, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x30, 0x00, 17, 20, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Gentleman, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x27, 0x00, 13, 44, 0x00, 0x07, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Maniac1, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x27, 0x00, 14, 44, 0x00, 0x07, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Maniac2, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x42, 0x00, 23, 47, 0x00, 0x0F, 2, 2, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Man2, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x08, 0x00, 38, 27, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x18, 0x00, 45, 18, 0x00, 0x03, 1, 3, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Woman2, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x1F, 0x00, 9, 47, 0x00, 0x0F, 1, 2, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Camper, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x2F, 0x00, 35, 5, 0x00, 0x02, 2, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Lass, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x17, 0x00, 11, 66, 0x00, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_082273C3, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x32, 0x00, 31, 31, 0x00, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Fisherman1, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x32, 0x00, 42, 48, 0x00, 0x12, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Fisherman2, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x11, 0x00, 38, 22, 0x00, 0x03, 0, 3, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_FatMan2, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x14, 0x00, 12, 9, 0x00, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Woman3, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x07, 0x00, 12, 10, 0x00, 0x07, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Boy2, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x1D, 0x00, 11, 10, 0x00, 0x17, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_OldMan, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x41, 0x00, 8, 5, 0x00, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_Man4, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x12, 0x00, 4, 26, 0x00, 0x18, 1, 1, 0x0000, 0x0000, BattleFrontier_OutsideWest_EventScript_PokefanF, 0x0000
BattleFrontier_OutsideWest_WarpEvents: @ 0x08513CBC
	@ WarpEvent 0
	semantic_warp_event 42, 27, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY
	@ WarpEvent 1
	semantic_warp_event 19, 17, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY
	@ WarpEvent 2
	semantic_warp_event 11, 38, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY
	@ WarpEvent 3
	semantic_warp_event 45, 44, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE2, MAP_GROUP_BATTLE_FRONTIER_LOUNGE2
	@ WarpEvent 4
	semantic_warp_event 51, 51, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_MART, MAP_GROUP_BATTLE_FRONTIER_MART
	@ WarpEvent 5
	semantic_warp_event 44, 5, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_SCOTTS_HOUSE, MAP_GROUP_BATTLE_FRONTIER_SCOTTS_HOUSE
	@ WarpEvent 6
	semantic_warp_event 53, 44, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE4, MAP_GROUP_BATTLE_FRONTIER_LOUNGE4
	@ WarpEvent 7
	semantic_warp_event 5, 20, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE7, MAP_GROUP_BATTLE_FRONTIER_LOUNGE7
	@ WarpEvent 8
	semantic_warp_event 26, 65, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_RECEPTION_GATE, MAP_GROUP_BATTLE_FRONTIER_RECEPTION_GATE
	@ WarpEvent 9
	semantic_warp_event 26, 61, 0x00, 0x01, MAP_NUM_BATTLE_FRONTIER_RECEPTION_GATE, MAP_GROUP_BATTLE_FRONTIER_RECEPTION_GATE
	@ WarpEvent 10
	semantic_warp_event 39, 55, 0x00, 0x00, MAP_NUM_ARTISAN_CAVE_B1_F, MAP_GROUP_ARTISAN_CAVE_B1_F
BattleFrontier_OutsideWest_BgEvents: @ 0x08513D14
	@ BgEvent 0
	semantic_bg_script_event 15, 18, 0x00, 0x00, BattleFrontier_OutsideWest_EventScript_BattleDomeSign
	@ BgEvent 1
	semantic_bg_script_event 45, 30, 0x00, 0x00, BattleFrontier_OutsideWest_EventScript_BattlePikeSign
	@ BgEvent 2
	semantic_bg_script_event 16, 43, 0x00, 0x00, BattleFrontier_OutsideWest_EventScript_BattleFactorySign
	@ BgEvent 3
	semantic_bg_script_event 52, 51, 0x00, 0x00, Common_EventScript_ShowPokemartSign
	@ BgEvent 4
	semantic_bg_script_event 53, 51, 0x00, 0x00, Common_EventScript_ShowPokemartSign
BattleFrontier_OutsideWest_MapEvents: @ 0x08513D50
	@ struct MapEvents
	semantic_map_events 24, 11, 0, 5, BattleFrontier_OutsideWest_ObjectEvents, BattleFrontier_OutsideWest_WarpEvents, 0, BattleFrontier_OutsideWest_BgEvents
BattleFrontier_BattleTowerLobby_ObjectEvents: @ 0x08513D64
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_BattleTowerLobby_EventScript_SinglesAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x41, 0x00, 23, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x22, 0x00, 17, 8, 0x03, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleTowerLobby_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x07, 0x00, 15, 9, 0x03, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleTowerLobby_EventScript_Boy, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x44, 0x00, 11, 9, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, EventScript_JP_08253FAE, 0x0396
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF0, 0x00, 1, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleTowerLobby_EventScript_Apprentice, 0x02BD
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x55, 0x00, 10, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x55, 0x00, 14, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x55, 0x00, 18, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant, 0x0000
BattleFrontier_BattleTowerLobby_WarpEvents: @ 0x08513E3C
	@ WarpEvent 0
	semantic_warp_event 12, 9, 0x03, 0x00, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 1
	semantic_warp_event 13, 9, 0x03, 0x00, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 2
	semantic_warp_event 6, 1, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, MAP_GROUP_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM
BattleFrontier_BattleTowerLobby_BgEvents: @ 0x08513E54
	@ BgEvent 0
	semantic_bg_script_event 4, 5, 0x00, 0x01, BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults
	@ BgEvent 1
	semantic_bg_script_event 8, 5, 0x00, 0x01, BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults
	@ BgEvent 2
	semantic_bg_script_event 12, 5, 0x00, 0x01, BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults
	@ BgEvent 3
	semantic_bg_script_event 16, 5, 0x00, 0x01, BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults
	@ BgEvent 4
	semantic_bg_script_event 2, 1, 0x00, 0x00, BattleFrontier_BattleTowerLobby_EventScript_RulesBoard
BattleFrontier_BattleTowerLobby_MapEvents: @ 0x08513E90
	@ struct MapEvents
	semantic_map_events 9, 3, 0, 5, BattleFrontier_BattleTowerLobby_ObjectEvents, BattleFrontier_BattleTowerLobby_WarpEvents, 0, BattleFrontier_BattleTowerLobby_BgEvents
BattleFrontier_BattleTowerElevator_ObjectEvents: @ 0x08513EA4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 1, 5, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleTowerElevator_MapEvents: @ 0x08513EBC
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, BattleFrontier_BattleTowerElevator_ObjectEvents, 0, 0, 0
BattleFrontier_BattleTowerCorridor_ObjectEvents: @ 0x08513ED0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 9, 2, 0x03, 0x09, 0, 0, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleTowerCorridor_MapEvents: @ 0x08513EE8
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, BattleFrontier_BattleTowerCorridor_ObjectEvents, 0, 0, 0
BattleFrontier_BattleTowerBattleRoom_ObjectEvents: @ 0x08513EFC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF0, 0x00, 5, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0378
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 1, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 4, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleTowerBattleRoom_WarpEvents: @ 0x08513F44
	@ WarpEvent 0
	semantic_warp_event 5, 8, 0x00, 0x02, MAP_NUM_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x00, 0x02, MAP_NUM_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY
BattleFrontier_BattleTowerBattleRoom_MapEvents: @ 0x08513F54
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, BattleFrontier_BattleTowerBattleRoom_ObjectEvents, BattleFrontier_BattleTowerBattleRoom_WarpEvents, 0, 0
SouthernIsland_Exterior_ObjectEvents: @ 0x08513F68
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 13, 23, 0x03, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_0822276F, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x8C, 0x00, 13, 25, 0x01, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0000
SouthernIsland_Exterior_WarpEvents: @ 0x08513F98
	@ WarpEvent 0
	semantic_warp_event 14, 5, 0x03, 0x00, MAP_NUM_SOUTHERN_ISLAND_INTERIOR, MAP_GROUP_SOUTHERN_ISLAND_INTERIOR
	@ WarpEvent 1
	semantic_warp_event 15, 5, 0x03, 0x01, MAP_NUM_SOUTHERN_ISLAND_INTERIOR, MAP_GROUP_SOUTHERN_ISLAND_INTERIOR
SouthernIsland_Exterior_BgEvents: @ 0x08513FA8
	@ BgEvent 0
	semantic_bg_script_event 16, 7, 0x03, 0x00, EventScript_JP_082227D9
SouthernIsland_Exterior_MapEvents: @ 0x08513FB4
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 1, SouthernIsland_Exterior_ObjectEvents, SouthernIsland_Exterior_WarpEvents, 0, SouthernIsland_Exterior_BgEvents
SouthernIsland_Interior_ObjectEvents: @ 0x08513FC8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF0, 0x00, 13, 12, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x038E
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF1, 0x00, 13, 2, 0x00, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x038F
SouthernIsland_Interior_WarpEvents: @ 0x08513FF8
	@ WarpEvent 0
	semantic_warp_event 13, 18, 0x03, 0x00, MAP_NUM_SOUTHERN_ISLAND_EXTERIOR, MAP_GROUP_SOUTHERN_ISLAND_EXTERIOR
	@ WarpEvent 1
	semantic_warp_event 14, 18, 0x03, 0x01, MAP_NUM_SOUTHERN_ISLAND_EXTERIOR, MAP_GROUP_SOUTHERN_ISLAND_EXTERIOR
SouthernIsland_Interior_BgEvents: @ 0x08514008
	@ BgEvent 0
	semantic_bg_script_event 13, 11, 0x03, 0x01, EventScript_JP_08222861
SouthernIsland_Interior_MapEvents: @ 0x08514014
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 1, SouthernIsland_Interior_ObjectEvents, SouthernIsland_Interior_WarpEvents, 0, SouthernIsland_Interior_BgEvents
SafariZone_RestHouse_ObjectEvents: @ 0x08514028
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x23, 0x00, 7, 4, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_08222984, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x25, 0x00, 8, 4, 0x00, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_0822298D, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x11, 0x00, 2, 5, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_08222996, 0x0000
SafariZone_RestHouse_WarpEvents: @ 0x08514070
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x00, MAP_NUM_SAFARI_ZONE_SOUTHWEST, MAP_GROUP_SAFARI_ZONE_SOUTHWEST
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x00, MAP_NUM_SAFARI_ZONE_SOUTHWEST, MAP_GROUP_SAFARI_ZONE_SOUTHWEST
SafariZone_RestHouse_MapEvents: @ 0x08514080
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 0, SafariZone_RestHouse_ObjectEvents, SafariZone_RestHouse_WarpEvents, 0, 0
SafariZone_Northeast_ObjectEvents: @ 0x08514094
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0D, 0x00, 8, 20, 0x03, 0x01, 1, 1, 0x0000, 0x0000, SafariZone_Northeast_EventScript_Boy, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 30, 22, 0x03, 0x01, 1, 1, 0x0000, 0x0000, SafariZone_Northeast_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x56, 0x00, 11, 11, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0015
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x10, 0x00, 13, 35, 0x00, 0x01, 1, 1, 0x0000, 0x0000, SafariZone_Northeast_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x56, 0x00, 8, 13, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0013
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x56, 0x00, 9, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0011
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x56, 0x00, 8, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0014
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x56, 0x00, 12, 8, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0012
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x3B, 0x00, 8, 17, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0825703A, 0x0491
SafariZone_Northeast_BgEvents: @ 0x0851416C
	@ BgEvent 0
	semantic_bg_hidden_item_event 31, 35, 0x03, ITEM_RARE_CANDY, 0x006A
	@ BgEvent 1
	semantic_bg_hidden_item_event 21, 5, 0x03, ITEM_ZINC, 0x006B
SafariZone_Northeast_MapEvents: @ 0x08514184
	@ struct MapEvents
	semantic_map_events 9, 0, 0, 2, SafariZone_Northeast_ObjectEvents, 0, 0, SafariZone_Northeast_BgEvents
SafariZone_Southeast_ObjectEvents: @ 0x08514198
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0F, 0x00, 7, 7, 0x03, 0x01, 1, 1, 0x0000, 0x0000, SafariZone_Southeast_EventScript_RichBoy, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x11, 0x00, 20, 30, 0x03, 0x02, 1, 1, 0x0000, 0x0000, SafariZone_Southeast_EventScript_FatMan, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0C, 0x00, 8, 26, 0x03, 0x02, 1, 1, 0x0000, 0x0000, SafariZone_Southeast_EventScript_LittleGirl, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 31, 15, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08257047, 0x0492
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x1F, 0x00, 12, 16, 0x03, 0x09, 1, 1, 0x0000, 0x0000, SafariZone_Southeast_EventScript_ExpansionZoneAttendant, 0x02EB
SafariZone_Southeast_BgEvents: @ 0x08514210
	@ BgEvent 0
	semantic_bg_hidden_item_event 19, 36, 0x03, ITEM_PP_UP, 0x006C
	@ BgEvent 1
	semantic_bg_hidden_item_event 35, 32, 0x03, ITEM_FULL_RESTORE, 0x0069
SafariZone_Southeast_MapEvents: @ 0x08514228
	@ struct MapEvents
	semantic_map_events 5, 0, 0, 2, SafariZone_Southeast_ObjectEvents, 0, 0, SafariZone_Southeast_BgEvents
BattleFrontier_OutsideEast_ObjectEvents: @ 0x0851423C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x05, 0x00, 20, 17, 0x00, 0x1B, 3, 1, 0x0000, 0x0000, EventScript_JP_08222A04, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x21, 0x00, 42, 15, 0x00, 0x02, 1, 3, 0x0000, 0x0000, EventScript_JP_08222A0D, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x37, 0x00, 53, 6, 0x00, 0x08, 2, 0, 0x0000, 0x0000, EventScript_JP_08222A16, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x28, 0x00, 54, 16, 0x00, 0x02, 2, 1, 0x0000, 0x0000, EventScript_JP_08222A1F, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2C, 0x00, 37, 32, 0x00, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08222A28, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x1B, 0x00, 41, 56, 0x03, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_08222A31, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x16, 0x00, 8, 46, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08222A58, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x33, 0x00, 34, 41, 0x00, 0x1C, 3, 1, 0x0000, 0x0000, EventScript_JP_08222A7E, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x0F, 0x00, 45, 47, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08222A4F, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x39, 0x00, 59, 35, 0x00, 0x1A, 1, 6, 0x0000, 0x0000, EventScript_JP_08222A61, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x06, 0x00, 18, 40, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08222A6A, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x13, 0x00, 17, 40, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_08222A73, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xD0, 0x00, 40, 56, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08222A3C, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0xE4, 0x00, 54, 62, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08222A87, 0x034A
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x27, 0x00, 42, 34, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08222B15, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x0E, 0x00, 51, 53, 0x03, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08222B1E, 0x0000
	@ ObjectEventTemplate 16
	semantic_object_event 0x11, 0x25, 0x00, 62, 18, 0x00, 0x2E, 2, 6, 0x0000, 0x0000, EventScript_JP_08222B27, 0x0000
	@ ObjectEventTemplate 17
	semantic_object_event 0x12, 0x21, 0x00, 11, 21, 0x00, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_08222B30, 0x0000
	@ ObjectEventTemplate 18
	semantic_object_event 0x13, 0x22, 0x00, 10, 21, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_08222B39, 0x0000
	@ ObjectEventTemplate 19
	semantic_object_event 0x14, 0x22, 0x00, 16, 30, 0x00, 0x02, 3, 2, 0x0000, 0x0000, EventScript_JP_08222B42, 0x0000
	@ ObjectEventTemplate 20
	semantic_object_event 0x15, 0x2C, 0x00, 33, 14, 0x00, 0x07, 0, 0, 0x0000, 0x0000, EventScript_JP_08222B4B, 0x0000
	@ ObjectEventTemplate 21
	semantic_object_event 0x16, 0x27, 0x00, 54, 31, 0x00, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_08222B54, 0x0000
	@ ObjectEventTemplate 22
	semantic_object_event 0x17, 0x1A, 0x00, 54, 32, 0x00, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08222B5F, 0x0000
	@ ObjectEventTemplate 23
	semantic_object_event 0x18, 0x1E, 0x00, 58, 55, 0x03, 0x11, 1, 1, 0x0000, 0x0000, EventScript_JP_08222B85, 0x0000
	@ ObjectEventTemplate 24
	semantic_object_event 0x19, 0x30, 0x00, 48, 41, 0x00, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08222B7C, 0x0000
	@ ObjectEventTemplate 25
	semantic_object_event 0x1A, 0x1F, 0x00, 29, 14, 0x00, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08222BA4, 0x0000
BattleFrontier_OutsideEast_WarpEvents: @ 0x085144AC
	@ WarpEvent 0
	semantic_warp_event 16, 14, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY
	@ WarpEvent 1
	semantic_warp_event 39, 29, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY
	@ WarpEvent 2
	semantic_warp_event 45, 56, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY
	@ WarpEvent 3
	semantic_warp_event 58, 14, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY
	@ WarpEvent 4
	semantic_warp_event 35, 12, 0x03, 0x00, MAP_NUM_BATTLE_FRONTIER_RANKING_HALL, MAP_GROUP_BATTLE_FRONTIER_RANKING_HALL
	@ WarpEvent 5
	semantic_warp_event 4, 44, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE1, MAP_GROUP_BATTLE_FRONTIER_LOUNGE1
	@ WarpEvent 6
	semantic_warp_event 10, 28, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_EXCHANGE_SERVICE_CORNER, MAP_GROUP_BATTLE_FRONTIER_EXCHANGE_SERVICE_CORNER
	@ WarpEvent 7
	semantic_warp_event 22, 51, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE5, MAP_GROUP_BATTLE_FRONTIER_LOUNGE5
	@ WarpEvent 8
	semantic_warp_event 5, 8, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE6, MAP_GROUP_BATTLE_FRONTIER_LOUNGE6
	@ WarpEvent 9
	semantic_warp_event 65, 31, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE3, MAP_GROUP_BATTLE_FRONTIER_LOUNGE3
	@ WarpEvent 10
	semantic_warp_event 14, 51, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE8, MAP_GROUP_BATTLE_FRONTIER_LOUNGE8
	@ WarpEvent 11
	semantic_warp_event 21, 45, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_LOUNGE9, MAP_GROUP_BATTLE_FRONTIER_LOUNGE9
	@ WarpEvent 12
	semantic_warp_event 3, 51, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_POKEMON_CENTER_1F, MAP_GROUP_BATTLE_FRONTIER_POKEMON_CENTER_1F
	@ WarpEvent 13
	semantic_warp_event 28, 7, 0x00, 0x00, MAP_NUM_ARTISAN_CAVE_1_F, MAP_GROUP_ARTISAN_CAVE_1_F
BattleFrontier_OutsideEast_BgEvents: @ 0x0851451C
	@ BgEvent 0
	semantic_bg_script_event 13, 17, 0x00, 0x00, EventScript_JP_082229E0
	@ BgEvent 1
	semantic_bg_script_event 43, 56, 0x00, 0x00, EventScript_JP_082229E9
	@ BgEvent 2
	semantic_bg_script_event 36, 34, 0x00, 0x00, EventScript_JP_082229F2
	@ BgEvent 3
	semantic_bg_script_event 62, 15, 0x00, 0x00, EventScript_JP_082229FB
	@ BgEvent 4
	semantic_bg_script_event 7, 29, 0x00, 0x00, EventScript_JP_08222B73
	@ BgEvent 5
	semantic_bg_script_event 32, 13, 0x00, 0x00, EventScript_JP_08222B6A
	@ BgEvent 6
	semantic_bg_script_event 4, 51, 0x00, 0x00, Common_EventScript_ShowPokemonCenterSign
	@ BgEvent 7
	semantic_bg_script_event 5, 51, 0x00, 0x00, Common_EventScript_ShowPokemonCenterSign
BattleFrontier_OutsideEast_MapEvents: @ 0x0851457C
	@ struct MapEvents
	semantic_map_events 26, 14, 0, 8, BattleFrontier_OutsideEast_ObjectEvents, BattleFrontier_OutsideEast_WarpEvents, 0, BattleFrontier_OutsideEast_BgEvents
BattleFrontier_BattleTowerMultiPartnerRoom_ObjectEvents: @ 0x08514590
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 11, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0822355D, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 2, 10, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_0822360C, 0x02C7
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xF1, 0x00, 17, 11, 0x03, 0x0E, 1, 1, 0x0000, 0x0000, EventScript_JP_082236DE, 0x02C8
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF2, 0x00, 6, 9, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082236EB, 0x02C9
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xF3, 0x00, 8, 13, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_JP_082236F8, 0x02CA
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xF4, 0x00, 10, 11, 0x03, 0x07, 1, 1, 0x0000, 0x0000, EventScript_JP_08223705, 0x02CB
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF5, 0x00, 13, 10, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_08223712, 0x02CC
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF6, 0x00, 15, 13, 0x03, 0x0F, 1, 1, 0x0000, 0x0000, EventScript_JP_0822371F, 0x0360
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xF7, 0x00, 4, 12, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, EventScript_JP_0822372C, 0x0361
BattleFrontier_BattleTowerMultiPartnerRoom_MapEvents: @ 0x08514668
	@ struct MapEvents
	semantic_map_events 9, 0, 0, 0, BattleFrontier_BattleTowerMultiPartnerRoom_ObjectEvents, 0, 0, 0
BattleFrontier_BattleTowerMultiCorridor_ObjectEvents: @ 0x0851467C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xFF, 0x00, 1, 1, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 14, 3, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 1, 3, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xFE, 0x00, 14, 1, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleTowerMultiCorridor_MapEvents: @ 0x085146DC
	@ struct MapEvents
	semantic_map_events 4, 0, 0, 0, BattleFrontier_BattleTowerMultiCorridor_ObjectEvents, 0, 0, 0
BattleFrontier_BattleTowerMultiBattleRoom_ObjectEvents: @ 0x085146F0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF0, 0x00, 5, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0378
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 1, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 1, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xF1, 0x00, 4, 1, 0x03, 0x08, 0, 0, 0x0000, 0x0000, 0, 0x0378
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xFF, 0x00, 4, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xFE, 0x00, 5, 8, 0x03, 0x07, 0, 0, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleTowerMultiBattleRoom_MapEvents: @ 0x08514780
	@ struct MapEvents
	semantic_map_events 6, 0, 0, 0, BattleFrontier_BattleTowerMultiBattleRoom_ObjectEvents, 0, 0, 0
BattleFrontier_BattleDomeLobby_ObjectEvents: @ 0x08514794
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 5, 10, 0x00, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08226FDF, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x21, 0x00, 1, 11, 0x00, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_082273BA, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2F, 0x00, 14, 14, 0x00, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_082273A8, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x11, 0x00, 18, 14, 0x00, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_082273B1, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x27, 0x00, 8, 14, 0x00, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_08227397, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x55, 0x00, 17, 10, 0x00, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08226FF1, 0x0000
BattleFrontier_BattleDomeLobby_WarpEvents: @ 0x08514824
	@ WarpEvent 0
	semantic_warp_event 11, 16, 0x00, 0x01, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 12, 16, 0x00, 0x01, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_BattleDomeLobby_BgEvents: @ 0x08514834
	@ BgEvent 0
	semantic_bg_script_event 4, 10, 0x00, 0x00, EventScript_JP_082272FC
	@ BgEvent 1
	semantic_bg_script_event 7, 10, 0x00, 0x00, EventScript_JP_0822732E
	@ BgEvent 2
	semantic_bg_script_event 18, 10, 0x00, 0x00, EventScript_JP_08227315
	@ BgEvent 3
	semantic_bg_script_event 15, 10, 0x00, 0x00, EventScript_JP_082273DE
BattleFrontier_BattleDomeLobby_MapEvents: @ 0x08514864
	@ struct MapEvents
	semantic_map_events 6, 2, 0, 4, BattleFrontier_BattleDomeLobby_ObjectEvents, BattleFrontier_BattleDomeLobby_WarpEvents, 0, BattleFrontier_BattleDomeLobby_BgEvents
BattleFrontier_BattleDomeCorridor_ObjectEvents: @ 0x08514878
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 23, 5, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleDomeCorridor_WarpEvents: @ 0x08514890
	@ WarpEvent 0
	semantic_warp_event 6, 8, 0x03, 0x01, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 7, 8, 0x03, 0x01, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_BattleDomeCorridor_MapEvents: @ 0x085148A0
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, BattleFrontier_BattleDomeCorridor_ObjectEvents, BattleFrontier_BattleDomeCorridor_WarpEvents, 0, 0
BattleFrontier_BattleDomePreBattleRoom_ObjectEvents: @ 0x085148B4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 5, 2, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleDomePreBattleRoom_WarpEvents: @ 0x085148CC
	@ WarpEvent 0
	semantic_warp_event 6, 8, 0x03, 0x01, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 7, 8, 0x03, 0x01, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_BattleDomePreBattleRoom_MapEvents: @ 0x085148DC
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, BattleFrontier_BattleDomePreBattleRoom_ObjectEvents, BattleFrontier_BattleDomePreBattleRoom_WarpEvents, 0, 0
BattleFrontier_BattleDomeBattleRoom_ObjectEvents: @ 0x085148F0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x43, 0x00, 5, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x06, 0x00, 7, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x07, 0x00, 9, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x09, 0x00, 11, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x05, 0x00, 16, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x13, 0x00, 4, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x15, 0x00, 16, 1, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x1F, 0x00, 8, 1, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x17, 0x00, 0, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x11, 0x00, 12, 1, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x0A, 0x00, 13, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x08, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0xF1, 0x00, 4, 9, 0x04, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x18, 0x00, 14, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0xF0, 0x00, 11, 6, 0x00, 0x09, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleDomeBattleRoom_MapEvents: @ 0x08514A58
	@ struct MapEvents
	semantic_map_events 15, 0, 0, 0, BattleFrontier_BattleDomeBattleRoom_ObjectEvents, 0, 0, 0
BattleFrontier_BattlePalaceLobby_ObjectEvents: @ 0x08514A6C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 5, 6, 0x00, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08229F1C, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2C, 0x00, 11, 8, 0x00, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0822A25A, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x27, 0x00, 24, 5, 0x00, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0822A275, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x21, 0x00, 18, 10, 0x00, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0822A263, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2D, 0x00, 2, 10, 0x00, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0822A26C, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x15, 0x00, 19, 6, 0x00, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_08229F2E, 0x0000
BattleFrontier_BattlePalaceLobby_WarpEvents: @ 0x08514AFC
	@ WarpEvent 0
	semantic_warp_event 12, 11, 0x00, 0x02, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 1
	semantic_warp_event 13, 11, 0x00, 0x02, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 2
	semantic_warp_event 5, 4, 0x03, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR
BattleFrontier_BattlePalaceLobby_BgEvents: @ 0x08514B14
	@ BgEvent 0
	semantic_bg_script_event 2, 7, 0x00, 0x01, EventScript_JP_0822A228
	@ BgEvent 1
	semantic_bg_script_event 16, 7, 0x00, 0x01, EventScript_JP_0822A241
	@ BgEvent 2
	semantic_bg_script_event 10, 4, 0x00, 0x00, EventScript_JP_0822A27E
BattleFrontier_BattlePalaceLobby_MapEvents: @ 0x08514B38
	@ struct MapEvents
	semantic_map_events 6, 3, 0, 3, BattleFrontier_BattlePalaceLobby_ObjectEvents, BattleFrontier_BattlePalaceLobby_WarpEvents, 0, BattleFrontier_BattlePalaceLobby_BgEvents
BattleFrontier_BattlePalaceCorridor_ObjectEvents: @ 0x08514B4C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 8, 12, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xD6, 0x00, 3, 5, 0x00, 0x02, 1, 0, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xE1, 0x00, 12, 6, 0x00, 0x0E, 0, 2, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xD1, 0x00, 15, 5, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xD0, 0x00, 4, 9, 0x00, 0x0E, 0, 2, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xD2, 0x00, 13, 9, 0x00, 0x01, 0, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xD3, 0x00, 3, 10, 0x00, 0x02, 1, 2, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattlePalaceCorridor_WarpEvents: @ 0x08514BF4
	@ WarpEvent 0
	semantic_warp_event 8, 13, 0x03, 0x02, MAP_NUM_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY
	@ WarpEvent 1
	semantic_warp_event 9, 13, 0x03, 0x02, MAP_NUM_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY
	@ WarpEvent 2
	semantic_warp_event 6, 3, 0x03, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
	@ WarpEvent 3
	semantic_warp_event 10, 3, 0x03, 0x00, MAP_NUM_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
BattleFrontier_BattlePalaceCorridor_MapEvents: @ 0x08514C14
	@ struct MapEvents
	semantic_map_events 7, 4, 0, 0, BattleFrontier_BattlePalaceCorridor_ObjectEvents, BattleFrontier_BattlePalaceCorridor_WarpEvents, 0, 0
BattleFrontier_BattlePalaceBattleRoom_ObjectEvents: @ 0x08514C28
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF1, 0x00, 1, 9, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 13, 1, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x15, 0x00, 1, 4, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xE2, 0x00, 13, 1, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xD6, 0x00, 13, 1, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattlePalaceBattleRoom_WarpEvents: @ 0x08514CA0
	@ WarpEvent 0
	semantic_warp_event 0, 9, 0x03, 0x02, MAP_NUM_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR
	@ WarpEvent 1
	semantic_warp_event 1, 9, 0x03, 0x02, MAP_NUM_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, MAP_GROUP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR
BattleFrontier_BattlePalaceBattleRoom_MapEvents: @ 0x08514CB0
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 0, BattleFrontier_BattlePalaceBattleRoom_ObjectEvents, BattleFrontier_BattlePalaceBattleRoom_WarpEvents, 0, 0
BattleFrontier_BattlePyramidLobby_ObjectEvents: @ 0x08514CC4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x37, 0x00, 7, 12, 0x04, 0x08, 1, 1, 0x0000, 0x0000, EventScript_JP_0822BE78, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x28, 0x00, 14, 13, 0x04, 0x09, 1, 1, 0x0000, 0x0000, EventScript_JP_0822C095, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x18, 0x00, 2, 15, 0x04, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0822C44A, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x11, 0x00, 12, 16, 0x04, 0x02, 1, 1, 0x0000, 0x0000, EventScript_JP_0822C453, 0x0000
BattleFrontier_BattlePyramidLobby_WarpEvents: @ 0x08514D24
	@ WarpEvent 0
	semantic_warp_event 7, 17, 0x04, 0x03, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_BattlePyramidLobby_BgEvents: @ 0x08514D2C
	@ BgEvent 0
	semantic_bg_script_event 5, 12, 0x00, 0x01, EventScript_JP_0822C309
	@ BgEvent 1
	semantic_bg_script_event 1, 12, 0x00, 0x00, EventScript_JP_0822C45C
BattleFrontier_BattlePyramidLobby_MapEvents: @ 0x08514D44
	@ struct MapEvents
	semantic_map_events 4, 1, 0, 2, BattleFrontier_BattlePyramidLobby_ObjectEvents, BattleFrontier_BattlePyramidLobby_WarpEvents, 0, BattleFrontier_BattlePyramidLobby_BgEvents
BattleFrontier_BattlePyramidFloor_ObjectEvents: @ 0x08514D58
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x05, 0x00, 0, 0, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x64, 0x00, 1, 0, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x64, 0x00, 2, 0, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x64, 0x00, 3, 0, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x64, 0x00, 4, 0, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x64, 0x00, 5, 0, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x64, 0x00, 6, 0, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x64, 0x00, 7, 0, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x64, 0x00, 0, 1, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x64, 0x00, 1, 1, 0x03, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x64, 0x00, 3, 1, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x64, 0x00, 4, 1, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x64, 0x00, 5, 1, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x64, 0x00, 6, 1, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x64, 0x00, 7, 1, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 15
	semantic_object_event 0x10, 0x64, 0x00, 2, 1, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattlePyramidFloor_MapEvents: @ 0x08514ED8
	@ struct MapEvents
	semantic_map_events 16, 0, 0, 0, BattleFrontier_BattlePyramidFloor_ObjectEvents, 0, 0, 0
BattleFrontier_BattlePyramidTop_ObjectEvents: @ 0x08514EEC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x37, 0x00, 17, 11, 0x06, 0x08, 1, 1, 0x0000, 0x0003, BattleFrontier_BattlePyramidTop_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xEA, 0x00, 17, 7, 0x00, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattlePyramidTop_CoordEvents: @ 0x08514F1C
	@ CoordEvent 0
	semantic_coord_event 17, 9, 0x04, 0x4002, 0x0000, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon
BattleFrontier_BattlePyramidTop_MapEvents: @ 0x08514F2C
	@ struct MapEvents
	semantic_map_events 2, 0, 1, 0, BattleFrontier_BattlePyramidTop_ObjectEvents, 0, BattleFrontier_BattlePyramidTop_CoordEvents, 0
BattleFrontier_BattleArenaLobby_ObjectEvents: @ 0x08514F40
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 7, 7, 0x00, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleArenaLobby_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x22, 0x00, 2, 10, 0x03, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleArenaLobby_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x42, 0x00, 14, 11, 0x03, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleArenaLobby_EventScript_Man, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x1F, 0x00, 14, 12, 0x03, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleArenaLobby_EventScript_Camper, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x23, 0x00, 14, 10, 0x03, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleArenaLobby_EventScript_Youngster, 0x0000
BattleFrontier_BattleArenaLobby_WarpEvents: @ 0x08514FB8
	@ WarpEvent 0
	semantic_warp_event 7, 12, 0x03, 0x01, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_BattleArenaLobby_BgEvents: @ 0x08514FC0
	@ BgEvent 0
	semantic_bg_script_event 5, 9, 0x03, 0x01, BattleFrontier_BattleArenaLobby_EventScript_ShowResults
	@ BgEvent 1
	semantic_bg_script_event 1, 7, 0x00, 0x00, BattleFrontier_BattleArenaLobby_EventScript_RulesBoard
BattleFrontier_BattleArenaLobby_MapEvents: @ 0x08514FD8
	@ struct MapEvents
	semantic_map_events 5, 1, 0, 2, BattleFrontier_BattleArenaLobby_ObjectEvents, BattleFrontier_BattleArenaLobby_WarpEvents, 0, BattleFrontier_BattleArenaLobby_BgEvents
BattleFrontier_BattleArenaCorridor_ObjectEvents: @ 0x08514FEC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 9, 12, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleArenaCorridor_MapEvents: @ 0x08515004
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, BattleFrontier_BattleArenaCorridor_ObjectEvents, 0, 0, 0
BattleFrontier_BattleArenaBattleRoom_ObjectEvents: @ 0x08515018
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2C, 0x00, 5, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2C, 0x00, 10, 3, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2C, 0x00, 5, 9, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2C, 0x00, 10, 9, 0x03, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2C, 0x00, 4, 5, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2C, 0x00, 11, 5, 0x03, 0x09, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xF0, 0x00, 15, 6, 0x03, 0x09, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xF1, 0x00, 0, 6, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x2C, 0x00, 7, 4, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleArenaBattleRoom_MapEvents: @ 0x085150F0
	@ struct MapEvents
	semantic_map_events 9, 0, 0, 0, BattleFrontier_BattleArenaBattleRoom_ObjectEvents, 0, 0, 0
BattleFrontier_BattleFactoryLobby_ObjectEvents: @ 0x08515104
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 4, 7, 0x00, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x10, 0x00, 3, 11, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleFactoryLobby_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1F, 0x00, 14, 11, 0x00, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_BattleFactoryLobby_EventScript_Camper, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x20, 0x00, 13, 11, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleFactoryLobby_EventScript_Picnicker, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x11, 0x00, 6, 10, 0x00, 0x01, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleFactoryLobby_EventScript_FatMan, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2E, 0x00, 14, 7, 0x00, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant, 0x0000
BattleFrontier_BattleFactoryLobby_WarpEvents: @ 0x08515194
	@ WarpEvent 0
	semantic_warp_event 9, 11, 0x00, 0x02, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 10, 11, 0x00, 0x02, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_BattleFactoryLobby_BgEvents: @ 0x085151A4
	@ BgEvent 0
	semantic_bg_script_event 2, 7, 0x00, 0x01, BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults
	@ BgEvent 1
	semantic_bg_script_event 11, 7, 0x00, 0x01, BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults
	@ BgEvent 2
	semantic_bg_script_event 9, 4, 0x00, 0x00, BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard
BattleFrontier_BattleFactoryLobby_MapEvents: @ 0x085151C8
	@ struct MapEvents
	semantic_map_events 6, 2, 0, 3, BattleFrontier_BattleFactoryLobby_ObjectEvents, BattleFrontier_BattleFactoryLobby_WarpEvents, 0, BattleFrontier_BattleFactoryLobby_BgEvents
BattleFrontier_BattleFactoryPreBattleRoom_ObjectEvents: @ 0x085151DC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 8, 12, 0x00, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleFactoryPreBattleRoom_MapEvents: @ 0x085151F4
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, BattleFrontier_BattleFactoryPreBattleRoom_ObjectEvents, 0, 0, 0
BattleFrontier_BattleFactoryBattleRoom_ObjectEvents: @ 0x08515208
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2E, 0x00, 0, 6, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF0, 0x00, 7, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2E, 0x00, 0, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2E, 0x00, 0, 8, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2E, 0x00, 12, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2E, 0x00, 12, 6, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x2E, 0x00, 12, 8, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xFF, 0x00, 5, 11, 0x00, 0x07, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattleFactoryBattleRoom_MapEvents: @ 0x085152C8
	@ struct MapEvents
	semantic_map_events 8, 0, 0, 0, BattleFrontier_BattleFactoryBattleRoom_ObjectEvents, 0, 0, 0
BattleFrontier_BattlePikeLobby_ObjectEvents: @ 0x085152DC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1C, 0x00, 5, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_BattlePikeLobby_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x37, 0x00, 10, 9, 0x03, 0x07, 1, 1, 0x0000, 0x0000, BattleFrontier_BattlePikeLobby_EventScript_Hiker, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x06, 0x00, 0, 5, 0x03, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_BattlePikeLobby_EventScript_Twin, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2D, 0x00, 8, 9, 0x03, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_BattlePikeLobby_EventScript_Beauty, 0x0000
BattleFrontier_BattlePikeLobby_WarpEvents: @ 0x0851533C
	@ WarpEvent 0
	semantic_warp_event 5, 12, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 4, 12, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 2
	semantic_warp_event 6, 12, 0x00, 0x00, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_BattlePikeLobby_BgEvents: @ 0x08515354
	@ BgEvent 0
	semantic_bg_script_event 8, 3, 0x00, 0x00, BattleFrontier_BattlePikeLobby_EventScript_ShowResults
	@ BgEvent 1
	semantic_bg_script_event 1, 3, 0x00, 0x00, BattleFrontier_BattlePikeLobby_EventScript_RulesBoard
BattleFrontier_BattlePikeLobby_MapEvents: @ 0x0851536C
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 2, BattleFrontier_BattlePikeLobby_ObjectEvents, BattleFrontier_BattlePikeLobby_WarpEvents, 0, BattleFrontier_BattlePikeLobby_BgEvents
BattleFrontier_BattlePikeCorridor_ObjectEvents: @ 0x08515380
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1C, 0x00, 6, 6, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattlePikeCorridor_MapEvents: @ 0x08515398
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, BattleFrontier_BattlePikeCorridor_ObjectEvents, 0, 0, 0
BattleFrontier_BattlePikeThreePathRoom_ObjectEvents: @ 0x085153AC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1C, 0x00, 4, 10, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1C, 0x00, 8, 5, 0x03, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver, 0x0000
BattleFrontier_BattlePikeThreePathRoom_CoordEvents: @ 0x085153DC
	@ CoordEvent 0
	semantic_coord_event 2, 3, 0x03, 0x4001, 0x0000, EventScript_JP_082743D7
	@ CoordEvent 1
	semantic_coord_event 6, 3, 0x03, 0x4001, 0x0000, EventScript_JP_082743E2
	@ CoordEvent 2
	semantic_coord_event 10, 3, 0x03, 0x4001, 0x0000, EventScript_JP_082743ED
	@ CoordEvent 3
	semantic_coord_event 5, 10, 0x00, 0x4003, 0x0001, EventScript_JP_082744F6
	@ CoordEvent 4
	semantic_coord_event 6, 10, 0x00, 0x4003, 0x0001, EventScript_JP_082744F6
	@ CoordEvent 5
	semantic_coord_event 6, 9, 0x03, 0x4002, 0x0000, EventScript_JP_082744EB
	@ CoordEvent 6
	semantic_coord_event 5, 9, 0x03, 0x4002, 0x0000, EventScript_JP_082744EB
	@ CoordEvent 7
	semantic_coord_event 7, 9, 0x03, 0x4002, 0x0000, EventScript_JP_082744EB
	@ CoordEvent 8
	semantic_coord_event 7, 10, 0x00, 0x4003, 0x0001, EventScript_JP_082744F6
BattleFrontier_BattlePikeThreePathRoom_MapEvents: @ 0x0851546C
	@ struct MapEvents
	semantic_map_events 2, 0, 9, 0, BattleFrontier_BattlePikeThreePathRoom_ObjectEvents, 0, BattleFrontier_BattlePikeThreePathRoom_CoordEvents, 0
BattleFrontier_BattlePikeRoomNormal_ObjectEvents: @ 0x08515480
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xF0, 0x00, 4, 4, 0x03, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_BattlePikeRoomNormal_EventScript_NPC, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xF1, 0x00, 3, 4, 0x03, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMon, 0x0000
BattleFrontier_BattlePikeRoomNormal_CoordEvents: @ 0x085154B0
	@ CoordEvent 0
	semantic_coord_event 4, 3, 0x03, 0x4001, 0x0000, EventScript_JP_0827452B
	@ CoordEvent 1
	semantic_coord_event 3, 6, 0x03, 0x4002, 0x0000, EventScript_JP_0827450B
	@ CoordEvent 2
	semantic_coord_event 3, 7, 0x03, 0x4003, 0x0001, EventScript_JP_08274516
	@ CoordEvent 3
	semantic_coord_event 4, 6, 0x03, 0x4002, 0x0000, EventScript_JP_0827450B
	@ CoordEvent 4
	semantic_coord_event 5, 6, 0x03, 0x4002, 0x0000, EventScript_JP_0827450B
	@ CoordEvent 5
	semantic_coord_event 4, 7, 0x03, 0x4003, 0x0001, EventScript_JP_08274516
	@ CoordEvent 6
	semantic_coord_event 5, 7, 0x03, 0x4003, 0x0001, EventScript_JP_08274516
BattleFrontier_BattlePikeRoomNormal_MapEvents: @ 0x08515520
	@ struct MapEvents
	semantic_map_events 2, 0, 7, 0, BattleFrontier_BattlePikeRoomNormal_ObjectEvents, 0, BattleFrontier_BattlePikeRoomNormal_CoordEvents, 0
BattleFrontier_BattlePikeRoomFinal_ObjectEvents: @ 0x08515534
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1C, 0x00, 2, 4, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_BattlePikeRoomFinal_MapEvents: @ 0x0851554C
	@ struct MapEvents
	semantic_map_events 1, 0, 0, 0, BattleFrontier_BattlePikeRoomFinal_ObjectEvents, 0, 0, 0
BattleFrontier_BattlePikeRoomWildMons_CoordEvents: @ 0x08515560
	@ CoordEvent 0
	semantic_coord_event 4, 3, 0x03, 0x4001, 0x0000, EventScript_JP_082745FD
	@ CoordEvent 1
	semantic_coord_event 3, 18, 0x03, 0x4002, 0x0000, EventScript_JP_0827468B
	@ CoordEvent 2
	semantic_coord_event 4, 18, 0x03, 0x4002, 0x0000, EventScript_JP_0827468B
	@ CoordEvent 3
	semantic_coord_event 5, 18, 0x03, 0x4002, 0x0000, EventScript_JP_0827468B
	@ CoordEvent 4
	semantic_coord_event 3, 19, 0x03, 0x4003, 0x0001, EventScript_JP_08274696
	@ CoordEvent 5
	semantic_coord_event 4, 19, 0x03, 0x4003, 0x0001, EventScript_JP_08274696
	@ CoordEvent 6
	semantic_coord_event 5, 19, 0x03, 0x4003, 0x0001, EventScript_JP_08274696
BattleFrontier_BattlePikeRoomWildMons_MapEvents: @ 0x085155D0
	@ struct MapEvents
	semantic_map_events 0, 0, 7, 0, 0, 0, BattleFrontier_BattlePikeRoomWildMons_CoordEvents, 0
BattleFrontier_RankingHall_ObjectEvents: @ 0x085155E4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 24, 13, 0x03, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_RankingHall_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x05, 0x00, 4, 10, 0x03, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_RankingHall_EventScript_NinjaBoy, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0D, 0x00, 44, 11, 0x03, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_RankingHall_EventScript_Boy, 0x0000
BattleFrontier_RankingHall_WarpEvents: @ 0x0851562C
	@ WarpEvent 0
	semantic_warp_event 26, 14, 0x03, 0x04, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 1
	semantic_warp_event 27, 14, 0x03, 0x04, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_RankingHall_BgEvents: @ 0x0851563C
	@ BgEvent 0
	semantic_bg_script_event 26, 9, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_TowerSinglesRecords
	@ BgEvent 1
	semantic_bg_script_event 23, 8, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_TowerDoublesRecords
	@ BgEvent 2
	semantic_bg_script_event 26, 5, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_TowerMultisRecords
	@ BgEvent 3
	semantic_bg_script_event 29, 8, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_TowerLinkRecords
	@ BgEvent 4
	semantic_bg_script_event 42, 9, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_ArenaRecords
	@ BgEvent 5
	semantic_bg_script_event 46, 9, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_PalaceRecords
	@ BgEvent 6
	semantic_bg_script_event 10, 9, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_FactoryRecords
	@ BgEvent 7
	semantic_bg_script_event 8, 7, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_DomeRecords
	@ BgEvent 8
	semantic_bg_script_event 6, 9, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_PikeRecords
	@ BgEvent 9
	semantic_bg_script_event 44, 7, 0x00, 0x01, BattleFrontier_RankingHall_EventScript_PyramidRecords
	@ BgEvent 10
	semantic_bg_script_event 16, 8, 0x00, 0x00, BattleFrontier_RankingHall_EventScript_DomePikeFactoryRecordsSign
	@ BgEvent 11
	semantic_bg_script_event 36, 8, 0x00, 0x00, BattleFrontier_RankingHall_EventScript_PalaceArenaPyramidRecordsSIgn
BattleFrontier_RankingHall_MapEvents: @ 0x085156CC
	@ struct MapEvents
	semantic_map_events 3, 2, 0, 12, BattleFrontier_RankingHall_ObjectEvents, BattleFrontier_RankingHall_WarpEvents, 0, BattleFrontier_RankingHall_BgEvents
BattleFrontier_Lounge1_ObjectEvents: @ 0x085156E0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1D, 0x00, 0, 6, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge1_EventScript_Breeder, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0D, 0x00, 7, 6, 0x00, 0x02, 1, 2, 0x0000, 0x0000, BattleFrontier_Lounge1_EventScript_Boy1, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x09, 0x00, 5, 4, 0x00, 0x02, 2, 1, 0x0000, 0x0000, BattleFrontier_Lounge1_EventScript_Boy2, 0x0000
BattleFrontier_Lounge1_WarpEvents: @ 0x08515728
	@ WarpEvent 0
	semantic_warp_event 4, 9, 0x00, 0x05, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_Lounge1_MapEvents: @ 0x08515730
	@ struct MapEvents
	semantic_map_events 3, 1, 0, 0, BattleFrontier_Lounge1_ObjectEvents, BattleFrontier_Lounge1_WarpEvents, 0, 0
BattleFrontier_ExchangeServiceCorner_ObjectEvents: @ 0x08515744
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 4, 4, 0x00, 0x09, 0, 0, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0F, 0x00, 0, 5, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x12, 0x00, 0, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x31, 0x00, 14, 6, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_Sailor, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x42, 0x00, 1, 9, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_Man, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x55, 0x00, 5, 5, 0x00, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x55, 0x00, 9, 5, 0x00, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_VitaminClerk, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x55, 0x00, 10, 4, 0x00, 0x0A, 0, 0, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_HoldItemClerk, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x08, 0x00, 12, 10, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_ExchangeServiceCorner_EventScript_Girl, 0x0000
BattleFrontier_ExchangeServiceCorner_WarpEvents: @ 0x0851581C
	@ WarpEvent 0
	semantic_warp_event 7, 10, 0x00, 0x06, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 1
	semantic_warp_event 6, 10, 0x00, 0x06, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 2
	semantic_warp_event 8, 10, 0x00, 0x06, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_ExchangeServiceCorner_MapEvents: @ 0x08515834
	@ struct MapEvents
	semantic_map_events 9, 3, 0, 0, BattleFrontier_ExchangeServiceCorner_ObjectEvents, BattleFrontier_ExchangeServiceCorner_WarpEvents, 0, 0
BattleFrontier_Lounge2_ObjectEvents: @ 0x08515848
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x27, 0x00, 8, 4, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge2_EventScript_FrontierManiac, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x27, 0x00, 10, 4, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge2_EventScript_Maniac1, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x27, 0x00, 10, 3, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge2_EventScript_Maniac2, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x34, 0x00, 4, 6, 0x00, 0x02, 1, 2, 0x0000, 0x0000, BattleFrontier_Lounge2_EventScript_TriathleteF, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x27, 0x00, 10, 5, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge2_EventScript_Maniac3, 0x0000
BattleFrontier_Lounge2_WarpEvents: @ 0x085158C0
	@ WarpEvent 0
	semantic_warp_event 1, 7, 0x00, 0x03, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 2, 7, 0x00, 0x03, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_Lounge2_MapEvents: @ 0x085158D0
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 0, BattleFrontier_Lounge2_ObjectEvents, BattleFrontier_Lounge2_WarpEvents, 0, 0
BattleFrontier_Lounge3_ObjectEvents: @ 0x085158E4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x37, 0x00, 4, 6, 0x00, 0x07, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge3_EventScript_Gambler, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x11, 0x00, 4, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge3_EventScript_FatMan, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x14, 0x00, 3, 5, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge3_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x12, 0x00, 5, 5, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge3_EventScript_PokefanF, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x21, 0x00, 0, 6, 0x00, 0x02, 0, 3, 0x0000, 0x0000, BattleFrontier_Lounge3_EventScript_Man, 0x0000
BattleFrontier_Lounge3_WarpEvents: @ 0x0851595C
	@ WarpEvent 0
	semantic_warp_event 4, 9, 0x00, 0x09, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_Lounge3_MapEvents: @ 0x08515964
	@ struct MapEvents
	semantic_map_events 5, 1, 0, 0, BattleFrontier_Lounge3_ObjectEvents, BattleFrontier_Lounge3_WarpEvents, 0, 0
BattleFrontier_Lounge4_ObjectEvents: @ 0x08515978
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x18, 0x00, 4, 4, 0x00, 0x07, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge4_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1B, 0x00, 6, 6, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge4_EventScript_Cook, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 0, 5, 0x00, 0x0A, 2, 1, 0x0000, 0x0000, BattleFrontier_Lounge4_EventScript_Man, 0x0000
BattleFrontier_Lounge4_WarpEvents: @ 0x085159C0
	@ WarpEvent 0
	semantic_warp_event 4, 9, 0x00, 0x06, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_Lounge4_MapEvents: @ 0x085159C8
	@ struct MapEvents
	semantic_map_events 3, 1, 0, 0, BattleFrontier_Lounge4_ObjectEvents, BattleFrontier_Lounge4_WarpEvents, 0, 0
BattleFrontier_ScottsHouse_ObjectEvents: @ 0x085159DC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xDB, 0x00, 2, 3, 0x03, 0x01, 1, 1, 0x0000, 0x0000, BattleFrontier_ScottsHouse_EventScript_Scott, 0x0000
BattleFrontier_ScottsHouse_WarpEvents: @ 0x085159F4
	@ WarpEvent 0
	semantic_warp_event 2, 7, 0x03, 0x05, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 3, 7, 0x03, 0x05, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_ScottsHouse_MapEvents: @ 0x08515A04
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, BattleFrontier_ScottsHouse_ObjectEvents, BattleFrontier_ScottsHouse_WarpEvents, 0, 0
BattleFrontier_Lounge5_ObjectEvents: @ 0x08515A18
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0C, 0x00, 12, 4, 0x04, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge5_EventScript_NatureGirl, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x30, 0x00, 0, 4, 0x03, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge5_EventScript_Gentleman, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2C, 0x00, 6, 5, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge5_EventScript_BlackBelt, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0B, 0x00, 11, 7, 0x00, 0x01, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge5_EventScript_LittleBoy, 0x0000
BattleFrontier_Lounge5_WarpEvents: @ 0x08515A78
	@ WarpEvent 0
	semantic_warp_event 1, 7, 0x00, 0x07, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 1
	semantic_warp_event 2, 7, 0x00, 0x07, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_Lounge5_MapEvents: @ 0x08515A88
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, BattleFrontier_Lounge5_ObjectEvents, BattleFrontier_Lounge5_WarpEvents, 0, 0
BattleFrontier_Lounge6_ObjectEvents: @ 0x08515A9C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2D, 0x00, 2, 4, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge6_EventScript_Trader, 0x0000
BattleFrontier_Lounge6_WarpEvents: @ 0x08515AB4
	@ WarpEvent 0
	semantic_warp_event 4, 9, 0x00, 0x08, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_Lounge6_MapEvents: @ 0x08515ABC
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, BattleFrontier_Lounge6_ObjectEvents, BattleFrontier_Lounge6_WarpEvents, 0, 0
BattleFrontier_Lounge7_ObjectEvents: @ 0x08515AD0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 0, 7, 0x00, 0x02, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge7_EventScript_Sailor, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x16, 0x00, 2, 5, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge7_EventScript_LeftMoveTutor, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x16, 0x00, 6, 5, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge7_EventScript_RightMoveTutor, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x30, 0x00, 8, 3, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge7_EventScript_Gentleman, 0x0000
BattleFrontier_Lounge7_WarpEvents: @ 0x08515B30
	@ WarpEvent 0
	semantic_warp_event 4, 9, 0x00, 0x07, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_Lounge7_MapEvents: @ 0x08515B38
	@ struct MapEvents
	semantic_map_events 4, 1, 0, 0, BattleFrontier_Lounge7_ObjectEvents, BattleFrontier_Lounge7_WarpEvents, 0, 0
BattleFrontier_ReceptionGate_ObjectEvents: @ 0x08515B4C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 0, 11, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_ReceptionGate_EventScript_Greeter, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 8, 11, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_ReceptionGate_EventScript_FacilityGuide, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x17, 0x00, 8, 4, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_ReceptionGate_EventScript_RulesGuide, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDB, 0x00, 4, 5, 0x03, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0344
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x17, 0x00, 0, 4, 0x00, 0x0A, 1, 1, 0x0000, 0x0000, BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide, 0x0000
BattleFrontier_ReceptionGate_WarpEvents: @ 0x08515BC4
	@ WarpEvent 0
	semantic_warp_event 4, 13, 0x00, 0x08, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 4, 1, 0x00, 0x09, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_ReceptionGate_MapEvents: @ 0x08515BD4
	@ struct MapEvents
	semantic_map_events 5, 2, 0, 0, BattleFrontier_ReceptionGate_ObjectEvents, BattleFrontier_ReceptionGate_WarpEvents, 0, 0
BattleFrontier_Lounge8_ObjectEvents: @ 0x08515BE8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x05, 0x00, 4, 5, 0x00, 0x02, 2, 2, 0x0000, 0x0000, BattleFrontier_Lounge8_EventScript_NinjaBoy, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x21, 0x00, 8, 7, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge8_EventScript_Man, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x22, 0x00, 8, 4, 0x00, 0x09, 1, 1, 0x0000, 0x0000, BattleFrontier_Lounge8_EventScript_Woman, 0x0000
BattleFrontier_Lounge8_WarpEvents: @ 0x08515C30
	@ WarpEvent 0
	semantic_warp_event 4, 9, 0x00, 0x0A, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_Lounge8_MapEvents: @ 0x08515C38
	@ struct MapEvents
	semantic_map_events 3, 1, 0, 0, BattleFrontier_Lounge8_ObjectEvents, BattleFrontier_Lounge8_WarpEvents, 0, 0
BattleFrontier_Lounge9_ObjectEvents: @ 0x08515C4C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0A, 0x00, 6, 3, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
BattleFrontier_Lounge9_WarpEvents: @ 0x08515C64
	@ WarpEvent 0
	semantic_warp_event 1, 9, 0x00, 0x0B, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 1
	semantic_warp_event 2, 9, 0x00, 0x0B, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
BattleFrontier_Lounge9_MapEvents: @ 0x08515C74
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, BattleFrontier_Lounge9_ObjectEvents, BattleFrontier_Lounge9_WarpEvents, 0, 0
BattleFrontier_PokemonCenter_1F_ObjectEvents: @ 0x08515C88
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x3A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, BattleFrontier_PokemonCenter_1F_EventScript_Nurse, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x26, 0x00, 4, 5, 0x03, 0x0E, 1, 0, 0x0000, 0x0000, BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x21, 0x00, 11, 4, 0x03, 0x08, 1, 0, 0x0000, 0x0000, BattleFrontier_PokemonCenter_1F_EventScript_Man, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x20, 0x00, 2, 3, 0x03, 0x09, 1, 0, 0x0000, 0x0000, BattleFrontier_PokemonCenter_1F_EventScript_Picnicker, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xCB, 0x00, 1, 3, 0x03, 0x0A, 1, 0, 0x0000, 0x0000, BattleFrontier_PokemonCenter_1F_EventScript_Skitty, 0x0000
BattleFrontier_PokemonCenter_1F_WarpEvents: @ 0x08515D00
	@ WarpEvent 0
	semantic_warp_event 7, 8, 0x03, 0x0C, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 1
	semantic_warp_event 6, 8, 0x03, 0x0C, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_EAST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_EAST
	@ WarpEvent 2
	semantic_warp_event 1, 6, 0x04, 0x00, MAP_NUM_BATTLE_FRONTIER_POKEMON_CENTER_2F, MAP_GROUP_BATTLE_FRONTIER_POKEMON_CENTER_2F
BattleFrontier_PokemonCenter_1F_MapEvents: @ 0x08515D18
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 0, BattleFrontier_PokemonCenter_1F_ObjectEvents, BattleFrontier_PokemonCenter_1F_WarpEvents, 0, 0
BattleFrontier_PokemonCenter_2F_ObjectEvents: @ 0x08515D2C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 6, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_UnionRoomAttendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x55, 0x00, 2, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_WirelessClubAttendant, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x55, 0x00, 10, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, Common_EventScript_DirectCornerAttendant, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xDF, 0x00, 1, 2, 0x00, 0x08, 1, 1, 0x0000, 0x0000, CableClub_EventScript_MysteryGiftMan, 0x02BE
BattleFrontier_PokemonCenter_2F_WarpEvents: @ 0x08515D8C
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x04, 0x02, MAP_NUM_BATTLE_FRONTIER_POKEMON_CENTER_1F, MAP_GROUP_BATTLE_FRONTIER_POKEMON_CENTER_1F
	@ WarpEvent 1
	semantic_warp_event 5, 1, 0x03, 0x00, MAP_NUM_UNION_ROOM, MAP_GROUP_UNION_ROOM
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRADE_CENTER, MAP_GROUP_TRADE_CENTER
BattleFrontier_PokemonCenter_2F_MapEvents: @ 0x08515DA4
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 0, BattleFrontier_PokemonCenter_2F_ObjectEvents, BattleFrontier_PokemonCenter_2F_WarpEvents, 0, 0
BattleFrontier_Mart_ObjectEvents: @ 0x08515DB8
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 1, 3, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, BattleFrontier_Mart_EventScript_Clerk, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1E, 0x00, 5, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, BattleFrontier_Mart_EventScript_OldWoman, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1D, 0x00, 5, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, BattleFrontier_Mart_EventScript_OldMan, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x09, 0x00, 8, 4, 0x03, 0x09, 0, 0, 0x0000, 0x0000, BattleFrontier_Mart_EventScript_Boy, 0x0000
BattleFrontier_Mart_WarpEvents: @ 0x08515E18
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x04, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x04, MAP_NUM_BATTLE_FRONTIER_OUTSIDE_WEST, MAP_GROUP_BATTLE_FRONTIER_OUTSIDE_WEST
BattleFrontier_Mart_MapEvents: @ 0x08515E28
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, BattleFrontier_Mart_ObjectEvents, BattleFrontier_Mart_WarpEvents, 0, 0
FarawayIsland_Entrance_ObjectEvents: @ 0x08515E3C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 13, 39, 0x03, 0x07, 0, 0, 0x0000, 0x0000, FarawayIsland_Entrance_EventScript_Sailor, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x8C, 0x00, 13, 41, 0x01, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x0000
FarawayIsland_Entrance_WarpEvents: @ 0x08515E6C
	@ WarpEvent 0
	semantic_warp_event 22, 7, 0x03, 0x00, MAP_NUM_FARAWAY_ISLAND_INTERIOR, MAP_GROUP_FARAWAY_ISLAND_INTERIOR
	@ WarpEvent 1
	semantic_warp_event 23, 7, 0x03, 0x01, MAP_NUM_FARAWAY_ISLAND_INTERIOR, MAP_GROUP_FARAWAY_ISLAND_INTERIOR
FarawayIsland_Entrance_CoordEvents: @ 0x08515E7C
	@ CoordEvent 0
	semantic_coord_event 9, 18, 0x03, 0x0000, 0x0000, FarawayIsland_Entrance_EventScript_SetCloudsWeather
	@ CoordEvent 1
	semantic_coord_event 10, 20, 0x03, 0x0000, 0x0000, FarawayIsland_Entrance_EventScript_ClearWeather
	@ CoordEvent 2
	semantic_coord_event 22, 9, 0x03, 0x0000, 0x0000, FarawayIsland_Entrance_EventScript_SetCloudsWeather
FarawayIsland_Entrance_BgEvents: @ 0x08515EAC
	@ BgEvent 0
	semantic_bg_script_event 3, 32, 0x00, 0x01, FarawayIsland_Entrance_EventScript_Sign
FarawayIsland_Entrance_MapEvents: @ 0x08515EB8
	@ struct MapEvents
	semantic_map_events 2, 2, 3, 1, FarawayIsland_Entrance_ObjectEvents, FarawayIsland_Entrance_WarpEvents, FarawayIsland_Entrance_CoordEvents, FarawayIsland_Entrance_BgEvents
FarawayIsland_Interior_ObjectEvents: @ 0x08515ECC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xE5, 0x00, 13, 17, 0x03, 0x3C, 15, 15, 0x0000, 0x0001, FarawayIsland_Interior_EventScript_Mew, 0x02CE
FarawayIsland_Interior_WarpEvents: @ 0x08515EE4
	@ WarpEvent 0
	semantic_warp_event 12, 19, 0x00, 0x00, MAP_NUM_FARAWAY_ISLAND_ENTRANCE, MAP_GROUP_FARAWAY_ISLAND_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 13, 19, 0x00, 0x01, MAP_NUM_FARAWAY_ISLAND_ENTRANCE, MAP_GROUP_FARAWAY_ISLAND_ENTRANCE
FarawayIsland_Interior_MapEvents: @ 0x08515EF4
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, FarawayIsland_Interior_ObjectEvents, FarawayIsland_Interior_WarpEvents, 0, 0
BirthIsland_Exterior_ObjectEvents: @ 0x08515F08
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xE9, 0x00, 15, 12, 0x03, 0x08, 1, 1, 0x0000, 0x0000, BirthIsland_Exterior_EventScript_Triangle, 0x02FC
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xE8, 0x00, 15, 3, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x02FB
BirthIsland_Exterior_WarpEvents: @ 0x08515F38
	@ WarpEvent 0
	semantic_warp_event 15, 24, 0x00, 0x00, MAP_NUM_BIRTH_ISLAND_HARBOR, MAP_GROUP_BIRTH_ISLAND_HARBOR
BirthIsland_Exterior_MapEvents: @ 0x08515F40
	@ struct MapEvents
	semantic_map_events 2, 1, 0, 0, BirthIsland_Exterior_ObjectEvents, BirthIsland_Exterior_WarpEvents, 0, 0
BirthIsland_Harbor_ObjectEvents: @ 0x08515F54
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 8, 5, 0x00, 0x07, 1, 1, 0x0000, 0x0000, BirthIsland_Harbor_EventScript_Sailor, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x8C, 0x00, 8, 7, 0x01, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x0000
BirthIsland_Harbor_WarpEvents: @ 0x08515F84
	@ WarpEvent 0
	semantic_warp_event 8, 2, 0x00, 0x00, MAP_NUM_BIRTH_ISLAND_EXTERIOR, MAP_GROUP_BIRTH_ISLAND_EXTERIOR
BirthIsland_Harbor_MapEvents: @ 0x08515F8C
	@ struct MapEvents
	semantic_map_events 2, 1, 0, 0, BirthIsland_Harbor_ObjectEvents, BirthIsland_Harbor_WarpEvents, 0, 0
TrainerHill_Entrance_ObjectEvents: @ 0x08515FA0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 11, 6, 0x03, 0x09, 1, 1, 0x0000, 0x0000, TrainerHill_Entrance_EventScript_Attendant, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x3A, 0x00, 4, 9, 0x03, 0x08, 1, 1, 0x0000, 0x0000, TrainerHill_Entrance_EventScript_Nurse, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x53, 0x00, 14, 9, 0x03, 0x08, 1, 1, 0x0000, 0x0000, TrainerHill_Entrance_EventScript_Clerk, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x0E, 0x00, 5, 14, 0x03, 0x02, 1, 1, 0x0000, 0x0000, TrainerHill_Entrance_EventScript_Girl, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x21, 0x00, 14, 15, 0x03, 0x02, 1, 1, 0x0000, 0x0000, TrainerHill_Entrance_EventScript_Man, 0x0000
TrainerHill_Entrance_WarpEvents: @ 0x08516018
	@ WarpEvent 0
	semantic_warp_event 9, 16, 0x03, 0x04, MAP_NUM_ROUTE111, MAP_GROUP_ROUTE111
	@ WarpEvent 1
	semantic_warp_event 10, 16, 0x03, 0x04, MAP_NUM_ROUTE111, MAP_GROUP_ROUTE111
	@ WarpEvent 2
	semantic_warp_event 9, 1, 0x03, 0x00, MAP_NUM_TRAINER_HILL_1F, MAP_GROUP_TRAINER_HILL_1F
TrainerHill_Entrance_CoordEvents: @ 0x08516030
	@ CoordEvent 0
	semantic_coord_event 9, 6, 0x03, 0x40D6, 0x0000, TrainerHill_Entrance_EventScript_EntryTrigger
TrainerHill_Entrance_BgEvents: @ 0x08516040
	@ BgEvent 0
	semantic_bg_script_event 8, 10, 0x00, 0x01, TrainerHill_Entrance_EventScript_Records
TrainerHill_Entrance_MapEvents: @ 0x0851604C
	@ struct MapEvents
	semantic_map_events 5, 3, 1, 1, TrainerHill_Entrance_ObjectEvents, TrainerHill_Entrance_WarpEvents, TrainerHill_Entrance_CoordEvents, TrainerHill_Entrance_BgEvents
TrainerHill_1F_WarpEvents: @ 0x08516060
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x03, 0x02, MAP_NUM_TRAINER_HILL_ENTRANCE, MAP_GROUP_TRAINER_HILL_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 12, 1, 0x03, 0x00, MAP_NUM_TRAINER_HILL_2F, MAP_GROUP_TRAINER_HILL_2F
TrainerHill_1F_MapEvents: @ 0x08516070
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, TrainerHill_1F_WarpEvents, 0, 0
TrainerHill_2F_WarpEvents: @ 0x08516084
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x03, 0x01, MAP_NUM_TRAINER_HILL_1F, MAP_GROUP_TRAINER_HILL_1F
	@ WarpEvent 1
	semantic_warp_event 12, 1, 0x03, 0x00, MAP_NUM_TRAINER_HILL_3F, MAP_GROUP_TRAINER_HILL_3F
TrainerHill_2F_MapEvents: @ 0x08516094
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, TrainerHill_2F_WarpEvents, 0, 0
TrainerHill_3F_WarpEvents: @ 0x085160A8
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x03, 0x01, MAP_NUM_TRAINER_HILL_2F, MAP_GROUP_TRAINER_HILL_2F
	@ WarpEvent 1
	semantic_warp_event 12, 1, 0x03, 0x00, MAP_NUM_TRAINER_HILL_4F, MAP_GROUP_TRAINER_HILL_4F
TrainerHill_3F_MapEvents: @ 0x085160B8
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, TrainerHill_3F_WarpEvents, 0, 0
TrainerHill_4F_WarpEvents: @ 0x085160CC
	@ WarpEvent 0
	semantic_warp_event 2, 1, 0x03, 0x01, MAP_NUM_TRAINER_HILL_3F, MAP_GROUP_TRAINER_HILL_3F
	@ WarpEvent 1
	semantic_warp_event 12, 1, 0x03, 0x00, MAP_NUM_TRAINER_HILL_ROOF, MAP_GROUP_TRAINER_HILL_ROOF
TrainerHill_4F_MapEvents: @ 0x085160DC
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, TrainerHill_4F_WarpEvents, 0, 0
TrainerHill_Roof_ObjectEvents: @ 0x085160F0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x30, 0x00, 12, 7, 0x03, 0x08, 1, 1, 0x0000, 0x0000, TrainerHill_Roof_EventScript_Owner, 0x0000
TrainerHill_Roof_WarpEvents: @ 0x08516108
	@ WarpEvent 0
	semantic_warp_event 9, 5, 0x03, 0x01, MAP_NUM_TRAINER_HILL_4F, MAP_GROUP_TRAINER_HILL_4F
	@ WarpEvent 1
	semantic_warp_event 15, 5, 0x00, 0x01, MAP_NUM_TRAINER_HILL_ELEVATOR, MAP_GROUP_TRAINER_HILL_ELEVATOR
TrainerHill_Roof_MapEvents: @ 0x08516118
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, TrainerHill_Roof_ObjectEvents, TrainerHill_Roof_WarpEvents, 0, 0
NavelRock_Exterior_WarpEvents: @ 0x0851612C
	@ WarpEvent 0
	semantic_warp_event 10, 18, 0x00, 0x00, MAP_NUM_NAVEL_ROCK_HARBOR, MAP_GROUP_NAVEL_ROCK_HARBOR
	@ WarpEvent 1
	semantic_warp_event 10, 10, 0x00, 0x01, MAP_NUM_NAVEL_ROCK_ENTRANCE, MAP_GROUP_NAVEL_ROCK_ENTRANCE
NavelRock_Exterior_MapEvents: @ 0x0851613C
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Exterior_WarpEvents, 0, 0
NavelRock_Harbor_ObjectEvents: @ 0x08516150
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x31, 0x00, 8, 5, 0x00, 0x07, 1, 1, 0x0000, 0x0000, NavelRock_Harbor_EventScript_Sailor, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x8C, 0x00, 8, 7, 0x01, 0x0A, 1, 1, 0x0000, 0x0000, 0, 0x0000
NavelRock_Harbor_WarpEvents: @ 0x08516180
	@ WarpEvent 0
	semantic_warp_event 8, 2, 0x00, 0x00, MAP_NUM_NAVEL_ROCK_EXTERIOR, MAP_GROUP_NAVEL_ROCK_EXTERIOR
NavelRock_Harbor_MapEvents: @ 0x08516188
	@ struct MapEvents
	semantic_map_events 2, 1, 0, 0, NavelRock_Harbor_ObjectEvents, NavelRock_Harbor_WarpEvents, 0, 0
NavelRock_Entrance_WarpEvents: @ 0x0851619C
	@ WarpEvent 0
	semantic_warp_event 10, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_B1F, MAP_GROUP_NAVEL_ROCK_B1F
	@ WarpEvent 1
	semantic_warp_event 10, 26, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_EXTERIOR, MAP_GROUP_NAVEL_ROCK_EXTERIOR
NavelRock_Entrance_MapEvents: @ 0x085161AC
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Entrance_WarpEvents, 0, 0
NavelRock_B1F_WarpEvents: @ 0x085161C0
	@ WarpEvent 0
	semantic_warp_event 4, 3, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_ENTRANCE, MAP_GROUP_NAVEL_ROCK_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 18, 9, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_FORK, MAP_GROUP_NAVEL_ROCK_FORK
NavelRock_B1F_MapEvents: @ 0x085161D0
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_B1F_WarpEvents, 0, 0
NavelRock_Fork_WarpEvents: @ 0x085161E4
	@ WarpEvent 0
	semantic_warp_event 4, 6, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_UP1, MAP_GROUP_NAVEL_ROCK_UP1
	@ WarpEvent 1
	semantic_warp_event 11, 79, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_B1F, MAP_GROUP_NAVEL_ROCK_B1F
	@ WarpEvent 2
	semantic_warp_event 22, 6, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN01, MAP_GROUP_NAVEL_ROCK_DOWN01
NavelRock_Fork_MapEvents: @ 0x085161FC
	@ struct MapEvents
	semantic_map_events 0, 3, 0, 0, 0, NavelRock_Fork_WarpEvents, 0, 0
NavelRock_Up1_WarpEvents: @ 0x08516210
	@ WarpEvent 0
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_FORK, MAP_GROUP_NAVEL_ROCK_FORK
	@ WarpEvent 1
	semantic_warp_event 3, 3, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_UP2, MAP_GROUP_NAVEL_ROCK_UP2
NavelRock_Up1_MapEvents: @ 0x08516220
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Up1_WarpEvents, 0, 0
NavelRock_Up2_WarpEvents: @ 0x08516234
	@ WarpEvent 0
	semantic_warp_event 3, 3, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_UP1, MAP_GROUP_NAVEL_ROCK_UP1
	@ WarpEvent 1
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_UP3, MAP_GROUP_NAVEL_ROCK_UP3
NavelRock_Up2_MapEvents: @ 0x08516244
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Up2_WarpEvents, 0, 0
NavelRock_Up3_WarpEvents: @ 0x08516258
	@ WarpEvent 0
	semantic_warp_event 5, 5, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_UP2, MAP_GROUP_NAVEL_ROCK_UP2
	@ WarpEvent 1
	semantic_warp_event 3, 3, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_UP4, MAP_GROUP_NAVEL_ROCK_UP4
NavelRock_Up3_MapEvents: @ 0x08516268
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Up3_WarpEvents, 0, 0
NavelRock_Up4_WarpEvents: @ 0x0851627C
	@ WarpEvent 0
	semantic_warp_event 3, 3, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_UP3, MAP_GROUP_NAVEL_ROCK_UP3
	@ WarpEvent 1
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_TOP, MAP_GROUP_NAVEL_ROCK_TOP
NavelRock_Up4_MapEvents: @ 0x0851628C
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Up4_WarpEvents, 0, 0
NavelRock_Top_ObjectEvents: @ 0x085162A0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xEE, 0x00, 12, 4, 0x00, 0x08, 1, 1, 0x0000, 0x0000, 0, 0x0321
NavelRock_Top_WarpEvents: @ 0x085162B8
	@ WarpEvent 0
	semantic_warp_event 13, 20, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_UP4, MAP_GROUP_NAVEL_ROCK_UP4
NavelRock_Top_CoordEvents: @ 0x085162C0
	@ CoordEvent 0
	semantic_coord_event 12, 10, 0x03, 0x4001, 0x0000, NavelRock_Top_EventScript_HoOh
NavelRock_Top_BgEvents: @ 0x085162D0
	@ BgEvent 0
	semantic_bg_hidden_item_event 12, 9, 0x03, ITEM_SACRED_ASH, 0x006D
NavelRock_Top_MapEvents: @ 0x085162DC
	@ struct MapEvents
	semantic_map_events 1, 1, 1, 1, NavelRock_Top_ObjectEvents, NavelRock_Top_WarpEvents, NavelRock_Top_CoordEvents, NavelRock_Top_BgEvents
NavelRock_Down01_WarpEvents: @ 0x085162F0
	@ WarpEvent 0
	semantic_warp_event 3, 3, 0x03, 0x02, MAP_NUM_NAVEL_ROCK_FORK, MAP_GROUP_NAVEL_ROCK_FORK
	@ WarpEvent 1
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN02, MAP_GROUP_NAVEL_ROCK_DOWN02
NavelRock_Down01_MapEvents: @ 0x08516300
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down01_WarpEvents, 0, 0
NavelRock_Down02_WarpEvents: @ 0x08516314
	@ WarpEvent 0
	semantic_warp_event 5, 5, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN01, MAP_GROUP_NAVEL_ROCK_DOWN01
	@ WarpEvent 1
	semantic_warp_event 3, 3, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN03, MAP_GROUP_NAVEL_ROCK_DOWN03
NavelRock_Down02_MapEvents: @ 0x08516324
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down02_WarpEvents, 0, 0
NavelRock_Down03_WarpEvents: @ 0x08516338
	@ WarpEvent 0
	semantic_warp_event 3, 3, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN02, MAP_GROUP_NAVEL_ROCK_DOWN02
	@ WarpEvent 1
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN04, MAP_GROUP_NAVEL_ROCK_DOWN04
NavelRock_Down03_MapEvents: @ 0x08516348
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down03_WarpEvents, 0, 0
NavelRock_Down04_WarpEvents: @ 0x0851635C
	@ WarpEvent 0
	semantic_warp_event 5, 5, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN03, MAP_GROUP_NAVEL_ROCK_DOWN03
	@ WarpEvent 1
	semantic_warp_event 3, 3, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN05, MAP_GROUP_NAVEL_ROCK_DOWN05
NavelRock_Down04_MapEvents: @ 0x0851636C
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down04_WarpEvents, 0, 0
NavelRock_Down05_WarpEvents: @ 0x08516380
	@ WarpEvent 0
	semantic_warp_event 3, 3, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN04, MAP_GROUP_NAVEL_ROCK_DOWN04
	@ WarpEvent 1
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN06, MAP_GROUP_NAVEL_ROCK_DOWN06
NavelRock_Down05_MapEvents: @ 0x08516390
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down05_WarpEvents, 0, 0
NavelRock_Down06_WarpEvents: @ 0x085163A4
	@ WarpEvent 0
	semantic_warp_event 5, 5, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN05, MAP_GROUP_NAVEL_ROCK_DOWN05
	@ WarpEvent 1
	semantic_warp_event 3, 3, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN07, MAP_GROUP_NAVEL_ROCK_DOWN07
NavelRock_Down06_MapEvents: @ 0x085163B4
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down06_WarpEvents, 0, 0
NavelRock_Down07_WarpEvents: @ 0x085163C8
	@ WarpEvent 0
	semantic_warp_event 3, 3, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN06, MAP_GROUP_NAVEL_ROCK_DOWN06
	@ WarpEvent 1
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN08, MAP_GROUP_NAVEL_ROCK_DOWN08
NavelRock_Down07_MapEvents: @ 0x085163D8
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down07_WarpEvents, 0, 0
NavelRock_Down08_WarpEvents: @ 0x085163EC
	@ WarpEvent 0
	semantic_warp_event 5, 5, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN07, MAP_GROUP_NAVEL_ROCK_DOWN07
	@ WarpEvent 1
	semantic_warp_event 3, 3, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN09, MAP_GROUP_NAVEL_ROCK_DOWN09
NavelRock_Down08_MapEvents: @ 0x085163FC
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down08_WarpEvents, 0, 0
NavelRock_Down09_WarpEvents: @ 0x08516410
	@ WarpEvent 0
	semantic_warp_event 3, 3, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN08, MAP_GROUP_NAVEL_ROCK_DOWN08
	@ WarpEvent 1
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_DOWN10, MAP_GROUP_NAVEL_ROCK_DOWN10
NavelRock_Down09_MapEvents: @ 0x08516420
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down09_WarpEvents, 0, 0
NavelRock_Down10_WarpEvents: @ 0x08516434
	@ WarpEvent 0
	semantic_warp_event 5, 5, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN09, MAP_GROUP_NAVEL_ROCK_DOWN09
	@ WarpEvent 1
	semantic_warp_event 3, 3, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN11, MAP_GROUP_NAVEL_ROCK_DOWN11
NavelRock_Down10_MapEvents: @ 0x08516444
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down10_WarpEvents, 0, 0
NavelRock_Down11_WarpEvents: @ 0x08516458
	@ WarpEvent 0
	semantic_warp_event 5, 5, 0x03, 0x00, MAP_NUM_NAVEL_ROCK_BOTTOM, MAP_GROUP_NAVEL_ROCK_BOTTOM
	@ WarpEvent 1
	semantic_warp_event 3, 3, 0x03, 0x01, MAP_NUM_NAVEL_ROCK_DOWN10, MAP_GROUP_NAVEL_ROCK_DOWN10
NavelRock_Down11_MapEvents: @ 0x08516468
	@ struct MapEvents
	semantic_map_events 0, 2, 0, 0, 0, NavelRock_Down11_WarpEvents, 0, 0
NavelRock_Bottom_ObjectEvents: @ 0x0851647C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0xED, 0x00, 11, 13, 0x00, 0x08, 1, 1, 0x0000, 0x0000, NavelRock_Bottom_EventScript_Lugia, 0x0320
NavelRock_Bottom_WarpEvents: @ 0x08516494
	@ WarpEvent 0
	semantic_warp_event 14, 19, 0x00, 0x00, MAP_NUM_NAVEL_ROCK_DOWN11, MAP_GROUP_NAVEL_ROCK_DOWN11
NavelRock_Bottom_MapEvents: @ 0x0851649C
	@ struct MapEvents
	semantic_map_events 1, 1, 0, 0, NavelRock_Bottom_ObjectEvents, NavelRock_Bottom_WarpEvents, 0, 0
TrainerHill_Elevator_ObjectEvents: @ 0x085164B0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x55, 0x00, 0, 6, 0x03, 0x08, 1, 1, 0x0000, 0x0000, TrainerHill_Elevator_EventScript_Attendant, 0x0000
TrainerHill_Elevator_WarpEvents: @ 0x085164C8
	@ WarpEvent 0
	semantic_warp_event 1, 6, 0x03, 0x01, MAP_NUM_TRAINER_HILL_ROOF, MAP_GROUP_TRAINER_HILL_ROOF
	@ WarpEvent 1
	semantic_warp_event 2, 6, 0x03, 0x01, MAP_NUM_TRAINER_HILL_ROOF, MAP_GROUP_TRAINER_HILL_ROOF
TrainerHill_Elevator_MapEvents: @ 0x085164D8
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 0, TrainerHill_Elevator_ObjectEvents, TrainerHill_Elevator_WarpEvents, 0, 0
	.globl Route104_Prototype_MapEvents
Route104_Prototype_MapEvents: @ 0x085164EC
	@ struct MapEvents (empty)
	semantic_map_events 0, 0, 0, 0, 0, 0, 0, 0
	.globl Route104_PrototypePrettyPetalFlowerShop_MapEvents
Route104_PrototypePrettyPetalFlowerShop_MapEvents: @ 0x08516500
	@ struct MapEvents (empty)
	semantic_map_events 0, 0, 0, 0, 0, 0, 0, 0
Route109_SeashoreHouse_ObjectEvents: @ 0x08516514
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x19, 0x00, 6, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route109_SeashoreHouse_EventScript_Owner, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x31, 0x00, 2, 3, 0x03, 0x08, 0, 0, 0x0001, 0x0002, Route109_SeashoreHouse_EventScript_Dwayne, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x36, 0x00, 14, 9, 0x03, 0x09, 0, 0, 0x0001, 0x0002, Route109_SeashoreHouse_EventScript_Simon, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x2D, 0x00, 10, 5, 0x03, 0x0E, 0, 0, 0x0001, 0x0002, Route109_SeashoreHouse_EventScript_Johanna, 0x0000
Route109_SeashoreHouse_WarpEvents: @ 0x08516574
	@ WarpEvent 0
	semantic_warp_event 6, 9, 0x00, 0x00, MAP_NUM_ROUTE109, MAP_GROUP_ROUTE109
	@ WarpEvent 1
	semantic_warp_event 7, 9, 0x00, 0x00, MAP_NUM_ROUTE109, MAP_GROUP_ROUTE109
Route109_SeashoreHouse_MapEvents: @ 0x08516584
	@ struct MapEvents
	semantic_map_events 4, 2, 0, 0, Route109_SeashoreHouse_ObjectEvents, Route109_SeashoreHouse_WarpEvents, 0, 0
Route110_TrickHouseEntrance_ObjectEvents: @ 0x08516598
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 6, 2, 0x03, 0x09, 0, 0, 0x0000, 0x0000, Route110_TrickHouseEntrance_EventScript_TrickMaster, 0x0368
Route110_TrickHouseEntrance_WarpEvents: @ 0x085165B0
	@ WarpEvent 0
	semantic_warp_event 5, 7, 0x03, 0x01, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 1
	semantic_warp_event 6, 7, 0x03, 0x01, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 2
	semantic_warp_event 5, 2, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE1, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE1
Route110_TrickHouseEntrance_CoordEvents: @ 0x085165C8
	@ CoordEvent 0
	semantic_coord_event 4, 7, 0x03, 0x40A5, 0x0000, Route110_TrickHouseEntrance_EventScript_TrickMasterHiding
	@ CoordEvent 1
	semantic_coord_event 5, 6, 0x03, 0x40A5, 0x0000, Route110_TrickHouseEntrance_EventScript_TrickMasterHiding
	@ CoordEvent 2
	semantic_coord_event 6, 6, 0x03, 0x40A5, 0x0000, Route110_TrickHouseEntrance_EventScript_TrickMasterHiding
	@ CoordEvent 3
	semantic_coord_event 7, 7, 0x03, 0x40A5, 0x0000, Route110_TrickHouseEntrance_EventScript_TrickMasterHiding
Route110_TrickHouseEntrance_BgEvents: @ 0x08516608
	@ BgEvent 0
	semantic_bg_script_event 5, 1, 0x00, 0x01, Route110_TrickHouseEntrance_EventScript_Door
Route110_TrickHouseEntrance_MapEvents: @ 0x08516614
	@ struct MapEvents
	semantic_map_events 1, 3, 4, 1, Route110_TrickHouseEntrance_ObjectEvents, Route110_TrickHouseEntrance_WarpEvents, Route110_TrickHouseEntrance_CoordEvents, Route110_TrickHouseEntrance_BgEvents
Route110_TrickHouseEnd_ObjectEvents: @ 0x08516628
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 4, 5, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, Route110_TrickHouseEnd_EventScript_TrickMaster, 0x0383
Route110_TrickHouseEnd_WarpEvents: @ 0x08516640
	@ WarpEvent 0
	semantic_warp_event 10, 1, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE1, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE1
	@ WarpEvent 1
	semantic_warp_event 2, 1, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_CORRIDOR, MAP_GROUP_ROUTE110_TRICK_HOUSE_CORRIDOR
Route110_TrickHouseEnd_CoordEvents: @ 0x08516650
	@ CoordEvent 0
	semantic_coord_event 2, 2, 0x03, 0x4002, 0x0000, Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger
Route110_TrickHouseEnd_BgEvents: @ 0x08516660
	@ BgEvent 0
	semantic_bg_hidden_item_event 4, 5, 0x03, ITEM_NUGGET, 0x0001
Route110_TrickHouseEnd_MapEvents: @ 0x0851666C
	@ struct MapEvents
	semantic_map_events 1, 2, 1, 1, Route110_TrickHouseEnd_ObjectEvents, Route110_TrickHouseEnd_WarpEvents, Route110_TrickHouseEnd_CoordEvents, Route110_TrickHouseEnd_BgEvents
Route110_TrickHouseCorridor_WarpEvents: @ 0x08516680
	@ WarpEvent 0
	semantic_warp_event 13, 3, 0x03, 0x01, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
	@ WarpEvent 1
	semantic_warp_event 14, 3, 0x03, 0x01, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
	@ WarpEvent 2
	semantic_warp_event 4, 23, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 3
	semantic_warp_event 5, 23, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
Route110_TrickHouseCorridor_MapEvents: @ 0x085166A0
	@ struct MapEvents
	semantic_map_events 0, 4, 0, 0, 0, Route110_TrickHouseCorridor_WarpEvents, 0, 0
Route110_TrickHousePuzzle1_ObjectEvents: @ 0x085166B4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x2F, 0x00, 14, 20, 0x03, 0x09, 0, 0, 0x0001, 0x0006, Route110_TrickHousePuzzle1_EventScript_Sally, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x23, 0x00, 14, 8, 0x03, 0x09, 0, 0, 0x0001, 0x0002, Route110_TrickHousePuzzle1_EventScript_Eddie, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2F, 0x00, 2, 15, 0x03, 0x08, 0, 0, 0x0001, 0x0002, Route110_TrickHousePuzzle1_EventScript_Robin, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x52, 0x00, 11, 16, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0013
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x52, 0x00, 13, 18, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0012
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x52, 0x00, 14, 14, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0014
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x52, 0x00, 11, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0017
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x52, 0x00, 8, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0016
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x52, 0x00, 11, 12, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0015
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x52, 0x00, 2, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0019
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x52, 0x00, 13, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x0018
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x52, 0x00, 0, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x001B
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x3B, 0x00, 9, 4, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08257165, 0x0424
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x52, 0x00, 4, 8, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x001C
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x52, 0x00, 2, 12, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_CutTree, 0x001E
Route110_TrickHousePuzzle1_WarpEvents: @ 0x0851681C
	@ WarpEvent 0
	semantic_warp_event 0, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 1, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
Route110_TrickHousePuzzle1_BgEvents: @ 0x08516834
	@ BgEvent 0
	semantic_bg_script_event 3, 16, 0x00, 0x00, Route110_TrickHousePuzzle1_EventScript_Scroll
Route110_TrickHousePuzzle1_MapEvents: @ 0x08516840
	@ struct MapEvents
	semantic_map_events 15, 3, 0, 1, Route110_TrickHousePuzzle1_ObjectEvents, Route110_TrickHousePuzzle1_WarpEvents, 0, Route110_TrickHousePuzzle1_BgEvents
Route110_TrickHousePuzzle2_ObjectEvents: @ 0x08516854
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x26, 0x00, 13, 10, 0x03, 0x0A, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle2_EventScript_Ted, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x26, 0x00, 10, 17, 0x03, 0x08, 0, 0, 0x0001, 0x0004, Route110_TrickHousePuzzle2_EventScript_Paul, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x0E, 0x00, 11, 9, 0x03, 0x09, 0, 0, 0x0001, 0x0002, Route110_TrickHousePuzzle2_EventScript_Georgia, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 8, 17, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_0825717F, 0x0426
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 3, 13, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08257172, 0x0425
Route110_TrickHousePuzzle2_WarpEvents: @ 0x085168CC
	@ WarpEvent 0
	semantic_warp_event 0, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 1, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
Route110_TrickHousePuzzle2_CoordEvents: @ 0x085168E4
	@ CoordEvent 0
	semantic_coord_event 11, 12, 0x03, 0x4001, 0x0000, Route110_TrickHousePuzzle2_EventScript_Button1
	@ CoordEvent 1
	semantic_coord_event 0, 4, 0x00, 0x4002, 0x0000, Route110_TrickHousePuzzle2_EventScript_Button2
	@ CoordEvent 2
	semantic_coord_event 14, 5, 0x03, 0x4003, 0x0000, Route110_TrickHousePuzzle2_EventScript_Button3
	@ CoordEvent 3
	semantic_coord_event 7, 11, 0x03, 0x4004, 0x0000, Route110_TrickHousePuzzle2_EventScript_Button4
Route110_TrickHousePuzzle2_BgEvents: @ 0x08516924
	@ BgEvent 0
	semantic_bg_script_event 14, 14, 0x00, 0x00, Route110_TrickHousePuzzle2_EventScript_Scroll
Route110_TrickHousePuzzle2_MapEvents: @ 0x08516930
	@ struct MapEvents
	semantic_map_events 5, 3, 4, 1, Route110_TrickHousePuzzle2_ObjectEvents, Route110_TrickHousePuzzle2_WarpEvents, Route110_TrickHousePuzzle2_CoordEvents, Route110_TrickHousePuzzle2_BgEvents
Route110_TrickHousePuzzle3_ObjectEvents: @ 0x08516944
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1F, 0x00, 7, 19, 0x03, 0x08, 0, 0, 0x0001, 0x0002, Route110_TrickHousePuzzle3_EventScript_Justin, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x20, 0x00, 4, 4, 0x03, 0x0A, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle3_EventScript_Martha, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x37, 0x00, 10, 10, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle3_EventScript_Alan, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 1, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_08257199, 0x0428
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x3B, 0x00, 4, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_0825718C, 0x0427
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x56, 0x00, 1, 20, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0015
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x56, 0x00, 2, 21, 0x03, 0x01, 1, 1, 0x0000, 0x0000, EventScript_RockSmash, 0x0016
Route110_TrickHousePuzzle3_WarpEvents: @ 0x085169EC
	@ WarpEvent 0
	semantic_warp_event 0, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 1, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
Route110_TrickHousePuzzle3_CoordEvents: @ 0x08516A04
	@ CoordEvent 0
	semantic_coord_event 4, 14, 0x03, 0x4001, 0x0000, Route110_TrickHousePuzzle3_EventScript_Button1
	@ CoordEvent 1
	semantic_coord_event 3, 11, 0x03, 0x4002, 0x0000, Route110_TrickHousePuzzle3_EventScript_Button2
	@ CoordEvent 2
	semantic_coord_event 12, 5, 0x03, 0x4003, 0x0000, Route110_TrickHousePuzzle3_EventScript_Button3
	@ CoordEvent 3
	semantic_coord_event 8, 2, 0x03, 0x4004, 0x0000, Route110_TrickHousePuzzle3_EventScript_Button4
Route110_TrickHousePuzzle3_BgEvents: @ 0x08516A44
	@ BgEvent 0
	semantic_bg_script_event 0, 14, 0x00, 0x00, Route110_TrickHousePuzzle3_EventScript_Scroll
Route110_TrickHousePuzzle3_MapEvents: @ 0x08516A50
	@ struct MapEvents
	semantic_map_events 7, 3, 4, 1, Route110_TrickHousePuzzle3_ObjectEvents, Route110_TrickHousePuzzle3_WarpEvents, Route110_TrickHousePuzzle3_CoordEvents, Route110_TrickHousePuzzle3_BgEvents
Route110_TrickHousePuzzle4_ObjectEvents: @ 0x08516A64
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x0E, 0x00, 2, 2, 0x03, 0x08, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle4_EventScript_Cora, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x0E, 0x00, 14, 7, 0x03, 0x09, 0, 0, 0x0001, 0x0002, Route110_TrickHousePuzzle4_EventScript_Paula, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x2C, 0x00, 2, 14, 0x03, 0x0A, 0, 0, 0x0001, 0x0002, Route110_TrickHousePuzzle4_EventScript_Yuji, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 2, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_082571A6, 0x0429
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x57, 0x00, 13, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0011
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x57, 0x00, 1, 10, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0012
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x57, 0x00, 5, 16, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0013
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x57, 0x00, 4, 6, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0014
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0x57, 0x00, 12, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0015
	@ ObjectEventTemplate 9
	semantic_object_event 0x0A, 0x57, 0x00, 5, 7, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0016
	@ ObjectEventTemplate 10
	semantic_object_event 0x0B, 0x57, 0x00, 9, 3, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0017
	@ ObjectEventTemplate 11
	semantic_object_event 0x0C, 0x57, 0x00, 10, 12, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0018
	@ ObjectEventTemplate 12
	semantic_object_event 0x0D, 0x57, 0x00, 14, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x0019
	@ ObjectEventTemplate 13
	semantic_object_event 0x0E, 0x57, 0x00, 10, 15, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x001A
	@ ObjectEventTemplate 14
	semantic_object_event 0x0F, 0x57, 0x00, 12, 5, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_StrengthBoulder, 0x001B
Route110_TrickHousePuzzle4_WarpEvents: @ 0x08516BCC
	@ WarpEvent 0
	semantic_warp_event 0, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 1, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
Route110_TrickHousePuzzle4_BgEvents: @ 0x08516BE4
	@ BgEvent 0
	semantic_bg_script_event 14, 13, 0x00, 0x00, Route110_TrickHousePuzzle4_EventScript_Scroll
Route110_TrickHousePuzzle4_MapEvents: @ 0x08516BF0
	@ struct MapEvents
	semantic_map_events 15, 3, 0, 1, Route110_TrickHousePuzzle4_ObjectEvents, Route110_TrickHousePuzzle4_WarpEvents, 0, Route110_TrickHousePuzzle4_BgEvents
Route110_TrickHousePuzzle5_ObjectEvents: @ 0x08516C04
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 6, 17, 0x03, 0x09, 0, 0, 0x0000, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll1, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x13, 0x00, 0, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll2, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x13, 0x00, 14, 10, 0x03, 0x09, 0, 0, 0x0000, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll3, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x13, 0x00, 14, 19, 0x03, 0x09, 0, 0, 0x0000, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll4, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x13, 0x00, 10, 4, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll5, 0x0000
Route110_TrickHousePuzzle5_WarpEvents: @ 0x08516C7C
	@ WarpEvent 0
	semantic_warp_event 0, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 1, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
Route110_TrickHousePuzzle5_CoordEvents: @ 0x08516C94
	@ CoordEvent 0
	semantic_coord_event 5, 17, 0x03, 0x4001, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger0
	@ CoordEvent 1
	semantic_coord_event 4, 17, 0x03, 0x4001, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger1
	@ CoordEvent 2
	semantic_coord_event 3, 17, 0x03, 0x4001, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger2
	@ CoordEvent 3
	semantic_coord_event 2, 17, 0x03, 0x4001, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger3
	@ CoordEvent 4
	semantic_coord_event 1, 7, 0x03, 0x4002, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger0
	@ CoordEvent 5
	semantic_coord_event 2, 7, 0x03, 0x4002, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger1
	@ CoordEvent 6
	semantic_coord_event 13, 10, 0x03, 0x4003, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger0
	@ CoordEvent 7
	semantic_coord_event 12, 10, 0x03, 0x4003, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger1
	@ CoordEvent 8
	semantic_coord_event 11, 10, 0x03, 0x4003, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger2
	@ CoordEvent 9
	semantic_coord_event 13, 19, 0x03, 0x4004, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger0
	@ CoordEvent 10
	semantic_coord_event 12, 19, 0x03, 0x4004, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger1
	@ CoordEvent 11
	semantic_coord_event 11, 4, 0x03, 0x4005, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Trigger0
	@ CoordEvent 12
	semantic_coord_event 1, 17, 0x03, 0x4001, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger4
	@ CoordEvent 13
	semantic_coord_event 3, 7, 0x03, 0x4002, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger2
	@ CoordEvent 14
	semantic_coord_event 4, 7, 0x03, 0x4002, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger3
	@ CoordEvent 15
	semantic_coord_event 5, 7, 0x03, 0x4002, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger4
	@ CoordEvent 16
	semantic_coord_event 6, 7, 0x03, 0x4002, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger5
	@ CoordEvent 17
	semantic_coord_event 10, 10, 0x03, 0x4003, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger3
	@ CoordEvent 18
	semantic_coord_event 9, 10, 0x03, 0x4003, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger4
	@ CoordEvent 19
	semantic_coord_event 11, 19, 0x03, 0x4004, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger2
	@ CoordEvent 20
	semantic_coord_event 10, 19, 0x03, 0x4004, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger3
	@ CoordEvent 21
	semantic_coord_event 9, 19, 0x03, 0x4004, 0x0000, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger4
Route110_TrickHousePuzzle5_BgEvents: @ 0x08516DF4
	@ BgEvent 0
	semantic_bg_script_event 11, 21, 0x00, 0x00, Route110_TrickHousePuzzle5_EventScript_Scroll
Route110_TrickHousePuzzle5_MapEvents: @ 0x08516E00
	@ struct MapEvents
	semantic_map_events 5, 3, 22, 1, Route110_TrickHousePuzzle5_ObjectEvents, Route110_TrickHousePuzzle5_WarpEvents, Route110_TrickHousePuzzle5_CoordEvents, Route110_TrickHousePuzzle5_BgEvents
Route110_TrickHousePuzzle6_ObjectEvents: @ 0x08516E14
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x20, 0x00, 7, 9, 0x03, 0x0A, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle6_EventScript_Sophia, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x42, 0x00, 11, 10, 0x03, 0x0A, 0, 0, 0x0001, 0x0003, Route110_TrickHousePuzzle6_EventScript_Benny, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x1F, 0x00, 4, 5, 0x03, 0x07, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle6_EventScript_Sebastian, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 11, 21, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_082571B3, 0x042B
Route110_TrickHousePuzzle6_WarpEvents: @ 0x08516E74
	@ WarpEvent 0
	semantic_warp_event 0, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 1, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
Route110_TrickHousePuzzle6_BgEvents: @ 0x08516E8C
	@ BgEvent 0
	semantic_bg_script_event 0, 10, 0x03, 0x00, Route110_TrickHousePuzzle6_EventScript_Scroll
Route110_TrickHousePuzzle6_MapEvents: @ 0x08516E98
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 1, Route110_TrickHousePuzzle6_ObjectEvents, Route110_TrickHousePuzzle6_WarpEvents, 0, Route110_TrickHousePuzzle6_BgEvents
Route110_TrickHousePuzzle7_ObjectEvents: @ 0x08516EAC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x25, 0x00, 9, 20, 0x00, 0x0A, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle7_EventScript_Joshua, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x2F, 0x00, 10, 2, 0x00, 0x07, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle7_EventScript_Alexis, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x28, 0x00, 8, 17, 0x00, 0x09, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle7_EventScript_Patricia, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 5, 12, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_082571C0, 0x042C
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x25, 0x00, 9, 2, 0x03, 0x08, 1, 1, 0x0001, 0x0001, Route110_TrickHousePuzzle7_EventScript_Alvaro, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x2F, 0x00, 8, 13, 0x03, 0x07, 1, 1, 0x0001, 0x0001, Route110_TrickHousePuzzle7_EventScript_Mariela, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x30, 0x00, 9, 12, 0x03, 0x09, 1, 1, 0x0001, 0x0001, Route110_TrickHousePuzzle7_EventScript_Everett, 0x0000
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0xE0, 0x00, 4, 17, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
	@ ObjectEventTemplate 8
	semantic_object_event 0x09, 0xE0, 0x00, 4, 6, 0x00, 0x01, 1, 1, 0x0000, 0x0000, 0, 0x0000
Route110_TrickHousePuzzle7_WarpEvents: @ 0x08516F84
	@ WarpEvent 0
	semantic_warp_event 0, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 1, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x03, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
	@ WarpEvent 3
	semantic_warp_event 13, 4, 0x00, 0x04, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 4
	semantic_warp_event 7, 3, 0x00, 0x03, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 5
	semantic_warp_event 13, 11, 0x00, 0x06, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 6
	semantic_warp_event 4, 3, 0x00, 0x05, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 7
	semantic_warp_event 1, 17, 0x00, 0x08, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 8
	semantic_warp_event 0, 11, 0x00, 0x07, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 9
	semantic_warp_event 2, 3, 0x00, 0x0A, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 10
	semantic_warp_event 4, 13, 0x00, 0x09, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 11
	semantic_warp_event 1, 3, 0x00, 0x0C, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
	@ WarpEvent 12
	semantic_warp_event 8, 12, 0x00, 0x0B, MAP_NUM_ROUTE110_TRICK_HOUSE_PUZZLE7, MAP_GROUP_ROUTE110_TRICK_HOUSE_PUZZLE7
Route110_TrickHousePuzzle7_CoordEvents: @ 0x08516FEC
	@ CoordEvent 0
	semantic_coord_event 8, 19, 0x00, 0x4001, 0x0000, Route110_TrickHousePuzzle7_EventScript_YellowButton
	@ CoordEvent 1
	semantic_coord_event 0, 14, 0x00, 0x4001, 0x0000, Route110_TrickHousePuzzle7_EventScript_BlueButton
	@ CoordEvent 2
	semantic_coord_event 6, 6, 0x00, 0x4001, 0x0000, Route110_TrickHousePuzzle7_EventScript_GreenButton
	@ CoordEvent 3
	semantic_coord_event 9, 7, 0x00, 0x4001, 0x0000, Route110_TrickHousePuzzle7_EventScript_PurpleButton
Route110_TrickHousePuzzle7_BgEvents: @ 0x0851702C
	@ BgEvent 0
	semantic_bg_script_event 6, 17, 0x00, 0x00, Route110_TrickHousePuzzle7_EventScript_Scroll
Route110_TrickHousePuzzle7_MapEvents: @ 0x08517038
	@ struct MapEvents
	semantic_map_events 9, 13, 4, 1, Route110_TrickHousePuzzle7_ObjectEvents, Route110_TrickHousePuzzle7_WarpEvents, Route110_TrickHousePuzzle7_CoordEvents, Route110_TrickHousePuzzle7_BgEvents
Route110_TrickHousePuzzle8_ObjectEvents: @ 0x0851704C
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x21, 0x00, 1, 10, 0x03, 0x07, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle8_EventScript_Vincent, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x21, 0x00, 4, 2, 0x03, 0x0A, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle8_EventScript_Leroy, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x22, 0x00, 8, 17, 0x03, 0x09, 0, 0, 0x0001, 0x0001, Route110_TrickHousePuzzle8_EventScript_Keira, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x3B, 0x00, 2, 2, 0x03, 0x01, 0, 0, 0x0000, 0x0000, EventScript_JP_082571CD, 0x042D
Route110_TrickHousePuzzle8_WarpEvents: @ 0x085170AC
	@ WarpEvent 0
	semantic_warp_event 0, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 1
	semantic_warp_event 1, 21, 0x03, 0x02, MAP_NUM_ROUTE110_TRICK_HOUSE_ENTRANCE, MAP_GROUP_ROUTE110_TRICK_HOUSE_ENTRANCE
	@ WarpEvent 2
	semantic_warp_event 13, 1, 0x00, 0x00, MAP_NUM_ROUTE110_TRICK_HOUSE_END, MAP_GROUP_ROUTE110_TRICK_HOUSE_END
Route110_TrickHousePuzzle8_BgEvents: @ 0x085170C4
	@ BgEvent 0
	semantic_bg_script_event 3, 21, 0x03, 0x00, Route110_TrickHousePuzzle8_EventScript_Scroll
Route110_TrickHousePuzzle8_MapEvents: @ 0x085170D0
	@ struct MapEvents
	semantic_map_events 4, 3, 0, 1, Route110_TrickHousePuzzle8_ObjectEvents, Route110_TrickHousePuzzle8_WarpEvents, 0, Route110_TrickHousePuzzle8_BgEvents
Route110_SeasideCyclingRoadSouthEntrance_ObjectEvents: @ 0x085170E4
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route110_SeasideCyclingRoadSouthEntrance_EventScript_Clerk, 0x0000
Route110_SeasideCyclingRoadSouthEntrance_WarpEvents: @ 0x085170FC
	@ WarpEvent 0
	semantic_warp_event 1, 5, 0x00, 0x04, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 1
	semantic_warp_event 2, 5, 0x00, 0x04, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 2
	semantic_warp_event 12, 5, 0x00, 0x05, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 3
	semantic_warp_event 13, 5, 0x00, 0x05, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
Route110_SeasideCyclingRoadSouthEntrance_CoordEvents: @ 0x0851711C
	@ CoordEvent 0
	semantic_coord_event 7, 4, 0x03, 0x4001, 0x0000, Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck
	@ CoordEvent 1
	semantic_coord_event 5, 4, 0x03, 0x4001, 0x0001, Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad
Route110_SeasideCyclingRoadSouthEntrance_MapEvents: @ 0x0851713C
	@ struct MapEvents
	semantic_map_events 1, 4, 2, 0, Route110_SeasideCyclingRoadSouthEntrance_ObjectEvents, Route110_SeasideCyclingRoadSouthEntrance_WarpEvents, Route110_SeasideCyclingRoadSouthEntrance_CoordEvents, 0
Route110_SeasideCyclingRoadNorthEntrance_ObjectEvents: @ 0x08517150
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x53, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route110_SeasideCyclingRoadNorthEntrance_EventScript_Clerk, 0x0000
Route110_SeasideCyclingRoadNorthEntrance_WarpEvents: @ 0x08517168
	@ WarpEvent 0
	semantic_warp_event 1, 5, 0x00, 0x02, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 1
	semantic_warp_event 2, 5, 0x00, 0x02, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 2
	semantic_warp_event 12, 5, 0x00, 0x03, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
	@ WarpEvent 3
	semantic_warp_event 13, 5, 0x00, 0x03, MAP_NUM_ROUTE110, MAP_GROUP_ROUTE110
Route110_SeasideCyclingRoadNorthEntrance_CoordEvents: @ 0x08517188
	@ CoordEvent 0
	semantic_coord_event 7, 4, 0x03, 0x4001, 0x0000, Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck
	@ CoordEvent 1
	semantic_coord_event 5, 4, 0x03, 0x4001, 0x0001, Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad
Route110_SeasideCyclingRoadNorthEntrance_MapEvents: @ 0x085171A8
	@ struct MapEvents
	semantic_map_events 1, 4, 2, 0, Route110_SeasideCyclingRoadNorthEntrance_ObjectEvents, Route110_SeasideCyclingRoadNorthEntrance_WarpEvents, Route110_SeasideCyclingRoadNorthEntrance_CoordEvents, 0
Route113_GlassWorkshop_ObjectEvents: @ 0x085171BC
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x13, 0x00, 2, 3, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route113_GlassWorkshop_EventScript_GlassWorker, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x05, 0x00, 5, 4, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route113_GlassWorkshop_EventScript_NinjaBoy, 0x0000
Route113_GlassWorkshop_WarpEvents: @ 0x085171EC
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x00, MAP_NUM_ROUTE113, MAP_GROUP_ROUTE113
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x00, MAP_NUM_ROUTE113, MAP_GROUP_ROUTE113
Route113_GlassWorkshop_MapEvents: @ 0x085171FC
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, Route113_GlassWorkshop_ObjectEvents, Route113_GlassWorkshop_WarpEvents, 0, 0
Route123_BerryMastersHouse_ObjectEvents: @ 0x08517210
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x15, 0x00, 4, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route123_BerryMastersHouse_EventScript_BerryMaster, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x1E, 0x00, 7, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route123_BerryMastersHouse_EventScript_BerryMastersWife, 0x0000
Route123_BerryMastersHouse_WarpEvents: @ 0x08517240
	@ WarpEvent 0
	semantic_warp_event 3, 7, 0x00, 0x00, MAP_NUM_ROUTE123, MAP_GROUP_ROUTE123
	@ WarpEvent 1
	semantic_warp_event 4, 7, 0x00, 0x00, MAP_NUM_ROUTE123, MAP_GROUP_ROUTE123
Route123_BerryMastersHouse_MapEvents: @ 0x08517250
	@ struct MapEvents
	semantic_map_events 2, 2, 0, 0, Route123_BerryMastersHouse_ObjectEvents, Route123_BerryMastersHouse_WarpEvents, 0, 0
Route119_WeatherInstitute_1F_ObjectEvents: @ 0x08517264
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x75, 0x00, 15, 3, 0x03, 0x09, 0, 0, 0x0001, 0x0003, Route119_WeatherInstitute_1F_EventScript_Grunt1, 0x037A
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x76, 0x00, 10, 5, 0x03, 0x08, 0, 0, 0x0001, 0x0002, Route119_WeatherInstitute_1F_EventScript_Grunt4, 0x037A
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x41, 0x00, 5, 4, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route119_WeatherInstitute_1F_EventScript_InstituteWorker2, 0x037C
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x41, 0x00, 2, 11, 0x03, 0x01, 1, 0, 0x0000, 0x0000, Route119_WeatherInstitute_1F_EventScript_InstituteWorker1, 0x037C
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x05, 0x00, 14, 11, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route119_WeatherInstitute_1F_EventScript_LittleBoy, 0x0000
Route119_WeatherInstitute_1F_WarpEvents: @ 0x085172DC
	@ WarpEvent 0
	semantic_warp_event 9, 12, 0x00, 0x00, MAP_NUM_ROUTE119, MAP_GROUP_ROUTE119
	@ WarpEvent 1
	semantic_warp_event 10, 12, 0x00, 0x00, MAP_NUM_ROUTE119, MAP_GROUP_ROUTE119
	@ WarpEvent 2
	semantic_warp_event 17, 1, 0x00, 0x00, MAP_NUM_ROUTE119_WEATHER_INSTITUTE_2F, MAP_GROUP_ROUTE119_WEATHER_INSTITUTE_2F
Route119_WeatherInstitute_1F_BgEvents: @ 0x085172F4
	@ BgEvent 0
	semantic_bg_script_event 1, 2, 0x00, 0x00, Route119_WeatherInstitute_1F_EventScript_Bed
	@ BgEvent 1
	semantic_bg_script_event 1, 3, 0x00, 0x00, Route119_WeatherInstitute_1F_EventScript_Bed
	@ BgEvent 2
	semantic_bg_script_event 0, 2, 0x00, 0x00, Route119_WeatherInstitute_1F_EventScript_Bed
	@ BgEvent 3
	semantic_bg_script_event 0, 3, 0x00, 0x00, Route119_WeatherInstitute_1F_EventScript_Bed
Route119_WeatherInstitute_1F_MapEvents: @ 0x08517324
	@ struct MapEvents
	semantic_map_events 5, 3, 0, 4, Route119_WeatherInstitute_1F_ObjectEvents, Route119_WeatherInstitute_1F_WarpEvents, 0, Route119_WeatherInstitute_1F_BgEvents
Route119_WeatherInstitute_2F_ObjectEvents: @ 0x08517338
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x75, 0x00, 15, 6, 0x03, 0x0A, 0, 0, 0x0001, 0x0004, Route119_WeatherInstitute_2F_EventScript_Grunt2, 0x037A
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0x75, 0x00, 10, 8, 0x03, 0x0D, 0, 0, 0x0001, 0x0002, Route119_WeatherInstitute_2F_EventScript_Grunt3, 0x037A
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0x76, 0x00, 4, 6, 0x03, 0x0A, 0, 0, 0x0001, 0x0000, Route119_WeatherInstitute_2F_EventScript_Shelly, 0x037A
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0x41, 0x00, 0, 6, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x037D
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0x2E, 0x00, 18, 6, 0x03, 0x01, 2, 1, 0x0000, 0x0000, Route119_WeatherInstitute_2F_EventScript_WeatherScientist, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0x41, 0x00, 1, 7, 0x03, 0x0A, 0, 0, 0x0000, 0x0000, 0, 0x037D
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0x75, 0x00, 16, 6, 0x03, 0x09, 1, 1, 0x0000, 0x0000, 0, 0x03E0
	@ ObjectEventTemplate 7
	semantic_object_event 0x08, 0x76, 0x00, 19, 6, 0x03, 0x09, 1, 1, 0x0001, 0x0003, Route119_WeatherInstitute_2F_EventScript_Grunt5, 0x037A
Route119_WeatherInstitute_2F_WarpEvents: @ 0x085173F8
	@ WarpEvent 0
	semantic_warp_event 17, 1, 0x00, 0x02, MAP_NUM_ROUTE119_WEATHER_INSTITUTE_1F, MAP_GROUP_ROUTE119_WEATHER_INSTITUTE_1F
Route119_WeatherInstitute_2F_MapEvents: @ 0x08517400
	@ struct MapEvents
	semantic_map_events 8, 1, 0, 0, Route119_WeatherInstitute_2F_ObjectEvents, Route119_WeatherInstitute_2F_WarpEvents, 0, 0
Route119_House_ObjectEvents: @ 0x08517414
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x1A, 0x00, 7, 2, 0x03, 0x08, 0, 0, 0x0000, 0x0000, Route119_House_EventScript_Woman, 0x0000
	@ ObjectEventTemplate 1
	semantic_object_event 0x02, 0xD3, 0x00, 1, 6, 0x03, 0x02, 2, 2, 0x0000, 0x0000, Route119_House_EventScript_Wingull, 0x0000
	@ ObjectEventTemplate 2
	semantic_object_event 0x03, 0xD3, 0x00, 0, 4, 0x03, 0x02, 3, 1, 0x0000, 0x0000, Route119_House_EventScript_Wingull, 0x0000
	@ ObjectEventTemplate 3
	semantic_object_event 0x04, 0xD3, 0x00, 2, 2, 0x03, 0x02, 1, 1, 0x0000, 0x0000, Route119_House_EventScript_Wingull, 0x0000
	@ ObjectEventTemplate 4
	semantic_object_event 0x05, 0xD3, 0x00, 8, 5, 0x03, 0x02, 3, 2, 0x0000, 0x0000, Route119_House_EventScript_Wingull, 0x0000
	@ ObjectEventTemplate 5
	semantic_object_event 0x06, 0xD3, 0x00, 6, 6, 0x03, 0x02, 2, 2, 0x0000, 0x0000, Route119_House_EventScript_Wingull, 0x0000
	@ ObjectEventTemplate 6
	semantic_object_event 0x07, 0xD3, 0x00, 5, 3, 0x03, 0x02, 1, 3, 0x0000, 0x0000, Route119_House_EventScript_Wingull, 0x0000
Route119_House_WarpEvents: @ 0x085174BC
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x01, MAP_NUM_ROUTE119, MAP_GROUP_ROUTE119
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x01, MAP_NUM_ROUTE119, MAP_GROUP_ROUTE119
Route119_House_MapEvents: @ 0x085174CC
	@ struct MapEvents
	semantic_map_events 7, 2, 0, 0, Route119_House_ObjectEvents, Route119_House_WarpEvents, 0, 0
Route124_DivingTreasureHuntersHouse_ObjectEvents: @ 0x085174E0
	@ ObjectEventTemplate 0
	semantic_object_event 0x01, 0x42, 0x00, 5, 4, 0x00, 0x09, 0, 0, 0x0000, 0x0000, Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter, 0x0000
Route124_DivingTreasureHuntersHouse_WarpEvents: @ 0x085174F8
	@ WarpEvent 0
	semantic_warp_event 3, 8, 0x00, 0x00, MAP_NUM_ROUTE124, MAP_GROUP_ROUTE124
	@ WarpEvent 1
	semantic_warp_event 4, 8, 0x00, 0x00, MAP_NUM_ROUTE124, MAP_GROUP_ROUTE124
Route124_DivingTreasureHuntersHouse_BgEvents: @ 0x08517508
	@ BgEvent 0
	semantic_bg_script_event 7, 1, 0x00, 0x00, Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard
Route124_DivingTreasureHuntersHouse_MapEvents: @ 0x08517514
	@ struct MapEvents
	semantic_map_events 1, 2, 0, 1, Route124_DivingTreasureHuntersHouse_ObjectEvents, Route124_DivingTreasureHuntersHouse_WarpEvents, 0, Route124_DivingTreasureHuntersHouse_BgEvents
@ Battle animation status-effect data recovered from JP ROM.
.set JP_ANIM_TAG_ORB,          0x2714 @ ANIM_TAG_ORB
.set JP_ANIM_TAG_WEATHER_BALL, 0x282B @ ANIM_TAG_WEATHER_BALL
.set JP_ANIM_TAG_SPARKLE_4,    0x2757 @ ANIM_TAG_SPARKLE_4
.set JP_ANIM_TAG_MONSTER_FOOT, 0x2743 @ ANIM_TAG_MONSTER_FOOT
.set JP_ANIM_TAG_IMPACT,       0x2797 @ ANIM_TAG_IMPACT

.set sOamData_AffineOff_ObjNormal_16x16, gPriorityAFrontierPassOam16x16
.set sOamData_AffineOff_ObjNormal_32x32, gPriorityAFrontierPassOam16x16 + 0x8
.set sOamData_AffineDouble_ObjNormal_16x16, gPriorityAFrontierPassOam16x16 + 0xC0

.globl sAnim_FlickeringOrb
sAnim_FlickeringOrb: @ 0x08517528
    semantic_animcmd_frame 0, 3
    semantic_animcmd_frame 4, 3
    semantic_animcmd_frame 8, 3
    semantic_animcmd_frame 12, 3
    semantic_animcmd_jump 0

.globl sAnims_FlickeringOrb
sAnims_FlickeringOrb: @ 0x0851753C
    semantic_anim_table_entry sAnim_FlickeringOrb

.globl sFlickeringOrbSpriteTemplate
sFlickeringOrbSpriteTemplate: @ 0x08517540
    semantic_sprite_template JP_ANIM_TAG_ORB, JP_ANIM_TAG_ORB, sOamData_AffineOff_ObjNormal_16x16, sAnims_FlickeringOrb, 0, gDummySpriteAffineAnimTable, sub_080A83B4

.globl sFlickeringOrbFlippedSpriteTemplate
sFlickeringOrbFlippedSpriteTemplate: @ 0x08517558
    semantic_sprite_template JP_ANIM_TAG_ORB, JP_ANIM_TAG_ORB, sOamData_AffineOff_ObjNormal_16x16, sAnims_FlickeringOrb, 0, gDummySpriteAffineAnimTable, sub_080A8334

.globl sAnim_WeatherBallNormal
sAnim_WeatherBallNormal: @ 0x08517570
    semantic_animcmd_frame 0, 3
    semantic_animcmd_jump 0

.globl sAnims_WeatherBallNormal
sAnims_WeatherBallNormal: @ 0x08517578
    semantic_anim_table_entry sAnim_WeatherBallNormal

.globl gWeatherBallUpSpriteTemplate
gWeatherBallUpSpriteTemplate: @ 0x0851757C
    semantic_sprite_template JP_ANIM_TAG_WEATHER_BALL, JP_ANIM_TAG_WEATHER_BALL, sOamData_AffineOff_ObjNormal_32x32, sAnims_WeatherBallNormal, 0, gDummySpriteAffineAnimTable, sub_080A86F8

.globl gWeatherBallNormalDownSpriteTemplate
gWeatherBallNormalDownSpriteTemplate: @ 0x08517594
    semantic_sprite_template JP_ANIM_TAG_WEATHER_BALL, JP_ANIM_TAG_WEATHER_BALL, sOamData_AffineOff_ObjNormal_32x32, sAnims_WeatherBallNormal, 0, gDummySpriteAffineAnimTable, sub_080A87AC

.globl sAnim_SpinningSparkle
sAnim_SpinningSparkle: @ 0x085175AC
    semantic_animcmd_frame 0, 3
    semantic_animcmd_frame 16, 3
    semantic_animcmd_frame 32, 3
    semantic_animcmd_frame 48, 3
    semantic_animcmd_frame 64, 3
    semantic_animcmd_end

.globl sAnims_SpinningSparkle
sAnims_SpinningSparkle: @ 0x085175C4
    semantic_anim_table_entry sAnim_SpinningSparkle

.globl gSpinningSparkleSpriteTemplate
gSpinningSparkleSpriteTemplate: @ 0x085175C8
    semantic_sprite_template JP_ANIM_TAG_SPARKLE_4, JP_ANIM_TAG_SPARKLE_4, sOamData_AffineOff_ObjNormal_32x32, sAnims_SpinningSparkle, 0, gDummySpriteAffineAnimTable, sub_080A842C

.globl sFlickeringFootSpriteTemplate
sFlickeringFootSpriteTemplate: @ 0x085175E0
    semantic_sprite_template JP_ANIM_TAG_MONSTER_FOOT, JP_ANIM_TAG_MONSTER_FOOT, sOamData_AffineOff_ObjNormal_32x32, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_080A83B4

.globl sAnim_FlickeringImpact_0
sAnim_FlickeringImpact_0: @ 0x085175F8
    semantic_animcmd_frame 0, 5
    semantic_animcmd_jump 0

.globl sAnim_FlickeringImpact_1
sAnim_FlickeringImpact_1: @ 0x08517600
    semantic_animcmd_frame 0, 5
    semantic_animcmd_jump 0

.globl sAnim_FlickeringImpact_2
sAnim_FlickeringImpact_2: @ 0x08517608
    semantic_animcmd_frame 0, 5
    semantic_animcmd_jump 0

.globl sAnims_FlickeringImpact
sAnims_FlickeringImpact: @ 0x08517610
    semantic_anim_table_entry sAnim_FlickeringImpact_0
    semantic_anim_table_entry sAnim_FlickeringImpact_1
    semantic_anim_table_entry sAnim_FlickeringImpact_2

.globl sFlickeringImpactSpriteTemplate
sFlickeringImpactSpriteTemplate: @ 0x0851761C
    semantic_sprite_template JP_ANIM_TAG_IMPACT, JP_ANIM_TAG_IMPACT, sOamData_AffineOff_ObjNormal_32x32, sAnims_FlickeringImpact, 0, gDummySpriteAffineAnimTable, sub_080A83B4

.globl sAnim_FlickeringShrinkOrb
sAnim_FlickeringShrinkOrb: @ 0x08517634
    semantic_animcmd_frame 0, 15
    semantic_animcmd_jump 0

.globl sAnims_FlickeringShrinkOrb
sAnims_FlickeringShrinkOrb: @ 0x0851763C
    semantic_anim_table_entry sAnim_FlickeringShrinkOrb

.globl sAffineAnim_FlickeringShrinkOrb
sAffineAnim_FlickeringShrinkOrb: @ 0x08517640
    semantic_affine_animcmd_frame 96, 96, 0, 0
    semantic_affine_animcmd_frame 2, 2, 0, 1
    semantic_affine_animcmd_jump 1

.globl sAffineAnims_FlickeringShrinkOrb
sAffineAnims_FlickeringShrinkOrb: @ 0x08517658
    semantic_affine_anim_table_entry sAffineAnim_FlickeringShrinkOrb

.globl sFlickeringShrinkOrbSpriteTemplate
sFlickeringShrinkOrbSpriteTemplate: @ 0x0851765C
    semantic_sprite_template JP_ANIM_TAG_ORB, JP_ANIM_TAG_ORB, sOamData_AffineDouble_ObjNormal_16x16, sAnims_FlickeringShrinkOrb, 0, sAffineAnims_FlickeringShrinkOrb, sub_080A8334

.globl sText_BattleAnimTaskOver
sText_BattleAnimTaskOver: @ 0x08517674
    @ Decoded (JP charmap): TASK OVER\nタスクがオーバーしました
    @ Exact game encoding, including EOS 0xFF; .balign supplies final 0x00 padding.
    .ascii "\316\273\315\305\000\311\320\277\314\376\140\135\130\067\125\256\226\256\014\037\014\020\377"
    .balign 4, 0

.globl sFrozenIceCubeSubsprites
sFrozenIceCubeSubsprites: @ 0x0851768C
    semantic_subsprite -16, -16, 0, 3,   0, 2 @ 64x64
    semantic_subsprite -16,  48, 1, 3,  64, 2 @ 64x32
    semantic_subsprite  48, -16, 2, 3,  96, 2 @ 32x64
    semantic_subsprite  48,  48, 0, 2, 128, 2 @ 32x32
