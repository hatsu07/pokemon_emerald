	.globl gMetatileBehaviorAttributes
	.globl gMetatileBehaviorAttributes
gMetatileBehaviorAttributes:
	@ ANALYSIS: SEMANTIC_NUMERIC_METATILE_BEHAVIOR_TABLE
	@ One flag byte per metatile behavior (0xF0 entries).
	@ bit0=encounters, bit1=surfable, bit2=traversable/unused.
	.byte 0x04, 0x00, 0x05, 0x05, 0x00, 0x01, 0x05, 0x04, 0x05, 0x04, 0x04, 0x05, 0x04, 0x04, 0x04, 0x04
	.byte 0x07, 0x07, 0x07, 0x06, 0x06, 0x07, 0x04, 0x04, 0x00, 0x06, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00
	.byte 0x04, 0x04, 0x07, 0x04, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x07, 0x04, 0x00, 0x00, 0x00, 0x00
	.byte 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04
	.byte 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x06, 0x06, 0x04, 0x06
	.byte 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00
	.byte 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

gDoorAnimTiles_Littleroot: @ 0x0845F40C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/littleroot.4bpp"

gDoorNullPalette1: @ 0x0845F70C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BirchsLab: @ 0x0845F72C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/birchs_lab.4bpp"

gDoorNullPalette2: @ 0x0845FA2C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_FallarborLightRoof: @ 0x0845FA4C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/fallarbor_light_roof.4bpp"

gDoorNullPalette3: @ 0x0845FD4C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Lilycove: @ 0x0845FD6C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/lilycove.4bpp"

gDoorNullPalette4: @ 0x0846006C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_LilycoveWooden: @ 0x0846008C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/lilycove_wooden.4bpp"

gDoorNullPalette5: @ 0x0846038C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_General: @ 0x084603AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/general.4bpp"

gDoorNullPalette6: @ 0x084606AC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_PokeCenter: @ 0x084606CC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/poke_center.4bpp"

gDoorAnimTiles_Gym: @ 0x084609CC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/gym.4bpp"

gDoorAnimTiles_PokeMart: @ 0x08460CCC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/poke_mart.4bpp"

gDoorAnimTiles_RustboroTan: @ 0x08460FCC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/rustboro_tan.4bpp"

gDoorNullPalette7: @ 0x084612CC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_RustboroGray: @ 0x084612EC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/rustboro_gray.4bpp"

gDoorNullPalette8: @ 0x084615EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Oldale: @ 0x0846160C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/oldale.4bpp"

gDoorFiller1: @ 0x0846190C
	.fill 0x5900, 1, 0

gDoorAnimTiles_UnusedTops: @ 0x0846720C
	@ 4bpp door animation tiles, size=0xC0
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/unused_tops.4bpp"

gDoorFiller2: @ 0x084672CC
	.fill 0x140, 1, 0

gDoorAnimTiles_UnusedBottoms: @ 0x0846740C
	@ 4bpp door animation tiles, size=0xC0
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/unused_bottoms.4bpp"

gDoorNullPalette11: @ 0x084674CC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Mauville: @ 0x084674EC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/mauville.4bpp"

gDoorNullPalette12: @ 0x084677EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Verdanturf: @ 0x0846780C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/verdanturf.4bpp"

gDoorNullPalette13: @ 0x08467B0C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Slateport: @ 0x08467B2C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/slateport.4bpp"

gDoorNullPalette14: @ 0x08467E2C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Dewford: @ 0x08467E4C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/dewford.4bpp"

gDoorNullPalette15: @ 0x0846814C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Contest: @ 0x0846816C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/contest.4bpp"

gDoorNullPalette16: @ 0x0846846C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Mossdeep: @ 0x0846848C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/mossdeep.4bpp"

gDoorNullPalette17: @ 0x0846878C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_SootopolisPeakedRoof: @ 0x084687AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/sootopolis_peaked_roof.4bpp"

gDoorNullPalette18: @ 0x08468AAC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Sootopolis: @ 0x08468ACC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/sootopolis.4bpp"

gDoorNullPalette19: @ 0x08468DCC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_PokemonLeague: @ 0x08468DEC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/pokemon_league.4bpp"

gDoorNullPalette20: @ 0x084690EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_Pacifidlog: @ 0x0846910C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/pacifidlog.4bpp"

gDoorNullPalette21: @ 0x0846940C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_PetalburgGym: @ 0x0846942C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/petalburg_gym.4bpp"

gDoorNullPalette22: @ 0x0846972C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_CyclingRoad: @ 0x0846974C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/cycling_road.4bpp"

gDoorNullPalette23: @ 0x08469A4C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_LilycoveDeptStore: @ 0x08469A6C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/lilycove_dept_store.4bpp"

gDoorNullPalette24: @ 0x08469D6C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_SafariZone: @ 0x08469D8C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/safari_zone.4bpp"

gDoorNullPalette25: @ 0x0846A08C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_MossdeepSpaceCenter: @ 0x0846A0AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/mossdeep_space_center.4bpp"

gDoorNullPalette26: @ 0x0846A3AC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_CableClub: @ 0x0846A3CC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/cable_club.4bpp"

gDoorNullPalette27: @ 0x0846A6CC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_AbandonedShip: @ 0x0846A6EC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/abandoned_ship.4bpp"

gDoorNullPalette28: @ 0x0846A9EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_FallarborDarkRoof: @ 0x0846AA0C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/fallarbor_dark_roof.4bpp"

gDoorNullPalette29: @ 0x0846AD0C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_AbandonedShipRoom: @ 0x0846AD2C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/abandoned_ship_room.4bpp"

gDoorNullPalette30: @ 0x0846B02C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_LilycoveDeptStoreElevator: @ 0x0846B04C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/lilycove_dept_store_elevator.4bpp"

gDoorNullPalette31: @ 0x0846B34C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTowerOld: @ 0x0846B36C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tower_old.4bpp"

gDoorNullPalette32: @ 0x0846B66C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTowerElevator: @ 0x0846B68C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tower_elevator.4bpp"

gDoorNullPalette33: @ 0x0846B98C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_UnusedBattleFrontier: @ 0x0846B9AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/unused_battle_frontier.4bpp"

gDoorNullPalette34: @ 0x0846BCAC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleDome: @ 0x0846BCCC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_dome.4bpp"

gDoorNullPalette35: @ 0x0846BFCC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleFactory: @ 0x0846BFEC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_factory.4bpp"

gDoorNullPalette36: @ 0x0846C2EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTower: @ 0x0846C30C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tower.4bpp"

gDoorNullPalette37: @ 0x0846C60C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleArena: @ 0x0846C62C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_arena.4bpp"

gDoorNullPalette38: @ 0x0846C92C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleArenaLobby: @ 0x0846C94C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_arena_lobby.4bpp"

gDoorNullPalette39: @ 0x0846CC4C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleDomeLobby: @ 0x0846CC6C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_dome_lobby.4bpp"

gDoorNullPalette40: @ 0x0846CF6C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattlePalaceLobby: @ 0x0846CF8C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_palace_lobby.4bpp"

gDoorAnimTiles_BattleTent: @ 0x0846D28C
	@ 4bpp door animation tiles, size=0x400
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tent.4bpp"

gDoorNullPalette41: @ 0x0846D68C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleDomeCorridor: @ 0x0846D6AC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_dome_corridor.4bpp"

gDoorNullPalette42: @ 0x0846D9AC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTowerMultiCorridor: @ 0x0846D9CC
	@ 4bpp door animation tiles, size=0x600
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tower_multi_corridor.4bpp"

gDoorNullPalette43: @ 0x0846DFCC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleFrontier: @ 0x0846DFEC
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_frontier.4bpp"

gDoorNullPalette44: @ 0x0846E2EC
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleFrontierSliding: @ 0x0846E30C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_frontier_sliding.4bpp"

gDoorNullPalette45: @ 0x0846E60C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleDomePreBattleRoom: @ 0x0846E62C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_dome_pre_battle_room.4bpp"

gDoorNullPalette46: @ 0x0846E92C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_BattleTentInterior: @ 0x0846E94C
	@ 4bpp door animation tiles, size=0x400
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/battle_tent_interior.4bpp"

gDoorNullPalette47: @ 0x0846ED4C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_TrainerHillLobbyElevator: @ 0x0846ED6C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/trainer_hill_lobby_elevator.4bpp"

gDoorNullPalette48: @ 0x0846F06C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0

gDoorAnimTiles_TrainerHillRoofElevator: @ 0x0846F08C
	@ 4bpp door animation tiles, size=0x300
	@ Editable 4bpp door-animation tiles.
	.incbin "build/graphics/door_anims/trainer_hill_roof_elevator.4bpp"

gDoorNullPalette49: @ 0x0846F38C
	@ intentionally null 16-color palette
	.fill 0x20, 1, 0
