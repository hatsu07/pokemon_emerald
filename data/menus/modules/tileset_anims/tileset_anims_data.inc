	.globl gTilesetAnims_General_Flower
gTilesetAnims_General_Flower: @ 0x084E8E70
	.4byte gTilesetAnims_General_Flower_Frame0
	.4byte gTilesetAnims_General_Flower_Frame1
	.4byte gTilesetAnims_General_Flower_Frame0
	.4byte gTilesetAnims_General_Flower_Frame2

	.globl gTilesetAnims_General_Water_Frame0
gTilesetAnims_General_Water_Frame0: @ 0x084E8E80
	.incbin "build/graphics/tilesets/primary/general/anim/water/0.4bpp"

	.globl gTilesetAnims_General_Water_Frame1
gTilesetAnims_General_Water_Frame1: @ 0x084E9240
	.incbin "build/graphics/tilesets/primary/general/anim/water/1.4bpp"

	.globl gTilesetAnims_General_Water_Frame2
gTilesetAnims_General_Water_Frame2: @ 0x084E9600
	.incbin "build/graphics/tilesets/primary/general/anim/water/2.4bpp"

	.globl gTilesetAnims_General_Water_Frame3
gTilesetAnims_General_Water_Frame3: @ 0x084E99C0
	.incbin "build/graphics/tilesets/primary/general/anim/water/3.4bpp"

	@ Compatibility symbol used as the battle animation sprite-sheet base.
	.globl gBattleAnimData_084E99D0
	.set gBattleAnimData_084E99D0, gTilesetAnims_General_Water_Frame3 + 0x10

	.globl gTilesetAnims_General_Water_Frame4
gTilesetAnims_General_Water_Frame4: @ 0x084E9D80
	.incbin "build/graphics/tilesets/primary/general/anim/water/4.4bpp"

	.globl gTilesetAnims_General_Water_Frame5
gTilesetAnims_General_Water_Frame5: @ 0x084EA140
	.incbin "build/graphics/tilesets/primary/general/anim/water/5.4bpp"

	@ Compatibility symbol used as the battle animation sprite-palette base.
	.globl gBattleAnimData_084EA2D8
	.set gBattleAnimData_084EA2D8, gTilesetAnims_General_Water_Frame5 + 0x198

	.globl gTilesetAnims_General_Water_Frame6
gTilesetAnims_General_Water_Frame6: @ 0x084EA500
	.incbin "build/graphics/tilesets/primary/general/anim/water/6.4bpp"

	.globl gTilesetAnims_General_Water_Frame7
gTilesetAnims_General_Water_Frame7: @ 0x084EA8C0
	.incbin "build/graphics/tilesets/primary/general/anim/water/7.4bpp"

	.globl gTilesetAnims_General_Water
gTilesetAnims_General_Water: @ 0x084EAC80
	.4byte gTilesetAnims_General_Water_Frame0
	.4byte gTilesetAnims_General_Water_Frame1
	.4byte gTilesetAnims_General_Water_Frame2
	.4byte gTilesetAnims_General_Water_Frame3
	.4byte gTilesetAnims_General_Water_Frame4
	.4byte gTilesetAnims_General_Water_Frame5
	.4byte gTilesetAnims_General_Water_Frame6
	.4byte gTilesetAnims_General_Water_Frame7

	.globl gTilesetAnims_General_SandWaterEdge_Frame0
gTilesetAnims_General_SandWaterEdge_Frame0: @ 0x084EACA0
	.incbin "build/graphics/tilesets/primary/general/anim/sand_water_edge/0.4bpp"

	.globl gTilesetAnims_General_SandWaterEdge_Frame1
gTilesetAnims_General_SandWaterEdge_Frame1: @ 0x084EADE0
	.incbin "build/graphics/tilesets/primary/general/anim/sand_water_edge/1.4bpp"

	.globl gTilesetAnims_General_SandWaterEdge_Frame2
gTilesetAnims_General_SandWaterEdge_Frame2: @ 0x084EAF20
	.incbin "build/graphics/tilesets/primary/general/anim/sand_water_edge/2.4bpp"

	.globl gTilesetAnims_General_SandWaterEdge_Frame3
gTilesetAnims_General_SandWaterEdge_Frame3: @ 0x084EB060
	.incbin "build/graphics/tilesets/primary/general/anim/sand_water_edge/3.4bpp"

	.globl gTilesetAnims_General_SandWaterEdge_Frame4
gTilesetAnims_General_SandWaterEdge_Frame4: @ 0x084EB1A0
	.incbin "build/graphics/tilesets/primary/general/anim/sand_water_edge/4.4bpp"

	.globl gTilesetAnims_General_SandWaterEdge_Frame5
gTilesetAnims_General_SandWaterEdge_Frame5: @ 0x084EB2E0
	.incbin "build/graphics/tilesets/primary/general/anim/sand_water_edge/5.4bpp"

	.globl gTilesetAnims_General_SandWaterEdge_Frame6
gTilesetAnims_General_SandWaterEdge_Frame6: @ 0x084EB420
	.incbin "build/graphics/tilesets/primary/general/anim/sand_water_edge/6.4bpp"

	.globl gTilesetAnims_General_SandWaterEdge
gTilesetAnims_General_SandWaterEdge: @ 0x084EB560
	.4byte gTilesetAnims_General_SandWaterEdge_Frame0
	.4byte gTilesetAnims_General_SandWaterEdge_Frame1
	.4byte gTilesetAnims_General_SandWaterEdge_Frame2
	.4byte gTilesetAnims_General_SandWaterEdge_Frame3
	.4byte gTilesetAnims_General_SandWaterEdge_Frame4
	.4byte gTilesetAnims_General_SandWaterEdge_Frame5
	.4byte gTilesetAnims_General_SandWaterEdge_Frame6
	.4byte gTilesetAnims_General_SandWaterEdge_Frame0

	.globl gTilesetAnims_General_Waterfall_Frame0
gTilesetAnims_General_Waterfall_Frame0: @ 0x084EB580
	.incbin "build/graphics/tilesets/primary/general/anim/waterfall/0.4bpp"

	.globl gTilesetAnims_General_Waterfall_Frame1
gTilesetAnims_General_Waterfall_Frame1: @ 0x084EB640
	.incbin "build/graphics/tilesets/primary/general/anim/waterfall/1.4bpp"

	.globl gTilesetAnims_General_Waterfall_Frame2
gTilesetAnims_General_Waterfall_Frame2: @ 0x084EB700
	.incbin "build/graphics/tilesets/primary/general/anim/waterfall/2.4bpp"

	.globl gTilesetAnims_General_Waterfall_Frame3
gTilesetAnims_General_Waterfall_Frame3: @ 0x084EB7C0
	.incbin "build/graphics/tilesets/primary/general/anim/waterfall/3.4bpp"

	.globl gTilesetAnims_General_Waterfall
gTilesetAnims_General_Waterfall: @ 0x084EB880
	.4byte gTilesetAnims_General_Waterfall_Frame0
	.4byte gTilesetAnims_General_Waterfall_Frame1
	.4byte gTilesetAnims_General_Waterfall_Frame2
	.4byte gTilesetAnims_General_Waterfall_Frame3

	.globl gTilesetAnims_General_LandWaterEdge_Frame0
gTilesetAnims_General_LandWaterEdge_Frame0: @ 0x084EB890
	.incbin "build/graphics/tilesets/primary/general/anim/land_water_edge/0.4bpp"

	.globl gTilesetAnims_General_LandWaterEdge_Frame1
gTilesetAnims_General_LandWaterEdge_Frame1: @ 0x084EB9D0
	.incbin "build/graphics/tilesets/primary/general/anim/land_water_edge/1.4bpp"

	.globl gTilesetAnims_General_LandWaterEdge_Frame2
gTilesetAnims_General_LandWaterEdge_Frame2: @ 0x084EBB10
	.incbin "build/graphics/tilesets/primary/general/anim/land_water_edge/2.4bpp"

	.globl gTilesetAnims_General_LandWaterEdge_Frame3
gTilesetAnims_General_LandWaterEdge_Frame3: @ 0x084EBC50
	.incbin "build/graphics/tilesets/primary/general/anim/land_water_edge/3.4bpp"

	.globl gTilesetAnims_General_LandWaterEdge
gTilesetAnims_General_LandWaterEdge: @ 0x084EBD90
	.4byte gTilesetAnims_General_LandWaterEdge_Frame0
	.4byte gTilesetAnims_General_LandWaterEdge_Frame1
	.4byte gTilesetAnims_General_LandWaterEdge_Frame2
	.4byte gTilesetAnims_General_LandWaterEdge_Frame3

	.globl gTilesetAnims_Lavaridge_Steam_Frame0
gTilesetAnims_Lavaridge_Steam_Frame0: @ 0x084EBDA0
	.incbin "build/graphics/tilesets/secondary/lavaridge/anim/steam/0.4bpp"

	.globl gTilesetAnims_Lavaridge_Steam_Frame1
gTilesetAnims_Lavaridge_Steam_Frame1: @ 0x084EBE20
	.incbin "build/graphics/tilesets/secondary/lavaridge/anim/steam/1.4bpp"

	.globl gTilesetAnims_Lavaridge_Steam_Frame2
gTilesetAnims_Lavaridge_Steam_Frame2: @ 0x084EBEA0
	.incbin "build/graphics/tilesets/secondary/lavaridge/anim/steam/2.4bpp"

	.globl gTilesetAnims_Lavaridge_Steam_Frame3
gTilesetAnims_Lavaridge_Steam_Frame3: @ 0x084EBF20
	.incbin "build/graphics/tilesets/secondary/lavaridge/anim/steam/3.4bpp"

	.globl gTilesetAnims_Lavaridge_Steam
gTilesetAnims_Lavaridge_Steam: @ 0x084EBFA0
	.4byte gTilesetAnims_Lavaridge_Steam_Frame0
	.4byte gTilesetAnims_Lavaridge_Steam_Frame1
	.4byte gTilesetAnims_Lavaridge_Steam_Frame2
	.4byte gTilesetAnims_Lavaridge_Steam_Frame3

	.globl gTilesetAnims_Pacifidlog_LogBridges_Frame0
gTilesetAnims_Pacifidlog_LogBridges_Frame0: @ 0x084EBFB0
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/log_bridges/0.4bpp"

	.globl gTilesetAnims_Pacifidlog_LogBridges_Frame1
gTilesetAnims_Pacifidlog_LogBridges_Frame1: @ 0x084EC370
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/log_bridges/1.4bpp"

	.globl gTilesetAnims_Pacifidlog_LogBridges_Frame2
gTilesetAnims_Pacifidlog_LogBridges_Frame2: @ 0x084EC730
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/log_bridges/2.4bpp"

	.globl gTilesetAnims_Pacifidlog_LogBridges
gTilesetAnims_Pacifidlog_LogBridges: @ 0x084ECAF0
	.4byte gTilesetAnims_Pacifidlog_LogBridges_Frame0
	.4byte gTilesetAnims_Pacifidlog_LogBridges_Frame1
	.4byte gTilesetAnims_Pacifidlog_LogBridges_Frame2
	.4byte gTilesetAnims_Pacifidlog_LogBridges_Frame1

	.globl gTilesetAnims_Underwater_Seaweed_Frame0
gTilesetAnims_Underwater_Seaweed_Frame0: @ 0x084ECB00
	.incbin "build/graphics/tilesets/secondary/underwater/anim/seaweed/0.4bpp"

	.globl gTilesetAnims_Underwater_Seaweed_Frame1
gTilesetAnims_Underwater_Seaweed_Frame1: @ 0x084ECB80
	.incbin "build/graphics/tilesets/secondary/underwater/anim/seaweed/1.4bpp"

	.globl gTilesetAnims_Underwater_Seaweed_Frame2
gTilesetAnims_Underwater_Seaweed_Frame2: @ 0x084ECC00
	.incbin "build/graphics/tilesets/secondary/underwater/anim/seaweed/2.4bpp"

	.globl gTilesetAnims_Underwater_Seaweed_Frame3
gTilesetAnims_Underwater_Seaweed_Frame3: @ 0x084ECC80
	.incbin "build/graphics/tilesets/secondary/underwater/anim/seaweed/3.4bpp"

	.globl gTilesetAnims_Underwater_Seaweed
gTilesetAnims_Underwater_Seaweed: @ 0x084ECD00
	.4byte gTilesetAnims_Underwater_Seaweed_Frame0
	.4byte gTilesetAnims_Underwater_Seaweed_Frame1
	.4byte gTilesetAnims_Underwater_Seaweed_Frame2
	.4byte gTilesetAnims_Underwater_Seaweed_Frame3

	.globl gTilesetAnims_Pacifidlog_WaterCurrents_Frame0
gTilesetAnims_Pacifidlog_WaterCurrents_Frame0: @ 0x084ECD10
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/water_currents/0.4bpp"

	.globl gTilesetAnims_Pacifidlog_WaterCurrents_Frame1
gTilesetAnims_Pacifidlog_WaterCurrents_Frame1: @ 0x084ECE10
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/water_currents/1.4bpp"

	.globl gTilesetAnims_Pacifidlog_WaterCurrents_Frame2
gTilesetAnims_Pacifidlog_WaterCurrents_Frame2: @ 0x084ECF10
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/water_currents/2.4bpp"

	.globl gTilesetAnims_Pacifidlog_WaterCurrents_Frame3
gTilesetAnims_Pacifidlog_WaterCurrents_Frame3: @ 0x084ED010
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/water_currents/3.4bpp"

	.globl gTilesetAnims_Pacifidlog_WaterCurrents_Frame4
gTilesetAnims_Pacifidlog_WaterCurrents_Frame4: @ 0x084ED110
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/water_currents/4.4bpp"

	.globl gTilesetAnims_Pacifidlog_WaterCurrents_Frame5
gTilesetAnims_Pacifidlog_WaterCurrents_Frame5: @ 0x084ED210
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/water_currents/5.4bpp"

	.globl gTilesetAnims_Pacifidlog_WaterCurrents_Frame6
gTilesetAnims_Pacifidlog_WaterCurrents_Frame6: @ 0x084ED310
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/water_currents/6.4bpp"

	.globl gTilesetAnims_Pacifidlog_WaterCurrents_Frame7
gTilesetAnims_Pacifidlog_WaterCurrents_Frame7: @ 0x084ED410
	.incbin "build/graphics/tilesets/secondary/pacifidlog/anim/water_currents/7.4bpp"

	.globl gTilesetAnims_Pacifidlog_WaterCurrents
gTilesetAnims_Pacifidlog_WaterCurrents: @ 0x084ED510
	.4byte gTilesetAnims_Pacifidlog_WaterCurrents_Frame0
	.4byte gTilesetAnims_Pacifidlog_WaterCurrents_Frame1
	.4byte gTilesetAnims_Pacifidlog_WaterCurrents_Frame2
	.4byte gTilesetAnims_Pacifidlog_WaterCurrents_Frame3
	.4byte gTilesetAnims_Pacifidlog_WaterCurrents_Frame4
	.4byte gTilesetAnims_Pacifidlog_WaterCurrents_Frame5
	.4byte gTilesetAnims_Pacifidlog_WaterCurrents_Frame6
	.4byte gTilesetAnims_Pacifidlog_WaterCurrents_Frame7

	.globl gTilesetAnims_Mauville_Flower1_Frame0
gTilesetAnims_Mauville_Flower1_Frame0: @ 0x084ED530
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_1/0.4bpp"

	.globl gTilesetAnims_Mauville_Flower1_Frame1
gTilesetAnims_Mauville_Flower1_Frame1: @ 0x084ED5B0
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_1/1.4bpp"

	.globl gTilesetAnims_Mauville_Flower1_Frame2
gTilesetAnims_Mauville_Flower1_Frame2: @ 0x084ED630
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_1/2.4bpp"

	.globl gTilesetAnims_Mauville_Flower1_Frame3
gTilesetAnims_Mauville_Flower1_Frame3: @ 0x084ED6B0
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_1/3.4bpp"

	.globl gTilesetAnims_Mauville_Flower1_Frame4
gTilesetAnims_Mauville_Flower1_Frame4: @ 0x084ED730
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_1/4.4bpp"

	.globl gTilesetAnims_Mauville_Flower2_Frame0
gTilesetAnims_Mauville_Flower2_Frame0: @ 0x084ED7B0
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_2/0.4bpp"

	.globl gTilesetAnims_Mauville_Flower2_Frame1
gTilesetAnims_Mauville_Flower2_Frame1: @ 0x084ED830
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_2/1.4bpp"

	.globl gTilesetAnims_Mauville_Flower2_Frame2
gTilesetAnims_Mauville_Flower2_Frame2: @ 0x084ED8B0
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_2/2.4bpp"

	.globl gTilesetAnims_Mauville_Flower2_Frame3
gTilesetAnims_Mauville_Flower2_Frame3: @ 0x084ED930
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_2/3.4bpp"

	.globl gTilesetAnims_Mauville_Flower2_Frame4
gTilesetAnims_Mauville_Flower2_Frame4: @ 0x084ED9B0
	.incbin "build/graphics/tilesets/secondary/mauville/anim/flower_2/4.4bpp"

	.globl tileset_anims_space_1
tileset_anims_space_1: @ 0x084EDA30
	.space 0x20

	.globl gTilesetAnims_Mauville_Flower1_VDests
gTilesetAnims_Mauville_Flower1_VDests: @ 0x084EDA50
	.4byte 0x06004C00
	.4byte 0x06004C80
	.4byte 0x06004D00
	.4byte 0x06004D80
	.4byte 0x06004E00
	.4byte 0x06004E80
	.4byte 0x06004F00
	.4byte 0x06004F80

	.globl gTilesetAnims_Mauville_Flower2_VDests
gTilesetAnims_Mauville_Flower2_VDests: @ 0x084EDA70
	.4byte 0x06005000
	.4byte 0x06005080
	.4byte 0x06005100
	.4byte 0x06005180
	.4byte 0x06005200
	.4byte 0x06005280
	.4byte 0x06005300
	.4byte 0x06005380

	.globl gTilesetAnims_Mauville_Flower1
gTilesetAnims_Mauville_Flower1: @ 0x084EDA90
	.4byte gTilesetAnims_Mauville_Flower1_Frame0
	.4byte gTilesetAnims_Mauville_Flower1_Frame0
	.4byte gTilesetAnims_Mauville_Flower1_Frame1
	.4byte gTilesetAnims_Mauville_Flower1_Frame2
	.4byte gTilesetAnims_Mauville_Flower1_Frame3
	.4byte gTilesetAnims_Mauville_Flower1_Frame3
	.4byte gTilesetAnims_Mauville_Flower1_Frame3
	.4byte gTilesetAnims_Mauville_Flower1_Frame3
	.4byte gTilesetAnims_Mauville_Flower1_Frame3
	.4byte gTilesetAnims_Mauville_Flower1_Frame3
	.4byte gTilesetAnims_Mauville_Flower1_Frame2
	.4byte gTilesetAnims_Mauville_Flower1_Frame1

	.globl gTilesetAnims_Mauville_Flower2
gTilesetAnims_Mauville_Flower2: @ 0x084EDAC0
	.4byte gTilesetAnims_Mauville_Flower2_Frame0
	.4byte gTilesetAnims_Mauville_Flower2_Frame0
	.4byte gTilesetAnims_Mauville_Flower2_Frame1
	.4byte gTilesetAnims_Mauville_Flower2_Frame2
	.4byte gTilesetAnims_Mauville_Flower2_Frame3
	.4byte gTilesetAnims_Mauville_Flower2_Frame3
	.4byte gTilesetAnims_Mauville_Flower2_Frame3
	.4byte gTilesetAnims_Mauville_Flower2_Frame3
	.4byte gTilesetAnims_Mauville_Flower2_Frame3
	.4byte gTilesetAnims_Mauville_Flower2_Frame3
	.4byte gTilesetAnims_Mauville_Flower2_Frame2
	.4byte gTilesetAnims_Mauville_Flower2_Frame1

	.globl gTilesetAnims_Mauville_Flower1_B
gTilesetAnims_Mauville_Flower1_B: @ 0x084EDAF0
	.4byte gTilesetAnims_Mauville_Flower1_Frame0
	.4byte gTilesetAnims_Mauville_Flower1_Frame0
	.4byte gTilesetAnims_Mauville_Flower1_Frame4
	.4byte gTilesetAnims_Mauville_Flower1_Frame4

	.globl gTilesetAnims_Mauville_Flower2_B
gTilesetAnims_Mauville_Flower2_B: @ 0x084EDB00
	.4byte gTilesetAnims_Mauville_Flower2_Frame0
	.4byte gTilesetAnims_Mauville_Flower2_Frame0
	.4byte gTilesetAnims_Mauville_Flower2_Frame4
	.4byte gTilesetAnims_Mauville_Flower2_Frame4

	.globl gTilesetAnims_Rustboro_WindyWater_Frame0
gTilesetAnims_Rustboro_WindyWater_Frame0: @ 0x084EDB10
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/windy_water/0.4bpp"

	.globl gTilesetAnims_Rustboro_WindyWater_Frame1
gTilesetAnims_Rustboro_WindyWater_Frame1: @ 0x084EDB90
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/windy_water/1.4bpp"

	.globl gTilesetAnims_Rustboro_WindyWater_Frame2
gTilesetAnims_Rustboro_WindyWater_Frame2: @ 0x084EDC10
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/windy_water/2.4bpp"

	.globl gTilesetAnims_Rustboro_WindyWater_Frame3
gTilesetAnims_Rustboro_WindyWater_Frame3: @ 0x084EDC90
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/windy_water/3.4bpp"

	.globl gTilesetAnims_Rustboro_WindyWater_Frame4
gTilesetAnims_Rustboro_WindyWater_Frame4: @ 0x084EDD10
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/windy_water/4.4bpp"

	.globl gTilesetAnims_Rustboro_WindyWater_Frame5
gTilesetAnims_Rustboro_WindyWater_Frame5: @ 0x084EDD90
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/windy_water/5.4bpp"

	.globl gTilesetAnims_Rustboro_WindyWater_Frame6
gTilesetAnims_Rustboro_WindyWater_Frame6: @ 0x084EDE10
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/windy_water/6.4bpp"

	.globl gTilesetAnims_Rustboro_WindyWater_Frame7
gTilesetAnims_Rustboro_WindyWater_Frame7: @ 0x084EDE90
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/windy_water/7.4bpp"

	.globl gTilesetAnims_Rustboro_WindyWater_VDests
gTilesetAnims_Rustboro_WindyWater_VDests: @ 0x084EDF10
	.4byte 0x06005000
	.4byte 0x06005080
	.4byte 0x06005100
	.4byte 0x06005180
	.4byte 0x06005200
	.4byte 0x06005280
	.4byte 0x06005300
	.4byte 0x06005380

	.globl gTilesetAnims_Rustboro_WindyWater
gTilesetAnims_Rustboro_WindyWater: @ 0x084EDF30
	.4byte gTilesetAnims_Rustboro_WindyWater_Frame0
	.4byte gTilesetAnims_Rustboro_WindyWater_Frame1
	.4byte gTilesetAnims_Rustboro_WindyWater_Frame2
	.4byte gTilesetAnims_Rustboro_WindyWater_Frame3
	.4byte gTilesetAnims_Rustboro_WindyWater_Frame4
	.4byte gTilesetAnims_Rustboro_WindyWater_Frame5
	.4byte gTilesetAnims_Rustboro_WindyWater_Frame6
	.4byte gTilesetAnims_Rustboro_WindyWater_Frame7

	.globl gTilesetAnims_Rustboro_Fountain_Frame0
gTilesetAnims_Rustboro_Fountain_Frame0: @ 0x084EDF50
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/fountain/0.4bpp"

	.globl gTilesetAnims_Rustboro_Fountain_Frame1
gTilesetAnims_Rustboro_Fountain_Frame1: @ 0x084EDFD0
	.incbin "build/graphics/tilesets/secondary/rustboro/anim/fountain/1.4bpp"

	.globl tileset_anims_space_2
tileset_anims_space_2: @ 0x084EE050
	.space 0x20

	.globl gTilesetAnims_Rustboro_Fountain
gTilesetAnims_Rustboro_Fountain: @ 0x084EE070
	.4byte gTilesetAnims_Rustboro_Fountain_Frame0
	.4byte gTilesetAnims_Rustboro_Fountain_Frame1

	.globl gTilesetAnims_Lavaridge_Cave_Lava_Frame0
gTilesetAnims_Lavaridge_Cave_Lava_Frame0: @ 0x084EE078
	.incbin "build/graphics/tilesets/secondary/cave/anim/lava/0.4bpp"

	.globl gTilesetAnims_Lavaridge_Cave_Lava_Frame1
gTilesetAnims_Lavaridge_Cave_Lava_Frame1: @ 0x084EE0F8
	.incbin "build/graphics/tilesets/secondary/cave/anim/lava/1.4bpp"

	.globl gTilesetAnims_Lavaridge_Cave_Lava_Frame2
gTilesetAnims_Lavaridge_Cave_Lava_Frame2: @ 0x084EE178
	.incbin "build/graphics/tilesets/secondary/cave/anim/lava/2.4bpp"

	.globl gTilesetAnims_Lavaridge_Cave_Lava_Frame3
gTilesetAnims_Lavaridge_Cave_Lava_Frame3: @ 0x084EE1F8
	.incbin "build/graphics/tilesets/secondary/cave/anim/lava/3.4bpp"

	.globl gTilesetAnims_Lavaridge_Cave_Lava_Frame4
gTilesetAnims_Lavaridge_Cave_Lava_Frame4: @ 0x084EE278
	.incbin "build/graphics/tilesets/secondary/cave/anim/lava/4.4bpp"

	.globl gTilesetAnims_Lavaridge_Cave_Lava_Frame5
gTilesetAnims_Lavaridge_Cave_Lava_Frame5: @ 0x084EE2F8
	.incbin "build/graphics/tilesets/secondary/cave/anim/lava/5.4bpp"

	.globl gTilesetAnims_Lavaridge_Cave_Lava_Frame6
gTilesetAnims_Lavaridge_Cave_Lava_Frame6: @ 0x084EE378
	.incbin "build/graphics/tilesets/secondary/cave/anim/lava/6.4bpp"

	.globl gTilesetAnims_Lavaridge_Cave_Lava_Frame7
gTilesetAnims_Lavaridge_Cave_Lava_Frame7: @ 0x084EE3F8
	.incbin "build/graphics/tilesets/secondary/cave/anim/lava/7.4bpp"

	.globl tileset_anims_space_3
tileset_anims_space_3: @ 0x084EE478
	.space 0x20

	.globl gTilesetAnims_Lavaridge_Cave_Lava
gTilesetAnims_Lavaridge_Cave_Lava: @ 0x084EE498
	.4byte gTilesetAnims_Lavaridge_Cave_Lava_Frame0
	.4byte gTilesetAnims_Lavaridge_Cave_Lava_Frame1
	.4byte gTilesetAnims_Lavaridge_Cave_Lava_Frame2
	.4byte gTilesetAnims_Lavaridge_Cave_Lava_Frame3

	.globl gTilesetAnims_EverGrande_Flowers_Frame0
gTilesetAnims_EverGrande_Flowers_Frame0: @ 0x084EE4A8
	.incbin "build/graphics/tilesets/secondary/ever_grande/anim/flowers/0.4bpp"

	.globl gTilesetAnims_EverGrande_Flowers_Frame1
gTilesetAnims_EverGrande_Flowers_Frame1: @ 0x084EE528
	.incbin "build/graphics/tilesets/secondary/ever_grande/anim/flowers/1.4bpp"

	.globl gTilesetAnims_EverGrande_Flowers_Frame2
gTilesetAnims_EverGrande_Flowers_Frame2: @ 0x084EE5A8
	.incbin "build/graphics/tilesets/secondary/ever_grande/anim/flowers/2.4bpp"

	.globl gTilesetAnims_EverGrande_Flowers_Frame3
gTilesetAnims_EverGrande_Flowers_Frame3: @ 0x084EE628
	.incbin "build/graphics/tilesets/secondary/ever_grande/anim/flowers/3.4bpp"

	.globl gTilesetAnims_EverGrande_Flowers_Frame4
gTilesetAnims_EverGrande_Flowers_Frame4: @ 0x084EE6A8
	.incbin "build/graphics/tilesets/secondary/ever_grande/anim/flowers/4.4bpp"

	.globl gTilesetAnims_EverGrande_Flowers_Frame5
gTilesetAnims_EverGrande_Flowers_Frame5: @ 0x084EE728
	.incbin "build/graphics/tilesets/secondary/ever_grande/anim/flowers/5.4bpp"

	.globl gTilesetAnims_EverGrande_Flowers_Frame6
gTilesetAnims_EverGrande_Flowers_Frame6: @ 0x084EE7A8
	.incbin "build/graphics/tilesets/secondary/ever_grande/anim/flowers/6.4bpp"

	.globl gTilesetAnims_EverGrande_Flowers_Frame7
gTilesetAnims_EverGrande_Flowers_Frame7: @ 0x084EE828
	.incbin "build/graphics/tilesets/secondary/ever_grande/anim/flowers/7.4bpp"

	.globl tileset_anims_space_4
tileset_anims_space_4: @ 0x084EE8A8
	.space 0x20

	.globl gTilesetAnims_EverGrande_VDests
gTilesetAnims_EverGrande_VDests: @ 0x084EE8C8
	.4byte 0x06005C00
	.4byte 0x06005C80
	.4byte 0x06005D00
	.4byte 0x06005D80
	.4byte 0x06005E00
	.4byte 0x06005E80
	.4byte 0x06005F00
	.4byte 0x06005F80

	.globl gTilesetAnims_EverGrande_Flowers
gTilesetAnims_EverGrande_Flowers: @ 0x084EE8E8
	.4byte gTilesetAnims_EverGrande_Flowers_Frame0
	.4byte gTilesetAnims_EverGrande_Flowers_Frame1
	.4byte gTilesetAnims_EverGrande_Flowers_Frame2
	.4byte gTilesetAnims_EverGrande_Flowers_Frame3
	.4byte gTilesetAnims_EverGrande_Flowers_Frame4
	.4byte gTilesetAnims_EverGrande_Flowers_Frame5
	.4byte gTilesetAnims_EverGrande_Flowers_Frame6
	.4byte gTilesetAnims_EverGrande_Flowers_Frame7

	.globl gTilesetAnims_Dewford_Flag_Frame0
gTilesetAnims_Dewford_Flag_Frame0: @ 0x084EE908
	.incbin "build/graphics/tilesets/secondary/dewford/anim/flag/0.4bpp"

	.globl gTilesetAnims_Dewford_Flag_Frame1
gTilesetAnims_Dewford_Flag_Frame1: @ 0x084EE9C8
	.incbin "build/graphics/tilesets/secondary/dewford/anim/flag/1.4bpp"

	.globl gTilesetAnims_Dewford_Flag_Frame2
gTilesetAnims_Dewford_Flag_Frame2: @ 0x084EEA88
	.incbin "build/graphics/tilesets/secondary/dewford/anim/flag/2.4bpp"

	.globl gTilesetAnims_Dewford_Flag_Frame3
gTilesetAnims_Dewford_Flag_Frame3: @ 0x084EEB48
	.incbin "build/graphics/tilesets/secondary/dewford/anim/flag/3.4bpp"

	.globl gTilesetAnims_Dewford_Flag
gTilesetAnims_Dewford_Flag: @ 0x084EEC08
	.4byte gTilesetAnims_Dewford_Flag_Frame0
	.4byte gTilesetAnims_Dewford_Flag_Frame1
	.4byte gTilesetAnims_Dewford_Flag_Frame2
	.4byte gTilesetAnims_Dewford_Flag_Frame3

	.globl gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame0
gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame0: @ 0x084EEC18
	.incbin "build/graphics/tilesets/secondary/battle_frontier_outside_west/anim/flag/0.4bpp"

	.globl gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame1
gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame1: @ 0x084EECD8
	.incbin "build/graphics/tilesets/secondary/battle_frontier_outside_west/anim/flag/1.4bpp"

	.globl gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame2
gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame2: @ 0x084EED98
	.incbin "build/graphics/tilesets/secondary/battle_frontier_outside_west/anim/flag/2.4bpp"

	.globl gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame3
gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame3: @ 0x084EEE58
	.incbin "build/graphics/tilesets/secondary/battle_frontier_outside_west/anim/flag/3.4bpp"

	.globl gTilesetAnims_BattleFrontierOutsideWest_Flag
gTilesetAnims_BattleFrontierOutsideWest_Flag: @ 0x084EEF18
	.4byte gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame0
	.4byte gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame1
	.4byte gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame2
	.4byte gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame3

	.globl gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame0
gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame0: @ 0x084EEF28
	.incbin "build/graphics/tilesets/secondary/battle_frontier_outside_east/anim/flag/0.4bpp"

	.globl gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame1
gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame1: @ 0x084EEFE8
	.incbin "build/graphics/tilesets/secondary/battle_frontier_outside_east/anim/flag/1.4bpp"

	.globl gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame2
gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame2: @ 0x084EF0A8
	.incbin "build/graphics/tilesets/secondary/battle_frontier_outside_east/anim/flag/2.4bpp"

	.globl gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame3
gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame3: @ 0x084EF168
	.incbin "build/graphics/tilesets/secondary/battle_frontier_outside_east/anim/flag/3.4bpp"

	.globl gTilesetAnims_BattleFrontierOutsideEast_Flag
gTilesetAnims_BattleFrontierOutsideEast_Flag: @ 0x084EF228
	.4byte gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame0
	.4byte gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame1
	.4byte gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame2
	.4byte gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame3

	.globl gTilesetAnims_Slateport_Balloons_Frame0
gTilesetAnims_Slateport_Balloons_Frame0: @ 0x084EF238
	.incbin "build/graphics/tilesets/secondary/slateport/anim/balloons/0.4bpp"

	.globl gTilesetAnims_Slateport_Balloons_Frame1
gTilesetAnims_Slateport_Balloons_Frame1: @ 0x084EF2B8
	.incbin "build/graphics/tilesets/secondary/slateport/anim/balloons/1.4bpp"

	.globl gTilesetAnims_Slateport_Balloons_Frame2
gTilesetAnims_Slateport_Balloons_Frame2: @ 0x084EF338
	.incbin "build/graphics/tilesets/secondary/slateport/anim/balloons/2.4bpp"

	.globl gTilesetAnims_Slateport_Balloons_Frame3
gTilesetAnims_Slateport_Balloons_Frame3: @ 0x084EF3B8
	.incbin "build/graphics/tilesets/secondary/slateport/anim/balloons/3.4bpp"

	.globl gTilesetAnims_Slateport_Balloons
gTilesetAnims_Slateport_Balloons: @ 0x084EF438
	.4byte gTilesetAnims_Slateport_Balloons_Frame0
	.4byte gTilesetAnims_Slateport_Balloons_Frame1
	.4byte gTilesetAnims_Slateport_Balloons_Frame2
	.4byte gTilesetAnims_Slateport_Balloons_Frame3

	.globl gTilesetAnims_Building_TvTurnedOn_Frame0
gTilesetAnims_Building_TvTurnedOn_Frame0: @ 0x084EF448
	.incbin "build/graphics/tilesets/primary/building/anim/tv_turned_on/0.4bpp"

	.globl gTilesetAnims_Building_TvTurnedOn_Frame1
gTilesetAnims_Building_TvTurnedOn_Frame1: @ 0x084EF4C8
	.incbin "build/graphics/tilesets/primary/building/anim/tv_turned_on/1.4bpp"

	.globl gTilesetAnims_Building_TvTurnedOn
gTilesetAnims_Building_TvTurnedOn: @ 0x084EF548
	.4byte gTilesetAnims_Building_TvTurnedOn_Frame0
	.4byte gTilesetAnims_Building_TvTurnedOn_Frame1

	.globl gTilesetAnims_SootopolisGym_SideWaterfall_Frame0
gTilesetAnims_SootopolisGym_SideWaterfall_Frame0: @ 0x084EF550
	.incbin "build/graphics/tilesets/secondary/sootopolis_gym/anim/side_waterfall/0.4bpp"

	.globl gTilesetAnims_SootopolisGym_SideWaterfall_Frame1
gTilesetAnims_SootopolisGym_SideWaterfall_Frame1: @ 0x084EF6D0
	.incbin "build/graphics/tilesets/secondary/sootopolis_gym/anim/side_waterfall/1.4bpp"

	.globl gTilesetAnims_SootopolisGym_SideWaterfall_Frame2
gTilesetAnims_SootopolisGym_SideWaterfall_Frame2: @ 0x084EF850
	.incbin "build/graphics/tilesets/secondary/sootopolis_gym/anim/side_waterfall/2.4bpp"

	.globl gTilesetAnims_SootopolisGym_FrontWaterfall_Frame0
gTilesetAnims_SootopolisGym_FrontWaterfall_Frame0: @ 0x084EF9D0
	.incbin "build/graphics/tilesets/secondary/sootopolis_gym/anim/front_waterfall/0.4bpp"

	.globl gTilesetAnims_SootopolisGym_FrontWaterfall_Frame1
gTilesetAnims_SootopolisGym_FrontWaterfall_Frame1: @ 0x084EFC50
	.incbin "build/graphics/tilesets/secondary/sootopolis_gym/anim/front_waterfall/1.4bpp"

	.globl gTilesetAnims_SootopolisGym_FrontWaterfall_Frame2
gTilesetAnims_SootopolisGym_FrontWaterfall_Frame2: @ 0x084EFED0
	.incbin "build/graphics/tilesets/secondary/sootopolis_gym/anim/front_waterfall/2.4bpp"

	.globl gTilesetAnims_SootopolisGym_SideWaterfall
gTilesetAnims_SootopolisGym_SideWaterfall: @ 0x084F0150
	.4byte gTilesetAnims_SootopolisGym_SideWaterfall_Frame0
	.4byte gTilesetAnims_SootopolisGym_SideWaterfall_Frame1
	.4byte gTilesetAnims_SootopolisGym_SideWaterfall_Frame2

	.globl gTilesetAnims_SootopolisGym_FrontWaterfall
gTilesetAnims_SootopolisGym_FrontWaterfall: @ 0x084F015C
	.4byte gTilesetAnims_SootopolisGym_FrontWaterfall_Frame0
	.4byte gTilesetAnims_SootopolisGym_FrontWaterfall_Frame1
	.4byte gTilesetAnims_SootopolisGym_FrontWaterfall_Frame2

	.globl gTilesetAnims_EliteFour_FloorLight_Frame0
gTilesetAnims_EliteFour_FloorLight_Frame0: @ 0x084F0168
	.incbin "build/graphics/tilesets/secondary/elite_four/anim/floor_light/0.4bpp"

	.globl gTilesetAnims_EliteFour_FloorLight_Frame1
gTilesetAnims_EliteFour_FloorLight_Frame1: @ 0x084F01E8
	.incbin "build/graphics/tilesets/secondary/elite_four/anim/floor_light/1.4bpp"

	.globl gTilesetAnims_EliteFour_WallLights_Frame0
gTilesetAnims_EliteFour_WallLights_Frame0: @ 0x084F0268
	.incbin "build/graphics/tilesets/secondary/elite_four/anim/wall_lights/0.4bpp"

	.globl gTilesetAnims_EliteFour_WallLights_Frame1
gTilesetAnims_EliteFour_WallLights_Frame1: @ 0x084F0288
	.incbin "build/graphics/tilesets/secondary/elite_four/anim/wall_lights/1.4bpp"

	.globl gTilesetAnims_EliteFour_WallLights_Frame2
gTilesetAnims_EliteFour_WallLights_Frame2: @ 0x084F02A8
	.incbin "build/graphics/tilesets/secondary/elite_four/anim/wall_lights/2.4bpp"

	.globl gTilesetAnims_EliteFour_WallLights_Frame3
gTilesetAnims_EliteFour_WallLights_Frame3: @ 0x084F02C8
	.incbin "build/graphics/tilesets/secondary/elite_four/anim/wall_lights/3.4bpp"

	.globl tileset_anims_space_5
tileset_anims_space_5: @ 0x084F02E8
	.space 0x20

	.globl gTilesetAnims_EliteFour_WallLights
gTilesetAnims_EliteFour_WallLights: @ 0x084F0308
	.4byte gTilesetAnims_EliteFour_WallLights_Frame0
	.4byte gTilesetAnims_EliteFour_WallLights_Frame1
	.4byte gTilesetAnims_EliteFour_WallLights_Frame2
	.4byte gTilesetAnims_EliteFour_WallLights_Frame3

	.globl gTilesetAnims_EliteFour_FloorLight
gTilesetAnims_EliteFour_FloorLight: @ 0x084F0318
	.4byte gTilesetAnims_EliteFour_FloorLight_Frame0
	.4byte gTilesetAnims_EliteFour_FloorLight_Frame1

	.globl gTilesetAnims_MauvilleGym_ElectricGates_Frame0
gTilesetAnims_MauvilleGym_ElectricGates_Frame0: @ 0x084F0320
	.incbin "build/graphics/tilesets/secondary/mauville_gym/anim/electric_gates/0.4bpp"

	.globl gTilesetAnims_MauvilleGym_ElectricGates_Frame1
gTilesetAnims_MauvilleGym_ElectricGates_Frame1: @ 0x084F0520
	.incbin "build/graphics/tilesets/secondary/mauville_gym/anim/electric_gates/1.4bpp"

	.globl tileset_anims_space_6
tileset_anims_space_6: @ 0x084F0720
	.space 0x20

	.globl gTilesetAnims_MauvilleGym_ElectricGates
gTilesetAnims_MauvilleGym_ElectricGates: @ 0x084F0740
	.4byte gTilesetAnims_MauvilleGym_ElectricGates_Frame0
	.4byte gTilesetAnims_MauvilleGym_ElectricGates_Frame1

	.globl gTilesetAnims_BikeShop_BlinkingLights_Frame0
gTilesetAnims_BikeShop_BlinkingLights_Frame0: @ 0x084F0748
	.incbin "build/graphics/tilesets/secondary/bike_shop/anim/blinking_lights/0.4bpp"

	.globl gTilesetAnims_BikeShop_BlinkingLights_Frame1
gTilesetAnims_BikeShop_BlinkingLights_Frame1: @ 0x084F0868
	.incbin "build/graphics/tilesets/secondary/bike_shop/anim/blinking_lights/1.4bpp"

	.globl tileset_anims_space_7
tileset_anims_space_7: @ 0x084F0988
	.space 0x20

	@ Compatibility aliases retained for existing references.
	.globl gMauvilleGymElectricGatesTilesetAnimFrame0
	.set gMauvilleGymElectricGatesTilesetAnimFrame0, gTilesetAnims_MauvilleGym_ElectricGates_Frame0
	.globl gMauvilleGymElectricGatesTilesetAnimFrame1
	.set gMauvilleGymElectricGatesTilesetAnimFrame1, gTilesetAnims_MauvilleGym_ElectricGates_Frame1
	.globl gMauvilleGymElectricGatesTilesetAnimFrameTable
	.set gMauvilleGymElectricGatesTilesetAnimFrameTable, gTilesetAnims_MauvilleGym_ElectricGates
	.globl gBikeShopBlinkingLightsTilesetAnimFrame0
	.set gBikeShopBlinkingLightsTilesetAnimFrame0, gTilesetAnims_BikeShop_BlinkingLights_Frame0
	.globl gBikeShopBlinkingLightsTilesetAnimFrame1
	.set gBikeShopBlinkingLightsTilesetAnimFrame1, gTilesetAnims_BikeShop_BlinkingLights_Frame1
	@ Bike Shop blinking lights animation pointer table.
	.globl gTilesetAnims_BikeShop_BlinkingLights
gTilesetAnims_BikeShop_BlinkingLights: @ 0x084F09A8
	.4byte gTilesetAnims_BikeShop_BlinkingLights_Frame0
	.4byte gTilesetAnims_BikeShop_BlinkingLights_Frame1

	@ Compatibility alias retained for existing references.
	.globl gBikeShopBlinkingLightsTilesetAnimFrameTable
	.set gBikeShopBlinkingLightsTilesetAnimFrameTable, gTilesetAnims_BikeShop_BlinkingLights
	.globl gSootopolisStormyWaterTilesetAnimFrame0
gSootopolisStormyWaterTilesetAnimFrame0: @ 0x084F09B0
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/0_kyogre.4bpp"
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/0_groudon.4bpp"

	.globl gSootopolisStormyWaterTilesetAnimFrame1
gSootopolisStormyWaterTilesetAnimFrame1: @ 0x084F15B0
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/1_kyogre.4bpp"
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/1_groudon.4bpp"

	.globl gSootopolisStormyWaterTilesetAnimFrame2
gSootopolisStormyWaterTilesetAnimFrame2: @ 0x084F21B0
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/2_kyogre.4bpp"
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/2_groudon.4bpp"

	.globl gSootopolisStormyWaterTilesetAnimFrame3
gSootopolisStormyWaterTilesetAnimFrame3: @ 0x084F2DB0
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/3_kyogre.4bpp"
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/3_groudon.4bpp"

	.globl gSootopolisStormyWaterTilesetAnimFrame4
gSootopolisStormyWaterTilesetAnimFrame4: @ 0x084F39B0
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/4_kyogre.4bpp"
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/4_groudon.4bpp"

	.globl gSootopolisStormyWaterTilesetAnimFrame5
gSootopolisStormyWaterTilesetAnimFrame5: @ 0x084F45B0
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/5_kyogre.4bpp"
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/5_groudon.4bpp"

	.globl gSootopolisStormyWaterTilesetAnimFrame6
gSootopolisStormyWaterTilesetAnimFrame6: @ 0x084F51B0
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/6_kyogre.4bpp"
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/6_groudon.4bpp"

	.globl gSootopolisStormyWaterTilesetAnimFrame7
gSootopolisStormyWaterTilesetAnimFrame7: @ 0x084F5DB0
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/7_kyogre.4bpp"
	.incbin "build/graphics/tilesets/secondary/sootopolis/anim/stormy_water/7_groudon.4bpp"

	.globl gSootopolisStormyWaterTilesetAnimPadding
gSootopolisStormyWaterTilesetAnimPadding: @ 0x084F69B0
	.space 0x20

	.globl gUnusedTilesetAnim1Frame0
gUnusedTilesetAnim1Frame0: @ 0x084F69D0
	.incbin "build/graphics/tilesets/secondary/unused_1/0.4bpp"

	.globl gUnusedTilesetAnim1Frame1
gUnusedTilesetAnim1Frame1: @ 0x084F71D0
	.incbin "build/graphics/tilesets/secondary/unused_1/1.4bpp"

	.globl gUnusedTilesetAnim1Frame2
gUnusedTilesetAnim1Frame2: @ 0x084F79D0
	.incbin "build/graphics/tilesets/secondary/unused_1/2.4bpp"

	.globl gUnusedTilesetAnim1Frame3
gUnusedTilesetAnim1Frame3: @ 0x084F81D0
	.incbin "build/graphics/tilesets/secondary/unused_1/3.4bpp"
	.include "asm/macros/semantic_raw_structs.inc"

	@ pret/pokeemerald-jp direct xref for 0x084F89D0: tileset_anims.s: QueueAnimTiles_Sootopolis_StormyWater
	.globl gTilesetAnims_Sootopolis_StormyWater
gTilesetAnims_Sootopolis_StormyWater: @ 0x084F89D0
	.4byte gSootopolisStormyWaterTilesetAnimFrame0
	.4byte gSootopolisStormyWaterTilesetAnimFrame1
	.4byte gSootopolisStormyWaterTilesetAnimFrame2
	.4byte gSootopolisStormyWaterTilesetAnimFrame3
	.4byte gSootopolisStormyWaterTilesetAnimFrame4
	.4byte gSootopolisStormyWaterTilesetAnimFrame5
	.4byte gSootopolisStormyWaterTilesetAnimFrame6
	.4byte gSootopolisStormyWaterTilesetAnimFrame7

	@ Compatibility alias retained for the pre-semantic JP symbol.
	.globl gSootopolisStormyWaterTilesetAnimFrameTable
	.set gSootopolisStormyWaterTilesetAnimFrameTable, gTilesetAnims_Sootopolis_StormyWater

	.globl gTilesetAnims_BattlePyramid_Torch_Frame0
gTilesetAnims_BattlePyramid_Torch_Frame0: @ 0x084F89F0
	.incbin "build/graphics/tilesets/secondary/battle_pyramid/anim/torch/0.4bpp"

	.globl gTilesetAnims_BattlePyramid_Torch_Frame1
gTilesetAnims_BattlePyramid_Torch_Frame1: @ 0x084F8AF0
	.incbin "build/graphics/tilesets/secondary/battle_pyramid/anim/torch/1.4bpp"

	.globl gTilesetAnims_BattlePyramid_Torch_Frame2
gTilesetAnims_BattlePyramid_Torch_Frame2: @ 0x084F8BF0
	.incbin "build/graphics/tilesets/secondary/battle_pyramid/anim/torch/2.4bpp"

	.globl tileset_anims_space_9
tileset_anims_space_9: @ 0x084F8CF0
	.space 0x20

	.globl gTilesetAnims_BattlePyramid_StatueShadow_Frame0
gTilesetAnims_BattlePyramid_StatueShadow_Frame0: @ 0x084F8D10
	.incbin "build/graphics/tilesets/secondary/battle_pyramid/anim/statue_shadow/0.4bpp"

	.globl gTilesetAnims_BattlePyramid_StatueShadow_Frame1
gTilesetAnims_BattlePyramid_StatueShadow_Frame1: @ 0x084F8E10
	.incbin "build/graphics/tilesets/secondary/battle_pyramid/anim/statue_shadow/1.4bpp"

	.globl gTilesetAnims_BattlePyramid_StatueShadow_Frame2
gTilesetAnims_BattlePyramid_StatueShadow_Frame2: @ 0x084F8F10
	.incbin "build/graphics/tilesets/secondary/battle_pyramid/anim/statue_shadow/2.4bpp"

	.globl tileset_anims_space_10
tileset_anims_space_10: @ 0x084F9010
	.space 0x3D00

	.globl gTilesetAnims_Unused2_Frame0
gTilesetAnims_Unused2_Frame0: @ 0x084FCD10
	.incbin "build/graphics/tilesets/secondary/unused_2/0.4bpp"

	.globl tileset_anims_space_11
tileset_anims_space_11: @ 0x084FCD50
	.space 0x1C0

	.globl gTilesetAnims_Unused2_Frame1
gTilesetAnims_Unused2_Frame1: @ 0x084FCF10
	.incbin "build/graphics/tilesets/secondary/unused_2/1.4bpp"

	.globl gTilesetAnims_BattlePyramid_Torch
gTilesetAnims_BattlePyramid_Torch: @ 0x084FCF70
	.4byte gTilesetAnims_BattlePyramid_Torch_Frame0
	.4byte gTilesetAnims_BattlePyramid_Torch_Frame1
	.4byte gTilesetAnims_BattlePyramid_Torch_Frame2

	.globl gTilesetAnims_BattlePyramid_StatueShadow
gTilesetAnims_BattlePyramid_StatueShadow: @ 0x084FCF7C
	.4byte gTilesetAnims_BattlePyramid_StatueShadow_Frame0
	.4byte gTilesetAnims_BattlePyramid_StatueShadow_Frame1
	.4byte gTilesetAnims_BattlePyramid_StatueShadow_Frame2

	@ Battle Dome floor-light palettes live in a later graphics region.
	@ Upstream semantic aliases; no bytes are emitted here.
	.globl gTilesetAnims_BattleDomePals0_0
	.set gTilesetAnims_BattleDomePals0_0, 0x08D85624
	.globl gTilesetAnims_BattleDomePals0_1
	.set gTilesetAnims_BattleDomePals0_1, 0x08D85644
	.globl gTilesetAnims_BattleDomePals0_2
	.set gTilesetAnims_BattleDomePals0_2, 0x08D85664
	.globl gTilesetAnims_BattleDomePals0_3
	.set gTilesetAnims_BattleDomePals0_3, 0x08D85684

	.globl gTilesetAnims_BattleDomeFloorLightPals
gTilesetAnims_BattleDomeFloorLightPals: @ 0x084FCF88
	.4byte gTilesetAnims_BattleDomePals0_0
	.4byte gTilesetAnims_BattleDomePals0_1
	.4byte gTilesetAnims_BattleDomePals0_2
	.4byte gTilesetAnims_BattleDomePals0_3

	@ Dummy template used when resetting the unused PaletteStruct system.
