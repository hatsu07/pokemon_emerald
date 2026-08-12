	.globl gDoorOpenAnimFrames
gDoorOpenAnimFrames: @ 0x0846F3AC
	.byte 4, 0
	.2byte 0xFFFF
	.byte 4, 0
	.2byte 0x0000
	.byte 4, 0
	.2byte 0x0100
	.byte 4, 0
	.2byte 0x0200
	.byte 0, 0
	.2byte 0x0000

	.globl gDoorCloseAnimFrames
gDoorCloseAnimFrames: @ 0x0846F3C0
	.byte 4, 0
	.2byte 0x0200
	.byte 4, 0
	.2byte 0x0100
	.byte 4, 0
	.2byte 0x0000
	.byte 4, 0
	.2byte 0xFFFF
	.byte 0, 0
	.2byte 0x0000

	.globl gBigDoorOpenAnimFrames
gBigDoorOpenAnimFrames: @ 0x0846F3D4
	.byte 4, 0
	.2byte 0xFFFF
	.byte 4, 0
	.2byte 0x0000
	.byte 4, 0
	.2byte 0x0200
	.byte 4, 0
	.2byte 0x0400
	.byte 0, 0
	.2byte 0x0000

	.globl gBigDoorCloseAnimFrames
gBigDoorCloseAnimFrames:
	.byte 4, 0
	.2byte 0x0400
	.byte 4, 0
	.2byte 0x0200
	.byte 4, 0
	.2byte 0x0000
	.byte 4, 0
	.2byte 0xFFFF
	.byte 0, 0
	.2byte 0x0000

gDoorAnimPalettes_General: @ 0x0846F3FC
	.byte 1, 1, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_PokeCenter: @ 0x0846F404
	.byte 1, 1, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_Gym: @ 0x0846F40C
	.byte 5, 5, 5, 5, 5, 5, 5, 5

gDoorAnimPalettes_PokeMart: @ 0x0846F414
	.byte 0, 0, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_Littleroot: @ 0x0846F41C
	.byte 10, 10, 6, 6, 6, 6, 6, 6

gDoorAnimPalettes_BirchsLab: @ 0x0846F424
	.byte 8, 8, 8, 8, 8, 8, 8, 8

gDoorAnimPalettes_RustboroTan: @ 0x0846F42C
	.byte 11, 11, 11, 11, 11, 11, 11, 11

gDoorAnimPalettes_RustboroGray: @ 0x0846F434
	.byte 10, 10, 10, 10, 10, 10, 10, 10

gDoorAnimPalettes_FallarborLightRoof: @ 0x0846F43C
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_Lilycove: @ 0x0846F444
	.byte 8, 8, 8, 8, 8, 8, 8, 8

gDoorAnimPalettes_Oldale: @ 0x0846F44C
	.byte 10, 10, 9, 9, 9, 9, 9, 9

gDoorAnimPalettes_Mossdeep: @ 0x0846F454
	.byte 9, 9, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_PokemonLeague: @ 0x0846F45C
	.byte 8, 8, 8, 8, 8, 8, 8, 8

gDoorAnimPalettes_Pacifidlog: @ 0x0846F464
	.byte 9, 9, 9, 9, 9, 9, 9, 9

gDoorAnimPalettes_SootopolisPeakedRoof: @ 0x0846F46C
	.byte 6, 6, 6, 6, 6, 6, 6, 6

gDoorAnimPalettes_Sootopolis: @ 0x0846F474
	.byte 6, 6, 6, 6, 6, 6, 6, 6

gDoorAnimPalettes_Dewford: @ 0x0846F47C
	.byte 0, 0, 5, 5, 5, 5, 5, 5

gDoorAnimPalettes_Slateport: @ 0x0846F484
	.byte 6, 6, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_Mauville: @ 0x0846F48C
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_Verdanturf: @ 0x0846F494
	.byte 6, 6, 5, 5, 5, 5, 5, 5

gDoorAnimPalettes_LilycoveWooden: @ 0x0846F49C
	.byte 5, 5, 5, 5, 5, 5, 5, 5

gDoorAnimPalettes_Contest: @ 0x0846F4A4
	.byte 1, 1, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_PetalburgGym: @ 0x0846F4AC
	.byte 6, 6, 6, 6, 6, 6, 6, 6

gDoorAnimPalettes_CyclingRoad: @ 0x0846F4B4
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_LilycoveDeptStore: @ 0x0846F4BC
	.byte 5, 5, 5, 5, 5, 5, 5, 5

gDoorAnimPalettes_SafariZone: @ 0x0846F4C4
	.byte 9, 9, 9, 9, 9, 9, 9, 9

gDoorAnimPalettes_MossdeepSpaceCenter: @ 0x0846F4CC
	.byte 8, 8, 8, 8, 8, 8, 8, 8

gDoorAnimPalettes_CableClub: @ 0x0846F4D4
	.byte 6, 6, 6, 6, 6, 6, 6, 6

gDoorAnimPalettes_AbandonedShip: @ 0x0846F4DC
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_FallarborDarkRoof: @ 0x0846F4E4
	.byte 11, 11, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_AbandonedShipRoom: @ 0x0846F4EC
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_LilycoveDeptStoreElevator: @ 0x0846F4F4
	.byte 6, 6, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_BattleTowerOld: @ 0x0846F4FC
	.byte 9, 9, 9, 9, 9, 9, 9, 9

gDoorAnimPalettes_BattleTowerElevator: @ 0x0846F504
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_UnusedBattleFrontier: @ 0x0846F50C
	.byte 9, 9, 9, 9, 9, 9, 9, 9

gDoorAnimPalettes_BattleDome: @ 0x0846F514
	.byte 1, 1, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_BattleFactory: @ 0x0846F51C
	.byte 9, 9, 9, 9, 9, 9, 9, 9

gDoorAnimPalettes_BattleTower: @ 0x0846F524
	.byte 0, 0, 0, 0, 0, 0, 0, 0

gDoorAnimPalettes_BattleArena: @ 0x0846F52C
	.byte 5, 5, 5, 5, 5, 5, 5, 5

gDoorAnimPalettes_BattleArenaLobby: @ 0x0846F534
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_BattleDomeLobby: @ 0x0846F53C
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_BattlePalaceLobby: @ 0x0846F544
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_BattleTent: @ 0x0846F54C
	.byte 1, 1, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_BattleDomeCorridor: @ 0x0846F554
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_BattleTowerMultiCorridor: @ 0x0846F55C
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_Unused: @ 0x0846F564
	.byte 1, 1, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_BattleFrontier: @ 0x0846F56C
	.byte 1, 1, 1, 1, 1, 1, 1, 1

gDoorAnimPalettes_BattleDomePreBattleRoom: @ 0x0846F574
	.byte 9, 9, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_BattleTentInterior: @ 0x0846F57C
	.byte 9, 9, 9, 9, 9, 9, 9, 9

gDoorAnimPalettes_TrainerHillLobbyElevator: @ 0x0846F584
	.byte 7, 7, 7, 7, 7, 7, 7, 7

gDoorAnimPalettes_TrainerHillRoofElevator: @ 0x0846F58C
	.byte 9, 9, 7, 7, 7, 7, 7, 7

	.globl gUnknown_846F594
	.globl gDoorAnimGraphicsTable
gUnknown_846F594: @ 0x0846F594
gDoorAnimGraphicsTable:
	@ entry 0
	.2byte 0x0021
	.byte 0, 1
	.4byte gDoorAnimTiles_General, gDoorAnimPalettes_General
	@ entry 1
	.2byte 0x0061
	.byte 1, 1
	.4byte gDoorAnimTiles_PokeCenter, gDoorAnimPalettes_PokeCenter
	@ entry 2
	.2byte 0x01CD
	.byte 1, 1
	.4byte gDoorAnimTiles_Gym, gDoorAnimPalettes_Gym
	@ entry 3
	.2byte 0x0041
	.byte 1, 1
	.4byte gDoorAnimTiles_PokeMart, gDoorAnimPalettes_PokeMart
	@ entry 4
	.2byte 0x0248
	.byte 0, 1
	.4byte gDoorAnimTiles_Littleroot, gDoorAnimPalettes_Littleroot
	@ entry 5
	.2byte 0x0249
	.byte 0, 1
	.4byte gDoorAnimTiles_BirchsLab, gDoorAnimPalettes_BirchsLab
	@ entry 6
	.2byte 0x022F
	.byte 0, 1
	.4byte gDoorAnimTiles_RustboroTan, gDoorAnimPalettes_RustboroTan
	@ entry 7
	.2byte 0x021F
	.byte 0, 1
	.4byte gDoorAnimTiles_RustboroGray, gDoorAnimPalettes_RustboroGray
	@ entry 8
	.2byte 0x02A5
	.byte 0, 1
	.4byte gDoorAnimTiles_FallarborLightRoof, gDoorAnimPalettes_FallarborLightRoof
	@ entry 9
	.2byte 0x0287
	.byte 0, 1
	.4byte gDoorAnimTiles_Oldale, gDoorAnimPalettes_Oldale
	@ entry 10
	.2byte 0x02AC
	.byte 0, 1
	.4byte gDoorAnimTiles_Mauville, gDoorAnimPalettes_Mauville
	@ entry 11
	.2byte 0x03A1
	.byte 0, 1
	.4byte gDoorAnimTiles_Verdanturf, gDoorAnimPalettes_Verdanturf
	@ entry 12
	.2byte 0x02DC
	.byte 0, 1
	.4byte gDoorAnimTiles_Slateport, gDoorAnimPalettes_Slateport
	@ entry 13
	.2byte 0x0225
	.byte 0, 1
	.4byte gDoorAnimTiles_Dewford, gDoorAnimPalettes_Dewford
	@ entry 14
	.2byte 0x01DB
	.byte 1, 1
	.4byte gDoorAnimTiles_Contest, gDoorAnimPalettes_Contest
	@ entry 15
	.2byte 0x0246
	.byte 0, 1
	.4byte gDoorAnimTiles_Lilycove, gDoorAnimPalettes_Lilycove
	@ entry 16
	.2byte 0x028E
	.byte 0, 1
	.4byte gDoorAnimTiles_LilycoveWooden, gDoorAnimPalettes_LilycoveWooden
	@ entry 17
	.2byte 0x02A1
	.byte 0, 1
	.4byte gDoorAnimTiles_Mossdeep, gDoorAnimPalettes_Mossdeep
	@ entry 18
	.2byte 0x021C
	.byte 0, 1
	.4byte gDoorAnimTiles_SootopolisPeakedRoof, gDoorAnimPalettes_SootopolisPeakedRoof
	@ entry 19
	.2byte 0x021E
	.byte 0, 1
	.4byte gDoorAnimTiles_Sootopolis, gDoorAnimPalettes_Sootopolis
	@ entry 20
	.2byte 0x021D
	.byte 1, 1
	.4byte gDoorAnimTiles_PokemonLeague, gDoorAnimPalettes_PokemonLeague
	@ entry 21
	.2byte 0x021A
	.byte 0, 1
	.4byte gDoorAnimTiles_Pacifidlog, gDoorAnimPalettes_Pacifidlog
	@ entry 22
	.2byte 0x0224
	.byte 0, 1
	.4byte gDoorAnimTiles_PetalburgGym, gDoorAnimPalettes_PetalburgGym
	@ entry 23
	.2byte 0x0289
	.byte 0, 1
	.4byte gDoorAnimTiles_CyclingRoad, gDoorAnimPalettes_CyclingRoad
	@ entry 24
	.2byte 0x030C
	.byte 1, 1
	.4byte gDoorAnimTiles_LilycoveDeptStore, gDoorAnimPalettes_LilycoveDeptStore
	@ entry 25
	.2byte 0x032D
	.byte 1, 1
	.4byte gDoorAnimTiles_SafariZone, gDoorAnimPalettes_SafariZone
	@ entry 26
	.2byte 0x02ED
	.byte 1, 1
	.4byte gDoorAnimTiles_MossdeepSpaceCenter, gDoorAnimPalettes_MossdeepSpaceCenter
	@ entry 27
	.2byte 0x0264
	.byte 1, 1
	.4byte gDoorAnimTiles_CableClub, gDoorAnimPalettes_CableClub
	@ entry 28
	.2byte 0x022B
	.byte 0, 1
	.4byte gDoorAnimTiles_AbandonedShip, gDoorAnimPalettes_AbandonedShip
	@ entry 29
	.2byte 0x02F7
	.byte 0, 1
	.4byte gDoorAnimTiles_FallarborDarkRoof, gDoorAnimPalettes_FallarborDarkRoof
	@ entry 30
	.2byte 0x0297
	.byte 0, 1
	.4byte gDoorAnimTiles_AbandonedShipRoom, gDoorAnimPalettes_AbandonedShipRoom
	@ entry 31
	.2byte 0x0285
	.byte 1, 1
	.4byte gDoorAnimTiles_LilycoveDeptStoreElevator, gDoorAnimPalettes_LilycoveDeptStoreElevator
	@ entry 32
	.2byte 0x025D
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleTowerOld, gDoorAnimPalettes_BattleTowerOld
	@ entry 33
	.2byte 0x020E
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleTowerElevator, gDoorAnimPalettes_BattleTowerElevator
	@ entry 34
	.2byte 0x03B0
	.byte 1, 1
	.4byte gDoorAnimTiles_UnusedBattleFrontier, gDoorAnimPalettes_UnusedBattleFrontier
	@ entry 35
	.2byte 0x028A
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleDome, gDoorAnimPalettes_BattleDome
	@ entry 36
	.2byte 0x0263
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleFactory, gDoorAnimPalettes_BattleFactory
	@ entry 37
	.2byte 0x0329
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleTower, gDoorAnimPalettes_BattleTower
	@ entry 38
	.2byte 0x0291
	.byte 0, 1
	.4byte gDoorAnimTiles_BattleArena, gDoorAnimPalettes_BattleArena
	@ entry 39
	.2byte 0x021B
	.byte 2, 1
	.4byte gDoorAnimTiles_BattleArenaLobby, gDoorAnimPalettes_BattleArenaLobby
	@ entry 40
	.2byte 0x0209
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleDomeLobby, gDoorAnimPalettes_BattleDomeLobby
	@ entry 41
	.2byte 0x0219
	.byte 0, 1
	.4byte gDoorAnimTiles_BattlePalaceLobby, gDoorAnimPalettes_BattlePalaceLobby
	@ entry 42
	.2byte 0x0393
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleTent, gDoorAnimPalettes_BattleTent
	@ entry 43
	.2byte 0x03D4
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleTent, gDoorAnimPalettes_BattleTent
	@ entry 44
	.2byte 0x036C
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleTent, gDoorAnimPalettes_BattleTent
	@ entry 45
	.2byte 0x025E
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleDomeCorridor, gDoorAnimPalettes_BattleDomeCorridor
	@ entry 46
	.2byte 0x02AD
	.byte 1, 2
	.4byte gDoorAnimTiles_BattleTowerMultiCorridor, gDoorAnimPalettes_BattleTowerMultiCorridor
	@ entry 47
	.2byte 0x03FC
	.byte 0, 1
	.4byte gDoorAnimTiles_BattleFrontier, gDoorAnimPalettes_BattleFrontier
	@ entry 48
	.2byte 0x0396
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleFrontierSliding, gDoorAnimPalettes_BattleFrontier
	@ entry 49
	.2byte 0x020A
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleDomePreBattleRoom, gDoorAnimPalettes_BattleDomePreBattleRoom
	@ entry 50
	.2byte 0x026B
	.byte 1, 1
	.4byte gDoorAnimTiles_BattleTentInterior, gDoorAnimPalettes_BattleTentInterior
	@ entry 51
	.2byte 0x032C
	.byte 1, 1
	.4byte gDoorAnimTiles_TrainerHillLobbyElevator, gDoorAnimPalettes_TrainerHillLobbyElevator
	@ entry 52
	.2byte 0x0383
	.byte 1, 1
	.4byte gDoorAnimTiles_TrainerHillRoofElevator, gDoorAnimPalettes_TrainerHillRoofElevator
	@ terminator
	.2byte 0
	.byte 0, 0
	.4byte 0, 0
	.globl gUnknown_846F81C
gUnknown_846F81C: @ 0x0846F81C
	.4byte MetatileBehavior_IsTrickHouseSlipperyFloor
	.4byte MetatileBehavior_IsIce
	.4byte MetatileBehavior_IsWalkSouth
	.4byte MetatileBehavior_IsWalkNorth
	.4byte MetatileBehavior_IsWalkWest
	.4byte MetatileBehavior_IsWalkEast
	.4byte MetatileBehavior_IsSouthwardCurrent
	.4byte MetatileBehavior_IsNorthwardCurrent
	.4byte MetatileBehavior_IsWestwardCurrent
	.4byte MetatileBehavior_IsEastwardCurrent
	.4byte MetatileBehavior_IsSlideSouth
	.4byte MetatileBehavior_IsSlideNorth
	.4byte MetatileBehavior_IsSlideWest
	.4byte MetatileBehavior_IsSlideEast
	.4byte MetatileBehavior_IsWaterfall
	.4byte MetatileBehavior_IsSecretBaseJumpMat
	.4byte MetatileBehavior_IsSecretBaseSpinMat
	.4byte MetatileBehavior_IsMuddySlope
	.globl gUnknown_846F864
gUnknown_846F864: @ 0x0846F864
	.4byte ForcedMovement_None
	.4byte ForcedMovement_Slip
	.4byte ForcedMovement_Slip
	.4byte ForcedMovement_WalkSouth
	.4byte ForcedMovement_WalkNorth
	.4byte ForcedMovement_WalkWest
	.4byte ForcedMovement_WalkEast
	.4byte ForcedMovement_PushedSouthByCurrent
	.4byte ForcedMovement_PushedNorthByCurrent
	.4byte ForcedMovement_PushedWestByCurrent
	.4byte ForcedMovement_PushedEastByCurrent
	.4byte ForcedMovement_SlideSouth
	.4byte ForcedMovement_SlideNorth
	.4byte ForcedMovement_SlideWest
	.4byte ForcedMovement_SlideEast
	.4byte ForcedMovement_PushedSouthByCurrent
	.4byte ForcedMovement_0xBB
	.4byte ForcedMovement_0xBC
	.4byte ForcedMovement_MuddySlope
	.globl gUnknown_846F8B0
gUnknown_846F8B0: @ 0x0846F8B0
	.4byte PlayerNotOnBikeNotMoving
	.4byte PlayerNotOnBikeTurningInPlace
	.4byte PlayerNotOnBikeMoving
	.globl gUnknown_846F8BC
gUnknown_846F8BC: @ 0x0846F8BC
	.4byte MetatileBehavior_IsBumpySlope
	.4byte MetatileBehavior_IsIsolatedVerticalRail
	.4byte MetatileBehavior_IsIsolatedHorizontalRail
	.4byte MetatileBehavior_IsVerticalRail
	.4byte MetatileBehavior_IsHorizontalRail
	@ pret/pokeemerald-jp direct xref for 0x0846F8D0: field_player_avatar.s: check_acro_bike_metatile
	.globl gFieldPlayerAvatarData_0846F8D0
gFieldPlayerAvatarData_0846F8D0: @ 0x0846F8D0
gAcroBikeMetatileCollisionTypeIds: @ 0x0846F8D0
	@ Indexed with the predicate table at gUnknown_846F8BC by check_acro_bike_metatile.
	.byte 0x09 @ bumpy slope
	.byte 0x0A @ isolated vertical rail
	.byte 0x0B @ isolated horizontal rail
	.byte 0x0C @ vertical rail
	.byte 0x0D @ horizontal rail
	.byte 0x00, 0x00, 0x00 @ padding
	.globl gUnknown_846F8D8
gUnknown_846F8D8: @ 0x0846F8D8
	.4byte PlayerAvatarTransition_Normal
	.4byte PlayerAvatarTransition_MachBike
	.4byte PlayerAvatarTransition_AcroBike
	.4byte PlayerAvatarTransition_Surfing
	.4byte PlayerAvatarTransition_Underwater
	.4byte PlayerAvatarTransition_ReturnToField
	.4byte PlayerAvatarTransition_Dummy
	.4byte PlayerAvatarTransition_Dummy
	.globl gUnknown_846F8F8
gUnknown_846F8F8: @ 0x0846F8F8
	.4byte MetatileBehavior_IsSouthArrowWarp
	.4byte MetatileBehavior_IsNorthArrowWarp
	.4byte MetatileBehavior_IsWestArrowWarp
	.4byte MetatileBehavior_IsEastArrowWarp
	@ pret/pokeemerald-jp direct xref for 0x0846F908: field_player_avatar.s: GetPlayerAvatarGraphicsIdByStateIdAndGender
	.globl gFieldPlayerAvatarData_0846F908
gFieldPlayerAvatarData_0846F908: @ 0x0846F908
gPlayerAvatarGraphicsIdsByStateAndGender: @ 0x0846F908
	@ state 0: normal
	.byte 0x64, 0x69
	@ state 1: mach bike
	.byte 0x65, 0x6A
	@ state 2: acro bike
	.byte 0x66, 0x6B
	@ state 3: surfing
	.byte 0x67, 0x6C
	@ state 4: underwater
	.byte 0x6F, 0x70
	@ state 5: return to field
	.byte 0x68, 0x6D
	@ state 6: unused/dummy
	.byte 0x89, 0x8A
	@ state 7: unused/dummy
	.byte 0xBF, 0xC0
	@ pret/pokeemerald-jp direct xref for 0x0846F918: field_player_avatar.s: sub_0808B6B8
	.globl gFieldPlayerAvatarData_0846F918
gFieldPlayerAvatarData_0846F918: @ 0x0846F918
gPlayerAvatarGraphicsIdsByStateAndSaveGender: @ 0x0846F918
	@ state 0: normal
	.byte 0x00, 0x59
	@ state 1: mach bike
	.byte 0x01, 0x5A
	@ state 2: acro bike
	.byte 0x3F, 0x5B
	@ state 3: surfing
	.byte 0x02, 0x5C
	@ state 4: underwater
	.byte 0x6F, 0x70
	@ state 5: return to field
	.byte 0x03, 0x5D
	@ state 6: unused/dummy
	.byte 0x89, 0x8A
	@ state 7: unused/dummy
	.byte 0xBF, 0xC0
	@ pret/pokeemerald-jp direct xref for 0x0846F928: field_player_avatar.s: sub_0808B6D0
	.globl gFieldPlayerAvatarData_0846F928
gFieldPlayerAvatarData_0846F928: @ 0x0846F928
gUnknownPlayerAvatarGraphicsIdsByGender: @ 0x0846F928
	.byte 0xE6, 0xE7
	@ pret/pokeemerald-jp direct xref for 0x0846F92A: field_player_avatar.s: GetFRLGAvatarGraphicsIdByGender
	.globl gFieldPlayerAvatarData_0846F92A
gFieldPlayerAvatarData_0846F92A: @ 0x0846F92A
gFRLGPlayerAvatarGraphicsIdsByGender: @ 0x0846F92A
	.byte 0xEB, 0xEC
	@ pret/pokeemerald-jp direct xref for 0x0846F92C: field_player_avatar.s: GetPlayerAvatarGraphicsIdByCurrentState, GetPlayerAvatarStateTransitionByGraphicsId
	.globl gFieldPlayerAvatarData_0846F92C
gFieldPlayerAvatarData_0846F92C: @ 0x0846F92C
gPlayerAvatarGraphicsIdToStateFlagTable: @ 0x0846F92C
	@ male save gender: graphicsId, state flag
	.byte 0x00, 0x01 @ normal
	.byte 0x01, 0x02 @ mach bike
	.byte 0x3F, 0x04 @ acro bike
	.byte 0x02, 0x08 @ surfing
	.byte 0x6F, 0x10 @ underwater
	@ female save gender: graphicsId, state flag
	.byte 0x59, 0x01 @ normal
	.byte 0x5A, 0x02 @ mach bike
	.byte 0x5B, 0x04 @ acro bike
	.byte 0x5C, 0x08 @ surfing
	.byte 0x70, 0x10 @ underwater
	.globl gUnknown_846F940
gUnknown_846F940: @ 0x0846F940
	.4byte MetatileBehavior_IsSouthArrowWarp
	.4byte MetatileBehavior_IsNorthArrowWarp
	.4byte MetatileBehavior_IsWestArrowWarp
	.4byte MetatileBehavior_IsEastArrowWarp
	.globl gUnknown_846F950
gUnknown_846F950: @ 0x0846F950
	.4byte sub_0808BD08
	.4byte do_boulder_dust
	.4byte sub_0808BDE8
	.globl gUnknown_846F95C
gUnknown_846F95C: @ 0x0846F95C
	.4byte PlayerAvatar_DoSecretBaseMatJump
	.globl gUnknown_846F960
gUnknown_846F960: @ 0x0846F960
	.4byte PlayerAvatar_SecretBaseMatSpinStep0
	.4byte PlayerAvatar_SecretBaseMatSpinStep1
	.4byte PlayerAvatar_SecretBaseMatSpinStep2
	.4byte PlayerAvatar_SecretBaseMatSpinStep3
	@ pret/pokeemerald-jp direct xref for 0x0846F970: field_player_avatar.s: PlayerAvatar_SecretBaseMatSpinStep1
	.globl gFieldPlayerAvatarData_0846F970
gFieldPlayerAvatarData_0846F970: @ 0x0846F970
gSecretBaseSpinMatNextDirections: @ 0x0846F970
	@ Indexed by facingDirection - 1.
	.byte 0x03, 0x04, 0x02, 0x01
	@ pret/pokeemerald-jp direct xref for 0x0846F974: field_player_avatar.s: PlayerAvatar_SecretBaseMatSpinStep2
	.globl gFieldPlayerAvatarData_0846F974
gFieldPlayerAvatarData_0846F974: @ 0x0846F974
gSecretBaseSpinMatMovementActions: @ 0x0846F974
	.byte 0x10, 0x10, 0x11, 0x12, 0x13
	.byte 0x00, 0x00, 0x00 @ padding
	.globl gUnknown_846F97C
gUnknown_846F97C: @ 0x0846F97C
	.4byte Fishing1
	.4byte Fishing2
	.4byte Fishing3
	.4byte Fishing4
	.4byte Fishing5
	.4byte Fishing6
	.4byte Fishing7
	.4byte Fishing8
	.4byte Fishing9
	.4byte Fishing10
	.4byte Fishing11
	.4byte Fishing12
	.4byte Fishing13
	.4byte Fishing14
	.4byte Fishing15
	.4byte Fishing16
	@ pret/pokeemerald-jp direct xref for 0x0846F9BC: field_player_avatar.s: Fishing2
	.globl gFieldPlayerAvatarData_0846F9BC
gFieldPlayerAvatarData_0846F9BC: @ 0x0846F9BC
gFishingWaitStartByRod: @ 0x0846F9BC
	.2byte 1 @ old rod
	.2byte 1 @ good rod
	.2byte 1 @ super rod
	@ pret/pokeemerald-jp direct xref for 0x0846F9C2: field_player_avatar.s: Fishing2
	.globl gFieldPlayerAvatarData_0846F9C2
gFieldPlayerAvatarData_0846F9C2: @ 0x0846F9C2
gFishingWaitRangeByRod: @ 0x0846F9C2
	.2byte 1 @ old rod
	.2byte 3 @ good rod
	.2byte 6 @ super rod
	@ pret/pokeemerald-jp direct xref for 0x0846F9C8: field_player_avatar.s: Fishing5
	.globl gFieldPlayerAvatarData_0846F9C8
gFieldPlayerAvatarData_0846F9C8: @ 0x0846F9C8
gFishingEllipsisDotText: @ 0x0846F9C8
	.string "・$"
	.if (. - gFishingEllipsisDotText) != 0x2
	.error "gFishingEllipsisDotText must retain its original byte length"
	.endif
	.globl gUnknown_846F9CA
gUnknown_846F9CA: @ 0x0846F9CA
gFishingMonOnHookText:
	.string "ひいてる　ひいてる！！$"
	.if (. - gFishingMonOnHookText) != 0xC
	.error "gFishingMonOnHookText must retain its original byte length"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0846F9D6: field_player_avatar.s: Fishing8
	.globl gFieldPlayerAvatarData_0846F9D6
gFieldPlayerAvatarData_0846F9D6: @ 0x0846F9D6
gFishingButtonPressTimeoutByRod: @ 0x0846F9D6
	.2byte 36 @ old rod
	.2byte 33 @ good rod
	.2byte 30 @ super rod
	@ pret/pokeemerald-jp direct xref for 0x0846F9DC: field_player_avatar.s: Fishing9
	.globl gFieldPlayerAvatarData_0846F9DC
gFieldPlayerAvatarData_0846F9DC: @ 0x0846F9DC
gFishingBiteChanceByRodAndAttempt: @ 0x0846F9DC
	@ old rod
	.2byte 0, 0
	@ good rod
	.2byte 40, 10
	@ super rod
	.2byte 70, 30
	.globl gUnknown_846F9E8
gUnknown_846F9E8: @ 0x0846F9E8
