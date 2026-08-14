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
