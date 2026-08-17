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
	.globl sDummyPaletteStructTemplate
sDummyPaletteStructTemplate: @ 0x084FCF98
	.2byte TAG_NONE @ id
	.2byte 0        @ alignment padding before src
	.4byte 0        @ src
	.2byte 0        @ pst_field_8_0 / unused / size
	.byte 0          @ time1
	.byte 0x20       @ srcCount = 0, state = 1
	.byte 0          @ time2
	.space 3         @ struct tail padding

	@ Rounded-down grayscale values indexed by 5-bit luminance.
	.globl sRoundedDownGrayscaleMap
sRoundedDownGrayscaleMap: @ 0x084FCFA8
	.byte 0, 0, 0, 0, 0
	.byte 5, 5, 5, 5, 5
	.byte 11, 11, 11, 11, 11
	.byte 16, 16, 16, 16, 16
	.byte 21, 21, 21, 21, 21
	.byte 27, 27, 27, 27, 27
	.byte 31, 31

	@ struct Fanfare { u16 songNum; u16 duration; }
	@ Song constants are intentionally comments here: this data assembler
	@ context does not import the MUS_* definitions.
	.globl sFanfares
sFanfares: @ 0x084FCFC8
	.2byte 0x016F, 80 @ MUS_LEVEL_UP
	.2byte 0x0172, 160 @ MUS_OBTAIN_ITEM
	.2byte 0x0173, 220 @ MUS_EVOLVED
	.2byte 0x0174, 220 @ MUS_OBTAIN_TMHM
	.2byte 0x0170, 160 @ MUS_HEAL
	.2byte 0x0171, 340 @ MUS_OBTAIN_BADGE
	.2byte 0x017A, 180 @ MUS_MOVE_DELETED
	.2byte 0x0183, 120 @ MUS_OBTAIN_BERRY
	.2byte 0x0184, 710 @ MUS_AWAKEN_LEGEND
	.2byte 0x0185, 250 @ MUS_SLOTS_JACKPOT
	.2byte 0x0186, 150 @ MUS_SLOTS_WIN
	.2byte 0x0187, 160 @ MUS_TOO_BAD
	.2byte 0x0226, 450 @ MUS_RG_POKE_FLUTE
	.2byte 0x0212, 170 @ MUS_RG_OBTAIN_KEY_ITEM
	.2byte 0x0211, 196 @ MUS_RG_DEX_RATING
	.2byte 0x01CB, 313 @ MUS_OBTAIN_B_POINTS
	.2byte 0x01D2, 318 @ MUS_OBTAIN_SYMBOL
	.2byte 0x01CC, 135 @ MUS_REGISTER_MATCH_CALL

	@ Common 4bpp OAM presets: priority 2, palette 0, tile 0.
	.macro jp_common_oam_preset name:req, attr0:req, attr1:req
	.globl \name
\name:
	.2byte \attr0, \attr1, 0x0800, 0
	.endm

	@ AffineOff / ObjNormal
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_8x8, 0x0000, 0x0000 @ 0x084FD010
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_16x16, 0x0000, 0x4000 @ 0x084FD018
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_32x32, 0x0000, 0x8000 @ 0x084FD020
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_64x64, 0x0000, 0xC000 @ 0x084FD028
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_16x8, 0x4000, 0x0000 @ 0x084FD030
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_32x8, 0x4000, 0x4000 @ 0x084FD038
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_32x16, 0x4000, 0x8000 @ 0x084FD040
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_64x32, 0x4000, 0xC000 @ 0x084FD048
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_8x16, 0x8000, 0x0000 @ 0x084FD050
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_8x32, 0x8000, 0x4000 @ 0x084FD058
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_16x32, 0x8000, 0x8000 @ 0x084FD060
	jp_common_oam_preset gOamData_AffineOff_ObjNormal_32x64, 0x8000, 0xC000 @ 0x084FD068
	@ AffineNormal / ObjNormal
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_8x8, 0x0100, 0x0000 @ 0x084FD070
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_16x16, 0x0100, 0x4000 @ 0x084FD078
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_32x32, 0x0100, 0x8000 @ 0x084FD080
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_64x64, 0x0100, 0xC000 @ 0x084FD088
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_16x8, 0x4100, 0x0000 @ 0x084FD090
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_32x8, 0x4100, 0x4000 @ 0x084FD098
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_32x16, 0x4100, 0x8000 @ 0x084FD0A0
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_64x32, 0x4100, 0xC000 @ 0x084FD0A8
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_8x16, 0x8100, 0x0000 @ 0x084FD0B0
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_8x32, 0x8100, 0x4000 @ 0x084FD0B8
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_16x32, 0x8100, 0x8000 @ 0x084FD0C0
	jp_common_oam_preset gOamData_AffineNormal_ObjNormal_32x64, 0x8100, 0xC000 @ 0x084FD0C8
	@ AffineDouble / ObjNormal
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_8x8, 0x0300, 0x0000 @ 0x084FD0D0
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_16x16, 0x0300, 0x4000 @ 0x084FD0D8
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_32x32, 0x0300, 0x8000 @ 0x084FD0E0
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_64x64, 0x0300, 0xC000 @ 0x084FD0E8
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_16x8, 0x4300, 0x0000 @ 0x084FD0F0
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_32x8, 0x4300, 0x4000 @ 0x084FD0F8
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_32x16, 0x4300, 0x8000 @ 0x084FD100
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_64x32, 0x4300, 0xC000 @ 0x084FD108
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_8x16, 0x8300, 0x0000 @ 0x084FD110
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_8x32, 0x8300, 0x4000 @ 0x084FD118
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_16x32, 0x8300, 0x8000 @ 0x084FD120
	jp_common_oam_preset gOamData_AffineDouble_ObjNormal_32x64, 0x8300, 0xC000 @ 0x084FD128
	@ AffineOff / ObjBlend
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_8x8, 0x0400, 0x0000 @ 0x084FD130
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_16x16, 0x0400, 0x4000 @ 0x084FD138
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_32x32, 0x0400, 0x8000 @ 0x084FD140
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_64x64, 0x0400, 0xC000 @ 0x084FD148
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_16x8, 0x4400, 0x0000 @ 0x084FD150
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_32x8, 0x4400, 0x4000 @ 0x084FD158
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_32x16, 0x4400, 0x8000 @ 0x084FD160
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_64x32, 0x4400, 0xC000 @ 0x084FD168
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_8x16, 0x8400, 0x0000 @ 0x084FD170
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_8x32, 0x8400, 0x4000 @ 0x084FD178
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_16x32, 0x8400, 0x8000 @ 0x084FD180
	jp_common_oam_preset gOamData_AffineOff_ObjBlend_32x64, 0x8400, 0xC000 @ 0x084FD188
	@ AffineNormal / ObjBlend
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_8x8, 0x0500, 0x0000 @ 0x084FD190
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_16x16, 0x0500, 0x4000 @ 0x084FD198
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_32x32, 0x0500, 0x8000 @ 0x084FD1A0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_64x64, 0x0500, 0xC000 @ 0x084FD1A8
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_16x8, 0x4500, 0x0000 @ 0x084FD1B0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_32x8, 0x4500, 0x4000 @ 0x084FD1B8
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_32x16, 0x4500, 0x8000 @ 0x084FD1C0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_64x32, 0x4500, 0xC000 @ 0x084FD1C8
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_8x16, 0x8500, 0x0000 @ 0x084FD1D0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_8x32, 0x8500, 0x4000 @ 0x084FD1D8
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_16x32, 0x8500, 0x8000 @ 0x084FD1E0
	jp_common_oam_preset gOamData_AffineNormal_ObjBlend_32x64, 0x8500, 0xC000 @ 0x084FD1E8
	@ AffineDouble / ObjBlend
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_8x8, 0x0700, 0x0000 @ 0x084FD1F0
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_16x16, 0x0700, 0x4000 @ 0x084FD1F8
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_32x32, 0x0700, 0x8000 @ 0x084FD200
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_64x64, 0x0700, 0xC000 @ 0x084FD208
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_16x8, 0x4700, 0x0000 @ 0x084FD210
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_32x8, 0x4700, 0x4000 @ 0x084FD218
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_32x16, 0x4700, 0x8000 @ 0x084FD220
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_64x32, 0x4700, 0xC000 @ 0x084FD228
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_8x16, 0x8700, 0x0000 @ 0x084FD230
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_8x32, 0x8700, 0x4000 @ 0x084FD238
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_16x32, 0x8700, 0x8000 @ 0x084FD240
	jp_common_oam_preset gOamData_AffineDouble_ObjBlend_32x64, 0x8700, 0xC000 @ 0x084FD248
	.purgem jp_common_oam_preset

	@ ------------------------------------------------------------------
	@ Battle animation compressed asset symbols
	@ Pinned semantic names from pret/pokeemerald; absolute aliases only.
	@ The underlying compressed assets remain in their existing ROM region.
	@ ------------------------------------------------------------------
	.globl gBattleAnimSpriteGfx_Bubble
	.globl gBattleAnimSpriteGfx_Bone
	.globl gBattleAnimSpriteGfx_AirWave
	.globl gBattleAnimSpriteGfx_Orb
	.globl gBattleAnimSpriteGfx_Sword
	.globl gBattleAnimSpriteGfx_Seed
	.globl gBattleAnimSpritePal_Orb
	.globl gBattleAnimSpritePal_Sword
	.globl gBattleAnimSpritePal_Seed
	.globl gBattleAnimSpriteGfx_Needle
	.globl gBattleAnimSpritePal_Needle
	.globl gBattleAnimSpriteGfx_Explosion6
	.globl gBattleAnimSpriteGfx_PinkOrb
	.globl gBattleAnimSpritePal_PinkOrb
	.globl gBattleAnimSpriteGfx_IceCube
	.globl gBattleAnimSpriteGfx_Gust
	.globl gBattleAnimSpriteGfx_Spark2
	.globl gBattleAnimSpriteGfx_Orange
	.globl gBattleAnimSpritePal_Orange
	.globl gBattleAnimSpriteGfx_Spikes
	.globl gBattleAnimSpriteGfx_YellowBall
	.globl gBattleAnimSpritePal_YellowBall
	.globl gBattleAnimSpriteGfx_TiedBag
	.globl gBattleAnimSpriteGfx_BlackSmoke
	.globl gBattleAnimSpritePal_BlackSmoke
	.globl gBattleAnimSpriteGfx_BlackBall
	.globl gBattleAnimSpritePal_Glass
	.globl gBattleAnimSpriteGfx_Glass
	.globl gBattleAnimSpriteGfx_HornHit
	.globl gBattleAnimSpritePal_HornHit
	.globl gBattleAnimSpriteGfx_BlueShards
	.globl gBattleAnimSpritePal_WavingHand
	.globl gBattleAnimSpriteGfx_WavingHand
	.globl gBattleAnimSpriteGfx_ClosingEye
	.globl gBattleAnimSpritePal_ClosingEye
	.globl gBattleAnimSpriteGfx_BlueStar
	.globl gBattleAnimSpritePal_BlueStar
	.globl gBattleAnimSpritePal_BubbleBurst
	.globl gBattleAnimSpriteGfx_BubbleBurst
	.globl gBattleAnimSpriteGfx_Leer
	.globl gBattleAnimSpritePal_BlueBurst
	.globl gBattleAnimSpriteGfx_BlueBurst
	.globl gBattleAnimSpriteGfx_SmallEmber
	.globl gBattleAnimSpriteGfx_GraySmoke
	.globl gBattleAnimSpritePal_Fire
	.globl gBattleAnimSpriteGfx_Fire
	.globl gBattleAnimSpriteGfx_SpinningFire
	.globl gBattleAnimSpriteGfx_FirePlume
	.globl gBattleAnimSpriteGfx_Lightning2
	.globl gBattleAnimSpriteGfx_Lightning
	.globl gBattleAnimSpritePal_ClawSlash2
	.globl gBattleAnimSpritePal_ClawSlash
	.globl gBattleAnimSpriteGfx_ClawSlash2
	.globl gBattleAnimSpriteGfx_ClawSlash
	.globl gBattleAnimSpriteGfx_Scratch3
	.globl gBattleAnimSpriteGfx_Scratch2
	.globl gBattleAnimSpriteGfx_BubbleBurst2
	.globl gBattleAnimSpritePal_BubbleBurst2
	.globl gBattleAnimSpriteGfx_IceChunk
	.globl gBattleAnimSpriteGfx_Glass2
	.globl gBattleAnimSpritePal_PinkHeart2
	.globl gBattleAnimSpriteGfx_PinkHeart2
	.globl gBattleAnimSpriteGfx_SapDrip
	.globl gBattleAnimSpritePal_SapDrip
	.globl gBattleAnimSpritePal_SapDrip2
	.globl gBattleAnimSpriteGfx_Sparkle1
	.globl gBattleAnimSpritePal_Sparkle1
	.globl gBattleAnimSpritePal_Sparkle2
	.globl gBattleAnimSpritePal_HumanoidFoot
	.globl gBattleAnimSpriteGfx_HumanoidFoot
	.globl gBattleAnimSpriteGfx_MonsterFoot
	.globl gBattleAnimSpriteGfx_HumanoidHand
	.globl gBattleAnimSpriteGfx_YellowUnk
	.globl gBattleAnimSpritePal_YellowUnk
	.globl gBattleAnimSpriteGfx_SlamHit
	.globl gBattleAnimSpritePal_SlamHit
	.globl gBattleAnimSpriteGfx_RedFist
	.globl gBattleAnimSpriteGfx_Ring
	.globl gBattleAnimSpritePal_Ring
	.globl gBattleAnimSpriteGfx_Rocks
	.globl gBattleAnimSpritePal_Rocks
	.globl gBattleAnimSpriteGfx_Z
	.globl gBattleAnimSpritePal_Z
	.globl gBattleAnimSpriteGfx_YellowUnk2
	.globl gBattleAnimSpritePal_YellowUnk2
	.globl gBattleAnimSpriteGfx_AirSlash
	.globl gBattleAnimSpritePal_AirSlash
	.globl gBattleAnimSpriteGfx_SpinningGreenOrbs
	.globl gBattleAnimSpritePal_SpinningGreenOrbs
	.globl gBattleAnimSpriteGfx_Leaf
	.globl gBattleAnimSpritePal_Leaf
	.globl gBattleAnimSpriteGfx_PoisonPowder
	.globl gBattleAnimSpritePal_PoisonPowder
	.globl gBattleAnimSpriteGfx_BrownTriangle
	.globl gBattleAnimSpritePal_BrownTriangle
	.globl gBattleAnimSpriteGfx_Sparkle3
	.globl gBattleAnimSpritePal_Sparkle3
	.globl gBattleAnimSpriteGfx_Sparkle4
	.globl gBattleAnimSpriteGfx_MusicNotes
	.globl gBattleAnimSpritePal_MusicNotes
	.globl gBattleAnimSpriteGfx_Duck
	.globl gBattleAnimSpritePal_Duck
	.globl gBattleAnimSpriteGfx_Alert
	.globl gBattleAnimSpritePal_Alert
	.globl gBattleAnimSpriteGfx_Shock4
	.globl gBattleAnimSpriteGfx_Shock
	.globl gBattleAnimSpriteGfx_Bell2
	.globl gBattleAnimSpritePal_Bell2
	.globl gBattleAnimSpriteGfx_PinkGlove
	.globl gBattleAnimSpriteGfx_BlueLines
	.globl gBattleAnimSpritePal_BlueLines
	.globl gBattleAnimSpritePal_Impact3
	.globl gBattleAnimSpritePal_Impact2
	.globl gBattleAnimSpritePal_Reticle
	.globl gBattleAnimSpritePal_Breath
	.globl gBattleAnimSpritePal_Snowball
	.globl gBattleAnimSpritePal_Vine
	.globl gBattleAnimSpritePal_Sword2
	.globl gBattleAnimSpritePal_RedTube
	.globl gBattleAnimSpritePal_Amnesia
	.globl gBattleAnimSpritePal_String2
	.globl gBattleAnimSpritePal_Pencil2
	.globl gBattleAnimSpritePal_Petal
	.globl gBattleAnimSpritePal_BentSpoon
	.globl gBattleAnimSpritePal_Coin
	.globl gBattleAnimSpritePal_CrackedEgg
	.globl gBattleAnimSpritePal_FreshEgg
	.globl gBattleAnimSpriteGfx_Impact3
	.globl gBattleAnimSpriteGfx_Impact2
	.globl gBattleAnimSpriteGfx_Reticle
	.globl gBattleAnimSpriteGfx_Breath
	.globl gBattleAnimSpriteGfx_Snowball
	.globl gBattleAnimSpriteGfx_Vine
	.globl gBattleAnimSpriteGfx_Sword2
	.globl gBattleAnimSpriteGfx_Clapping
	.globl gBattleAnimSpriteGfx_RedTube
	.globl gBattleAnimSpriteGfx_Amnesia
	.globl gBattleAnimSpriteGfx_String2
	.globl gBattleAnimSpriteGfx_Pencil2
	.globl gBattleAnimSpriteGfx_Petal
	.globl gBattleAnimSpriteGfx_BentSpoon
	.globl gBattleAnimSpriteGfx_Web
	.globl gBattleAnimSpriteGfx_Coin
	.globl gBattleAnimSpriteGfx_CrackedEgg
	.globl gBattleAnimSpriteGfx_HatchedEgg
	.globl gBattleAnimSpriteGfx_FreshEgg
	.globl gBattleAnimSpriteGfx_Fangs
	.globl gBattleAnimSpriteGfx_Explosion2
	.globl gBattleAnimSpriteGfx_Explosion3
	.globl gBattleAnimSpriteGfx_WaterDroplet
	.globl gBattleAnimSpriteGfx_WaterDroplet2
	.globl gBattleAnimSpriteGfx_Seed2
	.globl gBattleAnimSpritePal_Seed2
	.globl gBattleAnimSpriteGfx_Sprout
	.globl gBattleAnimSpriteGfx_RedWand
	.globl gBattleAnimSpritePal_RedWand
	.globl gBattleAnimSpriteGfx_PurpleGreenUnk
	.globl gBattleAnimSpriteGfx_WaterColumn
	.globl gBattleAnimSpriteGfx_MudUnk
	.globl gBattleAnimSpritePal_MudUnk
	.globl gBattleAnimSpriteGfx_RainDrops
	.globl gBattleAnimSpriteGfx_Unknown
	.set gBattleAnimSpriteGfx_Unknown, 0x08C13944
	.globl gBattleAnimSpritePal_Unknown
	.set gBattleAnimSpritePal_Unknown, 0x08C13970
	.globl gBattleAnimSpriteGfx_FlyingDirt
	.set gBattleAnimSpriteGfx_FlyingDirt, 0x08D8D288
	.globl gBattleAnimSpritePal_FlyingDirt
	.set gBattleAnimSpritePal_FlyingDirt, 0x08D8DA9C
	.globl gBattleAnimSpriteGfx_MetalSoundWaves
	.set gBattleAnimSpriteGfx_MetalSoundWaves, 0x08D8DAC4
	.globl gBattleAnimSpritePal_MetalSoundWaves
	.set gBattleAnimSpritePal_MetalSoundWaves, 0x08D8DC80
	.globl gBattleAnimSpriteGfx_IcicleSpear
	.set gBattleAnimSpriteGfx_IcicleSpear, 0x08D8E824
	.globl gBattleAnimSpritePal_IcicleSpear
	.set gBattleAnimSpritePal_IcicleSpear, 0x08D8E8F8
	.globl gBattleAnimSpriteGfx_GlowyRedOrb
	.set gBattleAnimSpriteGfx_GlowyRedOrb, 0x08D8EA1C
	.globl gBattleAnimSpritePal_GlowyRedOrb
	.set gBattleAnimSpritePal_GlowyRedOrb, 0x08D8EA3C
	.globl gBattleAnimSpritePal_GlowyGreenOrb
	.set gBattleAnimSpritePal_GlowyGreenOrb, 0x08D8EA54
	.globl gBattleAnimSpritePal_SleepPowder
	.set gBattleAnimSpritePal_SleepPowder, 0x08D8EA6C
	.globl gBattleAnimSpritePal_StunSpore
	.set gBattleAnimSpritePal_StunSpore, 0x08D8EA8C
	.globl gBattleAnimSpriteGfx_Splash
	.set gBattleAnimSpriteGfx_Splash, 0x08D8EC78
	.globl gBattleAnimSpritePal_Splash
	.set gBattleAnimSpritePal_Splash, 0x08D8EE94
	.globl gBattleAnimSpriteGfx_SweatBead
	.set gBattleAnimSpriteGfx_SweatBead, 0x08D8EEB8
	.globl gBattleAnimSpriteGfx_Pokeblock
	.set gBattleAnimSpriteGfx_Pokeblock, 0x08D8EEE0
	.globl gBattleAnimSpritePal_Pokeblock
	.set gBattleAnimSpritePal_Pokeblock, 0x08D8EF34
	.globl gBattleAnimSpriteGfx_Gem1
	.set gBattleAnimSpriteGfx_Gem1, 0x08D8EF4C
	.globl gBattleAnimSpriteGfx_Gem2
	.set gBattleAnimSpriteGfx_Gem2, 0x08D8F0CC
	.globl gBattleAnimSpriteGfx_Gem3
	.set gBattleAnimSpriteGfx_Gem3, 0x08D8F238
	.globl gBattleAnimSpritePal_Gem1
	.set gBattleAnimSpritePal_Gem1, 0x08D8F3A0
	.globl gBattleAnimSpriteGfx_Protect
	.set gBattleAnimSpriteGfx_Protect, 0x08D8F734
	.globl gBattleAnimSpritePal_Protect
	.set gBattleAnimSpritePal_Protect, 0x08D8FB30
	.globl gBattleAnimSpritePal_WhipHit
	.set gBattleAnimSpritePal_WhipHit, 0x08D91000
	.globl gBattleAnimSpritePal_SlamHit2
	.set gBattleAnimSpritePal_SlamHit2, 0x08D92E78
	.globl gBattleAnimSpriteGfx_SlamHit2
	.set gBattleAnimSpriteGfx_SlamHit2, 0x08D92EA0
	.globl gBattleAnimSpritePal_WeatherBall
	.set gBattleAnimSpritePal_WeatherBall, 0x08D9340C
	.globl gBattleAnimSpriteGfx_WeatherBall
	.set gBattleAnimSpriteGfx_WeatherBall, 0x08D93428
	.globl gBattleAnimSpriteGfx_Hail
	.set gBattleAnimSpriteGfx_Hail, 0x08D93AF8
	.globl gBattleAnimSpritePal_Hail
	.set gBattleAnimSpritePal_Hail, 0x08D93B38
	.globl gBattleAnimSpriteGfx_GreenSpike
	.set gBattleAnimSpriteGfx_GreenSpike, 0x08D93B50
	.globl gBattleAnimSpritePal_GreenSpike
	.set gBattleAnimSpritePal_GreenSpike, 0x08D93B90
	.globl gBattleAnimSpritePal_WhiteCircleOfLight
	.set gBattleAnimSpritePal_WhiteCircleOfLight, 0x08D93BA8
	.globl gBattleAnimSpritePal_GlowyBlueOrb
	.set gBattleAnimSpritePal_GlowyBlueOrb, 0x08D93BC0
	.globl gBattleAnimSpriteGfx_Recycle
	.set gBattleAnimSpriteGfx_Recycle, 0x08D93BD8
	.globl gBattleAnimSpritePal_Recycle
	.set gBattleAnimSpritePal_Recycle, 0x08D93DE4
	.globl gBattleAnimSpriteGfx_RedParticles
	.set gBattleAnimSpriteGfx_RedParticles, 0x08D93E00
	.globl gBattleAnimSpritePal_RedParticles
	.set gBattleAnimSpritePal_RedParticles, 0x08D93E4C
	.globl gBattleAnimSpriteGfx_DirtMound
	.set gBattleAnimSpriteGfx_DirtMound, 0x08D93E68
	.globl gBattleAnimSpritePal_DirtMound
	.set gBattleAnimSpritePal_DirtMound, 0x08D93FF0
	.globl gBattleAnimSpriteGfx_Bird
	.set gBattleAnimSpriteGfx_Bird, 0x08D9460C
	.globl gBattleAnimSpritePal_Bird
	.set gBattleAnimSpritePal_Bird, 0x08D94988
	.globl gBattleAnimSpriteGfx_CrossImpact
	.set gBattleAnimSpriteGfx_CrossImpact, 0x08D949A4
	.globl gBattleAnimSpritePal_CrossImpact
	.set gBattleAnimSpritePal_CrossImpact, 0x08D94A44
	.globl gBattleAnimSpritePal_Slash2
	.set gBattleAnimSpritePal_Slash2, 0x08D9664C
	.globl gBattleAnimSpriteGfx_WhiteShadow
	.set gBattleAnimSpriteGfx_WhiteShadow, 0x08D96674
	.globl gBattleAnimSpritePal_WhiteShadow
	.set gBattleAnimSpritePal_WhiteShadow, 0x08D96788
	.globl gBattleAnimSpritePal_Shock3
	.set gBattleAnimSpritePal_Shock3, 0x08DBA3F4
	.globl gBattleAnimSpriteGfx_Shock3
	.set gBattleAnimSpriteGfx_Shock3, 0x08DBA41C
	.globl gBattleAnimSpritePal_WhiteFeather
	.set gBattleAnimSpritePal_WhiteFeather, 0x08DBA604
	.globl gBattleAnimSpriteGfx_WhiteFeather
	.set gBattleAnimSpriteGfx_WhiteFeather, 0x08DBA620
	.globl gBattleAnimSpritePal_Sparkle6
	.set gBattleAnimSpritePal_Sparkle6, 0x08DBA748
	.globl gBattleAnimSpriteGfx_Sparkle6
	.set gBattleAnimSpriteGfx_Sparkle6, 0x08DBA760

	@ struct CompressedSpriteSheet { const void *data; u16 size; u16 tag; }
	.macro battle_anim_pic_entry data:req, size:req, tag:req
	.4byte \data
	.2byte \size, \tag
	.endm

	.globl gBattleAnimPicTable
gBattleAnimPicTable: @ 0x084FD250
	battle_anim_pic_entry gBattleAnimSpriteGfx_Bone, 0x0200, 0x2710 @ [000] ANIM_TAG_BONE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Spark, 0x0300, 0x2711 @ [001] ANIM_TAG_SPARK
	battle_anim_pic_entry gBattleAnimSpriteGfx_Pencil, 0x0200, 0x2712 @ [002] ANIM_TAG_PENCIL
	battle_anim_pic_entry gBattleAnimSpriteGfx_AirWave, 0x0100, 0x2713 @ [003] ANIM_TAG_AIR_WAVE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Orb, 0x0200, 0x2714 @ [004] ANIM_TAG_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sword, 0x0400, 0x2715 @ [005] ANIM_TAG_SWORD
	battle_anim_pic_entry gBattleAnimSpriteGfx_Seed, 0x0180, 0x2716 @ [006] ANIM_TAG_SEED
	battle_anim_pic_entry gBattleAnimSpriteGfx_Explosion6, 0x0800, 0x2717 @ [007] ANIM_TAG_EXPLOSION_6
	battle_anim_pic_entry gBattleAnimSpriteGfx_PinkOrb, 0x0020, 0x2718 @ [008] ANIM_TAG_PINK_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_Gust, 0x0400, 0x2719 @ [009] ANIM_TAG_GUST
	battle_anim_pic_entry gBattleAnimSpriteGfx_IceCube, 0x1200, 0x271A @ [010] ANIM_TAG_ICE_CUBE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Spark2, 0x0180, 0x271B @ [011] ANIM_TAG_SPARK_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Orange, 0x0080, 0x271C @ [012] ANIM_TAG_ORANGE
	battle_anim_pic_entry gBattleAnimSpriteGfx_YellowBall, 0x0080, 0x271D @ [013] ANIM_TAG_YELLOW_BALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_LockOn, 0x0280, 0x271E @ [014] ANIM_TAG_LOCK_ON
	battle_anim_pic_entry gBattleAnimSpriteGfx_TiedBag, 0x0080, 0x271F @ [015] ANIM_TAG_TIED_BAG
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlackSmoke, 0x0100, 0x2720 @ [016] ANIM_TAG_BLACK_SMOKE
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlackBall, 0x0020, 0x2721 @ [017] ANIM_TAG_BLACK_BALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_Conversion, 0x0080, 0x2722 @ [018] ANIM_TAG_CONVERSION
	battle_anim_pic_entry gBattleAnimSpriteGfx_Glass, 0x0400, 0x2723 @ [019] ANIM_TAG_GLASS
	battle_anim_pic_entry gBattleAnimSpriteGfx_HornHit, 0x0200, 0x2724 @ [020] ANIM_TAG_HORN_HIT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Hit, 0x0A00, 0x2725 @ [021] ANIM_TAG_HIT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Hit, 0x0A00, 0x2726 @ [022] ANIM_TAG_HIT_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlueShards, 0x0380, 0x2727 @ [023] ANIM_TAG_BLUE_SHARDS
	battle_anim_pic_entry gBattleAnimSpriteGfx_ClosingEye, 0x0300, 0x2728 @ [024] ANIM_TAG_CLOSING_EYE
	battle_anim_pic_entry gBattleAnimSpriteGfx_WavingHand, 0x0A00, 0x2729 @ [025] ANIM_TAG_WAVING_HAND
	battle_anim_pic_entry gBattleAnimSpriteGfx_HitDuplicate, 0x0A00, 0x272A @ [026] ANIM_TAG_HIT_DUPLICATE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Leer, 0x0A00, 0x272B @ [027] ANIM_TAG_LEER
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlueBurst, 0x0A00, 0x272C @ [028] ANIM_TAG_BLUE_BURST
	battle_anim_pic_entry gBattleAnimSpriteGfx_SmallEmber, 0x0A00, 0x272D @ [029] ANIM_TAG_SMALL_EMBER
	battle_anim_pic_entry gBattleAnimSpriteGfx_GraySmoke, 0x0A00, 0x272E @ [030] ANIM_TAG_GRAY_SMOKE
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlueStar, 0x0E00, 0x272F @ [031] ANIM_TAG_BLUE_STAR
	battle_anim_pic_entry gBattleAnimSpriteGfx_BubbleBurst, 0x0380, 0x2730 @ [032] ANIM_TAG_BUBBLE_BURST
	battle_anim_pic_entry gBattleAnimSpriteGfx_Fire, 0x1000, 0x2731 @ [033] ANIM_TAG_FIRE
	battle_anim_pic_entry gBattleAnimSpriteGfx_SpinningFire, 0x0800, 0x2732 @ [034] ANIM_TAG_SPINNING_FIRE
	battle_anim_pic_entry gBattleAnimSpriteGfx_FirePlume, 0x0A00, 0x2733 @ [035] ANIM_TAG_FIRE_PLUME
	battle_anim_pic_entry gBattleAnimSpriteGfx_Lightning2, 0x0800, 0x2734 @ [036] ANIM_TAG_LIGHTNING_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Lightning, 0x0A00, 0x2735 @ [037] ANIM_TAG_LIGHTNING
	battle_anim_pic_entry gBattleAnimSpriteGfx_ClawSlash2, 0x0A00, 0x2736 @ [038] ANIM_TAG_CLAW_SLASH_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_ClawSlash, 0x0A00, 0x2737 @ [039] ANIM_TAG_CLAW_SLASH
	battle_anim_pic_entry gBattleAnimSpriteGfx_Scratch3, 0x0A00, 0x2738 @ [040] ANIM_TAG_SCRATCH_3
	battle_anim_pic_entry gBattleAnimSpriteGfx_Scratch2, 0x0A00, 0x2739 @ [041] ANIM_TAG_SCRATCH_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_BubbleBurst2, 0x0A00, 0x273A @ [042] ANIM_TAG_BUBBLE_BURST_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_IceChunk, 0x0A00, 0x273B @ [043] ANIM_TAG_ICE_CHUNK
	battle_anim_pic_entry gBattleAnimSpriteGfx_Glass2, 0x0A00, 0x273C @ [044] ANIM_TAG_GLASS_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_PinkHeart2, 0x0A00, 0x273D @ [045] ANIM_TAG_PINK_HEART_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_SapDrip, 0x1000, 0x273E @ [046] ANIM_TAG_SAP_DRIP
	battle_anim_pic_entry gBattleAnimSpriteGfx_SapDrip, 0x1000, 0x273F @ [047] ANIM_TAG_SAP_DRIP_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sparkle1, 0x1000, 0x2740 @ [048] ANIM_TAG_SPARKLE_1
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sparkle1, 0x1000, 0x2741 @ [049] ANIM_TAG_SPARKLE_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_HumanoidFoot, 0x0200, 0x2742 @ [050] ANIM_TAG_HUMANOID_FOOT
	battle_anim_pic_entry gBattleAnimSpriteGfx_MonsterFoot, 0x0200, 0x2743 @ [051] ANIM_TAG_MONSTER_FOOT
	battle_anim_pic_entry gBattleAnimSpriteGfx_HumanoidHand, 0x0200, 0x2744 @ [052] ANIM_TAG_HUMANOID_HAND
	battle_anim_pic_entry gBattleAnimSpriteGfx_NoiseLine, 0x0800, 0x2745 @ [053] ANIM_TAG_NOISE_LINE
	battle_anim_pic_entry gBattleAnimSpriteGfx_YellowUnk, 0x0080, 0x2746 @ [054] ANIM_TAG_YELLOW_UNK
	battle_anim_pic_entry gBattleAnimSpriteGfx_RedFist, 0x0200, 0x2747 @ [055] ANIM_TAG_RED_FIST
	battle_anim_pic_entry gBattleAnimSpriteGfx_SlamHit, 0x1000, 0x2748 @ [056] ANIM_TAG_SLAM_HIT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Ring, 0x0180, 0x2749 @ [057] ANIM_TAG_RING
	battle_anim_pic_entry gBattleAnimSpriteGfx_Rocks, 0x0C00, 0x274A @ [058] ANIM_TAG_ROCKS
	battle_anim_pic_entry gBattleAnimSpriteGfx_Z, 0x0100, 0x274B @ [059] ANIM_TAG_Z
	battle_anim_pic_entry gBattleAnimSpriteGfx_YellowUnk2, 0x0040, 0x274C @ [060] ANIM_TAG_YELLOW_UNK_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_AirSlash, 0x0180, 0x274D @ [061] ANIM_TAG_AIR_SLASH
	battle_anim_pic_entry gBattleAnimSpriteGfx_SpinningGreenOrbs, 0x0800, 0x274E @ [062] ANIM_TAG_SPINNING_GREEN_ORBS
	battle_anim_pic_entry gBattleAnimSpriteGfx_Leaf, 0x0480, 0x274F @ [063] ANIM_TAG_LEAF
	battle_anim_pic_entry gBattleAnimSpriteGfx_Finger, 0x0200, 0x2750 @ [064] ANIM_TAG_FINGER
	battle_anim_pic_entry gBattleAnimSpriteGfx_PoisonPowder, 0x0200, 0x2751 @ [065] ANIM_TAG_POISON_POWDER
	battle_anim_pic_entry gBattleAnimSpriteGfx_BrownTriangle, 0x0100, 0x2752 @ [066] ANIM_TAG_BROWN_TRIANGLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_PoisonPowder, 0x0200, 0x2753 @ [067] ANIM_TAG_SLEEP_POWDER
	battle_anim_pic_entry gBattleAnimSpriteGfx_PoisonPowder, 0x0200, 0x2754 @ [068] ANIM_TAG_STUN_SPORE
	battle_anim_pic_entry gBattleAnimSpriteGfx_PoisonPowder, 0x0200, 0x2755 @ [069] ANIM_TAG_POWDER
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sparkle3, 0x0200, 0x2756 @ [070] ANIM_TAG_SPARKLE_3
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sparkle4, 0x0A00, 0x2757 @ [071] ANIM_TAG_SPARKLE_4
	battle_anim_pic_entry gBattleAnimSpriteGfx_MusicNotes, 0x0300, 0x2758 @ [072] ANIM_TAG_MUSIC_NOTES
	battle_anim_pic_entry gBattleAnimSpriteGfx_Duck, 0x0180, 0x2759 @ [073] ANIM_TAG_DUCK
	battle_anim_pic_entry gBattleAnimSpriteGfx_MudSand, 0x00A0, 0x275A @ [074] ANIM_TAG_MUD_SAND
	battle_anim_pic_entry gBattleAnimSpriteGfx_Alert, 0x0700, 0x275B @ [075] ANIM_TAG_ALERT
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlueFlames, 0x0400, 0x275C @ [076] ANIM_TAG_BLUE_FLAMES
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlueFlames2, 0x0200, 0x275D @ [077] ANIM_TAG_BLUE_FLAMES_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Shock4, 0x0300, 0x275E @ [078] ANIM_TAG_SHOCK_4
	battle_anim_pic_entry gBattleAnimSpriteGfx_Shock, 0x0C00, 0x275F @ [079] ANIM_TAG_SHOCK
	battle_anim_pic_entry gBattleAnimSpriteGfx_Bell2, 0x0A00, 0x2760 @ [080] ANIM_TAG_BELL_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_PinkGlove, 0x0080, 0x2761 @ [081] ANIM_TAG_PINK_GLOVE
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlueLines, 0x0040, 0x2762 @ [082] ANIM_TAG_BLUE_LINES
	battle_anim_pic_entry gBattleAnimSpriteGfx_Impact3, 0x0E00, 0x2763 @ [083] ANIM_TAG_IMPACT_3
	battle_anim_pic_entry gBattleAnimSpriteGfx_Impact2, 0x0E00, 0x2764 @ [084] ANIM_TAG_IMPACT_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Reticle, 0x0280, 0x2765 @ [085] ANIM_TAG_RETICLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Breath, 0x0200, 0x2766 @ [086] ANIM_TAG_BREATH
	battle_anim_pic_entry gBattleAnimSpriteGfx_Anger, 0x0080, 0x2767 @ [087] ANIM_TAG_ANGER
	battle_anim_pic_entry gBattleAnimSpriteGfx_Snowball, 0x00C0, 0x2768 @ [088] ANIM_TAG_SNOWBALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_Vine, 0x0A00, 0x2769 @ [089] ANIM_TAG_VINE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sword2, 0x0200, 0x276A @ [090] ANIM_TAG_SWORD_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Clapping, 0x0180, 0x276B @ [091] ANIM_TAG_CLAPPING
	battle_anim_pic_entry gBattleAnimSpriteGfx_RedTube, 0x0080, 0x276C @ [092] ANIM_TAG_RED_TUBE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Amnesia, 0x1000, 0x276D @ [093] ANIM_TAG_AMNESIA
	battle_anim_pic_entry gBattleAnimSpriteGfx_String2, 0x0A00, 0x276E @ [094] ANIM_TAG_STRING_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Pencil2, 0x0180, 0x276F @ [095] ANIM_TAG_PENCIL_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Petal, 0x0380, 0x2770 @ [096] ANIM_TAG_PETAL
	battle_anim_pic_entry gBattleAnimSpriteGfx_BentSpoon, 0x0C00, 0x2771 @ [097] ANIM_TAG_BENT_SPOON
	battle_anim_pic_entry gBattleAnimSpriteGfx_Web, 0x0200, 0x2772 @ [098] ANIM_TAG_WEB
	battle_anim_pic_entry gBattleAnimSpriteGfx_MilkBottle, 0x0200, 0x2773 @ [099] ANIM_TAG_MILK_BOTTLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Coin, 0x0200, 0x2774 @ [100] ANIM_TAG_COIN
	battle_anim_pic_entry gBattleAnimSpriteGfx_CrackedEgg, 0x0200, 0x2775 @ [101] ANIM_TAG_CRACKED_EGG
	battle_anim_pic_entry gBattleAnimSpriteGfx_HatchedEgg, 0x0400, 0x2776 @ [102] ANIM_TAG_HATCHED_EGG
	battle_anim_pic_entry gBattleAnimSpriteGfx_FreshEgg, 0x0080, 0x2777 @ [103] ANIM_TAG_FRESH_EGG
	battle_anim_pic_entry gBattleAnimSpriteGfx_Fangs, 0x0400, 0x2778 @ [104] ANIM_TAG_FANGS
	battle_anim_pic_entry gBattleAnimSpriteGfx_Explosion2, 0x0C00, 0x2779 @ [105] ANIM_TAG_EXPLOSION_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Explosion3, 0x0200, 0x277A @ [106] ANIM_TAG_EXPLOSION_3
	battle_anim_pic_entry gBattleAnimSpriteGfx_WaterDroplet, 0x1000, 0x277B @ [107] ANIM_TAG_WATER_DROPLET
	battle_anim_pic_entry gBattleAnimSpriteGfx_WaterDroplet2, 0x0A00, 0x277C @ [108] ANIM_TAG_WATER_DROPLET_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Seed2, 0x0020, 0x277D @ [109] ANIM_TAG_SEED_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sprout, 0x0E00, 0x277E @ [110] ANIM_TAG_SPROUT
	battle_anim_pic_entry gBattleAnimSpriteGfx_RedWand, 0x0080, 0x277F @ [111] ANIM_TAG_RED_WAND
	battle_anim_pic_entry gBattleAnimSpriteGfx_PurpleGreenUnk, 0x0A00, 0x2780 @ [112] ANIM_TAG_PURPLE_GREEN_UNK
	battle_anim_pic_entry gBattleAnimSpriteGfx_WaterColumn, 0x0400, 0x2781 @ [113] ANIM_TAG_WATER_COLUMN
	battle_anim_pic_entry gBattleAnimSpriteGfx_MudUnk, 0x0200, 0x2782 @ [114] ANIM_TAG_MUD_UNK
	battle_anim_pic_entry gBattleAnimSpriteGfx_RainDrops, 0x0700, 0x2783 @ [115] ANIM_TAG_RAIN_DROPS
	battle_anim_pic_entry gBattleAnimSpriteGfx_FurySwipes, 0x0800, 0x2784 @ [116] ANIM_TAG_FURY_SWIPES
	battle_anim_pic_entry gBattleAnimSpriteGfx_Vine2, 0x0A00, 0x2785 @ [117] ANIM_TAG_VINE_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Teeth, 0x0600, 0x2786 @ [118] ANIM_TAG_TEETH
	battle_anim_pic_entry gBattleAnimSpriteGfx_Bone2, 0x0800, 0x2787 @ [119] ANIM_TAG_BONE_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_WhiteBag, 0x0200, 0x2788 @ [120] ANIM_TAG_WHITE_BAG
	battle_anim_pic_entry gBattleAnimSpriteGfx_Unknown, 0x0040, 0x2789 @ [121] ANIM_TAG_UNKNOWN
	battle_anim_pic_entry gBattleAnimSpriteGfx_PurpleCoral, 0x0180, 0x278A @ [122] ANIM_TAG_PURPLE_CORAL
	battle_anim_pic_entry gBattleAnimSpriteGfx_PurpleDroplet, 0x0600, 0x278B @ [123] ANIM_TAG_PURPLE_DROPLET
	battle_anim_pic_entry gBattleAnimSpriteGfx_Shock2, 0x0600, 0x278C @ [124] ANIM_TAG_SHOCK_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_ClosingEye2, 0x0200, 0x278D @ [125] ANIM_TAG_CLOSING_EYE_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_MetalBall, 0x0080, 0x278E @ [126] ANIM_TAG_METAL_BALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_MonsterDoll, 0x0200, 0x278F @ [127] ANIM_TAG_MONSTER_DOLL
	battle_anim_pic_entry gBattleAnimSpriteGfx_Whirlwind, 0x0800, 0x2790 @ [128] ANIM_TAG_WHIRLWIND
	battle_anim_pic_entry gBattleAnimSpriteGfx_Whirlwind2, 0x0080, 0x2791 @ [129] ANIM_TAG_WHIRLWIND_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Explosion4, 0x0A00, 0x2792 @ [130] ANIM_TAG_EXPLOSION_4
	battle_anim_pic_entry gBattleAnimSpriteGfx_Explosion5, 0x0280, 0x2793 @ [131] ANIM_TAG_EXPLOSION_5
	battle_anim_pic_entry gBattleAnimSpriteGfx_Tongue, 0x0280, 0x2794 @ [132] ANIM_TAG_TONGUE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Smoke, 0x0100, 0x2795 @ [133] ANIM_TAG_SMOKE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Smoke2, 0x0200, 0x2796 @ [134] ANIM_TAG_SMOKE_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Impact, 0x0200, 0x2797 @ [135] ANIM_TAG_IMPACT
	battle_anim_pic_entry gBattleAnimSpriteGfx_CircleImpact, 0x0020, 0x2798 @ [136] ANIM_TAG_CIRCLE_IMPACT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Scratch, 0x0A00, 0x2799 @ [137] ANIM_TAG_SCRATCH
	battle_anim_pic_entry gBattleAnimSpriteGfx_Cut, 0x0800, 0x279A @ [138] ANIM_TAG_CUT
	battle_anim_pic_entry gBattleAnimSpriteGfx_SharpTeeth, 0x0800, 0x279B @ [139] ANIM_TAG_SHARP_TEETH
	battle_anim_pic_entry gBattleAnimSpriteGfx_RainbowRings, 0x00C0, 0x279C @ [140] ANIM_TAG_RAINBOW_RINGS
	battle_anim_pic_entry gBattleAnimSpriteGfx_IceCrystals, 0x01C0, 0x279D @ [141] ANIM_TAG_ICE_CRYSTALS
	battle_anim_pic_entry gBattleAnimSpriteGfx_IceSpikes, 0x0100, 0x279E @ [142] ANIM_TAG_ICE_SPIKES
	battle_anim_pic_entry gBattleAnimSpriteGfx_HandsAndFeet, 0x0800, 0x279F @ [143] ANIM_TAG_HANDS_AND_FEET
	battle_anim_pic_entry gBattleAnimSpriteGfx_MistCloud, 0x0200, 0x27A0 @ [144] ANIM_TAG_MIST_CLOUD
	battle_anim_pic_entry gBattleAnimSpriteGfx_Clamp, 0x0800, 0x27A1 @ [145] ANIM_TAG_CLAMP
	battle_anim_pic_entry gBattleAnimSpriteGfx_Bubble, 0x0180, 0x27A2 @ [146] ANIM_TAG_BUBBLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Orbs, 0x0180, 0x27A3 @ [147] ANIM_TAG_ORBS
	battle_anim_pic_entry gBattleAnimSpriteGfx_WaterImpact, 0x0200, 0x27A4 @ [148] ANIM_TAG_WATER_IMPACT
	battle_anim_pic_entry gBattleAnimSpriteGfx_WaterOrb, 0x0200, 0x27A5 @ [149] ANIM_TAG_WATER_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_PoisonBubble, 0x0180, 0x27A6 @ [150] ANIM_TAG_POISON_BUBBLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_ToxicBubble, 0x0400, 0x27A7 @ [151] ANIM_TAG_TOXIC_BUBBLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Spikes, 0x0080, 0x27A8 @ [152] ANIM_TAG_SPIKES
	battle_anim_pic_entry gBattleAnimSpriteGfx_HornHit2, 0x0100, 0x27A9 @ [153] ANIM_TAG_HORN_HIT_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_AirWave2, 0x0100, 0x27AA @ [154] ANIM_TAG_AIR_WAVE_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_SmallBubbles, 0x0140, 0x27AB @ [155] ANIM_TAG_SMALL_BUBBLES
	battle_anim_pic_entry gBattleAnimSpriteGfx_RoundShadow, 0x0800, 0x27AC @ [156] ANIM_TAG_ROUND_SHADOW
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sunlight, 0x0200, 0x27AD @ [157] ANIM_TAG_SUNLIGHT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Spore, 0x0100, 0x27AE @ [158] ANIM_TAG_SPORE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Flower, 0x00A0, 0x27AF @ [159] ANIM_TAG_FLOWER
	battle_anim_pic_entry gBattleAnimSpriteGfx_RazorLeaf, 0x0100, 0x27B0 @ [160] ANIM_TAG_RAZOR_LEAF
	battle_anim_pic_entry gBattleAnimSpriteGfx_Needle, 0x0080, 0x27B1 @ [161] ANIM_TAG_NEEDLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_WhirlwindLines, 0x0300, 0x27B2 @ [162] ANIM_TAG_WHIRLWIND_LINES
	battle_anim_pic_entry gBattleAnimSpriteGfx_GoldRing, 0x0100, 0x27B3 @ [163] ANIM_TAG_GOLD_RING
	battle_anim_pic_entry gBattleAnimSpriteGfx_GoldRing, 0x0100, 0x27B4 @ [164] ANIM_TAG_PURPLE_RING
	battle_anim_pic_entry gBattleAnimSpriteGfx_GoldRing, 0x0100, 0x27B5 @ [165] ANIM_TAG_BLUE_RING
	battle_anim_pic_entry gBattleAnimSpriteGfx_GreenLightWall, 0x0800, 0x27B6 @ [166] ANIM_TAG_GREEN_LIGHT_WALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_GreenLightWall, 0x0800, 0x27B7 @ [167] ANIM_TAG_BLUE_LIGHT_WALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_GreenLightWall, 0x0800, 0x27B8 @ [168] ANIM_TAG_RED_LIGHT_WALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_GreenLightWall, 0x0800, 0x27B9 @ [169] ANIM_TAG_GRAY_LIGHT_WALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_GreenLightWall, 0x0800, 0x27BA @ [170] ANIM_TAG_ORANGE_LIGHT_WALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_BlackBall2, 0x0080, 0x27BB @ [171] ANIM_TAG_BLACK_BALL_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_MistCloud, 0x0200, 0x27BC @ [172] ANIM_TAG_PURPLE_GAS_CLOUD
	battle_anim_pic_entry gBattleAnimSpriteGfx_SparkH, 0x0200, 0x27BD @ [173] ANIM_TAG_SPARK_H
	battle_anim_pic_entry gBattleAnimSpriteGfx_YellowStar, 0x0200, 0x27BE @ [174] ANIM_TAG_YELLOW_STAR
	battle_anim_pic_entry gBattleAnimSpriteGfx_LargeFreshEgg, 0x0080, 0x27BF @ [175] ANIM_TAG_LARGE_FRESH_EGG
	battle_anim_pic_entry gBattleAnimSpriteGfx_ShadowBall, 0x0200, 0x27C0 @ [176] ANIM_TAG_SHADOW_BALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_Lick, 0x0500, 0x27C1 @ [177] ANIM_TAG_LICK
	battle_anim_pic_entry gBattleAnimSpriteGfx_VoidLines, 0x0800, 0x27C2 @ [178] ANIM_TAG_VOID_LINES
	battle_anim_pic_entry gBattleAnimSpriteGfx_String, 0x0400, 0x27C3 @ [179] ANIM_TAG_STRING
	battle_anim_pic_entry gBattleAnimSpriteGfx_WebThread, 0x0020, 0x27C4 @ [180] ANIM_TAG_WEB_THREAD
	battle_anim_pic_entry gBattleAnimSpriteGfx_SpiderWeb, 0x0800, 0x27C5 @ [181] ANIM_TAG_SPIDER_WEB
	battle_anim_pic_entry gBattleAnimSpriteGfx_Lightbulb, 0x0100, 0x27C6 @ [182] ANIM_TAG_LIGHTBULB
	battle_anim_pic_entry gBattleAnimSpriteGfx_Slash, 0x0800, 0x27C7 @ [183] ANIM_TAG_SLASH
	battle_anim_pic_entry gBattleAnimSpriteGfx_FocusEnergy, 0x0400, 0x27C8 @ [184] ANIM_TAG_FOCUS_ENERGY
	battle_anim_pic_entry gBattleAnimSpriteGfx_SphereToCube, 0x0A00, 0x27C9 @ [185] ANIM_TAG_SPHERE_TO_CUBE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Tendrils, 0x1000, 0x27CA @ [186] ANIM_TAG_TENDRILS
	battle_anim_pic_entry gBattleAnimSpriteGfx_Eye, 0x0800, 0x27CB @ [187] ANIM_TAG_EYE
	battle_anim_pic_entry gBattleAnimSpriteGfx_WhiteShadow, 0x0400, 0x27CC @ [188] ANIM_TAG_WHITE_SHADOW
	battle_anim_pic_entry gBattleAnimSpriteGfx_TealAlert, 0x0200, 0x27CD @ [189] ANIM_TAG_TEAL_ALERT
	battle_anim_pic_entry gBattleAnimSpriteGfx_OpeningEye, 0x0800, 0x27CE @ [190] ANIM_TAG_OPENING_EYE
	battle_anim_pic_entry gBattleAnimSpriteGfx_RoundWhiteHalo, 0x0800, 0x27CF @ [191] ANIM_TAG_ROUND_WHITE_HALO
	battle_anim_pic_entry gBattleAnimSpriteGfx_FangAttack, 0x0800, 0x27D0 @ [192] ANIM_TAG_FANG_ATTACK
	battle_anim_pic_entry gBattleAnimSpriteGfx_PurpleHandOutline, 0x0200, 0x27D1 @ [193] ANIM_TAG_PURPLE_HAND_OUTLINE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Moon, 0x0800, 0x27D2 @ [194] ANIM_TAG_MOON
	battle_anim_pic_entry gBattleAnimSpriteGfx_GreenSparkle, 0x0200, 0x27D3 @ [195] ANIM_TAG_GREEN_SPARKLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Spiral, 0x0800, 0x27D4 @ [196] ANIM_TAG_SPIRAL
	battle_anim_pic_entry gBattleAnimSpriteGfx_SnoreZ, 0x0200, 0x27D5 @ [197] ANIM_TAG_SNORE_Z
	battle_anim_pic_entry gBattleAnimSpriteGfx_Explosion, 0x0800, 0x27D6 @ [198] ANIM_TAG_EXPLOSION
	battle_anim_pic_entry gBattleAnimSpriteGfx_Nail, 0x0400, 0x27D7 @ [199] ANIM_TAG_NAIL
	battle_anim_pic_entry gBattleAnimSpriteGfx_GhostlySpirit, 0x0200, 0x27D8 @ [200] ANIM_TAG_GHOSTLY_SPIRIT
	battle_anim_pic_entry gBattleAnimSpriteGfx_WarmRock, 0x0A80, 0x27D9 @ [201] ANIM_TAG_WARM_ROCK
	battle_anim_pic_entry gBattleAnimSpriteGfx_BreakingEgg, 0x0600, 0x27DA @ [202] ANIM_TAG_BREAKING_EGG
	battle_anim_pic_entry gBattleAnimSpriteGfx_ThinRing, 0x0800, 0x27DB @ [203] ANIM_TAG_THIN_RING
	battle_anim_pic_entry gBattleAnimSpriteGfx_PunchImpact, 0x0200, 0x27DC @ [204] ANIM_TAG_PUNCH_IMPACT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Bell, 0x0600, 0x27DD @ [205] ANIM_TAG_BELL
	battle_anim_pic_entry gBattleAnimSpriteGfx_MusicNotes2, 0x0800, 0x27DE @ [206] ANIM_TAG_MUSIC_NOTES_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_SpeedDust, 0x0180, 0x27DF @ [207] ANIM_TAG_SPEED_DUST
	battle_anim_pic_entry gBattleAnimSpriteGfx_TornMetal, 0x0800, 0x27E0 @ [208] ANIM_TAG_TORN_METAL
	battle_anim_pic_entry gBattleAnimSpriteGfx_ThoughtBubble, 0x0800, 0x27E1 @ [209] ANIM_TAG_THOUGHT_BUBBLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_MagentaHeart, 0x0080, 0x27E2 @ [210] ANIM_TAG_MAGENTA_HEART
	battle_anim_pic_entry gBattleAnimSpriteGfx_ElectricOrbs, 0x0080, 0x27E3 @ [211] ANIM_TAG_ELECTRIC_ORBS
	battle_anim_pic_entry gBattleAnimSpriteGfx_CircleOfLight, 0x0800, 0x27E4 @ [212] ANIM_TAG_CIRCLE_OF_LIGHT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Electricity, 0x0800, 0x27E5 @ [213] ANIM_TAG_ELECTRICITY
	battle_anim_pic_entry gBattleAnimSpriteGfx_Finger2, 0x0600, 0x27E6 @ [214] ANIM_TAG_FINGER_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_MovementWaves, 0x0600, 0x27E7 @ [215] ANIM_TAG_MOVEMENT_WAVES
	battle_anim_pic_entry gBattleAnimSpriteGfx_MagentaHeart, 0x0080, 0x27E8 @ [216] ANIM_TAG_RED_HEART
	battle_anim_pic_entry gBattleAnimSpriteGfx_RedOrb, 0x0080, 0x27E9 @ [217] ANIM_TAG_RED_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_EyeSparkle, 0x0180, 0x27EA @ [218] ANIM_TAG_EYE_SPARKLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_MagentaHeart, 0x0080, 0x27EB @ [219] ANIM_TAG_PINK_HEART
	battle_anim_pic_entry gBattleAnimSpriteGfx_Angel, 0x0200, 0x27EC @ [220] ANIM_TAG_ANGEL
	battle_anim_pic_entry gBattleAnimSpriteGfx_Devil, 0x0400, 0x27ED @ [221] ANIM_TAG_DEVIL
	battle_anim_pic_entry gBattleAnimSpriteGfx_Swipe, 0x0A00, 0x27EE @ [222] ANIM_TAG_SWIPE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Roots, 0x0800, 0x27EF @ [223] ANIM_TAG_ROOTS
	battle_anim_pic_entry gBattleAnimSpriteGfx_ItemBag, 0x0200, 0x27F0 @ [224] ANIM_TAG_ITEM_BAG
	battle_anim_pic_entry gBattleAnimSpriteGfx_JaggedMusicNote, 0x0400, 0x27F1 @ [225] ANIM_TAG_JAGGED_MUSIC_NOTE
	battle_anim_pic_entry gBattleAnimSpriteGfx_Pokeball, 0x0080, 0x27F2 @ [226] ANIM_TAG_POKEBALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_Spotlight, 0x0800, 0x27F3 @ [227] ANIM_TAG_SPOTLIGHT
	battle_anim_pic_entry gBattleAnimSpriteGfx_LetterZ, 0x0200, 0x27F4 @ [228] ANIM_TAG_LETTER_Z
	battle_anim_pic_entry gBattleAnimSpriteGfx_RapidSpin, 0x0300, 0x27F5 @ [229] ANIM_TAG_RAPID_SPIN
	battle_anim_pic_entry gBattleAnimSpriteGfx_TriAttackTriangle, 0x0800, 0x27F6 @ [230] ANIM_TAG_TRI_ATTACK_TRIANGLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_WispOrb, 0x0380, 0x27F7 @ [231] ANIM_TAG_WISP_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_WispFire, 0x0800, 0x27F8 @ [232] ANIM_TAG_WISP_FIRE
	battle_anim_pic_entry gBattleAnimSpriteGfx_GoldStars, 0x00C0, 0x27F9 @ [233] ANIM_TAG_GOLD_STARS
	battle_anim_pic_entry gBattleAnimSpriteGfx_EclipsingOrb, 0x0800, 0x27FA @ [234] ANIM_TAG_ECLIPSING_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_GrayOrb, 0x0060, 0x27FB @ [235] ANIM_TAG_GRAY_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_GrayOrb, 0x0060, 0x27FC @ [236] ANIM_TAG_BLUE_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_GrayOrb, 0x0060, 0x27FD @ [237] ANIM_TAG_RED_ORB_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_PinkPetal, 0x0080, 0x27FE @ [238] ANIM_TAG_PINK_PETAL
	battle_anim_pic_entry gBattleAnimSpriteGfx_PainSplit, 0x0180, 0x27FF @ [239] ANIM_TAG_PAIN_SPLIT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Confetti, 0x0180, 0x2800 @ [240] ANIM_TAG_CONFETTI
	battle_anim_pic_entry gBattleAnimSpriteGfx_GreenStar, 0x0200, 0x2801 @ [241] ANIM_TAG_GREEN_STAR
	battle_anim_pic_entry gBattleAnimSpriteGfx_PinkCloud, 0x0200, 0x2802 @ [242] ANIM_TAG_PINK_CLOUD
	battle_anim_pic_entry gBattleAnimSpriteGfx_SweatDrop, 0x0020, 0x2803 @ [243] ANIM_TAG_SWEAT_DROP
	battle_anim_pic_entry gBattleAnimSpriteGfx_GuardRing, 0x0400, 0x2804 @ [244] ANIM_TAG_GUARD_RING
	battle_anim_pic_entry gBattleAnimSpriteGfx_PurpleScratch, 0x0600, 0x2805 @ [245] ANIM_TAG_PURPLE_SCRATCH
	battle_anim_pic_entry gBattleAnimSpriteGfx_PurpleSwipe, 0x1000, 0x2806 @ [246] ANIM_TAG_PURPLE_SWIPE
	battle_anim_pic_entry gBattleAnimSpriteGfx_TagHand, 0x0400, 0x2807 @ [247] ANIM_TAG_TAG_HAND
	battle_anim_pic_entry gBattleAnimSpriteGfx_SmallRedEye, 0x0020, 0x2808 @ [248] ANIM_TAG_SMALL_RED_EYE
	battle_anim_pic_entry gBattleAnimSpriteGfx_HollowOrb, 0x0080, 0x2809 @ [249] ANIM_TAG_HOLLOW_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_XSign, 0x0800, 0x280A @ [250] ANIM_TAG_X_SIGN
	battle_anim_pic_entry gBattleAnimSpriteGfx_BluegreenOrb, 0x0080, 0x280B @ [251] ANIM_TAG_BLUEGREEN_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_PawPrint, 0x0200, 0x280C @ [252] ANIM_TAG_PAW_PRINT
	battle_anim_pic_entry gBattleAnimSpriteGfx_PurpleFlame, 0x0400, 0x280D @ [253] ANIM_TAG_PURPLE_FLAME
	battle_anim_pic_entry gBattleAnimSpriteGfx_RedBall, 0x0200, 0x280E @ [254] ANIM_TAG_RED_BALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_SmellingsaltEffect, 0x0200, 0x280F @ [255] ANIM_TAG_SMELLINGSALT_EFFECT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Meteor, 0x0800, 0x2810 @ [256] ANIM_TAG_METEOR
	battle_anim_pic_entry gBattleAnimSpriteGfx_FlatRock, 0x0280, 0x2811 @ [257] ANIM_TAG_FLAT_ROCK
	battle_anim_pic_entry gBattleAnimSpriteGfx_MagnifyingGlass, 0x0200, 0x2812 @ [258] ANIM_TAG_MAGNIFYING_GLASS
	battle_anim_pic_entry gBattleAnimSpriteGfx_WaterOrb, 0x0200, 0x2813 @ [259] ANIM_TAG_BROWN_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_MetalSoundWaves, 0x0400, 0x2814 @ [260] ANIM_TAG_METAL_SOUND_WAVES
	battle_anim_pic_entry gBattleAnimSpriteGfx_FlyingDirt, 0x0200, 0x2815 @ [261] ANIM_TAG_FLYING_DIRT
	battle_anim_pic_entry gBattleAnimSpriteGfx_IcicleSpear, 0x0200, 0x2816 @ [262] ANIM_TAG_ICICLE_SPEAR
	battle_anim_pic_entry gBattleAnimSpriteGfx_Hail, 0x0080, 0x2817 @ [263] ANIM_TAG_HAIL
	battle_anim_pic_entry gBattleAnimSpriteGfx_GlowyRedOrb, 0x0020, 0x2818 @ [264] ANIM_TAG_GLOWY_RED_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_GlowyRedOrb, 0x0020, 0x2819 @ [265] ANIM_TAG_GLOWY_GREEN_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_GreenSpike, 0x0080, 0x281A @ [266] ANIM_TAG_GREEN_SPIKE
	battle_anim_pic_entry gBattleAnimSpriteGfx_CircleOfLight, 0x0800, 0x281B @ [267] ANIM_TAG_WHITE_CIRCLE_OF_LIGHT
	battle_anim_pic_entry gBattleAnimSpriteGfx_GlowyRedOrb, 0x0020, 0x281C @ [268] ANIM_TAG_GLOWY_BLUE_ORB
	battle_anim_pic_entry gBattleAnimSpriteGfx_Pokeblock, 0x0080, 0x281D @ [269] ANIM_TAG_POKEBLOCK
	battle_anim_pic_entry gBattleAnimSpriteGfx_WhiteFeather, 0x0400, 0x281E @ [270] ANIM_TAG_WHITE_FEATHER
	battle_anim_pic_entry gBattleAnimSpriteGfx_Sparkle6, 0x0080, 0x281F @ [271] ANIM_TAG_SPARKLE_6
	battle_anim_pic_entry gBattleAnimSpriteGfx_Splash, 0x0800, 0x2820 @ [272] ANIM_TAG_SPLASH
	battle_anim_pic_entry gBattleAnimSpriteGfx_SweatBead, 0x0020, 0x2821 @ [273] ANIM_TAG_SWEAT_BEAD
	battle_anim_pic_entry gBattleAnimSpriteGfx_Gem1, 0x0800, 0x2822 @ [274] ANIM_TAG_GEM_1
	battle_anim_pic_entry gBattleAnimSpriteGfx_Gem2, 0x0800, 0x2823 @ [275] ANIM_TAG_GEM_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Gem3, 0x0800, 0x2824 @ [276] ANIM_TAG_GEM_3
	battle_anim_pic_entry gBattleAnimSpriteGfx_SlamHit2, 0x1000, 0x2825 @ [277] ANIM_TAG_SLAM_HIT_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_Recycle, 0x0800, 0x2826 @ [278] ANIM_TAG_RECYCLE
	battle_anim_pic_entry gBattleAnimSpriteGfx_RedParticles, 0x00A0, 0x2827 @ [279] ANIM_TAG_RED_PARTICLES
	battle_anim_pic_entry gBattleAnimSpriteGfx_Protect, 0x0800, 0x2828 @ [280] ANIM_TAG_PROTECT
	battle_anim_pic_entry gBattleAnimSpriteGfx_DirtMound, 0x0200, 0x2829 @ [281] ANIM_TAG_DIRT_MOUND
	battle_anim_pic_entry gBattleAnimSpriteGfx_Shock3, 0x0600, 0x282A @ [282] ANIM_TAG_SHOCK_3
	battle_anim_pic_entry gBattleAnimSpriteGfx_WeatherBall, 0x0200, 0x282B @ [283] ANIM_TAG_WEATHER_BALL
	battle_anim_pic_entry gBattleAnimSpriteGfx_Bird, 0x0800, 0x282C @ [284] ANIM_TAG_BIRD
	battle_anim_pic_entry gBattleAnimSpriteGfx_CrossImpact, 0x0200, 0x282D @ [285] ANIM_TAG_CROSS_IMPACT
	battle_anim_pic_entry gBattleAnimSpriteGfx_Slash, 0x0800, 0x282E @ [286] ANIM_TAG_SLASH_2
	battle_anim_pic_entry gBattleAnimSpriteGfx_SlamHit, 0x1000, 0x282F @ [287] ANIM_TAG_WHIP_HIT
	battle_anim_pic_entry gBattleAnimSpriteGfx_GoldRing, 0x0100, 0x2830 @ [288] ANIM_TAG_BLUE_RING_2
	.purgem battle_anim_pic_entry

	@ Compatibility aliases into gBattleAnimPicTable.
	.globl gBattleAnimData_084FD250
	.set gBattleAnimData_084FD250, gBattleAnimPicTable + 0x0
	.globl gIntroData_084FD420
	.set gIntroData_084FD420, gBattleAnimPicTable + 0x1D0
	.globl gBattleAnimStatusEffectsData_084FD690
	.set gBattleAnimStatusEffectsData_084FD690, gBattleAnimPicTable + 0x440
	.globl gBattleAnimSpecialData_084FD998
	.set gBattleAnimSpecialData_084FD998, gBattleAnimPicTable + 0x748
	.globl gBattleAnimSpecialData_084FDAB8
	.set gBattleAnimSpecialData_084FDAB8, gBattleAnimPicTable + 0x868

	@ struct CompressedSpritePalette { const void *data; u16 tag; u16 pad; }
	.macro battle_anim_palette_entry data:req, tag:req
	.4byte \data
	.2byte \tag, 0
	.endm

	.globl gBattleAnimPaletteTable
gBattleAnimPaletteTable: @ 0x084FDB58
	battle_anim_palette_entry gBattleAnimSpritePal_Bone, 0x2710 @ [000] ANIM_TAG_BONE
	battle_anim_palette_entry gBattleAnimSpritePal_Spark, 0x2711 @ [001] ANIM_TAG_SPARK
	battle_anim_palette_entry gBattleAnimSpritePal_Pencil, 0x2712 @ [002] ANIM_TAG_PENCIL
	battle_anim_palette_entry gBattleAnimSpritePal_AirWave, 0x2713 @ [003] ANIM_TAG_AIR_WAVE
	battle_anim_palette_entry gBattleAnimSpritePal_Orb, 0x2714 @ [004] ANIM_TAG_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_Sword, 0x2715 @ [005] ANIM_TAG_SWORD
	battle_anim_palette_entry gBattleAnimSpritePal_Seed, 0x2716 @ [006] ANIM_TAG_SEED
	battle_anim_palette_entry gBattleAnimSpritePal_Explosion6, 0x2717 @ [007] ANIM_TAG_EXPLOSION_6
	battle_anim_palette_entry gBattleAnimSpritePal_PinkOrb, 0x2718 @ [008] ANIM_TAG_PINK_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_Gust, 0x2719 @ [009] ANIM_TAG_GUST
	battle_anim_palette_entry gBattleAnimSpritePal_IceCube, 0x271A @ [010] ANIM_TAG_ICE_CUBE
	battle_anim_palette_entry gBattleAnimSpritePal_Spark2, 0x271B @ [011] ANIM_TAG_SPARK_2
	battle_anim_palette_entry gBattleAnimSpritePal_Orange, 0x271C @ [012] ANIM_TAG_ORANGE
	battle_anim_palette_entry gBattleAnimSpritePal_YellowBall, 0x271D @ [013] ANIM_TAG_YELLOW_BALL
	battle_anim_palette_entry gBattleAnimSpritePal_LockOn, 0x271E @ [014] ANIM_TAG_LOCK_ON
	battle_anim_palette_entry gBattleAnimSpritePal_TiedBag, 0x271F @ [015] ANIM_TAG_TIED_BAG
	battle_anim_palette_entry gBattleAnimSpritePal_BlackSmoke, 0x2720 @ [016] ANIM_TAG_BLACK_SMOKE
	battle_anim_palette_entry gBattleAnimSpritePal_BlackSmoke, 0x2721 @ [017] ANIM_TAG_BLACK_BALL
	battle_anim_palette_entry gBattleAnimSpritePal_Conversion, 0x2722 @ [018] ANIM_TAG_CONVERSION
	battle_anim_palette_entry gBattleAnimSpritePal_Glass, 0x2723 @ [019] ANIM_TAG_GLASS
	battle_anim_palette_entry gBattleAnimSpritePal_HornHit, 0x2724 @ [020] ANIM_TAG_HORN_HIT
	battle_anim_palette_entry gBattleAnimSpritePal_Hit, 0x2725 @ [021] ANIM_TAG_HIT
	battle_anim_palette_entry gBattleAnimSpritePal_Hit2, 0x2726 @ [022] ANIM_TAG_HIT_2
	battle_anim_palette_entry gBattleAnimSpritePal_BlueShards, 0x2727 @ [023] ANIM_TAG_BLUE_SHARDS
	battle_anim_palette_entry gBattleAnimSpritePal_ClosingEye, 0x2728 @ [024] ANIM_TAG_CLOSING_EYE
	battle_anim_palette_entry gBattleAnimSpritePal_WavingHand, 0x2729 @ [025] ANIM_TAG_WAVING_HAND
	battle_anim_palette_entry gBattleAnimSpritePal_HitDuplicate, 0x272A @ [026] ANIM_TAG_HIT_DUPLICATE
	battle_anim_palette_entry gBattleAnimSpritePal_Leer, 0x272B @ [027] ANIM_TAG_LEER
	battle_anim_palette_entry gBattleAnimSpritePal_BlueBurst, 0x272C @ [028] ANIM_TAG_BLUE_BURST
	battle_anim_palette_entry gBattleAnimSpritePal_SmallEmber, 0x272D @ [029] ANIM_TAG_SMALL_EMBER
	battle_anim_palette_entry gBattleAnimSpritePal_GraySmoke, 0x272E @ [030] ANIM_TAG_GRAY_SMOKE
	battle_anim_palette_entry gBattleAnimSpritePal_BlueStar, 0x272F @ [031] ANIM_TAG_BLUE_STAR
	battle_anim_palette_entry gBattleAnimSpritePal_BubbleBurst, 0x2730 @ [032] ANIM_TAG_BUBBLE_BURST
	battle_anim_palette_entry gBattleAnimSpritePal_Fire, 0x2731 @ [033] ANIM_TAG_FIRE
	battle_anim_palette_entry gBattleAnimSpritePal_Fire, 0x2732 @ [034] ANIM_TAG_SPINNING_FIRE
	battle_anim_palette_entry gBattleAnimSpritePal_Fire, 0x2733 @ [035] ANIM_TAG_FIRE_PLUME
	battle_anim_palette_entry gBattleAnimSpritePal_Lightning2, 0x2734 @ [036] ANIM_TAG_LIGHTNING_2
	battle_anim_palette_entry gBattleAnimSpritePal_Lightning2, 0x2735 @ [037] ANIM_TAG_LIGHTNING
	battle_anim_palette_entry gBattleAnimSpritePal_ClawSlash2, 0x2736 @ [038] ANIM_TAG_CLAW_SLASH_2
	battle_anim_palette_entry gBattleAnimSpritePal_ClawSlash, 0x2737 @ [039] ANIM_TAG_CLAW_SLASH
	battle_anim_palette_entry gBattleAnimSpritePal_ClawSlash2, 0x2738 @ [040] ANIM_TAG_SCRATCH_3
	battle_anim_palette_entry gBattleAnimSpritePal_ClawSlash2, 0x2739 @ [041] ANIM_TAG_SCRATCH_2
	battle_anim_palette_entry gBattleAnimSpritePal_BubbleBurst2, 0x273A @ [042] ANIM_TAG_BUBBLE_BURST_2
	battle_anim_palette_entry gBattleAnimSpritePal_IceChunk, 0x273B @ [043] ANIM_TAG_ICE_CHUNK
	battle_anim_palette_entry gBattleAnimSpritePal_Glass2, 0x273C @ [044] ANIM_TAG_GLASS_2
	battle_anim_palette_entry gBattleAnimSpritePal_PinkHeart2, 0x273D @ [045] ANIM_TAG_PINK_HEART_2
	battle_anim_palette_entry gBattleAnimSpritePal_SapDrip, 0x273E @ [046] ANIM_TAG_SAP_DRIP
	battle_anim_palette_entry gBattleAnimSpritePal_SapDrip2, 0x273E @ [047] ANIM_TAG_SAP_DRIP (intentional upstream duplicate of ANIM_TAG_SAP_DRIP)
	battle_anim_palette_entry gBattleAnimSpritePal_Sparkle1, 0x2740 @ [048] ANIM_TAG_SPARKLE_1
	battle_anim_palette_entry gBattleAnimSpritePal_Sparkle2, 0x2741 @ [049] ANIM_TAG_SPARKLE_2
	battle_anim_palette_entry gBattleAnimSpritePal_HumanoidFoot, 0x2742 @ [050] ANIM_TAG_HUMANOID_FOOT
	battle_anim_palette_entry gBattleAnimSpritePal_HumanoidFoot, 0x2743 @ [051] ANIM_TAG_MONSTER_FOOT
	battle_anim_palette_entry gBattleAnimSpritePal_HumanoidFoot, 0x2744 @ [052] ANIM_TAG_HUMANOID_HAND
	battle_anim_palette_entry gBattleAnimSpritePal_HitDuplicate, 0x2745 @ [053] ANIM_TAG_NOISE_LINE
	battle_anim_palette_entry gBattleAnimSpritePal_YellowUnk, 0x2746 @ [054] ANIM_TAG_YELLOW_UNK
	battle_anim_palette_entry gBattleAnimSpritePal_HumanoidFoot, 0x2747 @ [055] ANIM_TAG_RED_FIST
	battle_anim_palette_entry gBattleAnimSpritePal_SlamHit, 0x2748 @ [056] ANIM_TAG_SLAM_HIT
	battle_anim_palette_entry gBattleAnimSpritePal_Ring, 0x2749 @ [057] ANIM_TAG_RING
	battle_anim_palette_entry gBattleAnimSpritePal_Rocks, 0x274A @ [058] ANIM_TAG_ROCKS
	battle_anim_palette_entry gBattleAnimSpritePal_Z, 0x274B @ [059] ANIM_TAG_Z
	battle_anim_palette_entry gBattleAnimSpritePal_YellowUnk2, 0x274C @ [060] ANIM_TAG_YELLOW_UNK_2
	battle_anim_palette_entry gBattleAnimSpritePal_AirSlash, 0x274D @ [061] ANIM_TAG_AIR_SLASH
	battle_anim_palette_entry gBattleAnimSpritePal_SpinningGreenOrbs, 0x274E @ [062] ANIM_TAG_SPINNING_GREEN_ORBS
	battle_anim_palette_entry gBattleAnimSpritePal_Leaf, 0x274F @ [063] ANIM_TAG_LEAF
	battle_anim_palette_entry gBattleAnimSpritePal_Finger, 0x2750 @ [064] ANIM_TAG_FINGER
	battle_anim_palette_entry gBattleAnimSpritePal_PoisonPowder, 0x2751 @ [065] ANIM_TAG_POISON_POWDER
	battle_anim_palette_entry gBattleAnimSpritePal_BrownTriangle, 0x2752 @ [066] ANIM_TAG_BROWN_TRIANGLE
	battle_anim_palette_entry gBattleAnimSpritePal_SleepPowder, 0x2753 @ [067] ANIM_TAG_SLEEP_POWDER
	battle_anim_palette_entry gBattleAnimSpritePal_StunSpore, 0x2754 @ [068] ANIM_TAG_STUN_SPORE
	battle_anim_palette_entry gBattleAnimSpritePal_PoisonPowder, 0x2755 @ [069] ANIM_TAG_POWDER
	battle_anim_palette_entry gBattleAnimSpritePal_Sparkle3, 0x2756 @ [070] ANIM_TAG_SPARKLE_3
	battle_anim_palette_entry gBattleAnimSpritePal_Sparkle3, 0x2757 @ [071] ANIM_TAG_SPARKLE_4
	battle_anim_palette_entry gBattleAnimSpritePal_MusicNotes, 0x2758 @ [072] ANIM_TAG_MUSIC_NOTES
	battle_anim_palette_entry gBattleAnimSpritePal_Duck, 0x2759 @ [073] ANIM_TAG_DUCK
	battle_anim_palette_entry gBattleAnimSpritePal_MudSand, 0x275A @ [074] ANIM_TAG_MUD_SAND
	battle_anim_palette_entry gBattleAnimSpritePal_Alert, 0x275B @ [075] ANIM_TAG_ALERT
	battle_anim_palette_entry gBattleAnimSpritePal_BlueFlames, 0x275C @ [076] ANIM_TAG_BLUE_FLAMES
	battle_anim_palette_entry gBattleAnimSpritePal_BlueFlames, 0x275D @ [077] ANIM_TAG_BLUE_FLAMES_2
	battle_anim_palette_entry gBattleAnimSpritePal_Shock4, 0x275E @ [078] ANIM_TAG_SHOCK_4
	battle_anim_palette_entry gBattleAnimSpritePal_Shock4, 0x275F @ [079] ANIM_TAG_SHOCK
	battle_anim_palette_entry gBattleAnimSpritePal_Bell2, 0x2760 @ [080] ANIM_TAG_BELL_2
	battle_anim_palette_entry gBattleAnimSpritePal_PinkGlove, 0x2761 @ [081] ANIM_TAG_PINK_GLOVE
	battle_anim_palette_entry gBattleAnimSpritePal_BlueLines, 0x2762 @ [082] ANIM_TAG_BLUE_LINES
	battle_anim_palette_entry gBattleAnimSpritePal_Impact3, 0x2763 @ [083] ANIM_TAG_IMPACT_3
	battle_anim_palette_entry gBattleAnimSpritePal_Impact2, 0x2764 @ [084] ANIM_TAG_IMPACT_2
	battle_anim_palette_entry gBattleAnimSpritePal_Reticle, 0x2765 @ [085] ANIM_TAG_RETICLE
	battle_anim_palette_entry gBattleAnimSpritePal_Breath, 0x2766 @ [086] ANIM_TAG_BREATH
	battle_anim_palette_entry gBattleAnimSpritePal_Anger, 0x2767 @ [087] ANIM_TAG_ANGER
	battle_anim_palette_entry gBattleAnimSpritePal_Snowball, 0x2768 @ [088] ANIM_TAG_SNOWBALL
	battle_anim_palette_entry gBattleAnimSpritePal_Vine, 0x2769 @ [089] ANIM_TAG_VINE
	battle_anim_palette_entry gBattleAnimSpritePal_Sword2, 0x276A @ [090] ANIM_TAG_SWORD_2
	battle_anim_palette_entry gBattleAnimSpritePal_Clapping, 0x276B @ [091] ANIM_TAG_CLAPPING
	battle_anim_palette_entry gBattleAnimSpritePal_RedTube, 0x276C @ [092] ANIM_TAG_RED_TUBE
	battle_anim_palette_entry gBattleAnimSpritePal_Amnesia, 0x276D @ [093] ANIM_TAG_AMNESIA
	battle_anim_palette_entry gBattleAnimSpritePal_String2, 0x276E @ [094] ANIM_TAG_STRING_2
	battle_anim_palette_entry gBattleAnimSpritePal_Pencil2, 0x276F @ [095] ANIM_TAG_PENCIL_2
	battle_anim_palette_entry gBattleAnimSpritePal_Petal, 0x2770 @ [096] ANIM_TAG_PETAL
	battle_anim_palette_entry gBattleAnimSpritePal_BentSpoon, 0x2771 @ [097] ANIM_TAG_BENT_SPOON
	battle_anim_palette_entry gBattleAnimSpritePal_String2, 0x2772 @ [098] ANIM_TAG_WEB
	battle_anim_palette_entry gBattleAnimSpritePal_MilkBottle, 0x2773 @ [099] ANIM_TAG_MILK_BOTTLE
	battle_anim_palette_entry gBattleAnimSpritePal_Coin, 0x2774 @ [100] ANIM_TAG_COIN
	battle_anim_palette_entry gBattleAnimSpritePal_CrackedEgg, 0x2775 @ [101] ANIM_TAG_CRACKED_EGG
	battle_anim_palette_entry gBattleAnimSpritePal_CrackedEgg, 0x2776 @ [102] ANIM_TAG_HATCHED_EGG
	battle_anim_palette_entry gBattleAnimSpritePal_FreshEgg, 0x2777 @ [103] ANIM_TAG_FRESH_EGG
	battle_anim_palette_entry gBattleAnimSpritePal_Fangs, 0x2778 @ [104] ANIM_TAG_FANGS
	battle_anim_palette_entry gBattleAnimSpritePal_Explosion2, 0x2779 @ [105] ANIM_TAG_EXPLOSION_2
	battle_anim_palette_entry gBattleAnimSpritePal_Explosion2, 0x277A @ [106] ANIM_TAG_EXPLOSION_3
	battle_anim_palette_entry gBattleAnimSpritePal_WaterDroplet, 0x277B @ [107] ANIM_TAG_WATER_DROPLET
	battle_anim_palette_entry gBattleAnimSpritePal_WaterDroplet, 0x277C @ [108] ANIM_TAG_WATER_DROPLET_2
	battle_anim_palette_entry gBattleAnimSpritePal_Seed2, 0x277D @ [109] ANIM_TAG_SEED_2
	battle_anim_palette_entry gBattleAnimSpritePal_Seed2, 0x277E @ [110] ANIM_TAG_SPROUT
	battle_anim_palette_entry gBattleAnimSpritePal_RedWand, 0x277F @ [111] ANIM_TAG_RED_WAND
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleGreenUnk, 0x2780 @ [112] ANIM_TAG_PURPLE_GREEN_UNK
	battle_anim_palette_entry gBattleAnimSpritePal_WaterColumn, 0x2781 @ [113] ANIM_TAG_WATER_COLUMN
	battle_anim_palette_entry gBattleAnimSpritePal_MudUnk, 0x2782 @ [114] ANIM_TAG_MUD_UNK
	battle_anim_palette_entry gBattleAnimSpritePal_RainDrops, 0x2783 @ [115] ANIM_TAG_RAIN_DROPS
	battle_anim_palette_entry gBattleAnimSpritePal_FurySwipes, 0x2784 @ [116] ANIM_TAG_FURY_SWIPES
	battle_anim_palette_entry gBattleAnimSpritePal_Vine2, 0x2785 @ [117] ANIM_TAG_VINE_2
	battle_anim_palette_entry gBattleAnimSpritePal_Teeth, 0x2786 @ [118] ANIM_TAG_TEETH
	battle_anim_palette_entry gBattleAnimSpritePal_Bone2, 0x2787 @ [119] ANIM_TAG_BONE_2
	battle_anim_palette_entry gBattleAnimSpritePal_WhiteBag, 0x2788 @ [120] ANIM_TAG_WHITE_BAG
	battle_anim_palette_entry gBattleAnimSpritePal_Unknown, 0x2789 @ [121] ANIM_TAG_UNKNOWN
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleCoral, 0x278A @ [122] ANIM_TAG_PURPLE_CORAL
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleCoral, 0x278B @ [123] ANIM_TAG_PURPLE_DROPLET
	battle_anim_palette_entry gBattleAnimSpritePal_Shock2, 0x278C @ [124] ANIM_TAG_SHOCK_2
	battle_anim_palette_entry gBattleAnimSpritePal_ClosingEye2, 0x278D @ [125] ANIM_TAG_CLOSING_EYE_2
	battle_anim_palette_entry gBattleAnimSpritePal_MetalBall, 0x278E @ [126] ANIM_TAG_METAL_BALL
	battle_anim_palette_entry gBattleAnimSpritePal_MonsterDoll, 0x278F @ [127] ANIM_TAG_MONSTER_DOLL
	battle_anim_palette_entry gBattleAnimSpritePal_Whirlwind, 0x2790 @ [128] ANIM_TAG_WHIRLWIND
	battle_anim_palette_entry gBattleAnimSpritePal_Whirlwind, 0x2791 @ [129] ANIM_TAG_WHIRLWIND_2
	battle_anim_palette_entry gBattleAnimSpritePal_Explosion4, 0x2792 @ [130] ANIM_TAG_EXPLOSION_4
	battle_anim_palette_entry gBattleAnimSpritePal_Explosion4, 0x2793 @ [131] ANIM_TAG_EXPLOSION_5
	battle_anim_palette_entry gBattleAnimSpritePal_Tongue, 0x2794 @ [132] ANIM_TAG_TONGUE
	battle_anim_palette_entry gBattleAnimSpritePal_Smoke, 0x2795 @ [133] ANIM_TAG_SMOKE
	battle_anim_palette_entry gBattleAnimSpritePal_Smoke, 0x2796 @ [134] ANIM_TAG_SMOKE_2
	battle_anim_palette_entry gBattleAnimSpritePal_Impact, 0x2797 @ [135] ANIM_TAG_IMPACT
	battle_anim_palette_entry gBattleAnimSpritePal_CircleImpact, 0x2798 @ [136] ANIM_TAG_CIRCLE_IMPACT
	battle_anim_palette_entry gBattleAnimSpritePal_Impact, 0x2799 @ [137] ANIM_TAG_SCRATCH
	battle_anim_palette_entry gBattleAnimSpritePal_Impact, 0x279A @ [138] ANIM_TAG_CUT
	battle_anim_palette_entry gBattleAnimSpritePal_SharpTeeth, 0x279B @ [139] ANIM_TAG_SHARP_TEETH
	battle_anim_palette_entry gBattleAnimSpritePal_RainbowRings, 0x279C @ [140] ANIM_TAG_RAINBOW_RINGS
	battle_anim_palette_entry gBattleAnimSpritePal_IceCrystals, 0x279D @ [141] ANIM_TAG_ICE_CRYSTALS
	battle_anim_palette_entry gBattleAnimSpritePal_IceCrystals, 0x279E @ [142] ANIM_TAG_ICE_SPIKES
	battle_anim_palette_entry gBattleAnimSpritePal_HandsAndFeet, 0x279F @ [143] ANIM_TAG_HANDS_AND_FEET
	battle_anim_palette_entry gBattleAnimSpritePal_MistCloud, 0x27A0 @ [144] ANIM_TAG_MIST_CLOUD
	battle_anim_palette_entry gBattleAnimSpritePal_SharpTeeth, 0x27A1 @ [145] ANIM_TAG_CLAMP
	battle_anim_palette_entry gBattleAnimSpritePal_RainDrops, 0x27A2 @ [146] ANIM_TAG_BUBBLE
	battle_anim_palette_entry gBattleAnimSpritePal_Orbs, 0x27A3 @ [147] ANIM_TAG_ORBS
	battle_anim_palette_entry gBattleAnimSpritePal_WaterImpact, 0x27A4 @ [148] ANIM_TAG_WATER_IMPACT
	battle_anim_palette_entry gBattleAnimSpritePal_WaterImpact, 0x27A5 @ [149] ANIM_TAG_WATER_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_PoisonBubble, 0x27A6 @ [150] ANIM_TAG_POISON_BUBBLE
	battle_anim_palette_entry gBattleAnimSpritePal_PoisonBubble, 0x27A7 @ [151] ANIM_TAG_TOXIC_BUBBLE
	battle_anim_palette_entry gBattleAnimSpritePal_Spikes, 0x27A8 @ [152] ANIM_TAG_SPIKES
	battle_anim_palette_entry gBattleAnimSpritePal_HornHit2, 0x27A9 @ [153] ANIM_TAG_HORN_HIT_2
	battle_anim_palette_entry gBattleAnimSpritePal_AirWave2, 0x27AA @ [154] ANIM_TAG_AIR_WAVE_2
	battle_anim_palette_entry gBattleAnimSpritePal_SmallBubbles, 0x27AB @ [155] ANIM_TAG_SMALL_BUBBLES
	battle_anim_palette_entry gBattleAnimSpritePal_RoundShadow, 0x27AC @ [156] ANIM_TAG_ROUND_SHADOW
	battle_anim_palette_entry gBattleAnimSpritePal_Sunlight, 0x27AD @ [157] ANIM_TAG_SUNLIGHT
	battle_anim_palette_entry gBattleAnimSpritePal_Spore, 0x27AE @ [158] ANIM_TAG_SPORE
	battle_anim_palette_entry gBattleAnimSpritePal_Flower, 0x27AF @ [159] ANIM_TAG_FLOWER
	battle_anim_palette_entry gBattleAnimSpritePal_RazorLeaf, 0x27B0 @ [160] ANIM_TAG_RAZOR_LEAF
	battle_anim_palette_entry gBattleAnimSpritePal_Needle, 0x27B1 @ [161] ANIM_TAG_NEEDLE
	battle_anim_palette_entry gBattleAnimSpritePal_WhirlwindLines, 0x27B2 @ [162] ANIM_TAG_WHIRLWIND_LINES
	battle_anim_palette_entry gBattleAnimSpritePal_GoldRing, 0x27B3 @ [163] ANIM_TAG_GOLD_RING
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleRing, 0x27B4 @ [164] ANIM_TAG_PURPLE_RING
	battle_anim_palette_entry gBattleAnimSpritePal_BlueRing, 0x27B5 @ [165] ANIM_TAG_BLUE_RING
	battle_anim_palette_entry gBattleAnimSpritePal_GreenLightWall, 0x27B6 @ [166] ANIM_TAG_GREEN_LIGHT_WALL
	battle_anim_palette_entry gBattleAnimSpritePal_BlueLightWall, 0x27B7 @ [167] ANIM_TAG_BLUE_LIGHT_WALL
	battle_anim_palette_entry gBattleAnimSpritePal_RedLightWall, 0x27B8 @ [168] ANIM_TAG_RED_LIGHT_WALL
	battle_anim_palette_entry gBattleAnimSpritePal_GrayLightWall, 0x27B9 @ [169] ANIM_TAG_GRAY_LIGHT_WALL
	battle_anim_palette_entry gBattleAnimSpritePal_OrangeLightWall, 0x27BA @ [170] ANIM_TAG_ORANGE_LIGHT_WALL
	battle_anim_palette_entry gBattleAnimSpritePal_BlackBall2, 0x27BB @ [171] ANIM_TAG_BLACK_BALL_2
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleGasCloud, 0x27BC @ [172] ANIM_TAG_PURPLE_GAS_CLOUD
	battle_anim_palette_entry gBattleAnimSpritePal_Spark, 0x27BD @ [173] ANIM_TAG_SPARK_H
	battle_anim_palette_entry gBattleAnimSpritePal_YellowStar, 0x27BE @ [174] ANIM_TAG_YELLOW_STAR
	battle_anim_palette_entry gBattleAnimSpritePal_LargeFreshEgg, 0x27BF @ [175] ANIM_TAG_LARGE_FRESH_EGG
	battle_anim_palette_entry gBattleAnimSpritePal_ShadowBall, 0x27C0 @ [176] ANIM_TAG_SHADOW_BALL
	battle_anim_palette_entry gBattleAnimSpritePal_Lick, 0x27C1 @ [177] ANIM_TAG_LICK
	battle_anim_palette_entry gBattleAnimSpritePal_VoidLines, 0x27C2 @ [178] ANIM_TAG_VOID_LINES
	battle_anim_palette_entry gBattleAnimSpritePal_String, 0x27C3 @ [179] ANIM_TAG_STRING
	battle_anim_palette_entry gBattleAnimSpritePal_String, 0x27C4 @ [180] ANIM_TAG_WEB_THREAD
	battle_anim_palette_entry gBattleAnimSpritePal_String, 0x27C5 @ [181] ANIM_TAG_SPIDER_WEB
	battle_anim_palette_entry gBattleAnimSpritePal_Lightbulb, 0x27C6 @ [182] ANIM_TAG_LIGHTBULB
	battle_anim_palette_entry gBattleAnimSpritePal_Slash, 0x27C7 @ [183] ANIM_TAG_SLASH
	battle_anim_palette_entry gBattleAnimSpritePal_FocusEnergy, 0x27C8 @ [184] ANIM_TAG_FOCUS_ENERGY
	battle_anim_palette_entry gBattleAnimSpritePal_SphereToCube, 0x27C9 @ [185] ANIM_TAG_SPHERE_TO_CUBE
	battle_anim_palette_entry gBattleAnimSpritePal_Tendrils, 0x27CA @ [186] ANIM_TAG_TENDRILS
	battle_anim_palette_entry gBattleAnimSpritePal_Eye, 0x27CB @ [187] ANIM_TAG_EYE
	battle_anim_palette_entry gBattleAnimSpritePal_WhiteShadow, 0x27CC @ [188] ANIM_TAG_WHITE_SHADOW
	battle_anim_palette_entry gBattleAnimSpritePal_TealAlert, 0x27CD @ [189] ANIM_TAG_TEAL_ALERT
	battle_anim_palette_entry gBattleAnimSpritePal_OpeningEye, 0x27CE @ [190] ANIM_TAG_OPENING_EYE
	battle_anim_palette_entry gBattleAnimSpritePal_RoundWhiteHalo, 0x27CF @ [191] ANIM_TAG_ROUND_WHITE_HALO
	battle_anim_palette_entry gBattleAnimSpritePal_FangAttack, 0x27D0 @ [192] ANIM_TAG_FANG_ATTACK
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleHandOutline, 0x27D1 @ [193] ANIM_TAG_PURPLE_HAND_OUTLINE
	battle_anim_palette_entry gBattleAnimSpritePal_Moon, 0x27D2 @ [194] ANIM_TAG_MOON
	battle_anim_palette_entry gBattleAnimSpritePal_GreenSparkle, 0x27D3 @ [195] ANIM_TAG_GREEN_SPARKLE
	battle_anim_palette_entry gBattleAnimSpritePal_Spiral, 0x27D4 @ [196] ANIM_TAG_SPIRAL
	battle_anim_palette_entry gBattleAnimSpritePal_SnoreZ, 0x27D5 @ [197] ANIM_TAG_SNORE_Z
	battle_anim_palette_entry gBattleAnimSpritePal_Explosion, 0x27D6 @ [198] ANIM_TAG_EXPLOSION
	battle_anim_palette_entry gBattleAnimSpritePal_Nail, 0x27D7 @ [199] ANIM_TAG_NAIL
	battle_anim_palette_entry gBattleAnimSpritePal_GhostlySpirit, 0x27D8 @ [200] ANIM_TAG_GHOSTLY_SPIRIT
	battle_anim_palette_entry gBattleAnimSpritePal_WarmRock, 0x27D9 @ [201] ANIM_TAG_WARM_ROCK
	battle_anim_palette_entry gBattleAnimSpritePal_BreakingEgg, 0x27DA @ [202] ANIM_TAG_BREAKING_EGG
	battle_anim_palette_entry gBattleAnimSpritePal_ThinRing, 0x27DB @ [203] ANIM_TAG_THIN_RING
	battle_anim_palette_entry gBattleAnimSpritePal_PunchImpact, 0x27DC @ [204] ANIM_TAG_PUNCH_IMPACT
	battle_anim_palette_entry gBattleAnimSpritePal_Bell, 0x27DD @ [205] ANIM_TAG_BELL
	battle_anim_palette_entry gBattleAnimSpritePal_MusicNotes2, 0x27DE @ [206] ANIM_TAG_MUSIC_NOTES_2
	battle_anim_palette_entry gBattleAnimSpritePal_SpeedDust, 0x27DF @ [207] ANIM_TAG_SPEED_DUST
	battle_anim_palette_entry gBattleAnimSpritePal_BlueLightWall, 0x27E0 @ [208] ANIM_TAG_TORN_METAL
	battle_anim_palette_entry gBattleAnimSpritePal_ThoughtBubble, 0x27E1 @ [209] ANIM_TAG_THOUGHT_BUBBLE
	battle_anim_palette_entry gBattleAnimSpritePal_MagentaHeart, 0x27E2 @ [210] ANIM_TAG_MAGENTA_HEART
	battle_anim_palette_entry gBattleAnimSpritePal_ElectricOrbs, 0x27E3 @ [211] ANIM_TAG_ELECTRIC_ORBS
	battle_anim_palette_entry gBattleAnimSpritePal_ElectricOrbs, 0x27E4 @ [212] ANIM_TAG_CIRCLE_OF_LIGHT
	battle_anim_palette_entry gBattleAnimSpritePal_ElectricOrbs, 0x27E5 @ [213] ANIM_TAG_ELECTRICITY
	battle_anim_palette_entry gBattleAnimSpritePal_Finger, 0x27E6 @ [214] ANIM_TAG_FINGER_2
	battle_anim_palette_entry gBattleAnimSpritePal_MovementWaves, 0x27E7 @ [215] ANIM_TAG_MOVEMENT_WAVES
	battle_anim_palette_entry gBattleAnimSpritePal_RedHeart, 0x27E8 @ [216] ANIM_TAG_RED_HEART
	battle_anim_palette_entry gBattleAnimSpritePal_RedOrb, 0x27E9 @ [217] ANIM_TAG_RED_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_EyeSparkle, 0x27EA @ [218] ANIM_TAG_EYE_SPARKLE
	battle_anim_palette_entry gBattleAnimSpritePal_PinkHeart, 0x27EB @ [219] ANIM_TAG_PINK_HEART
	battle_anim_palette_entry gBattleAnimSpritePal_Angel, 0x27EC @ [220] ANIM_TAG_ANGEL
	battle_anim_palette_entry gBattleAnimSpritePal_Devil, 0x27ED @ [221] ANIM_TAG_DEVIL
	battle_anim_palette_entry gBattleAnimSpritePal_Swipe, 0x27EE @ [222] ANIM_TAG_SWIPE
	battle_anim_palette_entry gBattleAnimSpritePal_Roots, 0x27EF @ [223] ANIM_TAG_ROOTS
	battle_anim_palette_entry gBattleAnimSpritePal_ItemBag, 0x27F0 @ [224] ANIM_TAG_ITEM_BAG
	battle_anim_palette_entry gBattleAnimSpritePal_JaggedMusicNote, 0x27F1 @ [225] ANIM_TAG_JAGGED_MUSIC_NOTE
	battle_anim_palette_entry gBattleAnimSpritePal_Pokeball, 0x27F2 @ [226] ANIM_TAG_POKEBALL
	battle_anim_palette_entry gBattleAnimSpritePal_Pokeball, 0x27F3 @ [227] ANIM_TAG_SPOTLIGHT
	battle_anim_palette_entry gBattleAnimSpritePal_LetterZ, 0x27F4 @ [228] ANIM_TAG_LETTER_Z
	battle_anim_palette_entry gBattleAnimSpritePal_RapidSpin, 0x27F5 @ [229] ANIM_TAG_RAPID_SPIN
	battle_anim_palette_entry gBattleAnimSpritePal_TriAttackTriangle, 0x27F6 @ [230] ANIM_TAG_TRI_ATTACK_TRIANGLE
	battle_anim_palette_entry gBattleAnimSpritePal_WispOrb, 0x27F7 @ [231] ANIM_TAG_WISP_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_WispOrb, 0x27F8 @ [232] ANIM_TAG_WISP_FIRE
	battle_anim_palette_entry gBattleAnimSpritePal_GoldStars, 0x27F9 @ [233] ANIM_TAG_GOLD_STARS
	battle_anim_palette_entry gBattleAnimSpritePal_EclipsingOrb, 0x27FA @ [234] ANIM_TAG_ECLIPSING_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_GrayOrb, 0x27FB @ [235] ANIM_TAG_GRAY_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_BlueOrb, 0x27FC @ [236] ANIM_TAG_BLUE_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_RedOrb2, 0x27FD @ [237] ANIM_TAG_RED_ORB_2
	battle_anim_palette_entry gBattleAnimSpritePal_PinkPetal, 0x27FE @ [238] ANIM_TAG_PINK_PETAL
	battle_anim_palette_entry gBattleAnimSpritePal_PainSplit, 0x27FF @ [239] ANIM_TAG_PAIN_SPLIT
	battle_anim_palette_entry gBattleAnimSpritePal_Confetti, 0x2800 @ [240] ANIM_TAG_CONFETTI
	battle_anim_palette_entry gBattleAnimSpritePal_GreenStar, 0x2801 @ [241] ANIM_TAG_GREEN_STAR
	battle_anim_palette_entry gBattleAnimSpritePal_PinkCloud, 0x2802 @ [242] ANIM_TAG_PINK_CLOUD
	battle_anim_palette_entry gBattleAnimSpritePal_SweatDrop, 0x2803 @ [243] ANIM_TAG_SWEAT_DROP
	battle_anim_palette_entry gBattleAnimSpritePal_GuardRing, 0x2804 @ [244] ANIM_TAG_GUARD_RING
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleScratch, 0x2805 @ [245] ANIM_TAG_PURPLE_SCRATCH
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleScratch, 0x2806 @ [246] ANIM_TAG_PURPLE_SWIPE
	battle_anim_palette_entry gBattleAnimSpritePal_Finger, 0x2807 @ [247] ANIM_TAG_TAG_HAND
	battle_anim_palette_entry gBattleAnimSpritePal_SmallRedEye, 0x2808 @ [248] ANIM_TAG_SMALL_RED_EYE
	battle_anim_palette_entry gBattleAnimSpritePal_HollowOrb, 0x2809 @ [249] ANIM_TAG_HOLLOW_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_HollowOrb, 0x280A @ [250] ANIM_TAG_X_SIGN
	battle_anim_palette_entry gBattleAnimSpritePal_BluegreenOrb, 0x280B @ [251] ANIM_TAG_BLUEGREEN_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_PawPrint, 0x280C @ [252] ANIM_TAG_PAW_PRINT
	battle_anim_palette_entry gBattleAnimSpritePal_PurpleFlame, 0x280D @ [253] ANIM_TAG_PURPLE_FLAME
	battle_anim_palette_entry gBattleAnimSpritePal_RedBall, 0x280E @ [254] ANIM_TAG_RED_BALL
	battle_anim_palette_entry gBattleAnimSpritePal_SmellingsaltEffect, 0x280F @ [255] ANIM_TAG_SMELLINGSALT_EFFECT
	battle_anim_palette_entry gBattleAnimSpritePal_Meteor, 0x2810 @ [256] ANIM_TAG_METEOR
	battle_anim_palette_entry gBattleAnimSpritePal_FlatRock, 0x2811 @ [257] ANIM_TAG_FLAT_ROCK
	battle_anim_palette_entry gBattleAnimSpritePal_MagnifyingGlass, 0x2812 @ [258] ANIM_TAG_MAGNIFYING_GLASS
	battle_anim_palette_entry gBattleAnimSpritePal_BrownOrb, 0x2813 @ [259] ANIM_TAG_BROWN_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_MetalSoundWaves, 0x2814 @ [260] ANIM_TAG_METAL_SOUND_WAVES
	battle_anim_palette_entry gBattleAnimSpritePal_FlyingDirt, 0x2815 @ [261] ANIM_TAG_FLYING_DIRT
	battle_anim_palette_entry gBattleAnimSpritePal_IcicleSpear, 0x2816 @ [262] ANIM_TAG_ICICLE_SPEAR
	battle_anim_palette_entry gBattleAnimSpritePal_Hail, 0x2817 @ [263] ANIM_TAG_HAIL
	battle_anim_palette_entry gBattleAnimSpritePal_GlowyRedOrb, 0x2818 @ [264] ANIM_TAG_GLOWY_RED_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_GlowyGreenOrb, 0x2819 @ [265] ANIM_TAG_GLOWY_GREEN_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_GreenSpike, 0x281A @ [266] ANIM_TAG_GREEN_SPIKE
	battle_anim_palette_entry gBattleAnimSpritePal_WhiteCircleOfLight, 0x281B @ [267] ANIM_TAG_WHITE_CIRCLE_OF_LIGHT
	battle_anim_palette_entry gBattleAnimSpritePal_GlowyBlueOrb, 0x281C @ [268] ANIM_TAG_GLOWY_BLUE_ORB
	battle_anim_palette_entry gBattleAnimSpritePal_Pokeblock, 0x281D @ [269] ANIM_TAG_POKEBLOCK
	battle_anim_palette_entry gBattleAnimSpritePal_WhiteFeather, 0x281E @ [270] ANIM_TAG_WHITE_FEATHER
	battle_anim_palette_entry gBattleAnimSpritePal_Sparkle6, 0x281F @ [271] ANIM_TAG_SPARKLE_6
	battle_anim_palette_entry gBattleAnimSpritePal_Splash, 0x2820 @ [272] ANIM_TAG_SPLASH
	battle_anim_palette_entry gBattleAnimSpritePal_Splash, 0x2821 @ [273] ANIM_TAG_SWEAT_BEAD
	battle_anim_palette_entry gBattleAnimSpritePal_Gem1, 0x2822 @ [274] ANIM_TAG_GEM_1
	battle_anim_palette_entry gBattleAnimSpritePal_Gem1, 0x2823 @ [275] ANIM_TAG_GEM_2
	battle_anim_palette_entry gBattleAnimSpritePal_Gem1, 0x2824 @ [276] ANIM_TAG_GEM_3
	battle_anim_palette_entry gBattleAnimSpritePal_SlamHit2, 0x2825 @ [277] ANIM_TAG_SLAM_HIT_2
	battle_anim_palette_entry gBattleAnimSpritePal_Recycle, 0x2826 @ [278] ANIM_TAG_RECYCLE
	battle_anim_palette_entry gBattleAnimSpritePal_RedParticles, 0x2827 @ [279] ANIM_TAG_RED_PARTICLES
	battle_anim_palette_entry gBattleAnimSpritePal_Protect, 0x2828 @ [280] ANIM_TAG_PROTECT
	battle_anim_palette_entry gBattleAnimSpritePal_DirtMound, 0x2829 @ [281] ANIM_TAG_DIRT_MOUND
	battle_anim_palette_entry gBattleAnimSpritePal_Shock3, 0x282A @ [282] ANIM_TAG_SHOCK_3
	battle_anim_palette_entry gBattleAnimSpritePal_WeatherBall, 0x282B @ [283] ANIM_TAG_WEATHER_BALL
	battle_anim_palette_entry gBattleAnimSpritePal_Bird, 0x282C @ [284] ANIM_TAG_BIRD
	battle_anim_palette_entry gBattleAnimSpritePal_CrossImpact, 0x282D @ [285] ANIM_TAG_CROSS_IMPACT
	battle_anim_palette_entry gBattleAnimSpritePal_Slash2, 0x282E @ [286] ANIM_TAG_SLASH_2
	battle_anim_palette_entry gBattleAnimSpritePal_WhipHit, 0x282F @ [287] ANIM_TAG_WHIP_HIT
	battle_anim_palette_entry gBattleAnimSpritePal_BlueRing2, 0x2830 @ [288] ANIM_TAG_BLUE_RING_2
	.purgem battle_anim_palette_entry

	@ Compatibility aliases into gBattleAnimPaletteTable.
	.globl gIntroData_084FDD28
	.set gIntroData_084FDD28, gBattleAnimPaletteTable + 0x1D0
	.globl gBattleAnimStatusEffectsData_084FDF98
	.set gBattleAnimStatusEffectsData_084FDF98, gBattleAnimPaletteTable + 0x440
	.globl gBattleAnimSpecialData_084FE2A0
	.set gBattleAnimSpecialData_084FE2A0, gBattleAnimPaletteTable + 0x748
	.globl gBattleAnimSpecialData_084FE3C0
	.set gBattleAnimSpecialData_084FE3C0, gBattleAnimPaletteTable + 0x868

	@ Battle animation background assets (semantic absolute aliases).
	.globl gBattleAnimBgImage_Ice
	.set gBattleAnimBgImage_Ice, 0x08D8DC98
	.globl gBattleAnimBgPalette_Ice
	.set gBattleAnimBgPalette_Ice, 0x08D8E608
	.globl gBattleAnimBgTilemap_Ice
	.set gBattleAnimBgTilemap_Ice, 0x08D8E62C
	.globl gBattleAnimBgImage_InAir
	.set gBattleAnimBgImage_InAir, 0x08D8F3C8
	.globl gBattleAnimBgPalette_InAir
	.set gBattleAnimBgPalette_InAir, 0x08D8F524
	.globl gBattleAnimBgTilemap_InAir
	.set gBattleAnimBgTilemap_InAir, 0x08D8F54C
	.globl gBattleAnimBgImage_Ghost
	.set gBattleAnimBgImage_Ghost, 0x08D90028
	.globl gBattleAnimBgPalette_Ghost
	.set gBattleAnimBgPalette_Ghost, 0x08D90CF0
	.globl gBattleAnimBgTilemap_Ghost
	.set gBattleAnimBgTilemap_Ghost, 0x08D90D0C
	.globl gBattleAnimBgPalette_SolarBeam
	.set gBattleAnimBgPalette_SolarBeam, 0x08D91028
	.globl gBattleAnimBgPalette_Cosmic
	.set gBattleAnimBgPalette_Cosmic, 0x08D92AB4
	.globl gBattleAnimBgImage_Cosmic
	.set gBattleAnimBgImage_Cosmic, 0x08D92ADC
	.globl gBattleAnimBgTilemap_Cosmic
	.set gBattleAnimBgTilemap_Cosmic, 0x08D92D3C
	.globl gBattleAnimBgImage_Fissure
	.set gBattleAnimBgImage_Fissure, 0x08D94010
	.globl gBattleAnimBgPalette_Fissure
	.set gBattleAnimBgPalette_Fissure, 0x08D94304
	.globl gBattleAnimBgTilemap_Fissure
	.set gBattleAnimBgTilemap_Fissure, 0x08D94320

	@ struct BattleAnimBackground { image, palette, tilemap }
	.macro battle_anim_bg_entry image:req, palette:req, tilemap:req
	.4byte \image, \palette, \tilemap
	.endm

	.globl gBattleAnimBackgroundTable
gBattleAnimBackgroundTable: @ 0x084FE460
	battle_anim_bg_entry gBattleAnimBgImage_Dark, gBattleAnimBgPalette_Dark, gBattleAnimBgTilemap_Dark @ [00] BG_NONE
	battle_anim_bg_entry gBattleAnimBgImage_Dark, gBattleAnimBgPalette_Dark, gBattleAnimBgTilemap_Dark @ [01] BG_DARK
	battle_anim_bg_entry gBattleAnimBgImage_Ghost, gBattleAnimBgPalette_Ghost, gBattleAnimBgTilemap_Ghost @ [02] BG_GHOST
	battle_anim_bg_entry gBattleAnimBgImage_Psychic, gBattleAnimBgPalette_Psychic, gBattleAnimBgTilemap_Psychic @ [03] BG_PSYCHIC
	battle_anim_bg_entry gBattleAnimBgImage_Impact, gBattleAnimBgPalette_Impact, gBattleAnimBgTilemap_ImpactOpponent @ [04] BG_IMPACT_OPPONENT
	battle_anim_bg_entry gBattleAnimBgImage_Impact, gBattleAnimBgPalette_Impact, gBattleAnimBgTilemap_ImpactPlayer @ [05] BG_IMPACT_PLAYER
	battle_anim_bg_entry gBattleAnimBgImage_Impact, gBattleAnimBgPalette_Impact, gBattleAnimBgTilemap_ImpactContests @ [06] BG_IMPACT_CONTESTS
	battle_anim_bg_entry gBattleAnimBgImage_Drill, gBattleAnimBgPalette_Drill, gBattleAnimBgTilemap_Drill @ [07] BG_DRILL
	battle_anim_bg_entry gBattleAnimBgImage_Drill, gBattleAnimBgPalette_Drill, gBattleAnimBgTilemap_DrillContests @ [08] BG_DRILL_CONTESTS
	battle_anim_bg_entry gBattleAnimBgImage_Highspeed, gBattleAnimBgPalette_Highspeed, gBattleAnimBgTilemap_HighspeedOpponent @ [09] BG_HIGHSPEED_OPPONENT
	battle_anim_bg_entry gBattleAnimBgImage_Highspeed, gBattleAnimBgPalette_Highspeed, gBattleAnimBgTilemap_HighspeedPlayer @ [10] BG_HIGHSPEED_PLAYER
	battle_anim_bg_entry gBattleAnimBgImage_Thunder, gBattleAnimBgPalette_Thunder, gBattleAnimBgTilemap_Thunder @ [11] BG_THUNDER
	battle_anim_bg_entry gBattleAnimBgImage_Guillotine, gBattleAnimBgPalette_Guillotine, gBattleAnimBgTilemap_GuillotineOpponent @ [12] BG_GUILLOTINE_OPPONENT
	battle_anim_bg_entry gBattleAnimBgImage_Guillotine, gBattleAnimBgPalette_Guillotine, gBattleAnimBgTilemap_GuillotinePlayer @ [13] BG_GUILLOTINE_PLAYER
	battle_anim_bg_entry gBattleAnimBgImage_Guillotine, gBattleAnimBgPalette_Guillotine, gBattleAnimBgTilemap_GuillotineContests @ [14] BG_GUILLOTINE_CONTESTS
	battle_anim_bg_entry gBattleAnimBgImage_Ice, gBattleAnimBgPalette_Ice, gBattleAnimBgTilemap_Ice @ [15] BG_ICE
	battle_anim_bg_entry gBattleAnimBgImage_Cosmic, gBattleAnimBgPalette_Cosmic, gBattleAnimBgTilemap_Cosmic @ [16] BG_COSMIC
	battle_anim_bg_entry gBattleAnimBgImage_InAir, gBattleAnimBgPalette_InAir, gBattleAnimBgTilemap_InAir @ [17] BG_IN_AIR
	battle_anim_bg_entry gBattleAnimBgImage_Drill, gBattleAnimBgPalette_Sky, gBattleAnimBgTilemap_Drill @ [18] BG_SKY
	battle_anim_bg_entry gBattleAnimBgImage_Drill, gBattleAnimBgPalette_Sky, gBattleAnimBgTilemap_DrillContests @ [19] BG_SKY_CONTESTS
	battle_anim_bg_entry gBattleAnimBgImage_Aurora, gBattleAnimBgPalette_Aurora, gBattleAnimBgTilemap_Aurora @ [20] BG_AURORA
	battle_anim_bg_entry gBattleAnimBgImage_Fissure, gBattleAnimBgPalette_Fissure, gBattleAnimBgTilemap_Fissure @ [21] BG_FISSURE
	battle_anim_bg_entry gBattleAnimBgImage_Highspeed, gBattleAnimBgPalette_Bug, gBattleAnimBgTilemap_HighspeedOpponent @ [22] BG_BUG_OPPONENT
	battle_anim_bg_entry gBattleAnimBgImage_Highspeed, gBattleAnimBgPalette_Bug, gBattleAnimBgTilemap_HighspeedPlayer @ [23] BG_BUG_PLAYER
	battle_anim_bg_entry gBattleAnimBgImage_Impact, gBattleAnimBgPalette_SolarBeam, gBattleAnimBgTilemap_ImpactOpponent @ [24] BG_SOLAR_BEAM_OPPONENT
	battle_anim_bg_entry gBattleAnimBgImage_Impact, gBattleAnimBgPalette_SolarBeam, gBattleAnimBgTilemap_ImpactPlayer @ [25] BG_SOLAR_BEAM_PLAYER
	battle_anim_bg_entry gBattleAnimBgImage_Impact, gBattleAnimBgPalette_SolarBeam, gBattleAnimBgTilemap_ImpactContests @ [26] BG_SOLAR_BEAM_CONTESTS
	.purgem battle_anim_bg_entry

	@ Compatibility aliases.
	.globl gBattleAnimData_084FE460
	.set gBattleAnimData_084FE460, gBattleAnimBackgroundTable
	.set sPointerTable_084FE460, gBattleAnimBackgroundTable

	@ Battle animation script opcode dispatch table.
	@ JP function labels are retained; pinned upstream Cmd_* semantics are
	@ recorded per opcode to avoid unsafe function-label renames.
	.globl gBattleAnimScriptCmdTable
gBattleAnimScriptCmdTable: @ 0x084FE5A4
	.4byte ScriptCmd_loadspritegfx @ opcode 0x00; Cmd_loadspritegfx
	.4byte ScriptCmd_unloadspritegfx @ opcode 0x01; Cmd_unloadspritegfx
	.4byte ScriptCmd_createsprite @ opcode 0x02; Cmd_createsprite
	.4byte ScriptCmd_createvisualtask @ opcode 0x03; Cmd_createvisualtask
	.4byte ScriptCmd_delay @ opcode 0x04; Cmd_delay
	.4byte ScriptCmd_waitbgfadein @ opcode 0x05; Cmd_waitforvisualfinish
	.4byte ScriptCmd_hang2 @ opcode 0x06; Cmd_nop
	.4byte ScriptCmd_stopsound @ opcode 0x07; Cmd_nop2
	.4byte ScriptCmd_end @ opcode 0x08; Cmd_end
	.4byte ScriptCmd_playse @ opcode 0x09; Cmd_playse
	.4byte ScriptCmd_monbg @ opcode 0x0A; Cmd_monbg
	.4byte ScriptCmd_clearmonbg @ opcode 0x0B; Cmd_clearmonbg
	.4byte ScriptCmd_setalpha @ opcode 0x0C; Cmd_setalpha
	.4byte ScriptCmd_blendoff @ opcode 0x0D; Cmd_blendoff
	.4byte ScriptCmd_call @ opcode 0x0E; Cmd_call
	.4byte ScriptCmd_return @ opcode 0x0F; Cmd_return
	.4byte ScriptCmd_setarg @ opcode 0x10; Cmd_setarg
	.4byte ScriptCmd_choosetwoturnanim @ opcode 0x11; Cmd_choosetwoturnanim
	.4byte ScriptCmd_jumpifmoveturn @ opcode 0x12; Cmd_jumpifmoveturn
	.4byte ScriptCmd_goto @ opcode 0x13; Cmd_goto
	.4byte ScriptCmd_fadetobg @ opcode 0x14; Cmd_fadetobg
	.4byte ScriptCmd_restorebg @ opcode 0x15; Cmd_restorebg
	.4byte ScriptCmd_waitbgfadeout @ opcode 0x16; Cmd_waitbgfadeout
	.4byte ScriptCmd_waitforvisualfinish @ opcode 0x17; Cmd_waitbgfadein
	.4byte ScriptCmd_changebg @ opcode 0x18; Cmd_changebg
	.4byte ScriptCmd_playsewithpan @ opcode 0x19; Cmd_playsewithpan
	.4byte ScriptCmd_setpan @ opcode 0x1A; Cmd_setpan
	.4byte ScriptCmd_panse_1B @ opcode 0x1B; Cmd_panse
	.4byte ScriptCmd_loopsewithpan @ opcode 0x1C; Cmd_loopsewithpan
	.4byte ScriptCmd_waitplaysewithpan @ opcode 0x1D; Cmd_waitplaysewithpan
	.4byte ScriptCmd_setbldcnt @ opcode 0x1E; Cmd_setbldcnt
	.4byte ScriptCmd_createsoundtask @ opcode 0x1F; Cmd_createsoundtask
	.4byte ScriptCmd_waitsound @ opcode 0x20; Cmd_waitsound
	.4byte ScriptCmd_jumpargeq @ opcode 0x21; Cmd_jumpargeq
	.4byte ScriptCmd_monbg_22 @ opcode 0x22; Cmd_monbg_static
	.4byte ScriptCmd_clearmonbg_23 @ opcode 0x23; Cmd_clearmonbg_static
	.4byte ScriptCmd_jumpifcontest @ opcode 0x24; Cmd_jumpifcontest
	.4byte ScriptCmd_fadetobgfromset @ opcode 0x25; Cmd_fadetobgfromset
	.4byte ScriptCmd_panse_26 @ opcode 0x26; Cmd_panse_adjustnone
	.4byte ScriptCmd_panse_27 @ opcode 0x27; Cmd_panse_adjustall
	.4byte ScriptCmd_monbgprio_28 @ opcode 0x28; Cmd_splitbgprio
	.4byte ScriptCmd_monbgprio_29 @ opcode 0x29; Cmd_splitbgprio_all
	.4byte ScriptCmd_monbgprio_2A @ opcode 0x2A; Cmd_splitbgprio_foes
	.4byte ScriptCmd_invisible @ opcode 0x2B; Cmd_invisible
	.4byte ScriptCmd_visible @ opcode 0x2C; Cmd_visible
	.4byte ScriptCmd_doublebattle_2D @ opcode 0x2D; Cmd_teamattack_moveback
	.4byte ScriptCmd_doublebattle_2E @ opcode 0x2E; Cmd_teamattack_movefwd
	.4byte sub_080A550C @ opcode 0x2F; Cmd_stopsound

	@ Compatibility / upstream table aliases.
	.globl gMenuPointerTable_Rom_4FE5A4
	.set gMenuPointerTable_Rom_4FE5A4, gBattleAnimScriptCmdTable
	.globl sScriptCmdTable
	.set sScriptCmdTable, gBattleAnimScriptCmdTable

	@ Battle animation battler coordinates.
	.globl sBattlerCoords
sBattlerCoords: @ 0x084FE664
	@ Single battle.
	semantic_ucoords8 72, 80
	semantic_ucoords8 176, 40
	semantic_ucoords8 48, 40
	semantic_ucoords8 112, 80
	@ Double battle.
	semantic_ucoords8 32, 80
	semantic_ucoords8 200, 40
	semantic_ucoords8 90, 88
	semantic_ucoords8 152, 32
	.if (. - sBattlerCoords) != 0x20
	.error "sBattlerCoords size mismatch"
	.endif
	.globl gBattleAnimMonsData_084FE664
	.set gBattleAnimMonsData_084FE664, sBattlerCoords

	@ Castform front-sprite dimensions and Y offsets for Normal/Fire/Water/Ice.
	.globl gCastformFrontSpriteCoords
gCastformFrontSpriteCoords: @ 0x084FE684
	semantic_mon_coords 32, 32, 17
	semantic_mon_coords 48, 48, 9
	semantic_mon_coords 32, 48, 9
	semantic_mon_coords 64, 48, 8
	.if (. - gCastformFrontSpriteCoords) != 0x10
	.error "gCastformFrontSpriteCoords size mismatch"
	.endif
	.globl gMenuU16Table_Rom_4FE684
	.set gMenuU16Table_Rom_4FE684, gCastformFrontSpriteCoords

	@ Castform opponent-side sprite elevation for Normal/Fire/Water/Ice.
	.globl sCastformElevations
sCastformElevations: @ 0x084FE694
	.byte 13, 14, 13, 13
	.if (. - sCastformElevations) != 0x4
	.error "sCastformElevations size mismatch"
	.endif
	.globl gBattleAnimMonsData_084FE694
	.set gBattleAnimMonsData_084FE694, sCastformElevations

	@ Castform back-sprite Y offsets for Normal/Fire/Water/Ice.
	.globl sCastformBackSpriteYCoords
sCastformBackSpriteYCoords: @ 0x084FE698
	.byte 0, 0, 0, 0
	.if (. - sCastformBackSpriteYCoords) != 0x4
	.error "sCastformBackSpriteYCoords size mismatch"
	.endif
	.globl gMenuRecord_Rom_4FE698
	.set gMenuRecord_Rom_4FE698, sCastformBackSpriteYCoords

	@ Placeholders for Pokemon sprites created by move effects such as Role Play / Snatch.
	.set TAG_MOVE_EFFECT_MON_1, 55125
	.set TAG_MOVE_EFFECT_MON_2, 55126
	.globl sSpriteTemplates_MoveEffectMons
sSpriteTemplates_MoveEffectMons: @ 0x084FE69C
	semantic_sprite_template TAG_MOVE_EFFECT_MON_1, TAG_MOVE_EFFECT_MON_1, gOamData_AffineNormal_ObjNormal_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	semantic_sprite_template TAG_MOVE_EFFECT_MON_2, TAG_MOVE_EFFECT_MON_2, gOamData_AffineNormal_ObjNormal_64x64, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	.if (. - sSpriteTemplates_MoveEffectMons) != 0x30
	.error "sSpriteTemplates_MoveEffectMons size mismatch"
	.endif
	.globl gBattleAnimMonsData_084FE69C
	.set gBattleAnimMonsData_084FE69C, sSpriteTemplates_MoveEffectMons
