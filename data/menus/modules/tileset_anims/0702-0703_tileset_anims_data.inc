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
