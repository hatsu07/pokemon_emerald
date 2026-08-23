.include "asm/macros/semantic_raw_structs.inc"
	@ analyzed canonical ROM range 0x0845A1F4-0x0845DFD9
	@ pass3: gMapLayouts + MapHeader table; byte-verified
	@ pret/pokeemerald-jp direct xref for 0x0845A1F4: battle_pyramid.s: GenerateBattlePyramidFloorLayout; overworld.s: GetMapLayout
	.globl gMapLayouts
gMapLayouts: @ 0x0845A1F4
	.4byte gMapLayout_PetalburgCity, gMapLayout_SlateportCity, gMapLayout_MauvilleCity, gMapLayout_RustboroCity, gMapLayout_FortreeCity, gMapLayout_LilycoveCity
	.4byte gMapLayout_MossdeepCity, gMapLayout_SootopolisCity, gMapLayout_EverGrandeCity, gMapLayout_LittlerootTown, gMapLayout_OldaleTown, gMapLayout_DewfordTown
	.4byte gMapLayout_LavaridgeTown, gMapLayout_FallarborTown, gMapLayout_VerdanturfTown, gMapLayout_PacifidlogTown, gMapLayout_Route101, gMapLayout_Route102
	.4byte gMapLayout_Route103, gMapLayout_Route104, gMapLayout_Route105, gMapLayout_Route106, gMapLayout_Route107, gMapLayout_Route108
	.4byte gMapLayout_Route109, gMapLayout_Route110, gMapLayout_Route111, gMapLayout_Route112, gMapLayout_Route113, gMapLayout_Route114
	.4byte gMapLayout_Route115, gMapLayout_Route116, gMapLayout_Route117, gMapLayout_Route118, gMapLayout_Route119, gMapLayout_Route120
	.4byte gMapLayout_Route121, gMapLayout_Route122, gMapLayout_Route123, gMapLayout_Route124, gMapLayout_Route125, gMapLayout_Route126
	.4byte gMapLayout_Route127, gMapLayout_Route128, gMapLayout_Route129, MapLayout_JP_083F03E4, gMapLayout_Route131, gMapLayout_Route132
	.4byte gMapLayout_Route133, gMapLayout_Route134, gMapLayout_Underwater_Route126, gMapLayout_Underwater_Route127, gMapLayout_Underwater_Route128, gMapLayout_LittlerootTown_BrendansHouse_1F
	.4byte gMapLayout_LittlerootTown_BrendansHouse_2F, gMapLayout_LittlerootTown_MaysHouse_1F, gMapLayout_LittlerootTown_MaysHouse_2F, gMapLayout_LittlerootTown_ProfessorBirchsLab, MapLayout_JP_083FF17C, MapLayout_JP_083FF24C
	.4byte MapLayout_JP_083FF368, MapLayout_JP_083FF4A0, MapLayout_JP_083FF570, MapLayout_JP_083FF630, gMapLayout_DewfordTown_Gym, gMapLayout_DewfordTown_Hall
	.4byte MapLayout_JP_083FFC68, gMapLayout_LavaridgeTown_HerbShop, gMapLayout_LavaridgeTown_Gym_1F, gMapLayout_LavaridgeTown_Gym_B1F, gMapLayout_LavaridgeTown_PokemonCenter_1F, MapLayout_JP_08400498
	.4byte MapLayout_JP_084007AC, gMapLayout_LilycoveCity_House2, MapLayout_JP_08400870, gMapLayout_VerdanturfTown_WandasHouse, MapLayout_JP_08400A74, MapLayout_JP_08400B48
	.4byte gMapLayout_PetalburgCity_Gym, MapLayout_JP_08401408, gMapLayout_SlateportCity_SternsShipyard_1F, gMapLayout_SlateportCity_SternsShipyard_2F, MapLayout_JP_084018E4, MapLayout_JP_08401908
	.4byte gMapLayout_SlateportCity_PokemonFanClub, gMapLayout_SlateportCity_OceanicMuseum_1F, gMapLayout_SlateportCity_OceanicMuseum_2F, MapLayout_JP_0840205C, gMapLayout_MauvilleCity_Gym, gMapLayout_MauvilleCity_BikeShop
	.4byte gMapLayout_MauvilleCity_GameCorner, gMapLayout_RustboroCity_DevonCorp_1F, gMapLayout_RustboroCity_DevonCorp_2F, gMapLayout_RustboroCity_Gym, gMapLayout_RustboroCity_PokemonSchool, MapLayout_JP_08402C04
	.4byte gMapLayout_RustboroCity_House1, gMapLayout_RustboroCity_CuttersHouse, MapLayout_JP_08402E5C, gMapLayout_FortreeCity_Gym, MapLayout_JP_084032E4, gMapLayout_Route104_MrBrineysHouse
	.4byte gMapLayout_LilycoveCity_LilycoveMuseum_1F, gMapLayout_LilycoveCity_LilycoveMuseum_2F, gMapLayout_LilycoveCity_ContestLobby, gMapLayout_LilycoveCity_ContestHall, gMapLayout_LilycoveCity_PokemonTrainerFanClub, gMapLayout_MossdeepCity_Gym
	.4byte gMapLayout_SootopolisCity_Gym_1F, gMapLayout_SootopolisCity_Gym_B1F, gMapLayout_EverGrandeCity_SidneysRoom, gMapLayout_EverGrandeCity_PhoebesRoom, gMapLayout_EverGrandeCity_GlaciasRoom, gMapLayout_EverGrandeCity_DrakesRoom
	.4byte gMapLayout_EverGrandeCity_ChampionsRoom, MapLayout_JP_084061E0, MapLayout_JP_08406310, MapLayout_JP_08406468, gMapLayout_Route114_FossilManiacsHouse, gMapLayout_Route114_FossilManiacsTunnel
	.4byte gMapLayout_Route114_LanettesHouse, gMapLayout_Route116_TunnelersRestHouse, gMapLayout_Route117_PokemonDayCare, gMapLayout_Route121_SafariZoneEntrance, gMapLayout_MeteorFalls_1F_1R, gMapLayout_MeteorFalls_1F_2R
	.4byte gMapLayout_MeteorFalls_B1F_1R, gMapLayout_MeteorFalls_B1F_2R, gMapLayout_RusturfTunnel, gMapLayout_Underwater_SootopolisCity, gMapLayout_DesertRuins, gMapLayout_GraniteCave_1F
	.4byte gMapLayout_GraniteCave_B1F, gMapLayout_GraniteCave_B2F, gMapLayout_PetalburgWoods, gMapLayout_MtChimney, gMapLayout_MtPyre_1F, gMapLayout_MtPyre_2F
	.4byte gMapLayout_MtPyre_3F, gMapLayout_MtPyre_4F, gMapLayout_MtPyre_5F, gMapLayout_MtPyre_6F, gMapLayout_AquaHideout_1F, gMapLayout_AquaHideout_B1F
	.4byte gMapLayout_AquaHideout_B2F, gMapLayout_Underwater_SeafloorCavern, gMapLayout_SeafloorCavern_Entrance, gMapLayout_SeafloorCavern_Room1, gMapLayout_SeafloorCavern_Room2, gMapLayout_SeafloorCavern_Room3
	.4byte gMapLayout_SeafloorCavern_Room4, gMapLayout_SeafloorCavern_Room5, gMapLayout_SeafloorCavern_Room6, gMapLayout_SeafloorCavern_Room7, gMapLayout_SeafloorCavern_Room8, gMapLayout_SeafloorCavern_Room9
	.4byte gMapLayout_CaveOfOrigin_Entrance, gMapLayout_CaveOfOrigin_1F, gMapLayout_CaveOfOrigin_UnusedRubySapphireMap1, gMapLayout_CaveOfOrigin_UnusedRubySapphireMap2, gMapLayout_CaveOfOrigin_UnusedRubySapphireMap3, gMapLayout_CaveOfOrigin_B1F
	.4byte gMapLayout_VictoryRoad_1F, gMapLayout_ShoalCave_LowTideEntranceRoom, gMapLayout_ShoalCave_LowTideInnerRoom, gMapLayout_ShoalCave_LowTideStairsRoom, gMapLayout_ShoalCave_LowTideLowerRoom, gMapLayout_ShoalCave_HighTideEntranceRoom
	.4byte gMapLayout_ShoalCave_HighTideInnerRoom, MapLayout_JP_08416AE0, MapLayout_JP_08416B04, MapLayout_JP_08416B28, MapLayout_JP_08416B4C, MapLayout_JP_08416B70
	.4byte MapLayout_JP_08416B94, MapLayout_JP_08416BB8, MapLayout_JP_08416BDC, MapLayout_JP_08416C00, MapLayout_JP_08416C24, MapLayout_JP_08416C48
	.4byte MapLayout_JP_08416C6C, MapLayout_JP_08416C90, MapLayout_JP_08416CB4, gMapLayout_NewMauville_Entrance, gMapLayout_NewMauville_Inside, gMapLayout_AbandonedShip_Deck
	.4byte gMapLayout_AbandonedShip_Corridors_1F, gMapLayout_AbandonedShip_Rooms_1F, gMapLayout_AbandonedShip_Corridors_B1F, gMapLayout_AbandonedShip_Rooms_B1F, gMapLayout_AbandonedShip_Rooms2_B1F, gMapLayout_AbandonedShip_Underwater1
	.4byte gMapLayout_AbandonedShip_Room_B1F, gMapLayout_AbandonedShip_Rooms2_1F, gMapLayout_AbandonedShip_CaptainsOffice, gMapLayout_AbandonedShip_Underwater2, gMapLayout_SecretBase_RedCave1, gMapLayout_SecretBase_BrownCave1
	.4byte gMapLayout_SecretBase_BlueCave1, gMapLayout_SecretBase_YellowCave1, gMapLayout_SecretBase_Tree1, gMapLayout_SecretBase_Shrub1, gMapLayout_SecretBase_RedCave2, gMapLayout_SecretBase_BrownCave2
	.4byte gMapLayout_SecretBase_BlueCave2, gMapLayout_SecretBase_YellowCave2, gMapLayout_SecretBase_Tree2, gMapLayout_SecretBase_Shrub2, gMapLayout_SecretBase_RedCave3, gMapLayout_SecretBase_BrownCave3
	.4byte gMapLayout_SecretBase_BlueCave3, gMapLayout_SecretBase_YellowCave3, gMapLayout_SecretBase_Tree3, gMapLayout_SecretBase_Shrub3, gMapLayout_SecretBase_RedCave4, gMapLayout_SecretBase_BrownCave4
	.4byte gMapLayout_SecretBase_BlueCave4, gMapLayout_SecretBase_YellowCave4, gMapLayout_SecretBase_Tree4, gMapLayout_SecretBase_Shrub4, gMapLayout_BattleColosseum_2P, gMapLayout_TradeCenter
	.4byte gMapLayout_RecordCorner, gMapLayout_BattleColosseum_4P, gMapLayout_ContestHall, gMapLayout_UnusedContestHall1, gMapLayout_UnusedContestHall2, gMapLayout_UnusedContestHall3
	.4byte gMapLayout_UnusedContestHall4, gMapLayout_UnusedContestHall5, gMapLayout_UnusedContestHall6, gMapLayout_ContestHallBeauty, gMapLayout_ContestHallTough, gMapLayout_ContestHallCool
	.4byte gMapLayout_ContestHallSmart, gMapLayout_ContestHallCute, gMapLayout_InsideOfTruck, gMapLayout_SafariZone_Northwest, gMapLayout_SafariZone_North, gMapLayout_SafariZone_Southwest
	.4byte gMapLayout_SafariZone_South, MapLayout_JP_0841F448, gMapLayout_Route109_SeashoreHouse, gMapLayout_Route110_TrickHouseEntrance, gMapLayout_Route110_TrickHouseEnd, gMapLayout_Route110_TrickHouseCorridor
	.4byte MapLayout_JP_0841FCF8, MapLayout_JP_0841FFAC, gMapLayout_Route110_TrickHousePuzzle3, gMapLayout_Route110_TrickHousePuzzle4, gMapLayout_Route110_TrickHousePuzzle5, gMapLayout_Route110_TrickHousePuzzle6
	.4byte gMapLayout_Route110_TrickHousePuzzle7, gMapLayout_Route110_TrickHousePuzzle8, gMapLayout_FortreeCity_DecorationShop, MapLayout_JP_08421138, gMapLayout_LilycoveCity_DepartmentStore_1F, gMapLayout_LilycoveCity_DepartmentStore_2F
	.4byte gMapLayout_LilycoveCity_DepartmentStore_3F, gMapLayout_LilycoveCity_DepartmentStore_4F, gMapLayout_LilycoveCity_DepartmentStore_5F, gMapLayout_LilycoveCity_DepartmentStoreRooftop, gMapLayout_Route130, gMapLayout_BattleFrontier_BattleTowerLobby
	.4byte gMapLayout_BattleFrontier_OutsideWest, MapLayout_JP_08425484, gMapLayout_BattleFrontier_BattleTowerCorridor, MapLayout_JP_08425624, gMapLayout_RustboroCity_DevonCorp_3F, gMapLayout_EverGrandeCity_PokemonLeague_1F
	.4byte gMapLayout_Route119_WeatherInstitute_1F, gMapLayout_Route119_WeatherInstitute_2F, gMapLayout_LilycoveCity_DepartmentStoreElevator, gMapLayout_Underwater_Route124, gMapLayout_MossdeepCity_SpaceCenter_1F, gMapLayout_MossdeepCity_SpaceCenter_2F
	.4byte gMapLayout_SSTidalCorridor, gMapLayout_SSTidalLowerDeck, gMapLayout_SSTidalRooms, gMapLayout_IslandCave, gMapLayout_AncientTomb, gMapLayout_Underwater_Route134
	.4byte gMapLayout_Underwater_SealedChamber, gMapLayout_SealedChamber_OuterRoom, gMapLayout_VictoryRoad_B1F, gMapLayout_VictoryRoad_B2F, gMapLayout_Route104_Prototype, gMapLayout_GraniteCave_StevensRoom
	.4byte gMapLayout_AbandonedShip_HiddenFloorCorridors, gMapLayout_SouthernIsland_Exterior, gMapLayout_SouthernIsland_Interior, gMapLayout_JaggedPass, gMapLayout_FieryPath, gMapLayout_RustboroCity_Flat2_1F
	.4byte gMapLayout_RustboroCity_Flat2_2F, gMapLayout_RustboroCity_Flat2_3F, gMapLayout_SootopolisCity_LotadAndSeedotHouse, gMapLayout_EverGrandeCity_HallOfFame, gMapLayout_LilycoveCity_CoveLilyMotel_1F, gMapLayout_LilycoveCity_CoveLilyMotel_2F
	.4byte gMapLayout_Route124_DivingTreasureHuntersHouse, gMapLayout_MtPyre_Exterior, gMapLayout_MtPyre_Summit, gMapLayout_SealedChamber_InnerRoom, gMapLayout_MossdeepCity_GameCorner_1F, gMapLayout_MossdeepCity_GameCorner_B1F
	.4byte MapLayout_JP_08431BE0, MapLayout_JP_08431C70, MapLayout_JP_08431D00, gMapLayout_AbandonedShip_HiddenFloorRooms, gMapLayout_ScorchedSlab, MapLayout_JP_084327B4
	.4byte gMapLayout_RustboroCity_Flat1_1F, gMapLayout_RustboroCity_Flat1_2F, gMapLayout_EverGrandeCity_Hall4, gMapLayout_AquaHideout_UnusedRubyMap1, gMapLayout_AquaHideout_UnusedRubyMap2, gMapLayout_AquaHideout_UnusedRubyMap3
	.4byte MapLayout_JP_08435890, gMapLayout_SkyPillar_Entrance, gMapLayout_SkyPillar_Outside, gMapLayout_SkyPillar_1F, gMapLayout_SkyPillar_2F, gMapLayout_SkyPillar_3F
	.4byte gMapLayout_SkyPillar_4F, MapLayout_JP_084370D4, gMapLayout_MossdeepCity_StevensHouse, gMapLayout_ShoalCave_LowTideIceRoom, gMapLayout_SafariZone_RestHouse, gMapLayout_SkyPillar_5F
	.4byte gMapLayout_SkyPillar_Top, gMapLayout_BattleFrontier_BattleDomeLobby, gMapLayout_BattleFrontier_BattleDomeCorridor, gMapLayout_BattleFrontier_BattleDomePreBattleRoom, gMapLayout_BattleFrontier_BattleDomeBattleRoom, gMapLayout_MagmaHideout_1F
	.4byte gMapLayout_MagmaHideout_2F_1R, gMapLayout_MagmaHideout_2F_2R, gMapLayout_MagmaHideout_3F_1R, gMapLayout_MagmaHideout_3F_2R, gMapLayout_MagmaHideout_4F, gMapLayout_BattleFrontier_BattlePalaceLobby
	.4byte gMapLayout_BattleFrontier_BattlePalaceCorridor, gMapLayout_BattleFrontier_BattlePalaceBattleRoom, gMapLayout_BattleFrontier_OutsideEast, gMapLayout_BattleFrontier_BattleFactoryLobby, gMapLayout_BattleFrontier_BattleFactoryPreBattleRoom, gMapLayout_BattleFrontier_BattleFactoryBattleRoom
	.4byte gMapLayout_BattleFrontier_BattlePikeLobby, gMapLayout_BattleFrontier_BattlePikeCorridor, gMapLayout_BattleFrontier_BattlePikeThreePathRoom, gMapLayout_BattleFrontier_BattlePikeRoomNormal, gMapLayout_BattleFrontier_BattlePikeRoomFinal, gMapLayout_BattleFrontier_BattleArenaLobby
	.4byte gMapLayout_BattleFrontier_BattleArenaCorridor, gMapLayout_BattleFrontier_BattleArenaBattleRoom, MapLayout_JP_08441620, gMapLayout_BattleFrontier_BattlePikeRoomWildMons, MapLayout_JP_084417CC, gMapLayout_BattleFrontier_BattlePyramidLobby
	.4byte gMapLayout_BattleFrontier_BattlePyramidFloor, gMapLayout_BattlePyramidSquare01, gMapLayout_BattlePyramidSquare02, gMapLayout_BattlePyramidSquare03, gMapLayout_BattlePyramidSquare04, gMapLayout_BattlePyramidSquare05
	.4byte gMapLayout_BattlePyramidSquare06, gMapLayout_BattlePyramidSquare07, gMapLayout_BattlePyramidSquare08, gMapLayout_BattlePyramidSquare09, gMapLayout_BattlePyramidSquare10, gMapLayout_BattlePyramidSquare11
	.4byte gMapLayout_BattlePyramidSquare12, gMapLayout_BattlePyramidSquare13, gMapLayout_BattlePyramidSquare14, gMapLayout_BattlePyramidSquare15, gMapLayout_BattlePyramidSquare16, gMapLayout_BattleFrontier_BattlePyramidTop
	.4byte gMapLayout_MagmaHideout_3F_3R, gMapLayout_MagmaHideout_2F_3R, gMapLayout_MirageTower_1F, gMapLayout_MirageTower_2F, gMapLayout_MirageTower_3F, MapLayout_JP_08444424
	.4byte MapLayout_JP_08444494, MapLayout_JP_08444568, gMapLayout_VerdanturfTown_BattleTentBattleRoom, gMapLayout_MirageTower_4F, gMapLayout_DesertUnderpass, gMapLayout_BattleFrontier_BattleTowerMultiPartnerRoom
	.4byte gMapLayout_BattleFrontier_BattleTowerMultiCorridor, MapLayout_JP_08448FF8, gMapLayout_UnionRoom, gMapLayout_SafariZone_Northeast, gMapLayout_SafariZone_Southeast, gMapLayout_BattleFrontier_RankingHall
	.4byte MapLayout_JP_0844B208, gMapLayout_BattleFrontier_ExchangeServiceCorner, gMapLayout_BattleFrontier_ReceptionGate, gMapLayout_ArtisanCave_B1F, gMapLayout_ArtisanCave_1F, gMapLayout_FarawayIsland_Entrance
	.4byte gMapLayout_FarawayIsland_Interior, gMapLayout_BirthIsland_Exterior, MapLayout_JP_0844E734, gMapLayout_Underwater_MarineCave, gMapLayout_MarineCave_Entrance, gMapLayout_TerraCave_Entrance
	.4byte gMapLayout_TerraCave_End, gMapLayout_Underwater_Route105, gMapLayout_Underwater_Route125, gMapLayout_Underwater_Route129, gMapLayout_MarineCave_End, gMapLayout_TrainerHill_Entrance
	.4byte gMapLayout_TrainerHill_1F, gMapLayout_TrainerHill_2F, gMapLayout_TrainerHill_3F, gMapLayout_TrainerHill_4F, gMapLayout_TrainerHill_Roof, gMapLayout_AlteringCave
	.4byte gMapLayout_NavelRock_Exterior, gMapLayout_NavelRock_Entrance, gMapLayout_NavelRock_Top, gMapLayout_NavelRock_Bottom, MapLayout_JP_08457254, MapLayout_JP_08457304
	.4byte gMapLayout_NavelRock_B1F, gMapLayout_NavelRock_Fork, MapLayout_JP_08458838, gMapLayout_BattleFrontier_ScottsHouse, gMapLayout_MeteorFalls_StevensCave, MapLayout_JP_084591CC
	.4byte MapLayout_JP_08459374, MapLayout_JP_0845951C, MapLayout_JP_084596C4, MapLayout_JP_0845986C, MapLayout_JP_08459A14, MapLayout_JP_08459F44
	.4byte gMapLayout_SootopolisCity_MysteryEventsHouse_1F, gMapLayout_SootopolisCity_MysteryEventsHouse_B1F, MapLayout_JP_0845A1DC

gMapHeader_PetalburgCity: @ 0x0845A8D8
	@ struct MapHeader
	semantic_map_header gMapLayout_PetalburgCity, PetalburgCity_MapEvents, 0x081DB7E8, MapConnections_JP_0845EB0C, 0x016A, 0x0001, 0x07, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_SlateportCity: @ 0x0845A8F4
	@ struct MapHeader
	semantic_map_header gMapLayout_SlateportCity, SlateportCity_MapEvents, 0x081DBFD3, MapConnections_JP_0845EB38, 0x01B1, 0x0002, 0x08, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_MauvilleCity: @ 0x0845A910
	@ struct MapHeader
	semantic_map_header gMapLayout_MauvilleCity, MauvilleCity_MapEvents, 0x081DD9BE, MapConnections_JP_0845EB70, 0x018F, 0x0003, 0x09, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_RustboroCity: @ 0x0845A92C
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity, RustboroCity_MapEvents, 0x081DE6F6, MapConnections_JP_0845EB9C, 0x018F, 0x0004, 0x0A, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_FortreeCity: @ 0x0845A948
	@ struct MapHeader
	semantic_map_header gMapLayout_FortreeCity, FortreeCity_MapEvents, 0x081DFDEE, MapConnections_JP_0845EBBC, 0x017E, 0x0005, 0x0B, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_LilycoveCity: @ 0x0845A964
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity, LilycoveCity_MapEvents, 0x081E0171, MapConnections_JP_0845EBDC, 0x0198, 0x0006, 0x0C, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_MossdeepCity: @ 0x0845A980
	@ struct MapHeader
	semantic_map_header gMapLayout_MossdeepCity, MossdeepCity_MapEvents, 0x081E1565, MapConnections_JP_0845EC08, 0x018F, 0x0007, 0x0D, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_SootopolisCity: @ 0x0845A99C
	@ struct MapHeader
	semantic_map_header gMapLayout_SootopolisCity, SootopolisCity_MapEvents, 0x081E1CF6, 0, 0x01BD, 0x0008, 0x0E, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_EverGrandeCity: @ 0x0845A9B8
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity, EverGrandeCity_MapEvents, 0x081E3979, MapConnections_JP_0845EC24, 0x01A6, 0x0009, 0x0F, 0x00, 0x02, 0x02, 0x0D, 0x00

gMapHeader_LittlerootTown: @ 0x0845A9D4
	@ struct MapHeader
	semantic_map_header gMapLayout_LittlerootTown, LittlerootTown_MapEvents, 0x081E39F5, MapConnections_JP_0845EA2C, 0x0195, 0x000A, 0x00, 0x00, 0x02, 0x01, 0x0D, 0x00

gMapHeader_OldaleTown: @ 0x0845A9F0
	@ struct MapHeader
	semantic_map_header gMapLayout_OldaleTown, OldaleTown_MapEvents, 0x081E4782, MapConnections_JP_0845EA58, 0x016B, 0x000B, 0x01, 0x00, 0x02, 0x01, 0x0D, 0x00

gMapHeader_DewfordTown: @ 0x0845AA0C
	@ struct MapHeader
	semantic_map_header gMapLayout_DewfordTown, DewfordTown_MapEvents, 0x081E4C57, MapConnections_JP_0845EA78, 0x01AB, 0x000C, 0x02, 0x00, 0x02, 0x01, 0x0D, 0x00

gMapHeader_LavaridgeTown: @ 0x0845AA28
	@ struct MapHeader
	semantic_map_header gMapLayout_LavaridgeTown, LavaridgeTown_MapEvents, 0x081E5662, MapConnections_JP_0845EA8C, 0x016B, 0x000D, 0x03, 0x00, 0x02, 0x01, 0x0D, 0x00

gMapHeader_FallarborTown: @ 0x0845AA44
	@ struct MapHeader
	semantic_map_header gMapLayout_FallarborTown, FallarborTown_MapEvents, 0x081E5E63, MapConnections_JP_0845EAAC, 0x01B5, 0x000E, 0x04, 0x00, 0x02, 0x01, 0x0D, 0x00

gMapHeader_VerdanturfTown: @ 0x0845AA60
	@ struct MapHeader
	semantic_map_header gMapLayout_VerdanturfTown, VerdanturfTown_MapEvents, 0x081E6059, MapConnections_JP_0845EACC, 0x018E, 0x000F, 0x05, 0x00, 0x02, 0x01, 0x0D, 0x00

gMapHeader_PacifidlogTown: @ 0x0845AA7C
	@ struct MapHeader
	semantic_map_header gMapLayout_PacifidlogTown, PacifidlogTown_MapEvents, 0x081E6381, MapConnections_JP_0845EAEC, 0x0198, 0x0010, 0x06, 0x00, 0x02, 0x01, 0x0D, 0x00

gMapHeader_Route101: @ 0x0845AA98
	@ struct MapHeader
	semantic_map_header gMapLayout_Route101, Route101_MapEvents, 0x081E64B6, MapConnections_JP_0845EC44, 0x0167, 0x0011, 0x10, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route102: @ 0x0845AAB4
	@ struct MapHeader
	semantic_map_header gMapLayout_Route102, Route102_MapEvents, 0x081E6824, MapConnections_JP_0845EC64, 0x0167, 0x0012, 0x11, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route103: @ 0x0845AAD0
	@ struct MapHeader
	semantic_map_header gMapLayout_Route103, Route103_MapEvents, 0x081E6A59, MapConnections_JP_0845EC84, 0x0167, 0x0013, 0x12, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route104: @ 0x0845AAEC
	@ struct MapHeader
	semantic_map_header gMapLayout_Route104, Route104_MapEvents, 0x081E712E, MapConnections_JP_0845ECB0, 0x0191, 0x0014, 0x13, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route105: @ 0x0845AB08
	@ struct MapHeader
	semantic_map_header gMapLayout_Route105, Route105_MapEvents, 0x081E819E, MapConnections_JP_0845ECDC, 0x0191, 0x0015, 0x14, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route106: @ 0x0845AB24
	@ struct MapHeader
	semantic_map_header gMapLayout_Route106, Route106_MapEvents, 0x081E83CA, MapConnections_JP_0845ECFC, 0x0191, 0x0016, 0x15, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route107: @ 0x0845AB40
	@ struct MapHeader
	semantic_map_header gMapLayout_Route107, Route107_MapEvents, 0x081E84AB, MapConnections_JP_0845ED1C, 0x0191, 0x0017, 0x16, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route108: @ 0x0845AB5C
	@ struct MapHeader
	semantic_map_header gMapLayout_Route108, Route108_MapEvents, 0x081E85A0, MapConnections_JP_0845ED3C, 0x0191, 0x0018, 0x17, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route109: @ 0x0845AB78
	@ struct MapHeader
	semantic_map_header gMapLayout_Route109, Route109_MapEvents, 0x081E8676, MapConnections_JP_0845ED5C, 0x0191, 0x0019, 0x18, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route110: @ 0x0845AB94
	@ struct MapHeader
	semantic_map_header gMapLayout_Route110, Route110_MapEvents, 0x081E8E49, MapConnections_JP_0845ED88, 0x0168, 0x001A, 0x19, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route111: @ 0x0845ABB0
	@ struct MapHeader
	semantic_map_header gMapLayout_Route111, Route111_MapEvents, 0x081EA14D, MapConnections_JP_0845EDB4, 0x0168, 0x001B, 0x1A, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route112: @ 0x0845ABCC
	@ struct MapHeader
	semantic_map_header gMapLayout_Route112, Route112_MapEvents, 0x081EAE8C, MapConnections_JP_0845EDE0, 0x0168, 0x001C, 0x1B, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route113: @ 0x0845ABE8
	@ struct MapHeader
	semantic_map_header gMapLayout_Route113, Route113_MapEvents, 0x081EB153, MapConnections_JP_0845EE0C, 0x01A2, 0x001D, 0x1C, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route114: @ 0x0845AC04
	@ struct MapHeader
	semantic_map_header gMapLayout_Route114, Route114_MapEvents, 0x081EB474, MapConnections_JP_0845EE2C, 0x0168, 0x001E, 0x1D, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route115: @ 0x0845AC20
	@ struct MapHeader
	semantic_map_header gMapLayout_Route115, Route115_MapEvents, 0x081EB804, MapConnections_JP_0845EE4C, 0x0191, 0x001F, 0x1E, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route116: @ 0x0845AC3C
	@ struct MapHeader
	semantic_map_header gMapLayout_Route116, Route116_MapEvents, 0x081EBAB5, MapConnections_JP_0845EE6C, 0x0191, 0x0020, 0x1F, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route117: @ 0x0845AC58
	@ struct MapHeader
	semantic_map_header gMapLayout_Route117, Route117_MapEvents, 0x081EC423, MapConnections_JP_0845EE8C, 0x0168, 0x0021, 0x20, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route118: @ 0x0845AC74
	@ struct MapHeader
	semantic_map_header gMapLayout_Route118, Route118_MapEvents, 0x081EC7E9, MapConnections_JP_0845EEB8, 0x7FFF, 0x0022, 0x21, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route119: @ 0x0845AC90
	@ struct MapHeader
	semantic_map_header gMapLayout_Route119, Route119_MapEvents, 0x081ECCE5, MapConnections_JP_0845EED8, 0x0192, 0x0023, 0x22, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route120: @ 0x0845ACAC
	@ struct MapHeader
	semantic_map_header gMapLayout_Route120, Route120_MapEvents, 0x081ED864, MapConnections_JP_0845EEF8, 0x0169, 0x0024, 0x23, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route121: @ 0x0845ACC8
	@ struct MapHeader
	semantic_map_header gMapLayout_Route121, Route121_MapEvents, 0x081EE0D9, MapConnections_JP_0845EF24, 0x0169, 0x0025, 0x24, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route122: @ 0x0845ACE4
	@ struct MapHeader
	semantic_map_header gMapLayout_Route122, Route122_MapEvents, 0x081EE3D5, MapConnections_JP_0845EF44, 0x0176, 0x0026, 0x25, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route123: @ 0x0845AD00
	@ struct MapHeader
	semantic_map_header gMapLayout_Route123, Route123_MapEvents, 0x081EE3D6, MapConnections_JP_0845EF64, 0x0176, 0x0027, 0x26, 0x00, 0x02, 0x03, 0x0D, 0x00

gMapHeader_Route124: @ 0x0845AD1C
	@ struct MapHeader
	semantic_map_header gMapLayout_Route124, Route124_MapEvents, 0x081EE79F, MapConnections_JP_0845EFA8, 0x0169, 0x0028, 0x27, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route125: @ 0x0845AD38
	@ struct MapHeader
	semantic_map_header gMapLayout_Route125, Route125_MapEvents, 0x081EE97C, MapConnections_JP_0845EFD4, 0x0169, 0x0029, 0x28, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route126: @ 0x0845AD54
	@ struct MapHeader
	semantic_map_header gMapLayout_Route126, Route126_MapEvents, 0x081EEAFA, MapConnections_JP_0845F000, 0x0169, 0x002A, 0x29, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route127: @ 0x0845AD70
	@ struct MapHeader
	semantic_map_header gMapLayout_Route127, Route127_MapEvents, 0x081EEC0D, MapConnections_JP_0845F038, 0x0169, 0x002B, 0x2A, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route128: @ 0x0845AD8C
	@ struct MapHeader
	semantic_map_header gMapLayout_Route128, Route128_MapEvents, 0x081EED6C, MapConnections_JP_0845F070, 0x0169, 0x002C, 0x2B, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route129: @ 0x0845ADA8
	@ struct MapHeader
	semantic_map_header gMapLayout_Route129, Route129_MapEvents, 0x081EF2B4, MapConnections_JP_0845F09C, 0x0192, 0x002D, 0x2C, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route130: @ 0x0845ADC4
	@ struct MapHeader
	semantic_map_header gMapLayout_Route130, Route130_MapEvents, 0x081EF38F, MapConnections_JP_0845F0BC, 0x0192, 0x0107, 0x2D, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route131: @ 0x0845ADE0
	@ struct MapHeader
	semantic_map_header gMapLayout_Route131, Route131_MapEvents, 0x081EF434, MapConnections_JP_0845F0DC, 0x0192, 0x002F, 0x2E, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route132: @ 0x0845ADFC
	@ struct MapHeader
	semantic_map_header gMapLayout_Route132, Route132_MapEvents, 0x081EF519, MapConnections_JP_0845F0FC, 0x0192, 0x0030, 0x2F, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route133: @ 0x0845AE18
	@ struct MapHeader
	semantic_map_header gMapLayout_Route133, Route133_MapEvents, 0x081EF5D2, MapConnections_JP_0845F11C, 0x0192, 0x0031, 0x30, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Route134: @ 0x0845AE34
	@ struct MapHeader
	semantic_map_header gMapLayout_Route134, Route134_MapEvents, 0x081EF674, MapConnections_JP_0845F13C, 0x0192, 0x0032, 0x31, 0x00, 0x02, 0x06, 0x0D, 0x00

gMapHeader_Underwater_Route124: @ 0x0845AE50
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_Route124, Underwater_Route124_MapEvents, 0x081EF752, MapConnections_JP_0845F170, 0x019B, 0x0112, 0x32, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_Underwater_Route126: @ 0x0845AE6C
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_Route126, Underwater_Route126_MapEvents, 0x081EF753, MapConnections_JP_0845F1B0, 0x019B, 0x0033, 0x33, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_Underwater_Route127: @ 0x0845AE88
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_Route127, Underwater_Route127_MapEvents, 0x081EF754, MapConnections_JP_0845F1DC, 0x019B, 0x0034, 0x34, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_Underwater_Route128: @ 0x0845AEA4
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_Route128, Underwater_Route128_MapEvents, 0x081EF760, MapConnections_JP_0845F1FC, 0x019B, 0x0035, 0x35, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_Underwater_Route129: @ 0x0845AEC0
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_Route129, Underwater_Route129_MapEvents, 0x081EF761, MapConnections_JP_0845F210, 0x019B, 0x019C, 0xD0, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_Underwater_Route105: @ 0x0845AEDC
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_Route105, Underwater_Route105_MapEvents, 0x081EF76D, MapConnections_JP_0845F150, 0x019B, 0x019A, 0xCE, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_Underwater_Route125: @ 0x0845AEF8
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_Route125, Underwater_Route125_MapEvents, 0x081EF779, MapConnections_JP_0845F184, 0x019B, 0x019B, 0xCF, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_LittlerootTown_BrendansHouse_1F: @ 0x0845AF14
	@ struct MapHeader
	semantic_map_header gMapLayout_LittlerootTown_BrendansHouse_1F, LittlerootTown_BrendansHouse_1F_MapEvents, 0x081EF785, 0, 0x0195, 0x0036, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LittlerootTown_BrendansHouse_2F: @ 0x0845AF30
	@ struct MapHeader
	semantic_map_header gMapLayout_LittlerootTown_BrendansHouse_2F, LittlerootTown_BrendansHouse_2F_MapEvents, 0x081EFF92, 0, 0x0195, 0x0037, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LittlerootTown_MaysHouse_1F: @ 0x0845AF4C
	@ struct MapHeader
	semantic_map_header gMapLayout_LittlerootTown_MaysHouse_1F, LittlerootTown_MaysHouse_1F_MapEvents, 0x081F0358, 0, 0x0195, 0x0038, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LittlerootTown_MaysHouse_2F: @ 0x0845AF68
	@ struct MapHeader
	semantic_map_header gMapLayout_LittlerootTown_MaysHouse_2F, LittlerootTown_MaysHouse_2F_MapEvents, 0x081F0AE2, 0, 0x0195, 0x0039, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LittlerootTown_ProfessorBirchsLab: @ 0x0845AF84
	@ struct MapHeader
	semantic_map_header gMapLayout_LittlerootTown_ProfessorBirchsLab, LittlerootTown_ProfessorBirchsLab_MapEvents, 0x081F122C, 0, 0x017F, 0x003A, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_OldaleTown_House1: @ 0x0845AFA0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, OldaleTown_House1_MapEvents, 0x081F28D3, 0, 0x016B, 0x003B, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_OldaleTown_House2: @ 0x0845AFBC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, OldaleTown_House2_MapEvents, 0x081F2949, 0, 0x016B, 0x003C, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_OldaleTown_PokemonCenter_1F: @ 0x0845AFD8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, OldaleTown_PokemonCenter_1F_MapEvents, 0x081F29A2, 0, 0x0190, 0x003D, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_OldaleTown_PokemonCenter_2F: @ 0x0845AFF4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, OldaleTown_PokemonCenter_2F_MapEvents, 0x081F2AE4, 0, 0x0190, 0x003E, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_OldaleTown_Mart: @ 0x0845B010
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, OldaleTown_Mart_MapEvents, 0x081F2B0B, 0, 0x0194, 0x003F, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_DewfordTown_House1: @ 0x0845B02C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF630, DewfordTown_House1_MapEvents, 0x081F2C10, 0, 0x01AB, 0x0040, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_DewfordTown_PokemonCenter_1F: @ 0x0845B048
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, DewfordTown_PokemonCenter_1F_MapEvents, 0x081F2CCF, 0, 0x0190, 0x003D, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_DewfordTown_PokemonCenter_2F: @ 0x0845B064
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, DewfordTown_PokemonCenter_2F_MapEvents, 0x081F2D60, 0, 0x0190, 0x003E, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_DewfordTown_Gym: @ 0x0845B080
	@ struct MapHeader
	semantic_map_header gMapLayout_DewfordTown_Gym, DewfordTown_Gym_MapEvents, 0x081F2D87, 0, 0x016C, 0x0041, 0x02, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_DewfordTown_Hall: @ 0x0845B09C
	@ struct MapHeader
	semantic_map_header gMapLayout_DewfordTown_Hall, DewfordTown_Hall_MapEvents, 0x081F3788, 0, 0x01AB, 0x0042, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_DewfordTown_House2: @ 0x0845B0B8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FFC68, DewfordTown_House2_MapEvents, 0x081F4008, 0, 0x01AB, 0x0043, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LavaridgeTown_HerbShop: @ 0x0845B0D4
	@ struct MapHeader
	semantic_map_header gMapLayout_LavaridgeTown_HerbShop, LavaridgeTown_HerbShop_MapEvents, 0x081F4185, 0, 0x016B, 0x0044, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LavaridgeTown_Gym_1F: @ 0x0845B0F0
	@ struct MapHeader
	semantic_map_header gMapLayout_LavaridgeTown_Gym_1F, LavaridgeTown_Gym_1F_MapEvents, 0x081F42C7, 0, 0x016C, 0x0045, 0x03, 0x00, 0x06, 0x08, 0x00, 0x01

gMapHeader_LavaridgeTown_Gym_B1F: @ 0x0845B10C
	@ struct MapHeader
	semantic_map_header gMapLayout_LavaridgeTown_Gym_B1F, LavaridgeTown_Gym_B1F_MapEvents, 0x081F4DBA, 0, 0x016C, 0x0046, 0x03, 0x00, 0x06, 0x08, 0x00, 0x01

gMapHeader_LavaridgeTown_House: @ 0x0845B128
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF630, LavaridgeTown_House_MapEvents, 0x081F4E4D, 0, 0x016B, 0x0040, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LavaridgeTown_Mart: @ 0x0845B144
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, LavaridgeTown_Mart_MapEvents, 0x081F4ECC, 0, 0x0194, 0x003F, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LavaridgeTown_PokemonCenter_1F: @ 0x0845B160
	@ struct MapHeader
	semantic_map_header gMapLayout_LavaridgeTown_PokemonCenter_1F, LavaridgeTown_PokemonCenter_1F_MapEvents, 0x081F4F85, 0, 0x0190, 0x0047, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LavaridgeTown_PokemonCenter_2F: @ 0x0845B17C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, LavaridgeTown_PokemonCenter_2F_MapEvents, 0x081F5071, 0, 0x0190, 0x003E, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FallarborTown_Mart: @ 0x0845B198
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, FallarborTown_Mart_MapEvents, 0x081F5098, 0, 0x0194, 0x003F, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FallarborTown_BattleTentLobby: @ 0x0845B1B4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444424, FallarborTown_BattleTentLobby_MapEvents, 0x081F5185, 0, 0x0180, 0x0180, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FallarborTown_BattleTentCorridor: @ 0x0845B1D0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444494, FallarborTown_BattleTentCorridor_MapEvents, 0x081F57D8, 0, 0x0180, 0x0181, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FallarborTown_BattleTentBattleRoom: @ 0x0845B1EC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444568, FallarborTown_BattleTentBattleRoom_MapEvents, 0x081F591A, 0, 0x0180, 0x0182, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FallarborTown_PokemonCenter_1F: @ 0x0845B208
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, FallarborTown_PokemonCenter_1F_MapEvents, 0x081F5C4E, 0, 0x0190, 0x003D, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FallarborTown_PokemonCenter_2F: @ 0x0845B224
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, FallarborTown_PokemonCenter_2F_MapEvents, 0x081F5E51, 0, 0x0190, 0x003E, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FallarborTown_CozmosHouse: @ 0x0845B240
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, FallarborTown_CozmosHouse_MapEvents, 0x081F5E78, 0, 0x01B5, 0x003B, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FallarborTown_MoveRelearnersHouse: @ 0x0845B25C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, FallarborTown_MoveRelearnersHouse_MapEvents, 0x081F6155, 0, 0x01B5, 0x003C, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_BattleTentLobby: @ 0x0845B278
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444424, VerdanturfTown_BattleTentLobby_MapEvents, 0x081F6365, 0, 0x0180, 0x0180, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_BattleTentCorridor: @ 0x0845B294
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444494, VerdanturfTown_BattleTentCorridor_MapEvents, 0x081F6B12, 0, 0x0180, 0x0181, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_BattleTentBattleRoom: @ 0x0845B2B0
	@ struct MapHeader
	semantic_map_header gMapLayout_VerdanturfTown_BattleTentBattleRoom, VerdanturfTown_BattleTentBattleRoom_MapEvents, 0x081F6CA5, 0, 0x0180, 0x0183, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_Mart: @ 0x0845B2CC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, VerdanturfTown_Mart_MapEvents, 0x081F6F27, 0, 0x0194, 0x003F, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_PokemonCenter_1F: @ 0x0845B2E8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, VerdanturfTown_PokemonCenter_1F_MapEvents, 0x081F7021, 0, 0x0190, 0x003D, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_PokemonCenter_2F: @ 0x0845B304
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, VerdanturfTown_PokemonCenter_2F_MapEvents, 0x081F70DE, 0, 0x0190, 0x003E, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_WandasHouse: @ 0x0845B320
	@ struct MapHeader
	semantic_map_header gMapLayout_VerdanturfTown_WandasHouse, VerdanturfTown_WandasHouse_MapEvents, 0x081F7105, 0, 0x018E, 0x004C, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_FriendshipRatersHouse: @ 0x0845B33C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, VerdanturfTown_FriendshipRatersHouse_MapEvents, 0x081F7556, 0, 0x018E, 0x003C, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_VerdanturfTown_House: @ 0x0845B358
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, VerdanturfTown_House_MapEvents, 0x081F777F, 0, 0x018E, 0x003B, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PacifidlogTown_PokemonCenter_1F: @ 0x0845B374
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, PacifidlogTown_PokemonCenter_1F_MapEvents, 0x081F782A, 0, 0x0190, 0x003D, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PacifidlogTown_PokemonCenter_2F: @ 0x0845B390
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, PacifidlogTown_PokemonCenter_2F_MapEvents, 0x081F7917, 0, 0x0190, 0x003E, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PacifidlogTown_House1: @ 0x0845B3AC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400A74, PacifidlogTown_House1_MapEvents, 0x081F793E, 0, 0x0198, 0x004D, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PacifidlogTown_House2: @ 0x0845B3C8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400B48, PacifidlogTown_House2_MapEvents, 0x081F79FF, 0, 0x0198, 0x004E, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PacifidlogTown_House3: @ 0x0845B3E4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400A74, PacifidlogTown_House3_MapEvents, 0x081F7D1A, 0, 0x0198, 0x004D, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PacifidlogTown_House4: @ 0x0845B400
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400B48, PacifidlogTown_House4_MapEvents, 0x081F7F3D, 0, 0x0198, 0x004E, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PacifidlogTown_House5: @ 0x0845B41C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08400A74, PacifidlogTown_House5_MapEvents, 0x081F8055, 0, 0x0198, 0x004D, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PetalburgCity_WallysHouse: @ 0x0845B438
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, PetalburgCity_WallysHouse_MapEvents, 0x081F810B, 0, 0x016A, 0x003C, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PetalburgCity_Gym: @ 0x0845B454
	@ struct MapHeader
	semantic_map_header gMapLayout_PetalburgCity_Gym, PetalburgCity_Gym_MapEvents, 0x081F8520, 0, 0x016C, 0x004F, 0x07, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_PetalburgCity_House1: @ 0x0845B470
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, PetalburgCity_House1_MapEvents, 0x081FA63D, 0, 0x016A, 0x003B, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PetalburgCity_House2: @ 0x0845B48C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401408, PetalburgCity_House2_MapEvents, 0x081FA720, 0, 0x016A, 0x0050, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PetalburgCity_PokemonCenter_1F: @ 0x0845B4A8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, PetalburgCity_PokemonCenter_1F_MapEvents, 0x081FA7CD, 0, 0x0190, 0x003D, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PetalburgCity_PokemonCenter_2F: @ 0x0845B4C4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, PetalburgCity_PokemonCenter_2F_MapEvents, 0x081FA9C2, 0, 0x0190, 0x003E, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_PetalburgCity_Mart: @ 0x0845B4E0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, PetalburgCity_Mart_MapEvents, 0x081FA9E9, 0, 0x0194, 0x003F, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_SternsShipyard_1F: @ 0x0845B4FC
	@ struct MapHeader
	semantic_map_header gMapLayout_SlateportCity_SternsShipyard_1F, SlateportCity_SternsShipyard_1F_MapEvents, 0x081FAB28, 0, 0x01B1, 0x0051, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_SternsShipyard_2F: @ 0x0845B518
	@ struct MapHeader
	semantic_map_header gMapLayout_SlateportCity_SternsShipyard_2F, SlateportCity_SternsShipyard_2F_MapEvents, 0x081FAFA2, 0, 0x01B1, 0x0052, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_BattleTentLobby: @ 0x0845B534
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444424, SlateportCity_BattleTentLobby_MapEvents, 0x081FB033, 0, 0x0180, 0x0180, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_BattleTentCorridor: @ 0x0845B550
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444494, SlateportCity_BattleTentCorridor_MapEvents, 0x081FB594, 0, 0x0180, 0x0181, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_BattleTentBattleRoom: @ 0x0845B56C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08444568, SlateportCity_BattleTentBattleRoom_MapEvents, 0x081FBC59, 0, 0x0180, 0x0182, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_NameRatersHouse: @ 0x0845B588
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401408, SlateportCity_NameRatersHouse_MapEvents, 0x081FBD9D, 0, 0x01B1, 0x0050, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_PokemonFanClub: @ 0x0845B5A4
	@ struct MapHeader
	semantic_map_header gMapLayout_SlateportCity_PokemonFanClub, SlateportCity_PokemonFanClub_MapEvents, 0x081FC027, 0, 0x01B1, 0x0055, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_OceanicMuseum_1F: @ 0x0845B5C0
	@ struct MapHeader
	semantic_map_header gMapLayout_SlateportCity_OceanicMuseum_1F, SlateportCity_OceanicMuseum_1F_MapEvents, 0x081FCA3E, 0, 0x0177, 0x0056, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_OceanicMuseum_2F: @ 0x0845B5DC
	@ struct MapHeader
	semantic_map_header gMapLayout_SlateportCity_OceanicMuseum_2F, SlateportCity_OceanicMuseum_2F_MapEvents, 0x081FD309, 0, 0x0177, 0x0057, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_Harbor: @ 0x0845B5F8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840205C, SlateportCity_Harbor_MapEvents, 0x081FDC6E, 0, 0x01B1, 0x0058, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_House: @ 0x0845B614
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, SlateportCity_House_MapEvents, 0x081FE772, 0, 0x01B1, 0x003C, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_PokemonCenter_1F: @ 0x0845B630
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, SlateportCity_PokemonCenter_1F_MapEvents, 0x081FE809, 0, 0x0190, 0x003D, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_PokemonCenter_2F: @ 0x0845B64C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, SlateportCity_PokemonCenter_2F_MapEvents, 0x081FE8D2, 0, 0x0190, 0x003E, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SlateportCity_Mart: @ 0x0845B668
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, SlateportCity_Mart_MapEvents, 0x081FE8F9, 0, 0x0194, 0x003F, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MauvilleCity_Gym: @ 0x0845B684
	@ struct MapHeader
	semantic_map_header gMapLayout_MauvilleCity_Gym, MauvilleCity_Gym_MapEvents, 0x081FE9B4, 0, 0x016C, 0x0059, 0x09, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_MauvilleCity_BikeShop: @ 0x0845B6A0
	@ struct MapHeader
	semantic_map_header gMapLayout_MauvilleCity_BikeShop, MauvilleCity_BikeShop_MapEvents, 0x081FF3EB, 0, 0x018F, 0x005A, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MauvilleCity_House1: @ 0x0845B6BC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MauvilleCity_House1_MapEvents, 0x081FFD77, 0, 0x018F, 0x003C, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MauvilleCity_GameCorner: @ 0x0845B6D8
	@ struct MapHeader
	semantic_map_header gMapLayout_MauvilleCity_GameCorner, MauvilleCity_GameCorner_MapEvents, 0x081FFEE7, 0, 0x01AA, 0x005B, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MauvilleCity_House2: @ 0x0845B6F4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MauvilleCity_House2_MapEvents, 0x08200C5A, 0, 0x018F, 0x003B, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MauvilleCity_PokemonCenter_1F: @ 0x0845B710
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MauvilleCity_PokemonCenter_1F_MapEvents, 0x08200DD4, 0, 0x0190, 0x003D, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MauvilleCity_PokemonCenter_2F: @ 0x0845B72C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MauvilleCity_PokemonCenter_2F_MapEvents, 0x08200ECF, 0, 0x0190, 0x003E, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MauvilleCity_Mart: @ 0x0845B748
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MauvilleCity_Mart_MapEvents, 0x08200F4F, 0, 0x0194, 0x003F, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_DevonCorp_1F: @ 0x0845B764
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_DevonCorp_1F, RustboroCity_DevonCorp_1F_MapEvents, 0x08201030, 0, 0x018F, 0x005C, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_DevonCorp_2F: @ 0x0845B780
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_DevonCorp_2F, RustboroCity_DevonCorp_2F_MapEvents, 0x08201429, 0, 0x018F, 0x005D, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_DevonCorp_3F: @ 0x0845B79C
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_DevonCorp_3F, RustboroCity_DevonCorp_3F_MapEvents, 0x08201C29, 0, 0x018F, 0x010D, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_Gym: @ 0x0845B7B8
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_Gym, RustboroCity_Gym_MapEvents, 0x082022C5, 0, 0x016C, 0x005E, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_RustboroCity_PokemonSchool: @ 0x0845B7D4
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_PokemonSchool, RustboroCity_PokemonSchool_MapEvents, 0x08202C1A, 0, 0x01B3, 0x005F, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_PokemonCenter_1F: @ 0x0845B7F0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, RustboroCity_PokemonCenter_1F_MapEvents, 0x082034B3, 0, 0x0190, 0x003D, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_PokemonCenter_2F: @ 0x0845B80C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, RustboroCity_PokemonCenter_2F_MapEvents, 0x082035B9, 0, 0x0190, 0x003E, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_Mart: @ 0x0845B828
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, RustboroCity_Mart_MapEvents, 0x082035E0, 0, 0x0194, 0x003F, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_Flat1_1F: @ 0x0845B844
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_Flat1_1F, RustboroCity_Flat1_1F_MapEvents, 0x08203714, 0, 0x018F, 0x0139, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_Flat1_2F: @ 0x0845B860
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_Flat1_2F, RustboroCity_Flat1_2F_MapEvents, 0x08203770, 0, 0x018F, 0x013A, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_House1: @ 0x0845B87C
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_House1, RustboroCity_House1_MapEvents, 0x08203BC8, 0, 0x018F, 0x0061, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_CuttersHouse: @ 0x0845B898
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_CuttersHouse, RustboroCity_CuttersHouse_MapEvents, 0x08203D7C, 0, 0x018F, 0x0062, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_House2: @ 0x0845B8B4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402C04, RustboroCity_House2_MapEvents, 0x08203F15, 0, 0x018F, 0x0060, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_Flat2_1F: @ 0x0845B8D0
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_Flat2_1F, RustboroCity_Flat2_1F_MapEvents, 0x08203F99, 0, 0x018F, 0x0126, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_Flat2_2F: @ 0x0845B8EC
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_Flat2_2F, RustboroCity_Flat2_2F_MapEvents, 0x08203FE8, 0, 0x018F, 0x0127, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_Flat2_3F: @ 0x0845B908
	@ struct MapHeader
	semantic_map_header gMapLayout_RustboroCity_Flat2_3F, RustboroCity_Flat2_3F_MapEvents, 0x082040B5, 0, 0x018F, 0x0128, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RustboroCity_House3: @ 0x0845B924
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402C04, RustboroCity_House3_MapEvents, 0x08204117, 0, 0x018F, 0x0060, 0x0A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_House1: @ 0x0845B940
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402E5C, FortreeCity_House1_MapEvents, 0x082041CA, 0, 0x017E, 0x0063, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_Gym: @ 0x0845B95C
	@ struct MapHeader
	semantic_map_header gMapLayout_FortreeCity_Gym, FortreeCity_Gym_MapEvents, 0x0820439E, 0, 0x016C, 0x0064, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_FortreeCity_PokemonCenter_1F: @ 0x0845B978
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, FortreeCity_PokemonCenter_1F_MapEvents, 0x08204C5D, 0, 0x0190, 0x003D, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_PokemonCenter_2F: @ 0x0845B994
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, FortreeCity_PokemonCenter_2F_MapEvents, 0x08204D96, 0, 0x0190, 0x003E, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_Mart: @ 0x0845B9B0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, FortreeCity_Mart_MapEvents, 0x08204DBD, 0, 0x0194, 0x003F, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_House2: @ 0x0845B9CC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084032E4, FortreeCity_House2_MapEvents, 0x08204E9B, 0, 0x017E, 0x0065, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_House3: @ 0x0845B9E8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402E5C, FortreeCity_House3_MapEvents, 0x082050D0, 0, 0x017E, 0x0063, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_House4: @ 0x0845BA04
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084032E4, FortreeCity_House4_MapEvents, 0x082051A2, 0, 0x017E, 0x0065, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_House5: @ 0x0845BA20
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08402E5C, FortreeCity_House5_MapEvents, 0x08205343, 0, 0x017E, 0x0063, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FortreeCity_DecorationShop: @ 0x0845BA3C
	@ struct MapHeader
	semantic_map_header gMapLayout_FortreeCity_DecorationShop, FortreeCity_DecorationShop_MapEvents, 0x082053F0, 0, 0x017E, 0x00FF, 0x0B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_CoveLilyMotel_1F: @ 0x0845BA58
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_CoveLilyMotel_1F, LilycoveCity_CoveLilyMotel_1F_MapEvents, 0x082054FC, 0, 0x0198, 0x012B, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_CoveLilyMotel_2F: @ 0x0845BA74
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_CoveLilyMotel_2F, LilycoveCity_CoveLilyMotel_2F_MapEvents, 0x08205887, 0, 0x0198, 0x012C, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_LilycoveMuseum_1F: @ 0x0845BA90
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_LilycoveMuseum_1F, LilycoveCity_LilycoveMuseum_1F_MapEvents, 0x08205BE2, 0, 0x0175, 0x0067, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_LilycoveMuseum_2F: @ 0x0845BAAC
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_LilycoveMuseum_2F, LilycoveCity_LilycoveMuseum_2F_MapEvents, 0x082061E6, 0, 0x0175, 0x0068, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_ContestLobby: @ 0x0845BAC8
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_ContestLobby, LilycoveCity_ContestLobby_MapEvents, 0x082068D1, 0, 0x01C4, 0x0069, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_ContestHall: @ 0x0845BAE4
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_ContestHall, LilycoveCity_ContestHall_MapEvents, 0x082077B9, 0, 0x01C4, 0x006A, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_PokemonCenter_1F: @ 0x0845BB00
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, LilycoveCity_PokemonCenter_1F_MapEvents, 0x0820824A, 0, 0x0190, 0x003D, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_PokemonCenter_2F: @ 0x0845BB1C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, LilycoveCity_PokemonCenter_2F_MapEvents, 0x08208376, 0, 0x0190, 0x003E, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_UnusedMart: @ 0x0845BB38
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, LilycoveCity_UnusedMart_MapEvents, 0x0820839D, 0, 0x0194, 0x003F, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_PokemonTrainerFanClub: @ 0x0845BB54
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_PokemonTrainerFanClub, LilycoveCity_PokemonTrainerFanClub_MapEvents, 0x0820839E, 0, 0x0198, 0x006B, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_Harbor: @ 0x0845BB70
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0840205C, LilycoveCity_Harbor_MapEvents, 0x082094D4, 0, 0x0198, 0x0058, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_MoveDeletersHouse: @ 0x0845BB8C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, LilycoveCity_MoveDeletersHouse_MapEvents, 0x08209D70, 0, 0x0198, 0x003C, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_House1: @ 0x0845BBA8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, LilycoveCity_House1_MapEvents, 0x08209F66, 0, 0x0198, 0x003B, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_House2: @ 0x0845BBC4
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_House2, LilycoveCity_House2_MapEvents, 0x08209FDC, 0, 0x0198, 0x004A, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_House3: @ 0x0845BBE0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, LilycoveCity_House3_MapEvents, 0x0820A065, 0, 0x0198, 0x003C, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_House4: @ 0x0845BBFC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, LilycoveCity_House4_MapEvents, 0x0820A51A, 0, 0x0198, 0x003B, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_DepartmentStore_1F: @ 0x0845BC18
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_DepartmentStore_1F, LilycoveCity_DepartmentStore_1F_MapEvents, 0x0820A5AF, 0, 0x0198, 0x0101, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_DepartmentStore_2F: @ 0x0845BC34
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_DepartmentStore_2F, LilycoveCity_DepartmentStore_2F_MapEvents, 0x0820A920, 0, 0x0194, 0x0102, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_DepartmentStore_3F: @ 0x0845BC50
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_DepartmentStore_3F, LilycoveCity_DepartmentStore_3F_MapEvents, 0x0820AA19, 0, 0x0194, 0x0103, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_DepartmentStore_4F: @ 0x0845BC6C
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_DepartmentStore_4F, LilycoveCity_DepartmentStore_4F_MapEvents, 0x0820AB4E, 0, 0x0194, 0x0104, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_DepartmentStore_5F: @ 0x0845BC88
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_DepartmentStore_5F, LilycoveCity_DepartmentStore_5F_MapEvents, 0x0820AC4E, 0, 0x0194, 0x0105, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_DepartmentStoreRooftop: @ 0x0845BCA4
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_DepartmentStoreRooftop, LilycoveCity_DepartmentStoreRooftop_MapEvents, 0x0820AE53, 0, 0x0198, 0x0106, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_LilycoveCity_DepartmentStoreElevator: @ 0x0845BCC0
	@ struct MapHeader
	semantic_map_header gMapLayout_LilycoveCity_DepartmentStoreElevator, LilycoveCity_DepartmentStoreElevator_MapEvents, 0x0820B18C, 0, 0x0198, 0x0111, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_Gym: @ 0x0845BCDC
	@ struct MapHeader
	semantic_map_header gMapLayout_MossdeepCity_Gym, MossdeepCity_Gym_MapEvents, 0x0820B369, 0, 0x016C, 0x006C, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_MossdeepCity_House1: @ 0x0845BCF8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MossdeepCity_House1_MapEvents, 0x0820C332, 0, 0x018F, 0x003C, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_House2: @ 0x0845BD14
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF17C, MossdeepCity_House2_MapEvents, 0x0820C3D2, 0, 0x018F, 0x003B, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_PokemonCenter_1F: @ 0x0845BD30
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, MossdeepCity_PokemonCenter_1F_MapEvents, 0x0820C4B2, 0, 0x0190, 0x003D, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_PokemonCenter_2F: @ 0x0845BD4C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, MossdeepCity_PokemonCenter_2F_MapEvents, 0x0820C54A, 0, 0x0190, 0x003E, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_Mart: @ 0x0845BD68
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, MossdeepCity_Mart_MapEvents, 0x0820C5B2, 0, 0x0194, 0x003F, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_House3: @ 0x0845BD84
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, MossdeepCity_House3_MapEvents, 0x0820C6FA, 0, 0x018F, 0x003C, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_StevensHouse: @ 0x0845BDA0
	@ struct MapHeader
	semantic_map_header gMapLayout_MossdeepCity_StevensHouse, MossdeepCity_StevensHouse_MapEvents, 0x0820C816, 0, 0x018F, 0x0147, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_House4: @ 0x0845BDBC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08401408, MossdeepCity_House4_MapEvents, 0x0820CC5B, 0, 0x018F, 0x0050, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_SpaceCenter_1F: @ 0x0845BDD8
	@ struct MapHeader
	semantic_map_header gMapLayout_MossdeepCity_SpaceCenter_1F, MossdeepCity_SpaceCenter_1F_MapEvents, 0x0820CD5D, 0, 0x018F, 0x0113, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_SpaceCenter_2F: @ 0x0845BDF4
	@ struct MapHeader
	semantic_map_header gMapLayout_MossdeepCity_SpaceCenter_2F, MossdeepCity_SpaceCenter_2F_MapEvents, 0x0820D682, 0, 0x018F, 0x0114, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_GameCorner_1F: @ 0x0845BE10
	@ struct MapHeader
	semantic_map_header gMapLayout_MossdeepCity_GameCorner_1F, MossdeepCity_GameCorner_1F_MapEvents, 0x0820E01E, 0, 0x018F, 0x0131, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MossdeepCity_GameCorner_B1F: @ 0x0845BE2C
	@ struct MapHeader
	semantic_map_header gMapLayout_MossdeepCity_GameCorner_B1F, MossdeepCity_GameCorner_B1F_MapEvents, 0x0820E223, 0, 0x018F, 0x0132, 0x0D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_Gym_1F: @ 0x0845BE48
	@ struct MapHeader
	semantic_map_header gMapLayout_SootopolisCity_Gym_1F, SootopolisCity_Gym_1F_MapEvents, 0x0820E224, 0, 0x016C, 0x006D, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_SootopolisCity_Gym_B1F: @ 0x0845BE64
	@ struct MapHeader
	semantic_map_header gMapLayout_SootopolisCity_Gym_B1F, SootopolisCity_Gym_B1F_MapEvents, 0x0820EAC6, 0, 0x016C, 0x006E, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_SootopolisCity_PokemonCenter_1F: @ 0x0845BE80
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, SootopolisCity_PokemonCenter_1F_MapEvents, 0x0820EFD5, 0, 0x0190, 0x003D, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_PokemonCenter_2F: @ 0x0845BE9C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, SootopolisCity_PokemonCenter_2F_MapEvents, 0x0820F190, 0, 0x0190, 0x003E, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_Mart: @ 0x0845BEB8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, SootopolisCity_Mart_MapEvents, 0x0820F1B7, 0, 0x0194, 0x003F, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_House1: @ 0x0845BED4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431BE0, SootopolisCity_House1_MapEvents, 0x0820F300, 0, 0x01BD, 0x0133, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_House2: @ 0x0845BEF0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431C70, SootopolisCity_House2_MapEvents, 0x0820F3C6, 0, 0x01BD, 0x0134, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_House3: @ 0x0845BF0C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431D00, SootopolisCity_House3_MapEvents, 0x0820F479, 0, 0x01BD, 0x0135, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_House4: @ 0x0845BF28
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431BE0, SootopolisCity_House4_MapEvents, 0x0820F593, 0, 0x01BD, 0x0133, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_House5: @ 0x0845BF44
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431C70, SootopolisCity_House5_MapEvents, 0x0820F657, 0, 0x01BD, 0x0134, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_House6: @ 0x0845BF60
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431D00, SootopolisCity_House6_MapEvents, 0x0820F6D0, 0, 0x01BD, 0x0135, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_House7: @ 0x0845BF7C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08431BE0, SootopolisCity_House7_MapEvents, 0x0820F7BA, 0, 0x01BD, 0x0133, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_LotadAndSeedotHouse: @ 0x0845BF98
	@ struct MapHeader
	semantic_map_header gMapLayout_SootopolisCity_LotadAndSeedotHouse, SootopolisCity_LotadAndSeedotHouse_MapEvents, 0x0820F861, 0, 0x01BD, 0x0129, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_MysteryEventsHouse_1F: @ 0x0845BFB4
	@ struct MapHeader
	semantic_map_header gMapLayout_SootopolisCity_MysteryEventsHouse_1F, SootopolisCity_MysteryEventsHouse_1F_MapEvents, 0x0820FD60, 0, 0x01BD, 0x01B7, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SootopolisCity_MysteryEventsHouse_B1F: @ 0x0845BFD0
	@ struct MapHeader
	semantic_map_header gMapLayout_SootopolisCity_MysteryEventsHouse_B1F, SootopolisCity_MysteryEventsHouse_B1F_MapEvents, 0x08210134, 0, 0x01BD, 0x01B8, 0x0E, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_SidneysRoom: @ 0x0845BFEC
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity_SidneysRoom, EverGrandeCity_SidneysRoom_MapEvents, 0x082101E6, 0, 0x01AD, 0x006F, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x04

gMapHeader_EverGrandeCity_PhoebesRoom: @ 0x0845C008
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity_PhoebesRoom, EverGrandeCity_PhoebesRoom_MapEvents, 0x08210371, 0, 0x01AD, 0x0070, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x05

gMapHeader_EverGrandeCity_GlaciasRoom: @ 0x0845C024
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity_GlaciasRoom, EverGrandeCity_GlaciasRoom_MapEvents, 0x08210523, 0, 0x01AD, 0x0071, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x06

gMapHeader_EverGrandeCity_DrakesRoom: @ 0x0845C040
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity_DrakesRoom, EverGrandeCity_DrakesRoom_MapEvents, 0x082106BE, 0, 0x01AD, 0x0072, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x07

gMapHeader_EverGrandeCity_ChampionsRoom: @ 0x0845C05C
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity_ChampionsRoom, EverGrandeCity_ChampionsRoom_MapEvents, 0x082108D0, 0, 0x01AD, 0x0073, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_Hall1: @ 0x0845C078
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084061E0, EverGrandeCity_Hall1_MapEvents, 0x0821106B, 0, 0x01AD, 0x0074, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_Hall2: @ 0x0845C094
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084061E0, EverGrandeCity_Hall2_MapEvents, 0x08211080, 0, 0x01AD, 0x0074, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_Hall3: @ 0x0845C0B0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084061E0, EverGrandeCity_Hall3_MapEvents, 0x08211095, 0, 0x01AD, 0x0074, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_Hall4: @ 0x0845C0CC
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity_Hall4, EverGrandeCity_Hall4_MapEvents, 0x082110AA, 0, 0x01AD, 0x013B, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_Hall5: @ 0x0845C0E8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_084061E0, EverGrandeCity_Hall5_MapEvents, 0x082110BF, 0, 0x01AD, 0x0074, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_PokemonLeague_1F: @ 0x0845C104
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity_PokemonLeague_1F, EverGrandeCity_PokemonLeague_1F_MapEvents, 0x082110D4, 0, 0x0190, 0x010E, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_HallOfFame: @ 0x0845C120
	@ struct MapHeader
	semantic_map_header gMapLayout_EverGrandeCity_HallOfFame, EverGrandeCity_HallOfFame_MapEvents, 0x08211287, 0, 0x01BF, 0x012A, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_PokemonCenter_1F: @ 0x0845C13C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, EverGrandeCity_PokemonCenter_1F_MapEvents, 0x082113FC, 0, 0x0190, 0x003D, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_PokemonCenter_2F: @ 0x0845C158
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, EverGrandeCity_PokemonCenter_2F_MapEvents, 0x082115A2, 0, 0x0190, 0x003E, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_EverGrandeCity_PokemonLeague_2F: @ 0x0845C174
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, EverGrandeCity_PokemonLeague_2F_MapEvents, 0x082115C9, 0, 0x0190, 0x003E, 0x0F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route104_MrBrineysHouse: @ 0x0845C190
	@ struct MapHeader
	semantic_map_header gMapLayout_Route104_MrBrineysHouse, Route104_MrBrineysHouse_MapEvents, 0x082115F0, 0, 0x016A, 0x0066, 0x13, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route104_PrettyPetalFlowerShop: @ 0x0845C1AC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406310, Route104_PrettyPetalFlowerShop_MapEvents, 0x082119B4, 0, 0x016A, 0x0075, 0x13, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route111_WinstrateFamilysHouse: @ 0x0845C1C8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF24C, Route111_WinstrateFamilysHouse_MapEvents, 0x08211AF4, 0, 0x018F, 0x003C, 0x1A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route111_OldLadysRestStop: @ 0x0845C1E4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF630, Route111_OldLadysRestStop_MapEvents, 0x08211DED, 0, 0x018F, 0x0040, 0x1A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route112_CableCarStation: @ 0x0845C200
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406468, Route112_CableCarStation_MapEvents, 0x08211F0A, 0, 0x0168, 0x0076, 0x1B, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MtChimney_CableCarStation: @ 0x0845C21C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406468, MtChimney_CableCarStation_MapEvents, 0x0821201F, 0, 0x0168, 0x0076, 0x38, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route114_FossilManiacsHouse: @ 0x0845C238
	@ struct MapHeader
	semantic_map_header gMapLayout_Route114_FossilManiacsHouse, Route114_FossilManiacsHouse_MapEvents, 0x0821212C, 0, 0x01B5, 0x0077, 0x1D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route114_FossilManiacsTunnel: @ 0x0845C254
	@ struct MapHeader
	semantic_map_header gMapLayout_Route114_FossilManiacsTunnel, Route114_FossilManiacsTunnel_MapEvents, 0x0821228D, 0, 0x01B5, 0x0078, 0x1D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route114_LanettesHouse: @ 0x0845C270
	@ struct MapHeader
	semantic_map_header gMapLayout_Route114_LanettesHouse, Route114_LanettesHouse_MapEvents, 0x082124D1, 0, 0x01B5, 0x0079, 0x1D, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route116_TunnelersRestHouse: @ 0x0845C28C
	@ struct MapHeader
	semantic_map_header gMapLayout_Route116_TunnelersRestHouse, Route116_TunnelersRestHouse_MapEvents, 0x08212820, 0, 0x018F, 0x007A, 0x1F, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route117_PokemonDayCare: @ 0x0845C2A8
	@ struct MapHeader
	semantic_map_header gMapLayout_Route117_PokemonDayCare, Route117_PokemonDayCare_MapEvents, 0x082129DB, 0, 0x018F, 0x007B, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route121_SafariZoneEntrance: @ 0x0845C2C4
	@ struct MapHeader
	semantic_map_header gMapLayout_Route121_SafariZoneEntrance, Route121_SafariZoneEntrance_MapEvents, 0x082129E5, 0, 0x017E, 0x007C, 0x24, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_MeteorFalls_1F_1R: @ 0x0845C2E0
	@ struct MapHeader
	semantic_map_header gMapLayout_MeteorFalls_1F_1R, MeteorFalls_1F_1R_MapEvents, 0x08212B54, 0, 0x0182, 0x007D, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MeteorFalls_1F_2R: @ 0x0845C2FC
	@ struct MapHeader
	semantic_map_header gMapLayout_MeteorFalls_1F_2R, MeteorFalls_1F_2R_MapEvents, 0x08213079, 0, 0x0182, 0x007E, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MeteorFalls_B1F_1R: @ 0x0845C318
	@ struct MapHeader
	semantic_map_header gMapLayout_MeteorFalls_B1F_1R, MeteorFalls_B1F_1R_MapEvents, 0x082135EE, 0, 0x0182, 0x007F, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MeteorFalls_B1F_2R: @ 0x0845C334
	@ struct MapHeader
	semantic_map_header gMapLayout_MeteorFalls_B1F_2R, MeteorFalls_B1F_2R_MapEvents, 0x082135EF, 0, 0x0182, 0x0080, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_RusturfTunnel: @ 0x0845C350
	@ struct MapHeader
	semantic_map_header gMapLayout_RusturfTunnel, RusturfTunnel_MapEvents, 0x082135F0, 0, 0x016E, 0x0081, 0x3C, 0x00, 0x06, 0x04, 0x0F, 0x00

gMapHeader_Underwater_SootopolisCity: @ 0x0845C36C
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_SootopolisCity, Underwater_SootopolisCity_MapEvents, 0x08213DD0, 0, 0x019B, 0x0082, 0x36, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_DesertRuins: @ 0x0845C388
	@ struct MapHeader
	semantic_map_header gMapLayout_DesertRuins, DesertRuins_MapEvents, 0x08213DDF, 0, 0x01B6, 0x0083, 0x52, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_GraniteCave_1F: @ 0x0845C3A4
	@ struct MapHeader
	semantic_map_header gMapLayout_GraniteCave_1F, GraniteCave_1F_MapEvents, 0x08213EE1, 0, 0x016E, 0x0084, 0x37, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_GraniteCave_B1F: @ 0x0845C3C0
	@ struct MapHeader
	semantic_map_header gMapLayout_GraniteCave_B1F, GraniteCave_B1F_MapEvents, 0x0821400B, 0, 0x016E, 0x0085, 0x37, 0x01, 0x00, 0x04, 0x0F, 0x00

gMapHeader_GraniteCave_B2F: @ 0x0845C3DC
	@ struct MapHeader
	semantic_map_header gMapLayout_GraniteCave_B2F, GraniteCave_B2F_MapEvents, 0x08214026, 0, 0x016E, 0x0086, 0x37, 0x01, 0x00, 0x04, 0x0F, 0x00

gMapHeader_GraniteCave_StevensRoom: @ 0x0845C3F8
	@ struct MapHeader
	semantic_map_header gMapLayout_GraniteCave_StevensRoom, GraniteCave_StevensRoom_MapEvents, 0x08214027, 0, 0x016E, 0x0120, 0x37, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_PetalburgWoods: @ 0x0845C414
	@ struct MapHeader
	semantic_map_header gMapLayout_PetalburgWoods, PetalburgWoods_MapEvents, 0x08214278, 0, 0x016E, 0x0087, 0x3B, 0x00, 0x0B, 0x03, 0x0D, 0x00

gMapHeader_MtChimney: @ 0x0845C430
	@ struct MapHeader
	semantic_map_header gMapLayout_MtChimney, MtChimney_MapEvents, 0x08214B94, 0, 0x0196, 0x0088, 0x38, 0x00, 0x07, 0x03, 0x0D, 0x00

gMapHeader_JaggedPass: @ 0x0845C44C
	@ struct MapHeader
	semantic_map_header gMapLayout_JaggedPass, JaggedPass_MapEvents, 0x08215AF2, 0, 0x016E, 0x0124, 0x4C, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_FieryPath: @ 0x0845C468
	@ struct MapHeader
	semantic_map_header gMapLayout_FieryPath, FieryPath_MapEvents, 0x082160FF, 0, 0x016E, 0x0125, 0x4A, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MtPyre_1F: @ 0x0845C484
	@ struct MapHeader
	semantic_map_header gMapLayout_MtPyre_1F, MtPyre_1F_MapEvents, 0x08216119, 0, 0x01B0, 0x0089, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

gMapHeader_MtPyre_2F: @ 0x0845C4A0
	@ struct MapHeader
	semantic_map_header gMapLayout_MtPyre_2F, MtPyre_2F_MapEvents, 0x08216230, 0, 0x01B0, 0x008A, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

gMapHeader_MtPyre_3F: @ 0x0845C4BC
	@ struct MapHeader
	semantic_map_header gMapLayout_MtPyre_3F, MtPyre_3F_MapEvents, 0x082165F1, 0, 0x01B0, 0x008B, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

gMapHeader_MtPyre_4F: @ 0x0845C4D8
	@ struct MapHeader
	semantic_map_header gMapLayout_MtPyre_4F, MtPyre_4F_MapEvents, 0x08216880, 0, 0x01B0, 0x008C, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

gMapHeader_MtPyre_5F: @ 0x0845C4F4
	@ struct MapHeader
	semantic_map_header gMapLayout_MtPyre_5F, MtPyre_5F_MapEvents, 0x082168FA, 0, 0x01B0, 0x008D, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

gMapHeader_MtPyre_6F: @ 0x0845C510
	@ struct MapHeader
	semantic_map_header gMapLayout_MtPyre_6F, MtPyre_6F_MapEvents, 0x08216986, 0, 0x01B0, 0x008E, 0x41, 0x00, 0x00, 0x08, 0x08, 0x00

gMapHeader_MtPyre_Exterior: @ 0x0845C52C
	@ struct MapHeader
	semantic_map_header gMapLayout_MtPyre_Exterior, MtPyre_Exterior_MapEvents, 0x08216B49, 0, 0x01B2, 0x012E, 0x41, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_MtPyre_Summit: @ 0x0845C548
	@ struct MapHeader
	semantic_map_header gMapLayout_MtPyre_Summit, MtPyre_Summit_MapEvents, 0x08216B74, 0, 0x01B2, 0x012F, 0x41, 0x00, 0x06, 0x03, 0x0D, 0x00

gMapHeader_AquaHideout_1F: @ 0x0845C564
	@ struct MapHeader
	semantic_map_header gMapLayout_AquaHideout_1F, AquaHideout_1F_MapEvents, 0x08217935, 0, 0x01AE, 0x008F, 0xC5, 0x00, 0x00, 0x08, 0x08, 0x03

gMapHeader_AquaHideout_B1F: @ 0x0845C580
	@ struct MapHeader
	semantic_map_header gMapLayout_AquaHideout_B1F, AquaHideout_B1F_MapEvents, 0x08217CB0, 0, 0x01AE, 0x0090, 0xC5, 0x00, 0x00, 0x08, 0x08, 0x03

gMapHeader_AquaHideout_B2F: @ 0x0845C59C
	@ struct MapHeader
	semantic_map_header gMapLayout_AquaHideout_B2F, AquaHideout_B2F_MapEvents, 0x08217F9F, 0, 0x01AE, 0x0091, 0xC5, 0x00, 0x00, 0x08, 0x08, 0x03

gMapHeader_Underwater_SeafloorCavern: @ 0x0845C5B8
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_SeafloorCavern, Underwater_SeafloorCavern_MapEvents, 0x0821834E, 0, 0x019B, 0x0092, 0x45, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_SeafloorCavern_Entrance: @ 0x0845C5D4
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Entrance, SeafloorCavern_Entrance_MapEvents, 0x0821844E, 0, 0x0196, 0x0093, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room1: @ 0x0845C5F0
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room1, SeafloorCavern_Room1_MapEvents, 0x0821865E, 0, 0x0196, 0x0094, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room2: @ 0x0845C60C
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room2, SeafloorCavern_Room2_MapEvents, 0x0821873D, 0, 0x0196, 0x0095, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room3: @ 0x0845C628
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room3, SeafloorCavern_Room3_MapEvents, 0x0821873E, 0, 0x0196, 0x0096, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room4: @ 0x0845C644
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room4, SeafloorCavern_Room4_MapEvents, 0x0821892E, 0, 0x0196, 0x0097, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room5: @ 0x0845C660
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room5, SeafloorCavern_Room5_MapEvents, 0x082189F9, 0, 0x0196, 0x0098, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room6: @ 0x0845C67C
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room6, SeafloorCavern_Room6_MapEvents, 0x082189FA, 0, 0x0196, 0x0099, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room7: @ 0x0845C698
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room7, SeafloorCavern_Room7_MapEvents, 0x082189FB, 0, 0x0196, 0x009A, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room8: @ 0x0845C6B4
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room8, SeafloorCavern_Room8_MapEvents, 0x082189FC, 0, 0x0196, 0x009B, 0x44, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SeafloorCavern_Room9: @ 0x0845C6D0
	@ struct MapHeader
	semantic_map_header gMapLayout_SeafloorCavern_Room9, SeafloorCavern_Room9_MapEvents, 0x082189FD, 0, 0x0196, 0x009C, 0x44, 0x00, 0x06, 0x04, 0x0E, 0x00

gMapHeader_CaveOfOrigin_Entrance: @ 0x0845C6EC
	@ struct MapHeader
	semantic_map_header gMapLayout_CaveOfOrigin_Entrance, CaveOfOrigin_Entrance_MapEvents, 0x082190AF, 0, 0x0182, 0x009D, 0x48, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_CaveOfOrigin_1F: @ 0x0845C708
	@ struct MapHeader
	semantic_map_header gMapLayout_CaveOfOrigin_1F, CaveOfOrigin_1F_MapEvents, 0x082190BE, 0, 0x0182, 0x009E, 0x48, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_CaveOfOrigin_UnusedRubySapphireMap1: @ 0x0845C724
	@ struct MapHeader
	semantic_map_header gMapLayout_CaveOfOrigin_UnusedRubySapphireMap1, CaveOfOrigin_UnusedRubySapphireMap1_MapEvents, 0x082190CE, 0, 0x0182, 0x009F, 0x48, 0x01, 0x00, 0x04, 0x0F, 0x00

gMapHeader_CaveOfOrigin_UnusedRubySapphireMap2: @ 0x0845C740
	@ struct MapHeader
	semantic_map_header gMapLayout_CaveOfOrigin_UnusedRubySapphireMap2, CaveOfOrigin_UnusedRubySapphireMap2_MapEvents, 0x082190DE, 0, 0x0182, 0x00A0, 0x48, 0x01, 0x06, 0x04, 0x0F, 0x00

gMapHeader_CaveOfOrigin_UnusedRubySapphireMap3: @ 0x0845C75C
	@ struct MapHeader
	semantic_map_header gMapLayout_CaveOfOrigin_UnusedRubySapphireMap3, CaveOfOrigin_UnusedRubySapphireMap3_MapEvents, 0x082190EE, 0, 0x0182, 0x00A1, 0x48, 0x01, 0x06, 0x04, 0x0F, 0x00

gMapHeader_CaveOfOrigin_B1F: @ 0x0845C778
	@ struct MapHeader
	semantic_map_header gMapLayout_CaveOfOrigin_B1F, CaveOfOrigin_B1F_MapEvents, 0x082190FE, 0, 0xFFFF, 0x00A2, 0x48, 0x00, 0x06, 0x04, 0x0E, 0x00

gMapHeader_VictoryRoad_1F: @ 0x0845C794
	@ struct MapHeader
	semantic_map_header gMapLayout_VictoryRoad_1F, VictoryRoad_1F_MapEvents, 0x0821949C, 0, 0x01AD, 0x00A3, 0x46, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_VictoryRoad_B1F: @ 0x0845C7B0
	@ struct MapHeader
	semantic_map_header gMapLayout_VictoryRoad_B1F, VictoryRoad_B1F_MapEvents, 0x0821996E, 0, 0x01AD, 0x011D, 0x46, 0x01, 0x00, 0x04, 0x0F, 0x00

gMapHeader_VictoryRoad_B2F: @ 0x0845C7CC
	@ struct MapHeader
	semantic_map_header gMapLayout_VictoryRoad_B2F, VictoryRoad_B2F_MapEvents, 0x08219BA0, 0, 0x01AD, 0x011E, 0x46, 0x01, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ShoalCave_LowTideEntranceRoom: @ 0x0845C7E8
	@ struct MapHeader
	semantic_map_header gMapLayout_ShoalCave_LowTideEntranceRoom, ShoalCave_LowTideEntranceRoom_MapEvents, 0x08219E85, 0, 0x01B0, 0x00A4, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ShoalCave_LowTideInnerRoom: @ 0x0845C804
	@ struct MapHeader
	semantic_map_header gMapLayout_ShoalCave_LowTideInnerRoom, ShoalCave_LowTideInnerRoom_MapEvents, 0x08219FC0, 0, 0x01B0, 0x00A5, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ShoalCave_LowTideStairsRoom: @ 0x0845C820
	@ struct MapHeader
	semantic_map_header gMapLayout_ShoalCave_LowTideStairsRoom, ShoalCave_LowTideStairsRoom_MapEvents, 0x0821A1C5, 0, 0x01B0, 0x00A6, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ShoalCave_LowTideLowerRoom: @ 0x0845C83C
	@ struct MapHeader
	semantic_map_header gMapLayout_ShoalCave_LowTideLowerRoom, ShoalCave_LowTideLowerRoom_MapEvents, 0x0821A221, 0, 0x01B0, 0x00A7, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ShoalCave_HighTideEntranceRoom: @ 0x0845C858
	@ struct MapHeader
	semantic_map_header gMapLayout_ShoalCave_HighTideEntranceRoom, ShoalCave_HighTideEntranceRoom_MapEvents, 0x0821A324, 0, 0x01B0, 0x00A8, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ShoalCave_HighTideInnerRoom: @ 0x0845C874
	@ struct MapHeader
	semantic_map_header gMapLayout_ShoalCave_HighTideInnerRoom, ShoalCave_HighTideInnerRoom_MapEvents, 0x0821A325, 0, 0x01B0, 0x00A9, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_NewMauville_Entrance: @ 0x0845C890
	@ struct MapHeader
	semantic_map_header gMapLayout_NewMauville_Entrance, NewMauville_Entrance_MapEvents, 0x0821A326, 0, 0x01B0, 0x00B8, 0x3E, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_NewMauville_Inside: @ 0x0845C8AC
	@ struct MapHeader
	semantic_map_header gMapLayout_NewMauville_Inside, NewMauville_Inside_MapEvents, 0x0821A432, 0, 0x01B0, 0x00B9, 0x3E, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Deck: @ 0x0845C8C8
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Deck, AbandonedShip_Deck_MapEvents, 0x0821A972, 0, 0x017D, 0x00BA, 0x3D, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Corridors_1F: @ 0x0845C8E4
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Corridors_1F, AbandonedShip_Corridors_1F_MapEvents, 0x0821A97C, 0, 0x017D, 0x00BB, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Rooms_1F: @ 0x0845C900
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Rooms_1F, AbandonedShip_Rooms_1F_MapEvents, 0x0821A9FD, 0, 0x017D, 0x00BC, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Corridors_B1F: @ 0x0845C91C
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Corridors_B1F, AbandonedShip_Corridors_B1F_MapEvents, 0x0821ABF0, 0, 0x017D, 0x00BD, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Rooms_B1F: @ 0x0845C938
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Rooms_B1F, AbandonedShip_Rooms_B1F_MapEvents, 0x0821AD78, 0, 0x017D, 0x00BE, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Rooms2_B1F: @ 0x0845C954
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Rooms2_B1F, AbandonedShip_Rooms2_B1F_MapEvents, 0x0821ADC7, 0, 0x017D, 0x00BF, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Underwater1: @ 0x0845C970
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Underwater1, AbandonedShip_Underwater1_MapEvents, 0x0821AE0A, 0, 0x019B, 0x00C0, 0x3D, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_AbandonedShip_Room_B1F: @ 0x0845C98C
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Room_B1F, AbandonedShip_Room_B1F_MapEvents, 0x0821AE19, 0, 0x017D, 0x00C1, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Rooms2_1F: @ 0x0845C9A8
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Rooms2_1F, AbandonedShip_Rooms2_1F_MapEvents, 0x0821AE1A, 0, 0x017D, 0x00C2, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_CaptainsOffice: @ 0x0845C9C4
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_CaptainsOffice, AbandonedShip_CaptainsOffice_MapEvents, 0x0821B22D, 0, 0x017D, 0x00C3, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_Underwater2: @ 0x0845C9E0
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_Underwater2, AbandonedShip_Underwater2_MapEvents, 0x0821B331, 0, 0x019B, 0x00C4, 0x3D, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_AbandonedShip_HiddenFloorCorridors: @ 0x0845C9FC
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_HiddenFloorCorridors, AbandonedShip_HiddenFloorCorridors_MapEvents, 0x0821B340, 0, 0x017D, 0x0121, 0x3D, 0x00, 0x0B, 0x04, 0x0F, 0x00

gMapHeader_AbandonedShip_HiddenFloorRooms: @ 0x0845CA18
	@ struct MapHeader
	semantic_map_header gMapLayout_AbandonedShip_HiddenFloorRooms, AbandonedShip_HiddenFloorRooms_MapEvents, 0x0821B5A3, 0, 0x017D, 0x0136, 0x3D, 0x00, 0x0B, 0x04, 0x07, 0x00

gMapHeader_IslandCave: @ 0x0845CA34
	@ struct MapHeader
	semantic_map_header gMapLayout_IslandCave, IslandCave_MapEvents, 0x0821B76F, 0, 0x01B6, 0x0118, 0x51, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_AncientTomb: @ 0x0845CA50
	@ struct MapHeader
	semantic_map_header gMapLayout_AncientTomb, AncientTomb_MapEvents, 0x0821B8F8, 0, 0x01B6, 0x0119, 0x53, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_Underwater_Route134: @ 0x0845CA6C
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_Route134, Underwater_Route134_MapEvents, 0x0821B9FA, 0, 0x019B, 0x011A, 0x4F, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_Underwater_SealedChamber: @ 0x0845CA88
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_SealedChamber, Underwater_SealedChamber_MapEvents, 0x0821BA09, 0, 0x019B, 0x011B, 0x4F, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_SealedChamber_OuterRoom: @ 0x0845CAA4
	@ struct MapHeader
	semantic_map_header gMapLayout_SealedChamber_OuterRoom, SealedChamber_OuterRoom_MapEvents, SealedChamber_OuterRoom_MapScripts, 0, 0x01B6, 0x011C, 0x4E, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SealedChamber_InnerRoom: @ 0x0845CAC0
	@ struct MapHeader
	semantic_map_header gMapLayout_SealedChamber_InnerRoom, SealedChamber_InnerRoom_MapEvents, SealedChamber_InnerRoom_MapScripts, 0, 0x01B6, 0x0130, 0x4E, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ScorchedSlab: @ 0x0845CADC
	@ struct MapHeader
	semantic_map_header gMapLayout_ScorchedSlab, ScorchedSlab_MapEvents, ScorchedSlab_MapScripts, 0, 0x016E, 0x0137, 0x50, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_AquaHideout_UnusedRubyMap1: @ 0x0845CAF8
	@ struct MapHeader
	semantic_map_header gMapLayout_AquaHideout_UnusedRubyMap1, AquaHideout_UnusedRubyMap1_MapEvents, AquaHideout_UnusedRubyMap1_MapScripts, 0, 0x01AE, 0x013C, 0xC5, 0x00, 0x00, 0x04, 0x0F, 0x02

gMapHeader_AquaHideout_UnusedRubyMap2: @ 0x0845CB14
	@ struct MapHeader
	semantic_map_header gMapLayout_AquaHideout_UnusedRubyMap2, AquaHideout_UnusedRubyMap2_MapEvents, AquaHideout_UnusedRubyMap2_MapScripts, 0, 0x01AE, 0x013D, 0xC5, 0x00, 0x00, 0x04, 0x0F, 0x02

gMapHeader_AquaHideout_UnusedRubyMap3: @ 0x0845CB30
	@ struct MapHeader
	semantic_map_header gMapLayout_AquaHideout_UnusedRubyMap3, AquaHideout_UnusedRubyMap3_MapEvents, AquaHideout_UnusedRubyMap3_MapScripts, 0, 0x01AE, 0x013E, 0xC5, 0x00, 0x00, 0x04, 0x0F, 0x02

gMapHeader_SkyPillar_Entrance: @ 0x0845CB4C
	@ struct MapHeader
	semantic_map_header gMapLayout_SkyPillar_Entrance, SkyPillar_Entrance_MapEvents, SkyPillar_Entrance_MapScripts, 0, 0x0196, 0x0140, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SkyPillar_Outside: @ 0x0845CB68
	@ struct MapHeader
	semantic_map_header gMapLayout_SkyPillar_Outside, SkyPillar_Outside_MapEvents, SkyPillar_Outside_MapScripts, 0, 0x0196, 0x0141, 0x55, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_SkyPillar_1F: @ 0x0845CB84
	@ struct MapHeader
	semantic_map_header gMapLayout_SkyPillar_1F, SkyPillar_1F_MapEvents, 0x0821BE85, 0, 0x0196, 0x0142, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SkyPillar_2F: @ 0x0845CBA0
	@ struct MapHeader
	semantic_map_header gMapLayout_SkyPillar_2F, SkyPillar_2F_MapEvents, 0x0821BE9B, 0, 0x0196, 0x0143, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SkyPillar_3F: @ 0x0845CBBC
	@ struct MapHeader
	semantic_map_header gMapLayout_SkyPillar_3F, SkyPillar_3F_MapEvents, 0x0821BECB, 0, 0x0196, 0x0144, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SkyPillar_4F: @ 0x0845CBD8
	@ struct MapHeader
	semantic_map_header gMapLayout_SkyPillar_4F, SkyPillar_4F_MapEvents, 0x0821BEE1, 0, 0x0196, 0x0145, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ShoalCave_LowTideIceRoom: @ 0x0845CBF4
	@ struct MapHeader
	semantic_map_header gMapLayout_ShoalCave_LowTideIceRoom, ShoalCave_LowTideIceRoom_MapEvents, 0x0821BF11, 0, 0x01B0, 0x0148, 0x43, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SkyPillar_5F: @ 0x0845CC10
	@ struct MapHeader
	semantic_map_header gMapLayout_SkyPillar_5F, SkyPillar_5F_MapEvents, 0x0821BF12, 0, 0x0196, 0x014A, 0x55, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SkyPillar_Top: @ 0x0845CC2C
	@ struct MapHeader
	semantic_map_header gMapLayout_SkyPillar_Top, SkyPillar_Top_MapEvents, 0x0821BF28, 0, 0x0196, 0x014B, 0x55, 0x00, 0x00, 0x03, 0x0C, 0x00

gMapHeader_MagmaHideout_1F: @ 0x0845CC48
	@ struct MapHeader
	semantic_map_header gMapLayout_MagmaHideout_1F, MagmaHideout_1F_MapEvents, 0x0821C0F3, 0, 0x01AE, 0x0150, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MagmaHideout_2F_1R: @ 0x0845CC64
	@ struct MapHeader
	semantic_map_header gMapLayout_MagmaHideout_2F_1R, MagmaHideout_2F_1R_MapEvents, 0x0821C286, 0, 0x01AE, 0x0151, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MagmaHideout_2F_2R: @ 0x0845CC80
	@ struct MapHeader
	semantic_map_header gMapLayout_MagmaHideout_2F_2R, MagmaHideout_2F_2R_MapEvents, 0x0821C445, 0, 0x01AE, 0x0152, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MagmaHideout_3F_1R: @ 0x0845CC9C
	@ struct MapHeader
	semantic_map_header gMapLayout_MagmaHideout_3F_1R, MagmaHideout_3F_1R_MapEvents, 0x0821C668, 0, 0x01AE, 0x0153, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MagmaHideout_3F_2R: @ 0x0845CCB8
	@ struct MapHeader
	semantic_map_header gMapLayout_MagmaHideout_3F_2R, MagmaHideout_3F_2R_MapEvents, 0x0821C7A4, 0, 0x01AE, 0x0154, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MagmaHideout_4F: @ 0x0845CCD4
	@ struct MapHeader
	semantic_map_header gMapLayout_MagmaHideout_4F, MagmaHideout_4F_MapEvents, 0x0821C880, 0, 0x01AE, 0x0155, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MagmaHideout_3F_3R: @ 0x0845CCF0
	@ struct MapHeader
	semantic_map_header gMapLayout_MagmaHideout_3F_3R, MagmaHideout_3F_3R_MapEvents, 0x0821CDC4, 0, 0x01AE, 0x017B, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MagmaHideout_2F_3R: @ 0x0845CD0C
	@ struct MapHeader
	semantic_map_header gMapLayout_MagmaHideout_2F_3R, MagmaHideout_2F_3R_MapEvents, 0x0821CDC5, 0, 0x01AE, 0x017C, 0xC6, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MirageTower_1F: @ 0x0845CD28
	@ struct MapHeader
	semantic_map_header gMapLayout_MirageTower_1F, MirageTower_1F_MapEvents, 0x0821CDC6, 0, 0x0196, 0x017D, 0xC7, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MirageTower_2F: @ 0x0845CD44
	@ struct MapHeader
	semantic_map_header gMapLayout_MirageTower_2F, MirageTower_2F_MapEvents, 0x0821CDD6, 0, 0x0196, 0x017E, 0xC7, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MirageTower_3F: @ 0x0845CD60
	@ struct MapHeader
	semantic_map_header gMapLayout_MirageTower_3F, MirageTower_3F_MapEvents, 0x0821CDF1, 0, 0x0196, 0x017F, 0xC7, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MirageTower_4F: @ 0x0845CD7C
	@ struct MapHeader
	semantic_map_header gMapLayout_MirageTower_4F, MirageTower_4F_MapEvents, 0x0821CE0C, 0, 0x0196, 0x0184, 0xC7, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_DesertUnderpass: @ 0x0845CD98
	@ struct MapHeader
	semantic_map_header gMapLayout_DesertUnderpass, DesertUnderpass_MapEvents, 0x0821CF6B, 0, 0x0196, 0x0185, 0xD1, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ArtisanCave_B1F: @ 0x0845CDB4
	@ struct MapHeader
	semantic_map_header gMapLayout_ArtisanCave_B1F, ArtisanCave_B1F_MapEvents, 0x0821CFD2, 0, 0x016E, 0x0190, 0xCA, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_ArtisanCave_1F: @ 0x0845CDD0
	@ struct MapHeader
	semantic_map_header gMapLayout_ArtisanCave_1F, ArtisanCave_1F_MapEvents, 0x0821CFDC, 0, 0x016E, 0x0191, 0xCA, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_Underwater_MarineCave: @ 0x0845CDEC
	@ struct MapHeader
	semantic_map_header gMapLayout_Underwater_MarineCave, Underwater_MarineCave_MapEvents, 0x0821CFDD, 0, 0x016E, 0x0196, 0xCC, 0x00, 0x0E, 0x05, 0x0D, 0x00

gMapHeader_MarineCave_Entrance: @ 0x0845CE08
	@ struct MapHeader
	semantic_map_header gMapLayout_MarineCave_Entrance, MarineCave_Entrance_MapEvents, 0x0821CFF5, 0, 0x016E, 0x0197, 0xCB, 0x00, 0x00, 0x04, 0x0E, 0x00

gMapHeader_MarineCave_End: @ 0x0845CE24
	@ struct MapHeader
	semantic_map_header gMapLayout_MarineCave_End, MarineCave_End_MapEvents, 0x0821D004, 0, 0x016E, 0x019D, 0xCB, 0x00, 0x06, 0x04, 0x0E, 0x00

gMapHeader_TerraCave_Entrance: @ 0x0845CE40
	@ struct MapHeader
	semantic_map_header gMapLayout_TerraCave_Entrance, TerraCave_Entrance_MapEvents, 0x0821D0CB, 0, 0x016E, 0x0198, 0xCD, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_TerraCave_End: @ 0x0845CE5C
	@ struct MapHeader
	semantic_map_header gMapLayout_TerraCave_End, TerraCave_End_MapEvents, 0x0821D0D5, 0, 0x016E, 0x0199, 0xCD, 0x00, 0x06, 0x04, 0x0E, 0x00

gMapHeader_AlteringCave: @ 0x0845CE78
	@ struct MapHeader
	semantic_map_header gMapLayout_AlteringCave, AlteringCave_MapEvents, 0x0821D19C, 0, 0x021F, 0x01A4, 0xD2, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_MeteorFalls_StevensCave: @ 0x0845CE94
	@ struct MapHeader
	semantic_map_header gMapLayout_MeteorFalls_StevensCave, MeteorFalls_StevensCave_MapEvents, 0x0821D1A6, 0, 0x0182, 0x01AF, 0x3F, 0x00, 0x00, 0x04, 0x0F, 0x00

gMapHeader_SecretBase_RedCave1: @ 0x0845CEB0
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_RedCave1, SecretBase_RedCave1_MapEvents, 0x0821D372, 0, 0x017E, 0x00C5, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_BrownCave1: @ 0x0845CECC
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_BrownCave1, SecretBase_BrownCave1_MapEvents, 0x0821D372, 0, 0x017E, 0x00C6, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_BlueCave1: @ 0x0845CEE8
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_BlueCave1, SecretBase_BlueCave1_MapEvents, 0x0821D372, 0, 0x017E, 0x00C7, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_YellowCave1: @ 0x0845CF04
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_YellowCave1, SecretBase_YellowCave1_MapEvents, 0x0821D372, 0, 0x017E, 0x00C8, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_Tree1: @ 0x0845CF20
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_Tree1, SecretBase_Tree1_MapEvents, 0x0821D372, 0, 0x017E, 0x00C9, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_Shrub1: @ 0x0845CF3C
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_Shrub1, SecretBase_Shrub1_MapEvents, 0x0821D372, 0, 0x017E, 0x00CA, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_RedCave2: @ 0x0845CF58
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_RedCave2, SecretBase_RedCave2_MapEvents, 0x0821D372, 0, 0x017E, 0x00CB, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_BrownCave2: @ 0x0845CF74
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_BrownCave2, SecretBase_BrownCave2_MapEvents, 0x0821D372, 0, 0x017E, 0x00CC, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_BlueCave2: @ 0x0845CF90
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_BlueCave2, SecretBase_BlueCave2_MapEvents, 0x0821D372, 0, 0x017E, 0x00CD, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_YellowCave2: @ 0x0845CFAC
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_YellowCave2, SecretBase_YellowCave2_MapEvents, 0x0821D372, 0, 0x017E, 0x00CE, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_Tree2: @ 0x0845CFC8
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_Tree2, SecretBase_Tree2_MapEvents, 0x0821D372, 0, 0x017E, 0x00CF, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_Shrub2: @ 0x0845CFE4
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_Shrub2, SecretBase_Shrub2_MapEvents, 0x0821D372, 0, 0x017E, 0x00D0, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_RedCave3: @ 0x0845D000
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_RedCave3, SecretBase_RedCave3_MapEvents, 0x0821D372, 0, 0x017E, 0x00D1, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_BrownCave3: @ 0x0845D01C
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_BrownCave3, SecretBase_BrownCave3_MapEvents, 0x0821D372, 0, 0x017E, 0x00D2, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_BlueCave3: @ 0x0845D038
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_BlueCave3, SecretBase_BlueCave3_MapEvents, 0x0821D372, 0, 0x017E, 0x00D3, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_YellowCave3: @ 0x0845D054
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_YellowCave3, SecretBase_YellowCave3_MapEvents, 0x0821D372, 0, 0x017E, 0x00D4, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_Tree3: @ 0x0845D070
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_Tree3, SecretBase_Tree3_MapEvents, 0x0821D372, 0, 0x017E, 0x00D5, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_Shrub3: @ 0x0845D08C
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_Shrub3, SecretBase_Shrub3_MapEvents, 0x0821D372, 0, 0x017E, 0x00D6, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_RedCave4: @ 0x0845D0A8
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_RedCave4, SecretBase_RedCave4_MapEvents, 0x0821D372, 0, 0x017E, 0x00D7, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_BrownCave4: @ 0x0845D0C4
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_BrownCave4, SecretBase_BrownCave4_MapEvents, 0x0821D372, 0, 0x017E, 0x00D8, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_BlueCave4: @ 0x0845D0E0
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_BlueCave4, SecretBase_BlueCave4_MapEvents, 0x0821D372, 0, 0x017E, 0x00D9, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_YellowCave4: @ 0x0845D0FC
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_YellowCave4, SecretBase_YellowCave4_MapEvents, 0x0821D372, 0, 0x017E, 0x00DA, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_Tree4: @ 0x0845D118
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_Tree4, SecretBase_Tree4_MapEvents, 0x0821D372, 0, 0x017E, 0x00DB, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_SecretBase_Shrub4: @ 0x0845D134
	@ struct MapHeader
	semantic_map_header gMapLayout_SecretBase_Shrub4, SecretBase_Shrub4_MapEvents, 0x0821D372, 0, 0x017E, 0x00DC, 0x56, 0x00, 0x00, 0x09, 0x0C, 0x08

gMapHeader_BattleColosseum_2P: @ 0x0845D150
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleColosseum_2P, BattleColosseum_2P_MapEvents, 0x0821D626, 0, 0x01A6, 0x00DD, 0x57, 0x00, 0x00, 0x08, 0x00, 0x08

gMapHeader_TradeCenter: @ 0x0845D16C
	@ struct MapHeader
	semantic_map_header gMapLayout_TradeCenter, TradeCenter_MapEvents, 0x0821D627, 0, 0x01A6, 0x00DE, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_RecordCorner: @ 0x0845D188
	@ struct MapHeader
	semantic_map_header gMapLayout_RecordCorner, RecordCorner_MapEvents, 0x0821D628, 0, 0x01A6, 0x00DF, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleColosseum_4P: @ 0x0845D1A4
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleColosseum_4P, BattleColosseum_4P_MapEvents, 0x0821D629, 0, 0x01A6, 0x00E0, 0x57, 0x00, 0x00, 0x08, 0x00, 0x08

gMapHeader_ContestHall: @ 0x0845D1C0
	@ struct MapHeader
	semantic_map_header gMapLayout_ContestHall, ContestHall_MapEvents, 0x0821D62A, 0, 0x01B8, 0x00E1, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_UnusedContestHall1: @ 0x0845D1DC
	@ struct MapHeader
	semantic_map_header gMapLayout_UnusedContestHall1, UnusedContestHall1_MapEvents, 0x0821D62A, 0, 0x0165, 0x00E2, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_UnusedContestHall2: @ 0x0845D1F8
	@ struct MapHeader
	semantic_map_header gMapLayout_UnusedContestHall2, UnusedContestHall2_MapEvents, 0x0821D62A, 0, 0x0165, 0x00E3, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_UnusedContestHall3: @ 0x0845D214
	@ struct MapHeader
	semantic_map_header gMapLayout_UnusedContestHall3, UnusedContestHall3_MapEvents, 0x0821D62A, 0, 0x0165, 0x00E4, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_UnusedContestHall4: @ 0x0845D230
	@ struct MapHeader
	semantic_map_header gMapLayout_UnusedContestHall4, UnusedContestHall4_MapEvents, 0x0821D62A, 0, 0x0165, 0x00E5, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_UnusedContestHall5: @ 0x0845D24C
	@ struct MapHeader
	semantic_map_header gMapLayout_UnusedContestHall5, UnusedContestHall5_MapEvents, 0x0821D62A, 0, 0x0165, 0x00E6, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_UnusedContestHall6: @ 0x0845D268
	@ struct MapHeader
	semantic_map_header gMapLayout_UnusedContestHall6, UnusedContestHall6_MapEvents, 0x0821D62A, 0, 0x0165, 0x00E7, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_ContestHallBeauty: @ 0x0845D284
	@ struct MapHeader
	semantic_map_header gMapLayout_ContestHallBeauty, ContestHallBeauty_MapEvents, 0x0821D62A, 0, 0x01B8, 0x00E8, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_ContestHallTough: @ 0x0845D2A0
	@ struct MapHeader
	semantic_map_header gMapLayout_ContestHallTough, ContestHallTough_MapEvents, 0x0821D62A, 0, 0x01B8, 0x00E9, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_ContestHallCool: @ 0x0845D2BC
	@ struct MapHeader
	semantic_map_header gMapLayout_ContestHallCool, ContestHallCool_MapEvents, 0x0821D62A, 0, 0x01B8, 0x00EA, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_ContestHallSmart: @ 0x0845D2D8
	@ struct MapHeader
	semantic_map_header gMapLayout_ContestHallSmart, ContestHallSmart_MapEvents, 0x0821D62A, 0, 0x01B8, 0x00EB, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_ContestHallCute: @ 0x0845D2F4
	@ struct MapHeader
	semantic_map_header gMapLayout_ContestHallCute, ContestHallCute_MapEvents, 0x0821D62A, 0, 0x01B8, 0x00EC, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_InsideOfTruck: @ 0x0845D310
	@ struct MapHeader
	semantic_map_header gMapLayout_InsideOfTruck, InsideOfTruck_MapEvents, 0x0821DD83, 0, 0xFFFF, 0x00ED, 0x54, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SSTidalCorridor: @ 0x0845D32C
	@ struct MapHeader
	semantic_map_header gMapLayout_SSTidalCorridor, SSTidalCorridor_MapEvents, 0x0821DE46, 0, 0x01AF, 0x0115, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SSTidalLowerDeck: @ 0x0845D348
	@ struct MapHeader
	semantic_map_header gMapLayout_SSTidalLowerDeck, SSTidalLowerDeck_MapEvents, 0x0821E3E1, 0, 0x01AF, 0x0116, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SSTidalRooms: @ 0x0845D364
	@ struct MapHeader
	semantic_map_header gMapLayout_SSTidalRooms, SSTidalRooms_MapEvents, 0x0821E4E8, 0, 0x01AF, 0x0117, 0x57, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattlePyramidSquare01: @ 0x0845D380
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare01, BattlePyramidSquare01_MapEvents, 0x0821E965, 0, 0xFFFF, 0x016A, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare02: @ 0x0845D39C
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare02, BattlePyramidSquare02_MapEvents, 0x0821E965, 0, 0xFFFF, 0x016B, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare03: @ 0x0845D3B8
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare03, BattlePyramidSquare03_MapEvents, 0x0821E965, 0, 0xFFFF, 0x016C, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare04: @ 0x0845D3D4
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare04, BattlePyramidSquare04_MapEvents, 0x0821E965, 0, 0xFFFF, 0x016D, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare05: @ 0x0845D3F0
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare05, BattlePyramidSquare05_MapEvents, 0x0821E965, 0, 0xFFFF, 0x016E, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare06: @ 0x0845D40C
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare06, BattlePyramidSquare06_MapEvents, 0x0821E965, 0, 0xFFFF, 0x016F, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare07: @ 0x0845D428
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare07, BattlePyramidSquare07_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0170, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare08: @ 0x0845D444
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare08, BattlePyramidSquare08_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0171, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare09: @ 0x0845D460
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare09, BattlePyramidSquare09_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0172, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare10: @ 0x0845D47C
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare10, BattlePyramidSquare10_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0173, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare11: @ 0x0845D498
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare11, BattlePyramidSquare11_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0174, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare12: @ 0x0845D4B4
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare12, BattlePyramidSquare12_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0175, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare13: @ 0x0845D4D0
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare13, BattlePyramidSquare13_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0176, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare14: @ 0x0845D4EC
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare14, BattlePyramidSquare14_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0177, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare15: @ 0x0845D508
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare15, BattlePyramidSquare15_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0178, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_BattlePyramidSquare16: @ 0x0845D524
	@ struct MapHeader
	semantic_map_header gMapLayout_BattlePyramidSquare16, BattlePyramidSquare16_MapEvents, 0x0821E965, 0, 0xFFFF, 0x0179, 0x57, 0x00, 0x00, 0x08, 0x00, 0x01

gMapHeader_UnionRoom: @ 0x0845D540
	@ struct MapHeader
	semantic_map_header gMapLayout_UnionRoom, UnionRoom_MapEvents, 0x0821E966, 0, 0x01A6, 0x0189, 0x57, 0x00, 0x00, 0x08, 0x00, 0x08

gMapHeader_SafariZone_Northwest: @ 0x0845D55C
	@ struct MapHeader
	semantic_map_header gMapLayout_SafariZone_Northwest, SafariZone_Northwest_MapEvents, 0x0821EA09, MapConnections_JP_0845F230, 0x01AC, 0x00EE, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_SafariZone_North: @ 0x0845D578
	@ struct MapHeader
	semantic_map_header gMapLayout_SafariZone_North, SafariZone_North_MapEvents, 0x0821EA13, MapConnections_JP_0845F25C, 0x01AC, 0x00EF, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_SafariZone_Southwest: @ 0x0845D594
	@ struct MapHeader
	semantic_map_header gMapLayout_SafariZone_Southwest, SafariZone_Southwest_MapEvents, 0x0821EA26, MapConnections_JP_0845F27C, 0x01AC, 0x00F0, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_SafariZone_South: @ 0x0845D5B0
	@ struct MapHeader
	semantic_map_header gMapLayout_SafariZone_South, SafariZone_South_MapEvents, 0x0821EA39, MapConnections_JP_0845F2A8, 0x01AC, 0x00F1, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_BattleFrontier_OutsideWest: @ 0x0845D5CC
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_OutsideWest, BattleFrontier_OutsideWest_MapEvents, 0x0821EBA1, MapConnections_JP_0845F2FC, 0x01C9, 0x0109, 0x3A, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_BattleFrontier_BattleTowerLobby: @ 0x0845D5E8
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleTowerLobby, BattleFrontier_BattleTowerLobby_MapEvents, 0x0821F6BC, 0, 0x01D1, 0x0108, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleTowerElevator: @ 0x0845D604
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425484, BattleFrontier_BattleTowerElevator_MapEvents, 0x08221AD4, 0, 0x01D1, 0x010A, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleTowerCorridor: @ 0x0845D620
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleTowerCorridor, BattleFrontier_BattleTowerCorridor_MapEvents, 0x08221BA3, 0, 0x01D1, 0x010B, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleTowerBattleRoom: @ 0x0845D63C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425624, BattleFrontier_BattleTowerBattleRoom_MapEvents, 0x08221C39, 0, 0x01D1, 0x010C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x08

gMapHeader_SouthernIsland_Exterior: @ 0x0845D658
	@ struct MapHeader
	semantic_map_header gMapLayout_SouthernIsland_Exterior, SouthernIsland_Exterior_MapEvents, 0x08222765, 0, 0x017D, 0x0122, 0x49, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_SouthernIsland_Interior: @ 0x0845D674
	@ struct MapHeader
	semantic_map_header gMapLayout_SouthernIsland_Interior, SouthernIsland_Interior_MapEvents, 0x082227E2, 0, 0x017D, 0x0123, 0x49, 0x00, 0x0B, 0x03, 0x0D, 0x00

gMapHeader_SafariZone_RestHouse: @ 0x0845D690
	@ struct MapHeader
	semantic_map_header gMapLayout_SafariZone_RestHouse, SafariZone_RestHouse_MapEvents, 0x08222983, 0, 0x01AC, 0x0149, 0x39, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_SafariZone_Northeast: @ 0x0845D6AC
	@ struct MapHeader
	semantic_map_header gMapLayout_SafariZone_Northeast, SafariZone_Northeast_MapEvents, 0x0822299F, MapConnections_JP_0845F2C8, 0x01AC, 0x018A, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_SafariZone_Southeast: @ 0x0845D6C8
	@ struct MapHeader
	semantic_map_header gMapLayout_SafariZone_Southeast, SafariZone_Southeast_MapEvents, 0x082229A0, MapConnections_JP_0845F2E8, 0x01AC, 0x018B, 0x39, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_BattleFrontier_OutsideEast: @ 0x0845D6E4
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_OutsideEast, BattleFrontier_OutsideEast_MapEvents, 0x082229A1, MapConnections_JP_0845F310, 0x01C9, 0x0159, 0x3A, 0x00, 0x00, 0x03, 0x0D, 0x00

gMapHeader_BattleFrontier_BattleTowerMultiPartnerRoom: @ 0x0845D700
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleTowerMultiPartnerRoom, BattleFrontier_BattleTowerMultiPartnerRoom_MapEvents, 0x08223475, 0, 0x01D1, 0x0186, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_BattleFrontier_BattleTowerMultiCorridor: @ 0x0845D71C
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleTowerMultiCorridor, BattleFrontier_BattleTowerMultiCorridor_MapEvents, 0x08226400, 0, 0x01D1, 0x0187, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleTowerMultiBattleRoom: @ 0x0845D738
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425624, BattleFrontier_BattleTowerMultiBattleRoom_MapEvents, 0x0822659E, 0, 0x01D1, 0x010C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x08

gMapHeader_BattleFrontier_BattleDomeLobby: @ 0x0845D754
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleDomeLobby, BattleFrontier_BattleDomeLobby_MapEvents, 0x08226D8C, 0, 0x01D9, 0x014C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleDomeCorridor: @ 0x0845D770
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleDomeCorridor, BattleFrontier_BattleDomeCorridor_MapEvents, 0x08227EC9, 0, 0x01D9, 0x014D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleDomePreBattleRoom: @ 0x0845D78C
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleDomePreBattleRoom, BattleFrontier_BattleDomePreBattleRoom_MapEvents, 0x08227FC4, 0, 0x01D3, 0x014E, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleDomeBattleRoom: @ 0x0845D7A8
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleDomeBattleRoom, BattleFrontier_BattleDomeBattleRoom_MapEvents, 0x08228828, 0, 0x01D3, 0x014F, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattlePalaceLobby: @ 0x0845D7C4
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePalaceLobby, BattleFrontier_BattlePalaceLobby_MapEvents, 0x08229D56, 0, 0x01CF, 0x0156, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattlePalaceCorridor: @ 0x0845D7E0
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePalaceCorridor, BattleFrontier_BattlePalaceCorridor_MapEvents, 0x0822AF25, 0, 0x01CF, 0x0157, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattlePalaceBattleRoom: @ 0x0845D7FC
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePalaceBattleRoom, BattleFrontier_BattlePalaceBattleRoom_MapEvents, 0x0822B155, 0, 0x01CF, 0x0158, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattlePyramidLobby: @ 0x0845D818
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePyramidLobby, BattleFrontier_BattlePyramidLobby_MapEvents, 0x0822BCDD, 0, 0x01CD, 0x0168, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattlePyramidFloor: @ 0x0845D834
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePyramidFloor, BattleFrontier_BattlePyramidFloor_MapEvents, 0x0822D4FC, 0, 0xFFFF, 0x0169, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_BattleFrontier_BattlePyramidTop: @ 0x0845D850
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePyramidTop, BattleFrontier_BattlePyramidTop_MapEvents, 0x0822E9A2, 0, 0xFFFF, 0x017A, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_BattleFrontier_BattleArenaLobby: @ 0x0845D86C
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleArenaLobby, BattleFrontier_BattleArenaLobby_MapEvents, 0x0822F1C9, 0, 0x01CA, 0x0162, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleArenaCorridor: @ 0x0845D888
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleArenaCorridor, BattleFrontier_BattleArenaCorridor_MapEvents, 0x08230081, 0, 0x01CA, 0x0163, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleArenaBattleRoom: @ 0x0845D8A4
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleArenaBattleRoom, BattleFrontier_BattleArenaBattleRoom_MapEvents, 0x08230137, 0, 0x01CA, 0x0164, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleFactoryLobby: @ 0x0845D8C0
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleFactoryLobby, BattleFrontier_BattleFactoryLobby_MapEvents, 0x08230DBB, 0, 0x01D5, 0x015A, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleFactoryPreBattleRoom: @ 0x0845D8DC
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleFactoryPreBattleRoom, BattleFrontier_BattleFactoryPreBattleRoom_MapEvents, 0x08231CA8, 0, 0x01D5, 0x015B, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattleFactoryBattleRoom: @ 0x0845D8F8
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattleFactoryBattleRoom, BattleFrontier_BattleFactoryBattleRoom_MapEvents, 0x082329C4, 0, 0x01D5, 0x015C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattlePikeLobby: @ 0x0845D914
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePikeLobby, BattleFrontier_BattlePikeLobby_MapEvents, 0x0823309D, 0, 0x01D4, 0x015D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_BattlePikeCorridor: @ 0x0845D930
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePikeCorridor, BattleFrontier_BattlePikeCorridor_MapEvents, 0x08233C01, 0, 0x01D4, 0x015E, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_BattleFrontier_BattlePikeThreePathRoom: @ 0x0845D94C
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePikeThreePathRoom, BattleFrontier_BattlePikeThreePathRoom_MapEvents, 0x08233CB9, 0, 0x01D4, 0x015F, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_BattleFrontier_BattlePikeRoomNormal: @ 0x0845D968
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePikeRoomNormal, BattleFrontier_BattlePikeRoomNormal_MapEvents, 0x082343A7, 0, 0x01D4, 0x0160, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_BattleFrontier_BattlePikeRoomFinal: @ 0x0845D984
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePikeRoomFinal, BattleFrontier_BattlePikeRoomFinal_MapEvents, 0x08235259, 0, 0x01D4, 0x0161, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_BattleFrontier_BattlePikeRoomWildMons: @ 0x0845D9A0
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_BattlePikeRoomWildMons, BattleFrontier_BattlePikeRoomWildMons_MapEvents, 0x082352D1, 0, 0x01D4, 0x0166, 0x3A, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_BattleFrontier_RankingHall: @ 0x0845D9BC
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_RankingHall, BattleFrontier_RankingHall_MapEvents, 0x08235360, 0, 0x0175, 0x018C, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge1: @ 0x0845D9D8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, BattleFrontier_Lounge1_MapEvents, 0x0823554B, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_ExchangeServiceCorner: @ 0x0845D9F4
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_ExchangeServiceCorner, BattleFrontier_ExchangeServiceCorner_MapEvents, 0x08235AFE, 0, 0x0180, 0x018E, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge2: @ 0x0845DA10
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844B208, BattleFrontier_Lounge2_MapEvents, 0x082369E6, 0, 0x0180, 0x018D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge3: @ 0x0845DA2C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, BattleFrontier_Lounge3_MapEvents, 0x082376F6, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge4: @ 0x0845DA48
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, BattleFrontier_Lounge4_MapEvents, 0x0823857A, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_ScottsHouse: @ 0x0845DA64
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_ScottsHouse, BattleFrontier_ScottsHouse_MapEvents, 0x0823861D, 0, 0x0180, 0x01AE, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge5: @ 0x0845DA80
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844B208, BattleFrontier_Lounge5_MapEvents, 0x08238FA7, 0, 0x0180, 0x018D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge6: @ 0x0845DA9C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, BattleFrontier_Lounge6_MapEvents, 0x082395B3, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge7: @ 0x0845DAB8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, BattleFrontier_Lounge7_MapEvents, 0x08239778, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_ReceptionGate: @ 0x0845DAD4
	@ struct MapHeader
	semantic_map_header gMapLayout_BattleFrontier_ReceptionGate, BattleFrontier_ReceptionGate_MapEvents, 0x0823A22C, 0, 0x0180, 0x018F, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge8: @ 0x0845DAF0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, BattleFrontier_Lounge8_MapEvents, 0x0823AFD2, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Lounge9: @ 0x0845DB0C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08458838, BattleFrontier_Lounge9_MapEvents, 0x0823B133, 0, 0x0180, 0x01AD, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_PokemonCenter_1F: @ 0x0845DB28
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF368, BattleFrontier_PokemonCenter_1F_MapEvents, 0x0823B134, 0, 0x0190, 0x003D, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_PokemonCenter_2F: @ 0x0845DB44
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF4A0, BattleFrontier_PokemonCenter_2F_MapEvents, 0x0823B223, 0, 0x0190, 0x003E, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_BattleFrontier_Mart: @ 0x0845DB60
	@ struct MapHeader
	semantic_map_header MapLayout_JP_083FF570, BattleFrontier_Mart_MapEvents, 0x0823B24A, 0, 0x0194, 0x003F, 0x3A, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_FarawayIsland_Entrance: @ 0x0845DB7C
	@ struct MapHeader
	semantic_map_header gMapLayout_FarawayIsland_Entrance, FarawayIsland_Entrance_MapEvents, 0x0823B35C, 0, 0x017D, 0x0192, 0xC9, 0x00, 0x00, 0x08, 0x0D, 0x00

gMapHeader_FarawayIsland_Interior: @ 0x0845DB98
	@ struct MapHeader
	semantic_map_header gMapLayout_FarawayIsland_Interior, FarawayIsland_Interior_MapEvents, 0x0823B3C8, 0, 0x017D, 0x0193, 0xC9, 0x00, 0x0B, 0x08, 0x0D, 0x00

gMapHeader_BirthIsland_Exterior: @ 0x0845DBB4
	@ struct MapHeader
	semantic_map_header gMapLayout_BirthIsland_Exterior, BirthIsland_Exterior_MapEvents, 0x0823B5CE, 0, 0xFFFF, 0x0194, 0xC8, 0x00, 0x00, 0x08, 0x0C, 0x00

gMapHeader_BirthIsland_Harbor: @ 0x0845DBD0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844E734, BirthIsland_Harbor_MapEvents, 0x0823B715, 0, 0xFFFF, 0x0195, 0xC8, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_TrainerHill_Entrance: @ 0x0845DBEC
	@ struct MapHeader
	semantic_map_header gMapLayout_TrainerHill_Entrance, TrainerHill_Entrance_MapEvents, 0x0823B765, 0, 0x0180, 0x019E, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_TrainerHill_1F: @ 0x0845DC08
	@ struct MapHeader
	semantic_map_header gMapLayout_TrainerHill_1F, TrainerHill_1F_MapEvents, 0x0823BF80, 0, 0x0180, 0x019F, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_TrainerHill_2F: @ 0x0845DC24
	@ struct MapHeader
	semantic_map_header gMapLayout_TrainerHill_2F, TrainerHill_2F_MapEvents, 0x0823BF90, 0, 0x0180, 0x01A0, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_TrainerHill_3F: @ 0x0845DC40
	@ struct MapHeader
	semantic_map_header gMapLayout_TrainerHill_3F, TrainerHill_3F_MapEvents, 0x0823BFA0, 0, 0x0180, 0x01A1, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_TrainerHill_4F: @ 0x0845DC5C
	@ struct MapHeader
	semantic_map_header gMapLayout_TrainerHill_4F, TrainerHill_4F_MapEvents, 0x0823BFAB, 0, 0x0180, 0x01A2, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_TrainerHill_Roof: @ 0x0845DC78
	@ struct MapHeader
	semantic_map_header gMapLayout_TrainerHill_Roof, TrainerHill_Roof_MapEvents, 0x0823BFB6, 0, 0x0180, 0x01A3, 0xD4, 0x00, 0x00, 0x08, 0x04, 0x00

gMapHeader_NavelRock_Exterior: @ 0x0845DC94
	@ struct MapHeader
	semantic_map_header gMapLayout_NavelRock_Exterior, NavelRock_Exterior_MapEvents, 0x0823C0C1, 0, 0x0221, 0x01A5, 0xD3, 0x00, 0x00, 0x08, 0x0D, 0x00

gMapHeader_NavelRock_Harbor: @ 0x0845DCB0
	@ struct MapHeader
	semantic_map_header MapLayout_JP_0844E734, NavelRock_Harbor_MapEvents, 0x0823C0CB, 0, 0x0221, 0x0195, 0xD3, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_NavelRock_Entrance: @ 0x0845DCCC
	@ struct MapHeader
	semantic_map_header gMapLayout_NavelRock_Entrance, NavelRock_Entrance_MapEvents, 0x0823C11B, 0, 0x021F, 0x01A6, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_B1F: @ 0x0845DCE8
	@ struct MapHeader
	semantic_map_header gMapLayout_NavelRock_B1F, NavelRock_B1F_MapEvents, 0x0823C11C, 0, 0x021F, 0x01AB, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Fork: @ 0x0845DD04
	@ struct MapHeader
	semantic_map_header gMapLayout_NavelRock_Fork, NavelRock_Fork_MapEvents, 0x0823C11D, 0, 0x021F, 0x01AC, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Up1: @ 0x0845DD20
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, NavelRock_Up1_MapEvents, 0x0823C11E, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Up2: @ 0x0845DD3C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, NavelRock_Up2_MapEvents, 0x0823C11F, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Up3: @ 0x0845DD58
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, NavelRock_Up3_MapEvents, 0x0823C120, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Up4: @ 0x0845DD74
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, NavelRock_Up4_MapEvents, 0x0823C121, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Top: @ 0x0845DD90
	@ struct MapHeader
	semantic_map_header gMapLayout_NavelRock_Top, NavelRock_Top_MapEvents, 0x0823C122, 0, 0x021F, 0x01A7, 0xD3, 0x00, 0x0B, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down01: @ 0x0845DDAC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, NavelRock_Down01_MapEvents, 0x0823C259, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down02: @ 0x0845DDC8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, NavelRock_Down02_MapEvents, 0x0823C25A, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down03: @ 0x0845DDE4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, NavelRock_Down03_MapEvents, 0x0823C25B, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down04: @ 0x0845DE00
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, NavelRock_Down04_MapEvents, 0x0823C25C, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down05: @ 0x0845DE1C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, NavelRock_Down05_MapEvents, 0x0823C25D, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down06: @ 0x0845DE38
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, NavelRock_Down06_MapEvents, 0x0823C25E, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down07: @ 0x0845DE54
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, NavelRock_Down07_MapEvents, 0x0823C25F, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down08: @ 0x0845DE70
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, NavelRock_Down08_MapEvents, 0x0823C260, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down09: @ 0x0845DE8C
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, NavelRock_Down09_MapEvents, 0x0823C261, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down10: @ 0x0845DEA8
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457304, NavelRock_Down10_MapEvents, 0x0823C262, 0, 0x021F, 0x01AA, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Down11: @ 0x0845DEC4
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08457254, NavelRock_Down11_MapEvents, 0x0823C263, 0, 0x021F, 0x01A9, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_NavelRock_Bottom: @ 0x0845DEE0
	@ struct MapHeader
	semantic_map_header gMapLayout_NavelRock_Bottom, NavelRock_Bottom_MapEvents, 0x0823C264, 0, 0x021F, 0x01A8, 0xD3, 0x00, 0x00, 0x04, 0x0C, 0x00

gMapHeader_TrainerHill_Elevator: @ 0x0845DEFC
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08425484, TrainerHill_Elevator_MapEvents, 0x0823C35E, 0, 0x0180, 0x010A, 0xD4, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route104_Prototype: @ 0x0845DF18
	@ struct MapHeader
	semantic_map_header gMapLayout_Route104_Prototype, Route104_Prototype_MapEvents, 0x0823C401, 0, 0x0191, 0x011F, 0x13, 0x00, 0x02, 0x03, 0x08, 0x00

gMapHeader_Route104_PrototypePrettyPetalFlowerShop: @ 0x0845DF34
	@ struct MapHeader
	semantic_map_header MapLayout_JP_08406310, Route104_PrototypePrettyPetalFlowerShop_MapEvents, 0x0823C402, 0, 0x0191, 0x0075, 0x13, 0x00, 0x00, 0x08, 0x08, 0x00

gMapHeader_Route109_SeashoreHouse: @ 0x0845DF50
	@ struct MapHeader
	semantic_map_header gMapLayout_Route109_SeashoreHouse, Route109_SeashoreHouse_MapEvents, 0x0823C403, 0, 0x01AB, 0x00F3, 0x18, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route110_TrickHouseEntrance: @ 0x0845DF6C
	@ struct MapHeader
	semantic_map_header gMapLayout_Route110_TrickHouseEntrance, Route110_TrickHouseEntrance_MapEvents, 0x0823C821, 0, 0x01C0, 0x00F4, 0x19, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route110_TrickHouseEnd: @ 0x0845DF88
	@ struct MapHeader
	semantic_map_header gMapLayout_Route110_TrickHouseEnd, Route110_TrickHouseEnd_MapEvents, 0x0823D6C0, 0, 0x01C0, 0x00F5, 0x19, 0x00, 0x00, 0x08, 0x00, 0x00

gMapHeader_Route110_TrickHouseCorridor: @ 0x0845DFA4
	@ struct MapHeader
	semantic_map_header gMapLayout_Route110_TrickHouseCorridor, Route110_TrickHouseCorridor_MapEvents, 0x0823DEC9, 0, 0x01C0, 0x00F6, 0x19, 0x00, 0x00, 0x08, 0x00, 0x00

MapHeader_JP_0845DFC0: @ 0x0845DFC0
	@ struct MapHeader
	.4byte MapLayout_JP_0841FCF8
	.4byte Route110_TrickHousePuzzle1_MapEvents
	.4byte gText_Rom_23DEA4 + 0x31
	.4byte 0
	.2byte 0x01C0, 0x00F7
	.byte 0x19, 0x00, 0x00, 0x08, 0x00, 0x00
	@ final flags/battleType bytes are shared with gText_Rom_45DFDA
