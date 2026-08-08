@ Analyzed from data2b_partial.inc
@ Byte layout preserved for the Japanese ROM.
@
@ 0x082D2A58-0x082D2A67 belongs to digit_obj_util.c.
@ 0x082D2A68 onward corresponds to the opening portion of src/data.c.

	.globl gUnknown_82D2A58
gUnknown_82D2A58: @ 0x082D2A58
sTilesPerImage:
	.byte 0x01, 0x04, 0x10, 0x40 @ ST_OAM_SQUARE
	.byte 0x02, 0x04, 0x08, 0x20 @ ST_OAM_H_RECTANGLE
	.byte 0x02, 0x04, 0x08, 0x20 @ ST_OAM_V_RECTANGLE
	.byte 0x00, 0x00, 0x00, 0x00 @ unused shape row

	.globl gUnknown_82D2A68
gUnknown_82D2A68: @ 0x082D2A68
	.globl gMinigameDigits_Pal
gMinigameDigits_Pal:
	.incbin "build/graphics/link/minigame_digits.gbapal"

	.globl gMinigameDigits_Gfx
gMinigameDigits_Gfx: @ 0x082D2A88
	.incbin "build/graphics/link/minigame_digits.4bpp.lz"

sMinigameDigitsThin_Gfx: @ 0x082D2B48
	.incbin "build/graphics/link/minigame_digits2.4bpp.lz"

	.globl gBattlerPicTable_PlayerLeft
gBattlerPicTable_PlayerLeft: @ 0x082D2C38
	.4byte 0x02008000, 0x00000800 @ gHeap + 0x8000 + 0x0, MON_PIC_SIZE
	.4byte 0x02008800, 0x00000800 @ gHeap + 0x8000 + 0x800, MON_PIC_SIZE
	.4byte 0x02009000, 0x00000800 @ gHeap + 0x8000 + 0x1000, MON_PIC_SIZE
	.4byte 0x02009800, 0x00000800 @ gHeap + 0x8000 + 0x1800, MON_PIC_SIZE

	.globl gBattlerPicTable_OpponentLeft
gBattlerPicTable_OpponentLeft: @ 0x082D2C58
	.4byte 0x0200A000, 0x00000800 @ gHeap + 0xA000 + 0x0, MON_PIC_SIZE
	.4byte 0x0200A800, 0x00000800 @ gHeap + 0xA000 + 0x800, MON_PIC_SIZE
	.4byte 0x0200B000, 0x00000800 @ gHeap + 0xA000 + 0x1000, MON_PIC_SIZE
	.4byte 0x0200B800, 0x00000800 @ gHeap + 0xA000 + 0x1800, MON_PIC_SIZE

	.globl gBattlerPicTable_PlayerRight
gBattlerPicTable_PlayerRight: @ 0x082D2C78
	.4byte 0x0200C000, 0x00000800 @ gHeap + 0xC000 + 0x0, MON_PIC_SIZE
	.4byte 0x0200C800, 0x00000800 @ gHeap + 0xC000 + 0x800, MON_PIC_SIZE
	.4byte 0x0200D000, 0x00000800 @ gHeap + 0xC000 + 0x1000, MON_PIC_SIZE
	.4byte 0x0200D800, 0x00000800 @ gHeap + 0xC000 + 0x1800, MON_PIC_SIZE

	.globl gBattlerPicTable_OpponentRight
gBattlerPicTable_OpponentRight: @ 0x082D2C98
	.4byte 0x0200E000, 0x00000800 @ gHeap + 0xE000 + 0x0, MON_PIC_SIZE
	.4byte 0x0200E800, 0x00000800 @ gHeap + 0xE000 + 0x800, MON_PIC_SIZE
	.4byte 0x0200F000, 0x00000800 @ gHeap + 0xE000 + 0x1000, MON_PIC_SIZE
	.4byte 0x0200F800, 0x00000800 @ gHeap + 0xE000 + 0x1800, MON_PIC_SIZE

	.globl gTrainerBackPicTable_Brendan
gTrainerBackPicTable_Brendan: @ 0x082D2CB8
	.4byte 0x08D66524, 0x00000800 @ gTrainerBackPic_Brendan + 0x0
	.4byte 0x08D66D24, 0x00000800 @ gTrainerBackPic_Brendan + 0x800
	.4byte 0x08D67524, 0x00000800 @ gTrainerBackPic_Brendan + 0x1000
	.4byte 0x08D67D24, 0x00000800 @ gTrainerBackPic_Brendan + 0x1800

	.globl gTrainerBackPicTable_May
gTrainerBackPicTable_May: @ 0x082D2CD8
	.4byte 0x08D68524, 0x00000800 @ gTrainerBackPic_May + 0x0
	.4byte 0x08D68D24, 0x00000800 @ gTrainerBackPic_May + 0x800
	.4byte 0x08D69524, 0x00000800 @ gTrainerBackPic_May + 0x1000
	.4byte 0x08D69D24, 0x00000800 @ gTrainerBackPic_May + 0x1800

	.globl gTrainerBackPicTable_Red
gTrainerBackPicTable_Red: @ 0x082D2CF8
	.4byte 0x08D6A524, 0x00000800 @ gTrainerBackPic_Red + 0x0
	.4byte 0x08D6AD24, 0x00000800 @ gTrainerBackPic_Red + 0x800
	.4byte 0x08D6B524, 0x00000800 @ gTrainerBackPic_Red + 0x1000
	.4byte 0x08D6BD24, 0x00000800 @ gTrainerBackPic_Red + 0x1800
	.4byte 0x08D6C524, 0x00000800 @ gTrainerBackPic_Red + 0x2000

	.globl gTrainerBackPicTable_Leaf
gTrainerBackPicTable_Leaf: @ 0x082D2D20
	.4byte 0x08D6CD24, 0x00000800 @ gTrainerBackPic_Leaf + 0x0
	.4byte 0x08D6D524, 0x00000800 @ gTrainerBackPic_Leaf + 0x800
	.4byte 0x08D6DD24, 0x00000800 @ gTrainerBackPic_Leaf + 0x1000
	.4byte 0x08D6E524, 0x00000800 @ gTrainerBackPic_Leaf + 0x1800
	.4byte 0x08D6ED24, 0x00000800 @ gTrainerBackPic_Leaf + 0x2000

	.globl gTrainerBackPicTable_RubySapphireBrendan
gTrainerBackPicTable_RubySapphireBrendan: @ 0x082D2D48
	.4byte 0x08D6F524, 0x00000800 @ gTrainerBackPic_RubySapphireBrendan + 0x0
	.4byte 0x08D6FD24, 0x00000800 @ gTrainerBackPic_RubySapphireBrendan + 0x800
	.4byte 0x08D70524, 0x00000800 @ gTrainerBackPic_RubySapphireBrendan + 0x1000
	.4byte 0x08D70D24, 0x00000800 @ gTrainerBackPic_RubySapphireBrendan + 0x1800

	.globl gTrainerBackPicTable_RubySapphireMay
gTrainerBackPicTable_RubySapphireMay: @ 0x082D2D68
	.4byte 0x08D71524, 0x00000800 @ gTrainerBackPic_RubySapphireMay + 0x0
	.4byte 0x08D71D24, 0x00000800 @ gTrainerBackPic_RubySapphireMay + 0x800
	.4byte 0x08D72524, 0x00000800 @ gTrainerBackPic_RubySapphireMay + 0x1000
	.4byte 0x08D72D24, 0x00000800 @ gTrainerBackPic_RubySapphireMay + 0x1800

	.globl gTrainerBackPicTable_Wally
gTrainerBackPicTable_Wally: @ 0x082D2D88
	.4byte 0x08D73524, 0x00000800 @ gTrainerBackPic_Wally + 0x0
	.4byte 0x08D73D24, 0x00000800 @ gTrainerBackPic_Wally + 0x800
	.4byte 0x08D74524, 0x00000800 @ gTrainerBackPic_Wally + 0x1000
	.4byte 0x08D74D24, 0x00000800 @ gTrainerBackPic_Wally + 0x1800

	.globl gTrainerBackPicTable_Steven
gTrainerBackPicTable_Steven: @ 0x082D2DA8
	.4byte 0x08D75524, 0x00000800 @ gTrainerBackPic_Steven + 0x0
	.4byte 0x08D75D24, 0x00000800 @ gTrainerBackPic_Steven + 0x800
	.4byte 0x08D76524, 0x00000800 @ gTrainerBackPic_Steven + 0x1000
	.4byte 0x08D76D24, 0x00000800 @ gTrainerBackPic_Steven + 0x1800

sAnim_GeneralFrame0: @ 0x082D2DC8
	.2byte 0x0000, 0x0000 @ frame=0, duration=0
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_GeneralFrame3: @ 0x082D2DD0
	.2byte 0x0003, 0x0000 @ frame=3, duration=0
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAffineAnim_Battler_Normal: @ 0x082D2DD8
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ x=256, y=256, rot=0, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_Flipped: @ 0x082D2DE8
	.2byte 0xFF00, 0x0100, 0x0000, 0x0000 @ x=-256, y=256, rot=0, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_Emerge: @ 0x082D2DF8
	.2byte 0x0028, 0x0028, 0x0000, 0x0000 @ x=40, y=40, rot=0, duration=0
	.2byte 0x0012, 0x0012, 0x0C00, 0x0000 @ x=18, y=18, rot=3072, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_Return: @ 0x082D2E10
	.2byte 0xFFFE, 0xFFFE, 0x1200, 0x0000 @ x=-2, y=-2, rot=4608, duration=0
	.2byte 0xFFF0, 0xFFF0, 0x0F00, 0x0000 @ x=-16, y=-16, rot=3840, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_HorizontalSquishLoop: @ 0x082D2E28
	.2byte 0x00A0, 0x0100, 0x0000, 0x0000 @ x=160, y=256, rot=0, duration=0
	.2byte 0x0004, 0x0000, 0x0800, 0x0000 @ x=4, y=0, rot=2048, duration=0
	.2byte 0xFFFC, 0x0000, 0x0800, 0x0000 @ x=-4, y=0, rot=2048, duration=0
	.2byte 0x7FFE, 0x0001, 0x0000, 0x0000 @ AFFINEANIMCMD_JUMP(1)

sAffineAnim_Battler_Grow: @ 0x082D2E48
	.2byte 0x0002, 0x0002, 0x1400, 0x0000 @ x=2, y=2, rot=5120, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_Shrink: @ 0x082D2E58
	.2byte 0xFFFE, 0xFFFE, 0x1400, 0x0000 @ x=-2, y=-2, rot=5120, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_BigToSmall: @ 0x082D2E68
	.2byte 0x0100, 0x0100, 0x0000, 0x0000 @ x=256, y=256, rot=0, duration=0
	.2byte 0xFFF0, 0xFFF0, 0x0900, 0x0000 @ x=-16, y=-16, rot=2304, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_GrowLarge: @ 0x082D2E80
	.2byte 0x0004, 0x0004, 0x3F00, 0x0000 @ x=4, y=4, rot=16128, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_TipRight: @ 0x082D2E90
	.2byte 0x0000, 0x0000, 0x05FD, 0x0000 @ x=0, y=0, rot=1533, duration=0
	.2byte 0x0000, 0x0000, 0x0503, 0x0000 @ x=0, y=0, rot=1283, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	.globl gUnknown_82D2EA8
gUnknown_82D2EA8: @ 0x082D2EA8
	.globl gAffineAnims_BattleSpritePlayerSide
gAffineAnims_BattleSpritePlayerSide:
	.4byte sAffineAnim_Battler_Normal
	.4byte sAffineAnim_Battler_Emerge
	.4byte sAffineAnim_Battler_Return
	.4byte sAffineAnim_Battler_HorizontalSquishLoop
	.4byte sAffineAnim_Battler_Grow
	.4byte sAffineAnim_Battler_Shrink
	.4byte sAffineAnim_Battler_GrowLarge
	.4byte sAffineAnim_Battler_TipRight
	.4byte sAffineAnim_Battler_BigToSmall

sAffineAnim_Battler_SpinShrink: @ 0x082D2ECC
	.2byte 0xFFFC, 0xFFFC, 0x3F04, 0x0000 @ x=-4, y=-4, rot=16132, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_TipLeft: @ 0x082D2EDC
	.2byte 0x0000, 0x0000, 0x0503, 0x0000 @ x=0, y=0, rot=1283, duration=0
	.2byte 0x0000, 0x0000, 0x05FD, 0x0000 @ x=0, y=0, rot=1533, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_RotateUpAndBack: @ 0x082D2EF4
	.2byte 0x0000, 0x0000, 0x14FB, 0x0000 @ x=0, y=0, rot=5371, duration=0
	.2byte 0x0000, 0x0000, 0x1400, 0x0000 @ x=0, y=0, rot=5120, duration=0
	.2byte 0x0000, 0x0000, 0x1405, 0x0000 @ x=0, y=0, rot=5125, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

sAffineAnim_Battler_Spin: @ 0x082D2F14
	.2byte 0x0000, 0x0000, 0x6E09, 0x0000 @ x=0, y=0, rot=28169, duration=0
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000 @ AFFINEANIMCMD_END

	.globl gUnknown_82D2F24
gUnknown_82D2F24: @ 0x082D2F24
	.globl gAffineAnims_BattleSpriteOpponentSide
gAffineAnims_BattleSpriteOpponentSide:
	.4byte sAffineAnim_Battler_Normal
	.4byte sAffineAnim_Battler_Emerge
	.4byte sAffineAnim_Battler_Return
	.4byte sAffineAnim_Battler_HorizontalSquishLoop
	.4byte sAffineAnim_Battler_Grow
	.4byte sAffineAnim_Battler_Shrink
	.4byte sAffineAnim_Battler_SpinShrink
	.4byte sAffineAnim_Battler_TipLeft
	.4byte sAffineAnim_Battler_RotateUpAndBack
	.4byte sAffineAnim_Battler_BigToSmall
	.4byte sAffineAnim_Battler_Spin

	.globl gUnknown_82D2F50
gUnknown_82D2F50: @ 0x082D2F50
	.globl gAffineAnims_BattleSpriteContest
gAffineAnims_BattleSpriteContest:
	.4byte sAffineAnim_Battler_Flipped
	.4byte sAffineAnim_Battler_Emerge
	.4byte sAffineAnim_Battler_Return
	.4byte sAffineAnim_Battler_HorizontalSquishLoop
	.4byte sAffineAnim_Battler_Grow
	.4byte sAffineAnim_Battler_Shrink
	.4byte sAffineAnim_Battler_SpinShrink
	.4byte sAffineAnim_Battler_TipLeft
	.4byte sAffineAnim_Battler_RotateUpAndBack
	.4byte sAffineAnim_Battler_BigToSmall
	.4byte sAffineAnim_Battler_Spin

sAnim_MonPic_0: @ 0x082D2F7C
	.2byte 0x0000, 0x0000 @ frame=0, duration=0
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_MonPic_1: @ 0x082D2F84
	.2byte 0x0001, 0x0000 @ frame=1, duration=0
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_MonPic_2: @ 0x082D2F8C
	.2byte 0x0002, 0x0000 @ frame=2, duration=0
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sAnim_MonPic_3: @ 0x082D2F94
	.2byte 0x0003, 0x0000 @ frame=3, duration=0
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

	.globl gUnknown_82D2F9C
gUnknown_82D2F9C: @ 0x082D2F9C
	.globl gAnims_MonPic
gAnims_MonPic:
	.4byte sAnim_MonPic_0
	.4byte sAnim_MonPic_1
	.4byte sAnim_MonPic_2
	.4byte sAnim_MonPic_3

sUnusedAnimCmds_000: @ 0x082D2FAC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_001: @ 0x082D2FC4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0002, 0x0008 @ frame=2, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_002: @ 0x082D2FD4
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0002, 0x000A @ frame=2, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_003: @ 0x082D2FE0
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_004: @ 0x082D2FE8
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_005: @ 0x082D3004
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0002, 0x000C @ frame=2, duration=12
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0002, 0x000C @ frame=2, duration=12
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0002, 0x000C @ frame=2, duration=12
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_006: @ 0x082D3020
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0002, 0x000C @ frame=2, duration=12
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_007: @ 0x082D302C
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_008: @ 0x082D3040
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0002, 0x000A @ frame=2, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0002, 0x000A @ frame=2, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_009: @ 0x082D3054
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_010: @ 0x082D305C
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_011: @ 0x082D3064
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_012: @ 0x082D306C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_013: @ 0x082D3074
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_014: @ 0x082D307C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_015: @ 0x082D3084
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_016: @ 0x082D308C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_017: @ 0x082D3094
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_018: @ 0x082D309C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_019: @ 0x082D30A4
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_020: @ 0x082D30AC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_021: @ 0x082D30B4
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_022: @ 0x082D30BC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_023: @ 0x082D30C4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_024: @ 0x082D30CC
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_025: @ 0x082D30D4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_026: @ 0x082D30DC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_027: @ 0x082D30E4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_028: @ 0x082D30EC
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_029: @ 0x082D30F4
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_030: @ 0x082D30FC
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_031: @ 0x082D3104
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_032: @ 0x082D310C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_033: @ 0x082D3114
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_034: @ 0x082D311C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_035: @ 0x082D3124
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_036: @ 0x082D312C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_037: @ 0x082D3134
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_038: @ 0x082D313C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_039: @ 0x082D3144
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_040: @ 0x082D314C
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0008, 0x000F @ frame=8, duration=15
	.2byte 0x0002, 0x0016 @ frame=2, duration=22
	.2byte 0x0008, 0x0005 @ frame=8, duration=5
	.2byte 0x0003, 0x0008 @ frame=3, duration=8
	.2byte 0x0004, 0x0005 @ frame=4, duration=5
	.2byte 0x0006, 0x0005 @ frame=6, duration=5
	.2byte 0x0004, 0x0005 @ frame=4, duration=5
	.2byte 0x0006, 0x0005 @ frame=6, duration=5
	.2byte 0x0004, 0x0005 @ frame=4, duration=5
	.2byte 0x0006, 0x0005 @ frame=6, duration=5
	.2byte 0x0004, 0x0005 @ frame=4, duration=5
	.2byte 0x0006, 0x0005 @ frame=6, duration=5
	.2byte 0x0005, 0x0005 @ frame=5, duration=5
	.2byte 0x0007, 0x0005 @ frame=7, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_041: @ 0x082D318C
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0008, 0x000F @ frame=8, duration=15
	.2byte 0x0002, 0x000F @ frame=2, duration=15
	.2byte 0x0008, 0x000F @ frame=8, duration=15
	.2byte 0x0009, 0x000F @ frame=9, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0009, 0x000A @ frame=9, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_042: @ 0x082D31AC
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0009, 0x000A @ frame=9, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x000A, 0x0014 @ frame=10, duration=20
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_043: @ 0x082D31C0
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x000B, 0x000F @ frame=11, duration=15
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_044: @ 0x082D31CC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_045: @ 0x082D31D4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_046: @ 0x082D31DC
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0002, 0x0007 @ frame=2, duration=7
	.2byte 0x0003, 0x0004 @ frame=3, duration=4
	.2byte 0x0004, 0x0004 @ frame=4, duration=4
	.2byte 0x0003, 0x0004 @ frame=3, duration=4
	.2byte 0x0004, 0x0004 @ frame=4, duration=4
	.2byte 0x0003, 0x0004 @ frame=3, duration=4
	.2byte 0x0004, 0x0004 @ frame=4, duration=4
	.2byte 0x0003, 0x0004 @ frame=3, duration=4
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0005, 0x0002 @ frame=5, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0005, 0x0002 @ frame=5, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0005, 0x0002 @ frame=5, duration=2
	.2byte 0x0006, 0x0002 @ frame=6, duration=2
	.2byte 0x0005, 0x0002 @ frame=5, duration=2
	.2byte 0x0006, 0x0002 @ frame=6, duration=2
	.2byte 0x0006, 0x000A @ frame=6, duration=10
	.2byte 0x0005, 0x0004 @ frame=5, duration=4
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_047: @ 0x082D3238
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0009, 0x0003 @ frame=9, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0009, 0x0003 @ frame=9, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_048: @ 0x082D3290
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0x0009, 0x0003 @ frame=9, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0009, 0x0003 @ frame=9, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0007, 0x000C @ frame=7, duration=12
	.2byte 0x0008, 0x000C @ frame=8, duration=12
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_049: @ 0x082D32E8
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x000A, 0x0012 @ frame=10, duration=18
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_050: @ 0x082D32F4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_051: @ 0x082D32FC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_052: @ 0x082D3304
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_053: @ 0x082D330C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_054: @ 0x082D3314
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_055: @ 0x082D331C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_056: @ 0x082D3324
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_057: @ 0x082D332C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_058: @ 0x082D3334
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_059: @ 0x082D333C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_060: @ 0x082D3344
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_061: @ 0x082D334C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_062: @ 0x082D3354
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_063: @ 0x082D335C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_064: @ 0x082D3364
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_065: @ 0x082D336C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_066: @ 0x082D3374
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_067: @ 0x082D337C
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_068: @ 0x082D3384
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_069: @ 0x082D338C
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_070: @ 0x082D3394
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_071: @ 0x082D339C
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_072: @ 0x082D33A4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_073: @ 0x082D33AC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_074: @ 0x082D33B4
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_075: @ 0x082D33BC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_076: @ 0x082D33C4
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_077: @ 0x082D33CC
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_078: @ 0x082D33D4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_079: @ 0x082D33F0
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0002, 0x0012 @ frame=2, duration=18
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x0002, 0x0012 @ frame=2, duration=18
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x0002, 0x0012 @ frame=2, duration=18
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_080: @ 0x082D340C
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0002, 0x0005 @ frame=2, duration=5
	.2byte 0x0003, 0x0006 @ frame=3, duration=6
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0002, 0x0005 @ frame=2, duration=5
	.2byte 0x0003, 0x0005 @ frame=3, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0004, 0x0004 @ frame=4, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0004, 0x0004 @ frame=4, duration=4
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_081: @ 0x082D344C
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0002, 0x0006 @ frame=2, duration=6
	.2byte 0x0003, 0x0006 @ frame=3, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_082: @ 0x082D3470
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0005, 0x000C @ frame=5, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0006, 0x000C @ frame=6, duration=12
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_083: @ 0x082D3484
	.2byte 0x0007, 0x0001 @ frame=7, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_084: @ 0x082D348C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_085: @ 0x082D3494
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_086: @ 0x082D349C
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_087: @ 0x082D34A4
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_088: @ 0x082D34AC
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_089: @ 0x082D34B4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_090: @ 0x082D34BC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_091: @ 0x082D34C4
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_092: @ 0x082D34CC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_093: @ 0x082D34E8
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0002, 0x0008 @ frame=2, duration=8
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0002, 0x0008 @ frame=2, duration=8
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0002, 0x0008 @ frame=2, duration=8
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_094: @ 0x082D3504
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_095: @ 0x082D350C
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_096: @ 0x082D3514
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_097: @ 0x082D351C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_098: @ 0x082D3524
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_099: @ 0x082D352C
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_100: @ 0x082D3534
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_101: @ 0x082D353C
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_102: @ 0x082D3544
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_103: @ 0x082D354C
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_104: @ 0x082D3554
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_105: @ 0x082D355C
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_106: @ 0x082D3564
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_107: @ 0x082D356C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_108: @ 0x082D3574
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_109: @ 0x082D357C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_110: @ 0x082D3584
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_111: @ 0x082D358C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_112: @ 0x082D3594
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_113: @ 0x082D359C
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_114: @ 0x082D35A4
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_115: @ 0x082D35AC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_116: @ 0x082D35B4
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_117: @ 0x082D35BC
	.2byte 0x0002, 0x0001 @ frame=2, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_118: @ 0x082D35C4
	.2byte 0x0003, 0x0001 @ frame=3, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_119: @ 0x082D35CC
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_120: @ 0x082D35D4
	.2byte 0x0000, 0x003F @ frame=0, duration=63
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_121: @ 0x082D35DC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_122: @ 0x082D35E4
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_123: @ 0x082D35EC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_124: @ 0x082D35F4
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_125: @ 0x082D35FC
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_126: @ 0x082D3604
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_127: @ 0x082D360C
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_128: @ 0x082D3614
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_129: @ 0x082D361C
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_130: @ 0x082D3630
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END
sUnusedAnimCmds_131: @ 0x082D3654
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, 0x0000 @ ANIMCMD_END

sUnusedAnims_Species000: @ 0x082D365C
	@ First referenced by species index 0
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species001: @ 0x082D3660
	@ First referenced by species index 1
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species002: @ 0x082D3664
	@ First referenced by species index 2
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species003: @ 0x082D3668
	@ First referenced by species index 3
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species004: @ 0x082D366C
	@ First referenced by species index 4
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species005: @ 0x082D3670
	@ First referenced by species index 5
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species006: @ 0x082D3674
	@ First referenced by species index 6
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species007: @ 0x082D3678
	@ First referenced by species index 7
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species008: @ 0x082D367C
	@ First referenced by species index 8
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species009: @ 0x082D3680
	@ First referenced by species index 9
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species010: @ 0x082D3684
	@ First referenced by species index 10
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species011: @ 0x082D3688
	@ First referenced by species index 11
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species012: @ 0x082D368C
	@ First referenced by species index 12
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species013: @ 0x082D3690
	@ First referenced by species index 13
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species014: @ 0x082D3694
	@ First referenced by species index 14
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species015: @ 0x082D3698
	@ First referenced by species index 15
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species016: @ 0x082D369C
	@ First referenced by species index 16
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species017: @ 0x082D36A0
	@ First referenced by species index 17
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species018: @ 0x082D36A4
	@ First referenced by species index 18
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species019: @ 0x082D36A8
	@ First referenced by species index 19
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species020: @ 0x082D36AC
	@ First referenced by species index 20
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species021: @ 0x082D36B0
	@ First referenced by species index 21
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species022: @ 0x082D36B4
	@ First referenced by species index 22
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species023: @ 0x082D36B8
	@ First referenced by species index 23
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species024: @ 0x082D36BC
	@ First referenced by species index 24
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species025: @ 0x082D36C0
	@ First referenced by species index 25
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species026: @ 0x082D36C4
	@ First referenced by species index 26
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species027: @ 0x082D36C8
	@ First referenced by species index 27
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species028: @ 0x082D36CC
	@ First referenced by species index 28
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species029: @ 0x082D36D0
	@ First referenced by species index 29
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species030: @ 0x082D36D4
	@ First referenced by species index 30
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species031: @ 0x082D36D8
	@ First referenced by species index 31
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species032: @ 0x082D36DC
	@ First referenced by species index 32
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species033: @ 0x082D36E0
	@ First referenced by species index 33
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species034: @ 0x082D36E4
	@ First referenced by species index 34
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species035: @ 0x082D36E8
	@ First referenced by species index 35
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species036: @ 0x082D36EC
	@ First referenced by species index 36
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species037: @ 0x082D36F0
	@ First referenced by species index 37
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species038: @ 0x082D36F4
	@ First referenced by species index 38
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species039: @ 0x082D36F8
	@ First referenced by species index 39
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species040: @ 0x082D36FC
	@ First referenced by species index 40
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species041: @ 0x082D3700
	@ First referenced by species index 41
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species042: @ 0x082D3704
	@ First referenced by species index 42
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species043: @ 0x082D3708
	@ First referenced by species index 43
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species044: @ 0x082D370C
	@ First referenced by species index 44
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species045: @ 0x082D3710
	@ First referenced by species index 45
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species046: @ 0x082D3714
	@ First referenced by species index 46
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species047: @ 0x082D3718
	@ First referenced by species index 47
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species048: @ 0x082D371C
	@ First referenced by species index 48
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species049: @ 0x082D3720
	@ First referenced by species index 49
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species050: @ 0x082D3724
	@ First referenced by species index 50
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species051: @ 0x082D3728
	@ First referenced by species index 51
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species052: @ 0x082D372C
	@ First referenced by species index 52
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species053: @ 0x082D3730
	@ First referenced by species index 53
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species054: @ 0x082D3734
	@ First referenced by species index 54
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species055: @ 0x082D3738
	@ First referenced by species index 55
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species056: @ 0x082D373C
	@ First referenced by species index 56
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species057: @ 0x082D3740
	@ First referenced by species index 57
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species058: @ 0x082D3744
	@ First referenced by species index 58
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species059: @ 0x082D3748
	@ First referenced by species index 59
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species060: @ 0x082D374C
	@ First referenced by species index 60
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species061: @ 0x082D3750
	@ First referenced by species index 61
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species062: @ 0x082D3754
	@ First referenced by species index 62
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species063: @ 0x082D3758
	@ First referenced by species index 63
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species064: @ 0x082D375C
	@ First referenced by species index 64
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species065: @ 0x082D3760
	@ First referenced by species index 65
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species066: @ 0x082D3764
	@ First referenced by species index 66
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species067: @ 0x082D3768
	@ First referenced by species index 67
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species068: @ 0x082D376C
	@ First referenced by species index 68
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species069: @ 0x082D3770
	@ First referenced by species index 69
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species070: @ 0x082D3774
	@ First referenced by species index 70
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species071: @ 0x082D3778
	@ First referenced by species index 71
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species072: @ 0x082D377C
	@ First referenced by species index 72
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species073: @ 0x082D3780
	@ First referenced by species index 73
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species074: @ 0x082D3784
	@ First referenced by species index 74
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species075: @ 0x082D3788
	@ First referenced by species index 75
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species076: @ 0x082D378C
	@ First referenced by species index 76
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species077: @ 0x082D3790
	@ First referenced by species index 77
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species078: @ 0x082D3794
	@ First referenced by species index 78
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species079: @ 0x082D3798
	@ First referenced by species index 79
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species080: @ 0x082D379C
	@ First referenced by species index 80
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species081: @ 0x082D37A0
	@ First referenced by species index 81
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species082: @ 0x082D37A4
	@ First referenced by species index 82
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species083: @ 0x082D37A8
	@ First referenced by species index 83
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species084: @ 0x082D37AC
	@ First referenced by species index 84
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species085: @ 0x082D37B0
	@ First referenced by species index 85
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species086: @ 0x082D37B4
	@ First referenced by species index 86
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species087: @ 0x082D37B8
	@ First referenced by species index 87
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species088: @ 0x082D37BC
	@ First referenced by species index 88
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species089: @ 0x082D37C0
	@ First referenced by species index 89
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species090: @ 0x082D37C4
	@ First referenced by species index 90
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species091: @ 0x082D37C8
	@ First referenced by species index 91
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species092: @ 0x082D37CC
	@ First referenced by species index 92
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species093: @ 0x082D37D0
	@ First referenced by species index 93
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species094: @ 0x082D37D4
	@ First referenced by species index 94
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species095: @ 0x082D37D8
	@ First referenced by species index 95
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species096: @ 0x082D37DC
	@ First referenced by species index 96
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species097: @ 0x082D37E0
	@ First referenced by species index 97
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species098: @ 0x082D37E4
	@ First referenced by species index 98
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species099: @ 0x082D37E8
	@ First referenced by species index 99
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species100: @ 0x082D37EC
	@ First referenced by species index 100
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species101: @ 0x082D37F0
	@ First referenced by species index 101
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species102: @ 0x082D37F4
	@ First referenced by species index 102
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species103: @ 0x082D37F8
	@ First referenced by species index 103
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species104: @ 0x082D37FC
	@ First referenced by species index 104
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species105: @ 0x082D3800
	@ First referenced by species index 105
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species106: @ 0x082D3804
	@ First referenced by species index 106
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species107: @ 0x082D3808
	@ First referenced by species index 107
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species108: @ 0x082D380C
	@ First referenced by species index 108
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species109: @ 0x082D3810
	@ First referenced by species index 109
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species110: @ 0x082D3814
	@ First referenced by species index 110
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species111: @ 0x082D3818
	@ First referenced by species index 111
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species112: @ 0x082D381C
	@ First referenced by species index 112
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species113: @ 0x082D3820
	@ First referenced by species index 113
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species114: @ 0x082D3824
	@ First referenced by species index 114
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species115: @ 0x082D3828
	@ First referenced by species index 115
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species116: @ 0x082D382C
	@ First referenced by species index 116
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species117: @ 0x082D3830
	@ First referenced by species index 117
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species118: @ 0x082D3834
	@ First referenced by species index 118
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species119: @ 0x082D3838
	@ First referenced by species index 119
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species120: @ 0x082D383C
	@ First referenced by species index 120
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species121: @ 0x082D3840
	@ First referenced by species index 121
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species122: @ 0x082D3844
	@ First referenced by species index 122
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species123: @ 0x082D3848
	@ First referenced by species index 123
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species124: @ 0x082D384C
	@ First referenced by species index 124
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species125: @ 0x082D3850
	@ First referenced by species index 125
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species126: @ 0x082D3854
	@ First referenced by species index 126
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species127: @ 0x082D3858
	@ First referenced by species index 127
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species128: @ 0x082D385C
	@ First referenced by species index 128
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species129: @ 0x082D3860
	@ First referenced by species index 129
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species130: @ 0x082D3864
	@ First referenced by species index 130
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species131: @ 0x082D3868
	@ First referenced by species index 131
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species132: @ 0x082D386C
	@ First referenced by species index 132
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species133: @ 0x082D3870
	@ First referenced by species index 133
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species134: @ 0x082D3874
	@ First referenced by species index 134
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species135: @ 0x082D3878
	@ First referenced by species index 135
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species136: @ 0x082D387C
	@ First referenced by species index 136
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species137: @ 0x082D3880
	@ First referenced by species index 137
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species138: @ 0x082D3884
	@ First referenced by species index 138
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species139: @ 0x082D3888
	@ First referenced by species index 139
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species140: @ 0x082D388C
	@ First referenced by species index 140
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species141: @ 0x082D3890
	@ First referenced by species index 141
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species142: @ 0x082D3894
	@ First referenced by species index 142
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species143: @ 0x082D3898
	@ First referenced by species index 143
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species144: @ 0x082D389C
	@ First referenced by species index 144
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species145: @ 0x082D38A0
	@ First referenced by species index 145
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species146: @ 0x082D38A4
	@ First referenced by species index 146
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species147: @ 0x082D38A8
	@ First referenced by species index 147
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species148: @ 0x082D38AC
	@ First referenced by species index 148
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species149: @ 0x082D38B0
	@ First referenced by species index 149
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species150: @ 0x082D38B4
	@ First referenced by species index 150
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species151: @ 0x082D38B8
	@ First referenced by species index 151
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species152: @ 0x082D38BC
	@ First referenced by species index 152
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species153: @ 0x082D38C0
	@ First referenced by species index 153
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species154: @ 0x082D38C4
	@ First referenced by species index 154
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species155: @ 0x082D38C8
	@ First referenced by species index 155
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species156: @ 0x082D38CC
	@ First referenced by species index 156
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species157: @ 0x082D38D0
	@ First referenced by species index 157
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species158: @ 0x082D38D4
	@ First referenced by species index 158
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species159: @ 0x082D38D8
	@ First referenced by species index 159
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species160: @ 0x082D38DC
	@ First referenced by species index 160
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species161: @ 0x082D38E0
	@ First referenced by species index 161
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species162: @ 0x082D38E4
	@ First referenced by species index 162
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species163: @ 0x082D38E8
	@ First referenced by species index 163
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species164: @ 0x082D38EC
	@ First referenced by species index 164
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species165: @ 0x082D38F0
	@ First referenced by species index 165
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species166: @ 0x082D38F4
	@ First referenced by species index 166
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species167: @ 0x082D38F8
	@ First referenced by species index 167
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species168: @ 0x082D38FC
	@ First referenced by species index 168
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species169: @ 0x082D3900
	@ First referenced by species index 169
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species170: @ 0x082D3904
	@ First referenced by species index 170
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species171: @ 0x082D3908
	@ First referenced by species index 171
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species172: @ 0x082D390C
	@ First referenced by species index 172
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species173: @ 0x082D3910
	@ First referenced by species index 173
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species174: @ 0x082D3914
	@ First referenced by species index 174
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species175: @ 0x082D3918
	@ First referenced by species index 175
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species176: @ 0x082D391C
	@ First referenced by species index 176
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species177: @ 0x082D3920
	@ First referenced by species index 177
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species178: @ 0x082D3924
	@ First referenced by species index 178
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species179: @ 0x082D3928
	@ First referenced by species index 179
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species180: @ 0x082D392C
	@ First referenced by species index 180
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species181: @ 0x082D3930
	@ First referenced by species index 181
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species182: @ 0x082D3934
	@ First referenced by species index 182
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species183: @ 0x082D3938
	@ First referenced by species index 183
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species184: @ 0x082D393C
	@ First referenced by species index 184
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species185: @ 0x082D3940
	@ First referenced by species index 185
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species186: @ 0x082D3944
	@ First referenced by species index 186
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species187: @ 0x082D3948
	@ First referenced by species index 187
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species188: @ 0x082D394C
	@ First referenced by species index 188
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species189: @ 0x082D3950
	@ First referenced by species index 189
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species190: @ 0x082D3954
	@ First referenced by species index 190
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species191: @ 0x082D3958
	@ First referenced by species index 191
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species192: @ 0x082D395C
	@ First referenced by species index 192
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species193: @ 0x082D3960
	@ First referenced by species index 193
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species194: @ 0x082D3964
	@ First referenced by species index 194
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species195: @ 0x082D3968
	@ First referenced by species index 195
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species196: @ 0x082D396C
	@ First referenced by species index 196
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species197: @ 0x082D3970
	@ First referenced by species index 197
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species198: @ 0x082D3974
	@ First referenced by species index 198
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species199: @ 0x082D3978
	@ First referenced by species index 199
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species200: @ 0x082D397C
	@ First referenced by species index 200
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species201: @ 0x082D3980
	@ First referenced by species index 201
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species202: @ 0x082D3984
	@ First referenced by species index 202
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species203: @ 0x082D3988
	@ First referenced by species index 203
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species204: @ 0x082D398C
	@ First referenced by species index 204
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species205: @ 0x082D3990
	@ First referenced by species index 205
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species206: @ 0x082D3994
	@ First referenced by species index 206
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species207: @ 0x082D3998
	@ First referenced by species index 207
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species208: @ 0x082D399C
	@ First referenced by species index 208
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species209: @ 0x082D39A0
	@ First referenced by species index 209
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species210: @ 0x082D39A4
	@ First referenced by species index 210
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species211: @ 0x082D39A8
	@ First referenced by species index 211
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species212: @ 0x082D39AC
	@ First referenced by species index 212
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species213: @ 0x082D39B0
	@ First referenced by species index 213
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species214: @ 0x082D39B4
	@ First referenced by species index 214
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species215: @ 0x082D39B8
	@ First referenced by species index 215
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species216: @ 0x082D39BC
	@ First referenced by species index 216
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species217: @ 0x082D39C0
	@ First referenced by species index 217
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species218: @ 0x082D39C4
	@ First referenced by species index 218
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species219: @ 0x082D39C8
	@ First referenced by species index 219
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species220: @ 0x082D39CC
	@ First referenced by species index 220
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species221: @ 0x082D39D0
	@ First referenced by species index 221
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species222: @ 0x082D39D4
	@ First referenced by species index 222
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species223: @ 0x082D39D8
	@ First referenced by species index 223
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species224: @ 0x082D39DC
	@ First referenced by species index 224
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species225: @ 0x082D39E0
	@ First referenced by species index 225
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species226: @ 0x082D39E4
	@ First referenced by species index 226
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species227: @ 0x082D39E8
	@ First referenced by species index 227
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species228: @ 0x082D39EC
	@ First referenced by species index 228
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species229: @ 0x082D39F0
	@ First referenced by species index 229
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species230: @ 0x082D39F4
	@ First referenced by species index 230
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species231: @ 0x082D39F8
	@ First referenced by species index 231
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species232: @ 0x082D39FC
	@ First referenced by species index 232
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species233: @ 0x082D3A00
	@ First referenced by species index 233
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species234: @ 0x082D3A04
	@ First referenced by species index 234
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species235: @ 0x082D3A08
	@ First referenced by species index 235
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species236: @ 0x082D3A0C
	@ First referenced by species index 236
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species237: @ 0x082D3A10
	@ First referenced by species index 237
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species238: @ 0x082D3A14
	@ First referenced by species index 238
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species239: @ 0x082D3A18
	@ First referenced by species index 239
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species240: @ 0x082D3A1C
	@ First referenced by species index 240
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species241: @ 0x082D3A20
	@ First referenced by species index 241
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species242: @ 0x082D3A24
	@ First referenced by species index 242
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species243: @ 0x082D3A28
	@ First referenced by species index 243
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species244: @ 0x082D3A2C
	@ First referenced by species index 244
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species245: @ 0x082D3A30
	@ First referenced by species index 245
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species246: @ 0x082D3A34
	@ First referenced by species index 246
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species247: @ 0x082D3A38
	@ First referenced by species index 247
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species248: @ 0x082D3A3C
	@ First referenced by species index 248
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species249: @ 0x082D3A40
	@ First referenced by species index 249
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species250: @ 0x082D3A44
	@ First referenced by species index 250
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species251: @ 0x082D3A48
	@ First referenced by species index 251
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species252: @ 0x082D3A4C
	@ First referenced by species index 252
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species277: @ 0x082D3A50
	@ First referenced by species index 277
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species278: @ 0x082D3A54
	@ First referenced by species index 278
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species279: @ 0x082D3A58
	@ First referenced by species index 279
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species280: @ 0x082D3A5C
	@ First referenced by species index 280
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species281: @ 0x082D3A60
	@ First referenced by species index 281
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species282: @ 0x082D3A64
	@ First referenced by species index 282
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_000
	.4byte sUnusedAnimCmds_001
	.4byte sUnusedAnimCmds_002
	.4byte sUnusedAnimCmds_003

sUnusedAnims_Species283: @ 0x082D3A78
	@ First referenced by species index 283
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species284: @ 0x082D3A7C
	@ First referenced by species index 284
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_004
	.4byte sUnusedAnimCmds_005
	.4byte sUnusedAnimCmds_006

sUnusedAnims_Species285: @ 0x082D3A8C
	@ First referenced by species index 285
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species286: @ 0x082D3A90
	@ First referenced by species index 286
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_007
	.4byte sUnusedAnimCmds_008

sUnusedAnims_Species287: @ 0x082D3A9C
	@ First referenced by species index 287
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_009

sUnusedAnims_Species288: @ 0x082D3AA4
	@ First referenced by species index 288
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_010

sUnusedAnims_Species289: @ 0x082D3AAC
	@ First referenced by species index 289
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_011

sUnusedAnims_Species290: @ 0x082D3AB4
	@ First referenced by species index 290
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_012
	.4byte sUnusedAnimCmds_013

sUnusedAnims_Species291: @ 0x082D3AC0
	@ First referenced by species index 291
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_014
	.4byte sUnusedAnimCmds_015

sUnusedAnims_Species292: @ 0x082D3ACC
	@ First referenced by species index 292
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_016
	.4byte sUnusedAnimCmds_017

sUnusedAnims_Species293: @ 0x082D3AD8
	@ First referenced by species index 293
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_018
	.4byte sUnusedAnimCmds_019

sUnusedAnims_Species294: @ 0x082D3AE4
	@ First referenced by species index 294
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_020
	.4byte sUnusedAnimCmds_021

sUnusedAnims_Species295: @ 0x082D3AF0
	@ First referenced by species index 295
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species296: @ 0x082D3AF4
	@ First referenced by species index 296
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_022

sUnusedAnims_Species297: @ 0x082D3AFC
	@ First referenced by species index 297
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_023
	.4byte sUnusedAnimCmds_024

sUnusedAnims_Species298: @ 0x082D3B08
	@ First referenced by species index 298
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_025

sUnusedAnims_Species299: @ 0x082D3B10
	@ First referenced by species index 299
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_026

sUnusedAnims_Species300: @ 0x082D3B18
	@ First referenced by species index 300
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_027
	.4byte sUnusedAnimCmds_028

sUnusedAnims_Species301: @ 0x082D3B24
	@ First referenced by species index 301
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species302: @ 0x082D3B28
	@ First referenced by species index 302
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species303: @ 0x082D3B2C
	@ First referenced by species index 303
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species304: @ 0x082D3B30
	@ First referenced by species index 304
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_029

sUnusedAnims_Species305: @ 0x082D3B38
	@ First referenced by species index 305
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_030

sUnusedAnims_Species306: @ 0x082D3B40
	@ First referenced by species index 306
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_031

sUnusedAnims_Species307: @ 0x082D3B48
	@ First referenced by species index 307
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_032

sUnusedAnims_Species308: @ 0x082D3B50
	@ First referenced by species index 308
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species309: @ 0x082D3B54
	@ First referenced by species index 309
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_033

sUnusedAnims_Species310: @ 0x082D3B5C
	@ First referenced by species index 310
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_034
	.4byte sUnusedAnimCmds_035

sUnusedAnims_Species311: @ 0x082D3B68
	@ First referenced by species index 311
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_036
	.4byte sUnusedAnimCmds_037

sUnusedAnims_Species312: @ 0x082D3B74
	@ First referenced by species index 312
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_038
	.4byte sUnusedAnimCmds_039

sUnusedAnims_Species313: @ 0x082D3B80
	@ First referenced by species index 313
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_040
	.4byte sUnusedAnimCmds_041
	.4byte sUnusedAnimCmds_042
	.4byte sUnusedAnimCmds_043

sUnusedAnims_Species314: @ 0x082D3B94
	@ First referenced by species index 314
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species315: @ 0x082D3B98
	@ First referenced by species index 315
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_044

sUnusedAnims_Species316: @ 0x082D3BA0
	@ First referenced by species index 316
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_045

sUnusedAnims_Species317: @ 0x082D3BA8
	@ First referenced by species index 317
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_046
	.4byte sUnusedAnimCmds_047
	.4byte sUnusedAnimCmds_048
	.4byte sUnusedAnimCmds_049

sUnusedAnims_Species318: @ 0x082D3BBC
	@ First referenced by species index 318
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_050

sUnusedAnims_Species319: @ 0x082D3BC4
	@ First referenced by species index 319
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_051

sUnusedAnims_Species320: @ 0x082D3BCC
	@ First referenced by species index 320
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_052

sUnusedAnims_Species321: @ 0x082D3BD4
	@ First referenced by species index 321
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species322: @ 0x082D3BD8
	@ First referenced by species index 322
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_053
	.4byte sUnusedAnimCmds_054

sUnusedAnims_Species323: @ 0x082D3BE4
	@ First referenced by species index 323
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species324: @ 0x082D3BE8
	@ First referenced by species index 324
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species325: @ 0x082D3BEC
	@ First referenced by species index 325
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_055
	.4byte sUnusedAnimCmds_056

sUnusedAnims_Species326: @ 0x082D3BF8
	@ First referenced by species index 326
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species327: @ 0x082D3BFC
	@ First referenced by species index 327
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species328: @ 0x082D3C00
	@ First referenced by species index 328
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_057
	.4byte sUnusedAnimCmds_058

sUnusedAnims_Species329: @ 0x082D3C0C
	@ First referenced by species index 329
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_059
	.4byte sUnusedAnimCmds_060

sUnusedAnims_Species330: @ 0x082D3C18
	@ First referenced by species index 330
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_061
	.4byte sUnusedAnimCmds_062

sUnusedAnims_Species331: @ 0x082D3C24
	@ First referenced by species index 331
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_063
	.4byte sUnusedAnimCmds_064

sUnusedAnims_Species332: @ 0x082D3C30
	@ First referenced by species index 332
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_065

sUnusedAnims_Species333: @ 0x082D3C38
	@ First referenced by species index 333
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_066

sUnusedAnims_Species334: @ 0x082D3C40
	@ First referenced by species index 334
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_067

sUnusedAnims_Species335: @ 0x082D3C48
	@ First referenced by species index 335
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_068

sUnusedAnims_Species336: @ 0x082D3C50
	@ First referenced by species index 336
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_069

sUnusedAnims_Species337: @ 0x082D3C58
	@ First referenced by species index 337
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_070
	.4byte sUnusedAnimCmds_071

sUnusedAnims_Species338: @ 0x082D3C64
	@ First referenced by species index 338
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_072

sUnusedAnims_Species339: @ 0x082D3C6C
	@ First referenced by species index 339
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_073
	.4byte sUnusedAnimCmds_074

sUnusedAnims_Species340: @ 0x082D3C78
	@ First referenced by species index 340
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_075

sUnusedAnims_Species341: @ 0x082D3C80
	@ First referenced by species index 341
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_076

sUnusedAnims_Species342: @ 0x082D3C88
	@ First referenced by species index 342
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_077

sUnusedAnims_Species343: @ 0x082D3C90
	@ First referenced by species index 343
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_078
	.4byte sUnusedAnimCmds_079

sUnusedAnims_Species344: @ 0x082D3C9C
	@ First referenced by species index 344
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species345: @ 0x082D3CA0
	@ First referenced by species index 345
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species346: @ 0x082D3CA4
	@ First referenced by species index 346
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species347: @ 0x082D3CA8
	@ First referenced by species index 347
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species348: @ 0x082D3CAC
	@ First referenced by species index 348
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species349: @ 0x082D3CB0
	@ First referenced by species index 349
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species350: @ 0x082D3CB4
	@ First referenced by species index 350
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_080
	.4byte sUnusedAnimCmds_081
	.4byte sUnusedAnimCmds_082
	.4byte sUnusedAnimCmds_083

sUnusedAnims_Species351: @ 0x082D3CC8
	@ First referenced by species index 351
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_084
	.4byte sUnusedAnimCmds_085

sUnusedAnims_Species352: @ 0x082D3CD4
	@ First referenced by species index 352
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_086

sUnusedAnims_Species353: @ 0x082D3CDC
	@ First referenced by species index 353
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_087

sUnusedAnims_Species354: @ 0x082D3CE4
	@ First referenced by species index 354
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_088

sUnusedAnims_Species355: @ 0x082D3CEC
	@ First referenced by species index 355
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_089

sUnusedAnims_Species356: @ 0x082D3CF4
	@ First referenced by species index 356
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_090

sUnusedAnims_Species357: @ 0x082D3CFC
	@ First referenced by species index 357
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_091

sUnusedAnims_Species358: @ 0x082D3D04
	@ First referenced by species index 358
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_092
	.4byte sUnusedAnimCmds_093

sUnusedAnims_Species359: @ 0x082D3D10
	@ First referenced by species index 359
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_094

sUnusedAnims_Species360: @ 0x082D3D18
	@ First referenced by species index 360
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_095
	.4byte sUnusedAnimCmds_096

sUnusedAnims_Species361: @ 0x082D3D24
	@ First referenced by species index 361
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_097
	.4byte sUnusedAnimCmds_098

sUnusedAnims_Species362: @ 0x082D3D30
	@ First referenced by species index 362
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_099
	.4byte sUnusedAnimCmds_100

sUnusedAnims_Species363: @ 0x082D3D3C
	@ First referenced by species index 363
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species364: @ 0x082D3D40
	@ First referenced by species index 364
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_101

sUnusedAnims_Species365: @ 0x082D3D48
	@ First referenced by species index 365
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_102

sUnusedAnims_Species366: @ 0x082D3D50
	@ First referenced by species index 366
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_103

sUnusedAnims_Species367: @ 0x082D3D58
	@ First referenced by species index 367
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_104

sUnusedAnims_Species368: @ 0x082D3D60
	@ First referenced by species index 368
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_105

sUnusedAnims_Species369: @ 0x082D3D68
	@ First referenced by species index 369
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_106

sUnusedAnims_Species370: @ 0x082D3D70
	@ First referenced by species index 370
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species371: @ 0x082D3D74
	@ First referenced by species index 371
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species372: @ 0x082D3D78
	@ First referenced by species index 372
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species373: @ 0x082D3D7C
	@ First referenced by species index 373
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_107

sUnusedAnims_Species374: @ 0x082D3D84
	@ First referenced by species index 374
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species375: @ 0x082D3D88
	@ First referenced by species index 375
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species376: @ 0x082D3D8C
	@ First referenced by species index 376
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_108

sUnusedAnims_Species377: @ 0x082D3D94
	@ First referenced by species index 377
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_109
	.4byte sUnusedAnimCmds_110

sUnusedAnims_Species378: @ 0x082D3DA0
	@ First referenced by species index 378
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_111

sUnusedAnims_Species379: @ 0x082D3DA8
	@ First referenced by species index 379
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species380: @ 0x082D3DAC
	@ First referenced by species index 380
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species381: @ 0x082D3DB0
	@ First referenced by species index 381
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species382: @ 0x082D3DB4
	@ First referenced by species index 382
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_112

sUnusedAnims_Species383: @ 0x082D3DBC
	@ First referenced by species index 383
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_113

sUnusedAnims_Species384: @ 0x082D3DC4
	@ First referenced by species index 384
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_114

sUnusedAnims_Species385: @ 0x082D3DCC
	@ First referenced by species index 385
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_115
	.4byte sUnusedAnimCmds_116
	.4byte sUnusedAnimCmds_117
	.4byte sUnusedAnimCmds_118

sUnusedAnims_Species386: @ 0x082D3DE0
	@ First referenced by species index 386
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_119

sUnusedAnims_Species387: @ 0x082D3DE8
	@ First referenced by species index 387
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_120

sUnusedAnims_Species388: @ 0x082D3DF0
	@ First referenced by species index 388
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species389: @ 0x082D3DF4
	@ First referenced by species index 389
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species390: @ 0x082D3DF8
	@ First referenced by species index 390
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species391: @ 0x082D3DFC
	@ First referenced by species index 391
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species392: @ 0x082D3E00
	@ First referenced by species index 392
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species393: @ 0x082D3E04
	@ First referenced by species index 393
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species394: @ 0x082D3E08
	@ First referenced by species index 394
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species395: @ 0x082D3E0C
	@ First referenced by species index 395
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_121
	.4byte sUnusedAnimCmds_122

sUnusedAnims_Species396: @ 0x082D3E18
	@ First referenced by species index 396
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species397: @ 0x082D3E1C
	@ First referenced by species index 397
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_123
	.4byte sUnusedAnimCmds_124

sUnusedAnims_Species398: @ 0x082D3E28
	@ First referenced by species index 398
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species399: @ 0x082D3E2C
	@ First referenced by species index 399
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species400: @ 0x082D3E30
	@ First referenced by species index 400
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species401: @ 0x082D3E34
	@ First referenced by species index 401
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_125

sUnusedAnims_Species402: @ 0x082D3E3C
	@ First referenced by species index 402
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_126

sUnusedAnims_Species403: @ 0x082D3E44
	@ First referenced by species index 403
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_127
	.4byte sUnusedAnimCmds_128

sUnusedAnims_Species404: @ 0x082D3E50
	@ First referenced by species index 404
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species405: @ 0x082D3E54
	@ First referenced by species index 405
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species406: @ 0x082D3E58
	@ First referenced by species index 406
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_129
	.4byte sUnusedAnimCmds_130

sUnusedAnims_Species407: @ 0x082D3E64
	@ First referenced by species index 407
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species408: @ 0x082D3E68
	@ First referenced by species index 408
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species409: @ 0x082D3E6C
	@ First referenced by species index 409
	.4byte sAnim_GeneralFrame0
	.4byte sUnusedAnimCmds_131

sUnusedAnims_Species410: @ 0x082D3E74
	@ First referenced by species index 410
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species411: @ 0x082D3E78
	@ First referenced by species index 411
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species412: @ 0x082D3E7C
	@ First referenced by species index 412
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species414: @ 0x082D3E80
	@ First referenced by species index 414
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species415: @ 0x082D3E84
	@ First referenced by species index 415
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species416: @ 0x082D3E88
	@ First referenced by species index 416
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species417: @ 0x082D3E8C
	@ First referenced by species index 417
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species418: @ 0x082D3E90
	@ First referenced by species index 418
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species419: @ 0x082D3E94
	@ First referenced by species index 419
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species420: @ 0x082D3E98
	@ First referenced by species index 420
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species421: @ 0x082D3E9C
	@ First referenced by species index 421
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species422: @ 0x082D3EA0
	@ First referenced by species index 422
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species423: @ 0x082D3EA4
	@ First referenced by species index 423
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species424: @ 0x082D3EA8
	@ First referenced by species index 424
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species425: @ 0x082D3EAC
	@ First referenced by species index 425
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species426: @ 0x082D3EB0
	@ First referenced by species index 426
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species427: @ 0x082D3EB4
	@ First referenced by species index 427
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species428: @ 0x082D3EB8
	@ First referenced by species index 428
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species429: @ 0x082D3EBC
	@ First referenced by species index 429
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species430: @ 0x082D3EC0
	@ First referenced by species index 430
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species431: @ 0x082D3EC4
	@ First referenced by species index 431
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species432: @ 0x082D3EC8
	@ First referenced by species index 432
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species433: @ 0x082D3ECC
	@ First referenced by species index 433
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species434: @ 0x082D3ED0
	@ First referenced by species index 434
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species435: @ 0x082D3ED4
	@ First referenced by species index 435
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species436: @ 0x082D3ED8
	@ First referenced by species index 436
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species437: @ 0x082D3EDC
	@ First referenced by species index 437
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species438: @ 0x082D3EE0
	@ First referenced by species index 438
	.4byte sAnim_GeneralFrame0

sUnusedAnims_Species439: @ 0x082D3EE4
	@ First referenced by species index 439
	.4byte sAnim_GeneralFrame0

sUnusedAnimsTable: @ 0x082D3EE8
	.4byte sUnusedAnims_Species000 @ species index 0
	.4byte sUnusedAnims_Species001 @ species index 1
	.4byte sUnusedAnims_Species002 @ species index 2
	.4byte sUnusedAnims_Species003 @ species index 3
	.4byte sUnusedAnims_Species004 @ species index 4
	.4byte sUnusedAnims_Species005 @ species index 5
	.4byte sUnusedAnims_Species006 @ species index 6
	.4byte sUnusedAnims_Species007 @ species index 7
	.4byte sUnusedAnims_Species008 @ species index 8
	.4byte sUnusedAnims_Species009 @ species index 9
	.4byte sUnusedAnims_Species010 @ species index 10
	.4byte sUnusedAnims_Species011 @ species index 11
	.4byte sUnusedAnims_Species012 @ species index 12
	.4byte sUnusedAnims_Species013 @ species index 13
	.4byte sUnusedAnims_Species014 @ species index 14
	.4byte sUnusedAnims_Species015 @ species index 15
	.4byte sUnusedAnims_Species016 @ species index 16
	.4byte sUnusedAnims_Species017 @ species index 17
	.4byte sUnusedAnims_Species018 @ species index 18
	.4byte sUnusedAnims_Species019 @ species index 19
	.4byte sUnusedAnims_Species020 @ species index 20
	.4byte sUnusedAnims_Species021 @ species index 21
	.4byte sUnusedAnims_Species022 @ species index 22
	.4byte sUnusedAnims_Species023 @ species index 23
	.4byte sUnusedAnims_Species024 @ species index 24
	.4byte sUnusedAnims_Species025 @ species index 25
	.4byte sUnusedAnims_Species026 @ species index 26
	.4byte sUnusedAnims_Species027 @ species index 27
	.4byte sUnusedAnims_Species028 @ species index 28
	.4byte sUnusedAnims_Species029 @ species index 29
	.4byte sUnusedAnims_Species030 @ species index 30
	.4byte sUnusedAnims_Species031 @ species index 31
	.4byte sUnusedAnims_Species032 @ species index 32
	.4byte sUnusedAnims_Species033 @ species index 33
	.4byte sUnusedAnims_Species034 @ species index 34
	.4byte sUnusedAnims_Species035 @ species index 35
	.4byte sUnusedAnims_Species036 @ species index 36
	.4byte sUnusedAnims_Species037 @ species index 37
	.4byte sUnusedAnims_Species038 @ species index 38
	.4byte sUnusedAnims_Species039 @ species index 39
	.4byte sUnusedAnims_Species040 @ species index 40
	.4byte sUnusedAnims_Species041 @ species index 41
	.4byte sUnusedAnims_Species042 @ species index 42
	.4byte sUnusedAnims_Species043 @ species index 43
	.4byte sUnusedAnims_Species044 @ species index 44
	.4byte sUnusedAnims_Species045 @ species index 45
	.4byte sUnusedAnims_Species046 @ species index 46
	.4byte sUnusedAnims_Species047 @ species index 47
	.4byte sUnusedAnims_Species048 @ species index 48
	.4byte sUnusedAnims_Species049 @ species index 49
	.4byte sUnusedAnims_Species050 @ species index 50
	.4byte sUnusedAnims_Species051 @ species index 51
	.4byte sUnusedAnims_Species052 @ species index 52
	.4byte sUnusedAnims_Species053 @ species index 53
	.4byte sUnusedAnims_Species054 @ species index 54
	.4byte sUnusedAnims_Species055 @ species index 55
	.4byte sUnusedAnims_Species056 @ species index 56
	.4byte sUnusedAnims_Species057 @ species index 57
	.4byte sUnusedAnims_Species058 @ species index 58
	.4byte sUnusedAnims_Species059 @ species index 59
	.4byte sUnusedAnims_Species060 @ species index 60
	.4byte sUnusedAnims_Species061 @ species index 61
	.4byte sUnusedAnims_Species062 @ species index 62
	.4byte sUnusedAnims_Species063 @ species index 63
	.4byte sUnusedAnims_Species064 @ species index 64
	.4byte sUnusedAnims_Species065 @ species index 65
	.4byte sUnusedAnims_Species066 @ species index 66
	.4byte sUnusedAnims_Species067 @ species index 67
	.4byte sUnusedAnims_Species068 @ species index 68
	.4byte sUnusedAnims_Species069 @ species index 69
	.4byte sUnusedAnims_Species070 @ species index 70
	.4byte sUnusedAnims_Species071 @ species index 71
	.4byte sUnusedAnims_Species072 @ species index 72
	.4byte sUnusedAnims_Species073 @ species index 73
	.4byte sUnusedAnims_Species074 @ species index 74
	.4byte sUnusedAnims_Species075 @ species index 75
	.4byte sUnusedAnims_Species076 @ species index 76
	.4byte sUnusedAnims_Species077 @ species index 77
	.4byte sUnusedAnims_Species078 @ species index 78
	.4byte sUnusedAnims_Species079 @ species index 79
	.4byte sUnusedAnims_Species080 @ species index 80
	.4byte sUnusedAnims_Species081 @ species index 81
	.4byte sUnusedAnims_Species082 @ species index 82
	.4byte sUnusedAnims_Species083 @ species index 83
	.4byte sUnusedAnims_Species084 @ species index 84
	.4byte sUnusedAnims_Species085 @ species index 85
	.4byte sUnusedAnims_Species086 @ species index 86
	.4byte sUnusedAnims_Species087 @ species index 87
	.4byte sUnusedAnims_Species088 @ species index 88
	.4byte sUnusedAnims_Species089 @ species index 89
	.4byte sUnusedAnims_Species090 @ species index 90
	.4byte sUnusedAnims_Species091 @ species index 91
	.4byte sUnusedAnims_Species092 @ species index 92
	.4byte sUnusedAnims_Species093 @ species index 93
	.4byte sUnusedAnims_Species094 @ species index 94
	.4byte sUnusedAnims_Species095 @ species index 95
	.4byte sUnusedAnims_Species096 @ species index 96
	.4byte sUnusedAnims_Species097 @ species index 97
	.4byte sUnusedAnims_Species098 @ species index 98
	.4byte sUnusedAnims_Species099 @ species index 99
	.4byte sUnusedAnims_Species100 @ species index 100
	.4byte sUnusedAnims_Species101 @ species index 101
	.4byte sUnusedAnims_Species102 @ species index 102
	.4byte sUnusedAnims_Species103 @ species index 103
	.4byte sUnusedAnims_Species104 @ species index 104
	.4byte sUnusedAnims_Species105 @ species index 105
	.4byte sUnusedAnims_Species106 @ species index 106
	.4byte sUnusedAnims_Species107 @ species index 107
	.4byte sUnusedAnims_Species108 @ species index 108
	.4byte sUnusedAnims_Species109 @ species index 109
	.4byte sUnusedAnims_Species110 @ species index 110
	.4byte sUnusedAnims_Species111 @ species index 111
	.4byte sUnusedAnims_Species112 @ species index 112
	.4byte sUnusedAnims_Species113 @ species index 113
	.4byte sUnusedAnims_Species114 @ species index 114
	.4byte sUnusedAnims_Species115 @ species index 115
	.4byte sUnusedAnims_Species116 @ species index 116
	.4byte sUnusedAnims_Species117 @ species index 117
	.4byte sUnusedAnims_Species118 @ species index 118
	.4byte sUnusedAnims_Species119 @ species index 119
	.4byte sUnusedAnims_Species120 @ species index 120
	.4byte sUnusedAnims_Species121 @ species index 121
	.4byte sUnusedAnims_Species122 @ species index 122
	.4byte sUnusedAnims_Species123 @ species index 123
	.4byte sUnusedAnims_Species124 @ species index 124
	.4byte sUnusedAnims_Species125 @ species index 125
	.4byte sUnusedAnims_Species126 @ species index 126
	.4byte sUnusedAnims_Species127 @ species index 127
	.4byte sUnusedAnims_Species128 @ species index 128
	.4byte sUnusedAnims_Species129 @ species index 129
	.4byte sUnusedAnims_Species130 @ species index 130
	.4byte sUnusedAnims_Species131 @ species index 131
	.4byte sUnusedAnims_Species132 @ species index 132
	.4byte sUnusedAnims_Species133 @ species index 133
	.4byte sUnusedAnims_Species134 @ species index 134
	.4byte sUnusedAnims_Species135 @ species index 135
	.4byte sUnusedAnims_Species136 @ species index 136
	.4byte sUnusedAnims_Species137 @ species index 137
	.4byte sUnusedAnims_Species138 @ species index 138
	.4byte sUnusedAnims_Species139 @ species index 139
	.4byte sUnusedAnims_Species140 @ species index 140
	.4byte sUnusedAnims_Species141 @ species index 141
	.4byte sUnusedAnims_Species142 @ species index 142
	.4byte sUnusedAnims_Species143 @ species index 143
	.4byte sUnusedAnims_Species144 @ species index 144
	.4byte sUnusedAnims_Species145 @ species index 145
	.4byte sUnusedAnims_Species146 @ species index 146
	.4byte sUnusedAnims_Species147 @ species index 147
	.4byte sUnusedAnims_Species148 @ species index 148
	.4byte sUnusedAnims_Species149 @ species index 149
	.4byte sUnusedAnims_Species150 @ species index 150
	.4byte sUnusedAnims_Species151 @ species index 151
	.4byte sUnusedAnims_Species152 @ species index 152
	.4byte sUnusedAnims_Species153 @ species index 153
	.4byte sUnusedAnims_Species154 @ species index 154
	.4byte sUnusedAnims_Species155 @ species index 155
	.4byte sUnusedAnims_Species156 @ species index 156
	.4byte sUnusedAnims_Species157 @ species index 157
	.4byte sUnusedAnims_Species158 @ species index 158
	.4byte sUnusedAnims_Species159 @ species index 159
	.4byte sUnusedAnims_Species160 @ species index 160
	.4byte sUnusedAnims_Species161 @ species index 161
	.4byte sUnusedAnims_Species162 @ species index 162
	.4byte sUnusedAnims_Species163 @ species index 163
	.4byte sUnusedAnims_Species164 @ species index 164
	.4byte sUnusedAnims_Species165 @ species index 165
	.4byte sUnusedAnims_Species166 @ species index 166
	.4byte sUnusedAnims_Species167 @ species index 167
	.4byte sUnusedAnims_Species168 @ species index 168
	.4byte sUnusedAnims_Species169 @ species index 169
	.4byte sUnusedAnims_Species170 @ species index 170
	.4byte sUnusedAnims_Species171 @ species index 171
	.4byte sUnusedAnims_Species172 @ species index 172
	.4byte sUnusedAnims_Species173 @ species index 173
	.4byte sUnusedAnims_Species174 @ species index 174
	.4byte sUnusedAnims_Species175 @ species index 175
	.4byte sUnusedAnims_Species176 @ species index 176
	.4byte sUnusedAnims_Species177 @ species index 177
	.4byte sUnusedAnims_Species178 @ species index 178
	.4byte sUnusedAnims_Species179 @ species index 179
	.4byte sUnusedAnims_Species180 @ species index 180
	.4byte sUnusedAnims_Species181 @ species index 181
	.4byte sUnusedAnims_Species182 @ species index 182
	.4byte sUnusedAnims_Species183 @ species index 183
	.4byte sUnusedAnims_Species184 @ species index 184
	.4byte sUnusedAnims_Species185 @ species index 185
	.4byte sUnusedAnims_Species186 @ species index 186
	.4byte sUnusedAnims_Species187 @ species index 187
	.4byte sUnusedAnims_Species188 @ species index 188
	.4byte sUnusedAnims_Species189 @ species index 189
	.4byte sUnusedAnims_Species190 @ species index 190
	.4byte sUnusedAnims_Species191 @ species index 191
	.4byte sUnusedAnims_Species192 @ species index 192
	.4byte sUnusedAnims_Species193 @ species index 193
	.4byte sUnusedAnims_Species194 @ species index 194
	.4byte sUnusedAnims_Species195 @ species index 195
	.4byte sUnusedAnims_Species196 @ species index 196
	.4byte sUnusedAnims_Species197 @ species index 197
	.4byte sUnusedAnims_Species198 @ species index 198
	.4byte sUnusedAnims_Species199 @ species index 199
	.4byte sUnusedAnims_Species200 @ species index 200
	.4byte sUnusedAnims_Species201 @ species index 201
	.4byte sUnusedAnims_Species202 @ species index 202
	.4byte sUnusedAnims_Species203 @ species index 203
	.4byte sUnusedAnims_Species204 @ species index 204
	.4byte sUnusedAnims_Species205 @ species index 205
	.4byte sUnusedAnims_Species206 @ species index 206
	.4byte sUnusedAnims_Species207 @ species index 207
	.4byte sUnusedAnims_Species208 @ species index 208
	.4byte sUnusedAnims_Species209 @ species index 209
	.4byte sUnusedAnims_Species210 @ species index 210
	.4byte sUnusedAnims_Species211 @ species index 211
	.4byte sUnusedAnims_Species212 @ species index 212
	.4byte sUnusedAnims_Species213 @ species index 213
	.4byte sUnusedAnims_Species214 @ species index 214
	.4byte sUnusedAnims_Species215 @ species index 215
	.4byte sUnusedAnims_Species216 @ species index 216
	.4byte sUnusedAnims_Species217 @ species index 217
	.4byte sUnusedAnims_Species218 @ species index 218
	.4byte sUnusedAnims_Species219 @ species index 219
	.4byte sUnusedAnims_Species220 @ species index 220
	.4byte sUnusedAnims_Species221 @ species index 221
	.4byte sUnusedAnims_Species222 @ species index 222
	.4byte sUnusedAnims_Species223 @ species index 223
	.4byte sUnusedAnims_Species224 @ species index 224
	.4byte sUnusedAnims_Species225 @ species index 225
	.4byte sUnusedAnims_Species226 @ species index 226
	.4byte sUnusedAnims_Species227 @ species index 227
	.4byte sUnusedAnims_Species228 @ species index 228
	.4byte sUnusedAnims_Species229 @ species index 229
	.4byte sUnusedAnims_Species230 @ species index 230
	.4byte sUnusedAnims_Species231 @ species index 231
	.4byte sUnusedAnims_Species232 @ species index 232
	.4byte sUnusedAnims_Species233 @ species index 233
	.4byte sUnusedAnims_Species234 @ species index 234
	.4byte sUnusedAnims_Species235 @ species index 235
	.4byte sUnusedAnims_Species236 @ species index 236
	.4byte sUnusedAnims_Species237 @ species index 237
	.4byte sUnusedAnims_Species238 @ species index 238
	.4byte sUnusedAnims_Species239 @ species index 239
	.4byte sUnusedAnims_Species240 @ species index 240
	.4byte sUnusedAnims_Species241 @ species index 241
	.4byte sUnusedAnims_Species242 @ species index 242
	.4byte sUnusedAnims_Species243 @ species index 243
	.4byte sUnusedAnims_Species244 @ species index 244
	.4byte sUnusedAnims_Species245 @ species index 245
	.4byte sUnusedAnims_Species246 @ species index 246
	.4byte sUnusedAnims_Species247 @ species index 247
	.4byte sUnusedAnims_Species248 @ species index 248
	.4byte sUnusedAnims_Species249 @ species index 249
	.4byte sUnusedAnims_Species250 @ species index 250
	.4byte sUnusedAnims_Species251 @ species index 251
	.4byte sUnusedAnims_Species252 @ species index 252
	.4byte sUnusedAnims_Species252 @ species index 253
	.4byte sUnusedAnims_Species252 @ species index 254
	.4byte sUnusedAnims_Species252 @ species index 255
	.4byte sUnusedAnims_Species252 @ species index 256
	.4byte sUnusedAnims_Species252 @ species index 257
	.4byte sUnusedAnims_Species252 @ species index 258
	.4byte sUnusedAnims_Species252 @ species index 259
	.4byte sUnusedAnims_Species252 @ species index 260
	.4byte sUnusedAnims_Species252 @ species index 261
	.4byte sUnusedAnims_Species252 @ species index 262
	.4byte sUnusedAnims_Species252 @ species index 263
	.4byte sUnusedAnims_Species252 @ species index 264
	.4byte sUnusedAnims_Species252 @ species index 265
	.4byte sUnusedAnims_Species252 @ species index 266
	.4byte sUnusedAnims_Species252 @ species index 267
	.4byte sUnusedAnims_Species252 @ species index 268
	.4byte sUnusedAnims_Species252 @ species index 269
	.4byte sUnusedAnims_Species252 @ species index 270
	.4byte sUnusedAnims_Species252 @ species index 271
	.4byte sUnusedAnims_Species252 @ species index 272
	.4byte sUnusedAnims_Species252 @ species index 273
	.4byte sUnusedAnims_Species252 @ species index 274
	.4byte sUnusedAnims_Species252 @ species index 275
	.4byte sUnusedAnims_Species252 @ species index 276
	.4byte sUnusedAnims_Species277 @ species index 277
	.4byte sUnusedAnims_Species278 @ species index 278
	.4byte sUnusedAnims_Species279 @ species index 279
	.4byte sUnusedAnims_Species280 @ species index 280
	.4byte sUnusedAnims_Species281 @ species index 281
	.4byte sUnusedAnims_Species282 @ species index 282
	.4byte sUnusedAnims_Species283 @ species index 283
	.4byte sUnusedAnims_Species284 @ species index 284
	.4byte sUnusedAnims_Species285 @ species index 285
	.4byte sUnusedAnims_Species286 @ species index 286
	.4byte sUnusedAnims_Species287 @ species index 287
	.4byte sUnusedAnims_Species288 @ species index 288
	.4byte sUnusedAnims_Species289 @ species index 289
	.4byte sUnusedAnims_Species290 @ species index 290
	.4byte sUnusedAnims_Species291 @ species index 291
	.4byte sUnusedAnims_Species292 @ species index 292
	.4byte sUnusedAnims_Species293 @ species index 293
	.4byte sUnusedAnims_Species294 @ species index 294
	.4byte sUnusedAnims_Species295 @ species index 295
	.4byte sUnusedAnims_Species296 @ species index 296
	.4byte sUnusedAnims_Species297 @ species index 297
	.4byte sUnusedAnims_Species298 @ species index 298
	.4byte sUnusedAnims_Species299 @ species index 299
	.4byte sUnusedAnims_Species300 @ species index 300
	.4byte sUnusedAnims_Species301 @ species index 301
	.4byte sUnusedAnims_Species302 @ species index 302
	.4byte sUnusedAnims_Species303 @ species index 303
	.4byte sUnusedAnims_Species304 @ species index 304
	.4byte sUnusedAnims_Species305 @ species index 305
	.4byte sUnusedAnims_Species306 @ species index 306
	.4byte sUnusedAnims_Species307 @ species index 307
	.4byte sUnusedAnims_Species308 @ species index 308
	.4byte sUnusedAnims_Species309 @ species index 309
	.4byte sUnusedAnims_Species310 @ species index 310
	.4byte sUnusedAnims_Species311 @ species index 311
	.4byte sUnusedAnims_Species312 @ species index 312
	.4byte sUnusedAnims_Species313 @ species index 313
	.4byte sUnusedAnims_Species314 @ species index 314
	.4byte sUnusedAnims_Species315 @ species index 315
	.4byte sUnusedAnims_Species316 @ species index 316
	.4byte sUnusedAnims_Species317 @ species index 317
	.4byte sUnusedAnims_Species318 @ species index 318
	.4byte sUnusedAnims_Species319 @ species index 319
	.4byte sUnusedAnims_Species320 @ species index 320
	.4byte sUnusedAnims_Species321 @ species index 321
	.4byte sUnusedAnims_Species322 @ species index 322
	.4byte sUnusedAnims_Species323 @ species index 323
	.4byte sUnusedAnims_Species324 @ species index 324
	.4byte sUnusedAnims_Species325 @ species index 325
	.4byte sUnusedAnims_Species326 @ species index 326
	.4byte sUnusedAnims_Species327 @ species index 327
	.4byte sUnusedAnims_Species328 @ species index 328
	.4byte sUnusedAnims_Species329 @ species index 329
	.4byte sUnusedAnims_Species330 @ species index 330
	.4byte sUnusedAnims_Species331 @ species index 331
	.4byte sUnusedAnims_Species332 @ species index 332
	.4byte sUnusedAnims_Species333 @ species index 333
	.4byte sUnusedAnims_Species334 @ species index 334
	.4byte sUnusedAnims_Species335 @ species index 335
	.4byte sUnusedAnims_Species336 @ species index 336
	.4byte sUnusedAnims_Species337 @ species index 337
	.4byte sUnusedAnims_Species338 @ species index 338
	.4byte sUnusedAnims_Species339 @ species index 339
	.4byte sUnusedAnims_Species340 @ species index 340
	.4byte sUnusedAnims_Species341 @ species index 341
	.4byte sUnusedAnims_Species342 @ species index 342
	.4byte sUnusedAnims_Species343 @ species index 343
	.4byte sUnusedAnims_Species344 @ species index 344
	.4byte sUnusedAnims_Species345 @ species index 345
	.4byte sUnusedAnims_Species346 @ species index 346
	.4byte sUnusedAnims_Species347 @ species index 347
	.4byte sUnusedAnims_Species348 @ species index 348
	.4byte sUnusedAnims_Species349 @ species index 349
	.4byte sUnusedAnims_Species350 @ species index 350
	.4byte sUnusedAnims_Species351 @ species index 351
	.4byte sUnusedAnims_Species352 @ species index 352
	.4byte sUnusedAnims_Species353 @ species index 353
	.4byte sUnusedAnims_Species354 @ species index 354
	.4byte sUnusedAnims_Species355 @ species index 355
	.4byte sUnusedAnims_Species356 @ species index 356
	.4byte sUnusedAnims_Species357 @ species index 357
	.4byte sUnusedAnims_Species358 @ species index 358
	.4byte sUnusedAnims_Species359 @ species index 359
	.4byte sUnusedAnims_Species360 @ species index 360
	.4byte sUnusedAnims_Species361 @ species index 361
	.4byte sUnusedAnims_Species362 @ species index 362
	.4byte sUnusedAnims_Species363 @ species index 363
	.4byte sUnusedAnims_Species364 @ species index 364
	.4byte sUnusedAnims_Species365 @ species index 365
	.4byte sUnusedAnims_Species366 @ species index 366
	.4byte sUnusedAnims_Species367 @ species index 367
	.4byte sUnusedAnims_Species368 @ species index 368
	.4byte sUnusedAnims_Species369 @ species index 369
	.4byte sUnusedAnims_Species370 @ species index 370
	.4byte sUnusedAnims_Species371 @ species index 371
	.4byte sUnusedAnims_Species372 @ species index 372
	.4byte sUnusedAnims_Species373 @ species index 373
	.4byte sUnusedAnims_Species374 @ species index 374
	.4byte sUnusedAnims_Species375 @ species index 375
	.4byte sUnusedAnims_Species376 @ species index 376
	.4byte sUnusedAnims_Species377 @ species index 377
	.4byte sUnusedAnims_Species378 @ species index 378
	.4byte sUnusedAnims_Species379 @ species index 379
	.4byte sUnusedAnims_Species380 @ species index 380
	.4byte sUnusedAnims_Species381 @ species index 381
	.4byte sUnusedAnims_Species382 @ species index 382
	.4byte sUnusedAnims_Species383 @ species index 383
	.4byte sUnusedAnims_Species384 @ species index 384
	.4byte sUnusedAnims_Species385 @ species index 385
	.4byte sUnusedAnims_Species386 @ species index 386
	.4byte sUnusedAnims_Species387 @ species index 387
	.4byte sUnusedAnims_Species388 @ species index 388
	.4byte sUnusedAnims_Species389 @ species index 389
	.4byte sUnusedAnims_Species390 @ species index 390
	.4byte sUnusedAnims_Species391 @ species index 391
	.4byte sUnusedAnims_Species392 @ species index 392
	.4byte sUnusedAnims_Species393 @ species index 393
	.4byte sUnusedAnims_Species394 @ species index 394
	.4byte sUnusedAnims_Species395 @ species index 395
	.4byte sUnusedAnims_Species396 @ species index 396
	.4byte sUnusedAnims_Species397 @ species index 397
	.4byte sUnusedAnims_Species398 @ species index 398
	.4byte sUnusedAnims_Species399 @ species index 399
	.4byte sUnusedAnims_Species400 @ species index 400
	.4byte sUnusedAnims_Species401 @ species index 401
	.4byte sUnusedAnims_Species402 @ species index 402
	.4byte sUnusedAnims_Species403 @ species index 403
	.4byte sUnusedAnims_Species404 @ species index 404
	.4byte sUnusedAnims_Species405 @ species index 405
	.4byte sUnusedAnims_Species406 @ species index 406
	.4byte sUnusedAnims_Species407 @ species index 407
	.4byte sUnusedAnims_Species408 @ species index 408
	.4byte sUnusedAnims_Species409 @ species index 409
	.4byte sUnusedAnims_Species410 @ species index 410
	.4byte sUnusedAnims_Species411 @ species index 411
	.4byte sUnusedAnims_Species412 @ species index 412
	.4byte sUnusedAnims_Species412 @ species index 413
	.4byte sUnusedAnims_Species414 @ species index 414
	.4byte sUnusedAnims_Species415 @ species index 415
	.4byte sUnusedAnims_Species416 @ species index 416
	.4byte sUnusedAnims_Species417 @ species index 417
	.4byte sUnusedAnims_Species418 @ species index 418
	.4byte sUnusedAnims_Species419 @ species index 419
	.4byte sUnusedAnims_Species420 @ species index 420
	.4byte sUnusedAnims_Species421 @ species index 421
	.4byte sUnusedAnims_Species422 @ species index 422
	.4byte sUnusedAnims_Species423 @ species index 423
	.4byte sUnusedAnims_Species424 @ species index 424
	.4byte sUnusedAnims_Species425 @ species index 425
	.4byte sUnusedAnims_Species426 @ species index 426
	.4byte sUnusedAnims_Species427 @ species index 427
	.4byte sUnusedAnims_Species428 @ species index 428
	.4byte sUnusedAnims_Species429 @ species index 429
	.4byte sUnusedAnims_Species430 @ species index 430
	.4byte sUnusedAnims_Species431 @ species index 431
	.4byte sUnusedAnims_Species432 @ species index 432
	.4byte sUnusedAnims_Species433 @ species index 433
	.4byte sUnusedAnims_Species434 @ species index 434
	.4byte sUnusedAnims_Species435 @ species index 435
	.4byte sUnusedAnims_Species436 @ species index 436
	.4byte sUnusedAnims_Species437 @ species index 437
	.4byte sUnusedAnims_Species438 @ species index 438
	.4byte sUnusedAnims_Species439 @ species index 439

	.globl gUnknown_82D45C8
gUnknown_82D45C8: @ 0x082D45C8
	.globl gMonFrontPicCoords
gMonFrontPicCoords:
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 0: size, y_offset, ABI pad
	.byte 0x45, 0x0E, 0x00, 0x00 @ species index 1: size, y_offset, ABI pad
	.byte 0x56, 0x0A, 0x00, 0x00 @ species index 2: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 3: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 4: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 5: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 6: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 7: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 8: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 9: size, y_offset, ABI pad
	.byte 0x45, 0x10, 0x00, 0x00 @ species index 10: size, y_offset, ABI pad
	.byte 0x54, 0x14, 0x00, 0x00 @ species index 11: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 12: size, y_offset, ABI pad
	.byte 0x54, 0x12, 0x00, 0x00 @ species index 13: size, y_offset, ABI pad
	.byte 0x45, 0x0E, 0x00, 0x00 @ species index 14: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 15: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 16: size, y_offset, ABI pad
	.byte 0x67, 0x0B, 0x00, 0x00 @ species index 17: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 18: size, y_offset, ABI pad
	.byte 0x44, 0x10, 0x00, 0x00 @ species index 19: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 20: size, y_offset, ABI pad
	.byte 0x45, 0x0F, 0x00, 0x00 @ species index 21: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 22: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 23: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 24: size, y_offset, ABI pad
	.byte 0x67, 0x09, 0x00, 0x00 @ species index 25: size, y_offset, ABI pad
	.byte 0x67, 0x04, 0x00, 0x00 @ species index 26: size, y_offset, ABI pad
	.byte 0x55, 0x0E, 0x00, 0x00 @ species index 27: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 28: size, y_offset, ABI pad
	.byte 0x45, 0x0F, 0x00, 0x00 @ species index 29: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 30: size, y_offset, ABI pad
	.byte 0x78, 0x03, 0x00, 0x00 @ species index 31: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 32: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 33: size, y_offset, ABI pad
	.byte 0x78, 0x02, 0x00, 0x00 @ species index 34: size, y_offset, ABI pad
	.byte 0x55, 0x10, 0x00, 0x00 @ species index 35: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 36: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 37: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 38: size, y_offset, ABI pad
	.byte 0x45, 0x10, 0x00, 0x00 @ species index 39: size, y_offset, ABI pad
	.byte 0x67, 0x08, 0x00, 0x00 @ species index 40: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 41: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 42: size, y_offset, ABI pad
	.byte 0x45, 0x0F, 0x00, 0x00 @ species index 43: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 44: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 45: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 46: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 47: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 48: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 49: size, y_offset, ABI pad
	.byte 0x54, 0x12, 0x00, 0x00 @ species index 50: size, y_offset, ABI pad
	.byte 0x75, 0x0D, 0x00, 0x00 @ species index 51: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 52: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 53: size, y_offset, ABI pad
	.byte 0x56, 0x09, 0x00, 0x00 @ species index 54: size, y_offset, ABI pad
	.byte 0x78, 0x02, 0x00, 0x00 @ species index 55: size, y_offset, ABI pad
	.byte 0x65, 0x0E, 0x00, 0x00 @ species index 56: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 57: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 58: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 59: size, y_offset, ABI pad
	.byte 0x74, 0x13, 0x00, 0x00 @ species index 60: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 61: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 62: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 63: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 64: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 65: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 66: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 67: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 68: size, y_offset, ABI pad
	.byte 0x65, 0x0F, 0x00, 0x00 @ species index 69: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 70: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 71: size, y_offset, ABI pad
	.byte 0x46, 0x09, 0x00, 0x00 @ species index 72: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 73: size, y_offset, ABI pad
	.byte 0x54, 0x12, 0x00, 0x00 @ species index 74: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 75: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 76: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 77: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 78: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 79: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 80: size, y_offset, ABI pad
	.byte 0x43, 0x15, 0x00, 0x00 @ species index 81: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 82: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 83: size, y_offset, ABI pad
	.byte 0x57, 0x05, 0x00, 0x00 @ species index 84: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 85: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 86: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 87: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 88: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 89: size, y_offset, ABI pad
	.byte 0x55, 0x10, 0x00, 0x00 @ species index 90: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 91: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 92: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 93: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 94: size, y_offset, ABI pad
	.byte 0x78, 0x02, 0x00, 0x00 @ species index 95: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 96: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 97: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 98: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 99: size, y_offset, ABI pad
	.byte 0x44, 0x13, 0x00, 0x00 @ species index 100: size, y_offset, ABI pad
	.byte 0x55, 0x0E, 0x00, 0x00 @ species index 101: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 102: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 103: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 104: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 105: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 106: size, y_offset, ABI pad
	.byte 0x67, 0x04, 0x00, 0x00 @ species index 107: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 108: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 109: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 110: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 111: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 112: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 113: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 114: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 115: size, y_offset, ABI pad
	.byte 0x45, 0x0F, 0x00, 0x00 @ species index 116: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 117: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 118: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 119: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 120: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 121: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 122: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 123: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 124: size, y_offset, ABI pad
	.byte 0x78, 0x02, 0x00, 0x00 @ species index 125: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 126: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 127: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 128: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 129: size, y_offset, ABI pad
	.byte 0x88, 0x08, 0x00, 0x00 @ species index 130: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 131: size, y_offset, ABI pad
	.byte 0x54, 0x11, 0x00, 0x00 @ species index 132: size, y_offset, ABI pad
	.byte 0x56, 0x09, 0x00, 0x00 @ species index 133: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 134: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 135: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 136: size, y_offset, ABI pad
	.byte 0x55, 0x0D, 0x00, 0x00 @ species index 137: size, y_offset, ABI pad
	.byte 0x45, 0x0F, 0x00, 0x00 @ species index 138: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 139: size, y_offset, ABI pad
	.byte 0x54, 0x11, 0x00, 0x00 @ species index 140: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 141: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 142: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 143: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 144: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 145: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 146: size, y_offset, ABI pad
	.byte 0x75, 0x0E, 0x00, 0x00 @ species index 147: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 148: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 149: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 150: size, y_offset, ABI pad
	.byte 0x55, 0x0D, 0x00, 0x00 @ species index 151: size, y_offset, ABI pad
	.byte 0x75, 0x0D, 0x00, 0x00 @ species index 152: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 153: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 154: size, y_offset, ABI pad
	.byte 0x55, 0x0E, 0x00, 0x00 @ species index 155: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 156: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 157: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 158: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 159: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 160: size, y_offset, ABI pad
	.byte 0x47, 0x04, 0x00, 0x00 @ species index 161: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 162: size, y_offset, ABI pad
	.byte 0x55, 0x0D, 0x00, 0x00 @ species index 163: size, y_offset, ABI pad
	.byte 0x58, 0x03, 0x00, 0x00 @ species index 164: size, y_offset, ABI pad
	.byte 0x56, 0x0C, 0x00, 0x00 @ species index 165: size, y_offset, ABI pad
	.byte 0x67, 0x04, 0x00, 0x00 @ species index 166: size, y_offset, ABI pad
	.byte 0x54, 0x13, 0x00, 0x00 @ species index 167: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 168: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 169: size, y_offset, ABI pad
	.byte 0x75, 0x10, 0x00, 0x00 @ species index 170: size, y_offset, ABI pad
	.byte 0x87, 0x0B, 0x00, 0x00 @ species index 171: size, y_offset, ABI pad
	.byte 0x45, 0x0C, 0x00, 0x00 @ species index 172: size, y_offset, ABI pad
	.byte 0x44, 0x14, 0x00, 0x00 @ species index 173: size, y_offset, ABI pad
	.byte 0x44, 0x12, 0x00, 0x00 @ species index 174: size, y_offset, ABI pad
	.byte 0x34, 0x14, 0x00, 0x00 @ species index 175: size, y_offset, ABI pad
	.byte 0x46, 0x09, 0x00, 0x00 @ species index 176: size, y_offset, ABI pad
	.byte 0x44, 0x14, 0x00, 0x00 @ species index 177: size, y_offset, ABI pad
	.byte 0x47, 0x07, 0x00, 0x00 @ species index 178: size, y_offset, ABI pad
	.byte 0x55, 0x10, 0x00, 0x00 @ species index 179: size, y_offset, ABI pad
	.byte 0x56, 0x0A, 0x00, 0x00 @ species index 180: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 181: size, y_offset, ABI pad
	.byte 0x45, 0x0E, 0x00, 0x00 @ species index 182: size, y_offset, ABI pad
	.byte 0x65, 0x0E, 0x00, 0x00 @ species index 183: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 184: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 185: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 186: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 187: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 188: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 189: size, y_offset, ABI pad
	.byte 0x58, 0x03, 0x00, 0x00 @ species index 190: size, y_offset, ABI pad
	.byte 0x44, 0x10, 0x00, 0x00 @ species index 191: size, y_offset, ABI pad
	.byte 0x56, 0x08, 0x00, 0x00 @ species index 192: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 193: size, y_offset, ABI pad
	.byte 0x54, 0x10, 0x00, 0x00 @ species index 194: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 195: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 196: size, y_offset, ABI pad
	.byte 0x67, 0x08, 0x00, 0x00 @ species index 197: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 198: size, y_offset, ABI pad
	.byte 0x58, 0x01, 0x00, 0x00 @ species index 199: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 200: size, y_offset, ABI pad
	.byte 0x35, 0x0F, 0x00, 0x00 @ species index 201: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 202: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 203: size, y_offset, ABI pad
	.byte 0x56, 0x0A, 0x00, 0x00 @ species index 204: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 205: size, y_offset, ABI pad
	.byte 0x74, 0x11, 0x00, 0x00 @ species index 206: size, y_offset, ABI pad
	.byte 0x78, 0x03, 0x00, 0x00 @ species index 207: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 208: size, y_offset, ABI pad
	.byte 0x55, 0x0D, 0x00, 0x00 @ species index 209: size, y_offset, ABI pad
	.byte 0x57, 0x06, 0x00, 0x00 @ species index 210: size, y_offset, ABI pad
	.byte 0x56, 0x0A, 0x00, 0x00 @ species index 211: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 212: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 213: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 214: size, y_offset, ABI pad
	.byte 0x67, 0x05, 0x00, 0x00 @ species index 215: size, y_offset, ABI pad
	.byte 0x45, 0x0D, 0x00, 0x00 @ species index 216: size, y_offset, ABI pad
	.byte 0x78, 0x01, 0x00, 0x00 @ species index 217: size, y_offset, ABI pad
	.byte 0x45, 0x0D, 0x00, 0x00 @ species index 218: size, y_offset, ABI pad
	.byte 0x57, 0x0D, 0x00, 0x00 @ species index 219: size, y_offset, ABI pad
	.byte 0x43, 0x14, 0x00, 0x00 @ species index 220: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 221: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 222: size, y_offset, ABI pad
	.byte 0x55, 0x0E, 0x00, 0x00 @ species index 223: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 224: size, y_offset, ABI pad
	.byte 0x56, 0x08, 0x00, 0x00 @ species index 225: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 226: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 227: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 228: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 229: size, y_offset, ABI pad
	.byte 0x78, 0x04, 0x00, 0x00 @ species index 230: size, y_offset, ABI pad
	.byte 0x54, 0x10, 0x00, 0x00 @ species index 231: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 232: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 233: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 234: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 235: size, y_offset, ABI pad
	.byte 0x46, 0x09, 0x00, 0x00 @ species index 236: size, y_offset, ABI pad
	.byte 0x67, 0x05, 0x00, 0x00 @ species index 237: size, y_offset, ABI pad
	.byte 0x35, 0x0F, 0x00, 0x00 @ species index 238: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 239: size, y_offset, ABI pad
	.byte 0x45, 0x0D, 0x00, 0x00 @ species index 240: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 241: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 242: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 243: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 244: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 245: size, y_offset, ABI pad
	.byte 0x46, 0x09, 0x00, 0x00 @ species index 246: size, y_offset, ABI pad
	.byte 0x56, 0x09, 0x00, 0x00 @ species index 247: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 248: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 249: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 250: size, y_offset, ABI pad
	.byte 0x55, 0x0E, 0x00, 0x00 @ species index 251: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 252: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 253: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 254: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 255: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 256: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 257: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 258: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 259: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 260: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 261: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 262: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 263: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 264: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 265: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 266: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 267: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 268: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 269: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 270: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 271: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 272: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 273: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 274: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 275: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 276: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 277: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 278: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 279: size, y_offset, ABI pad
	.byte 0x56, 0x08, 0x00, 0x00 @ species index 280: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 281: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 282: size, y_offset, ABI pad
	.byte 0x56, 0x0C, 0x00, 0x00 @ species index 283: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 284: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 285: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 286: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 287: size, y_offset, ABI pad
	.byte 0x85, 0x0F, 0x00, 0x00 @ species index 288: size, y_offset, ABI pad
	.byte 0x78, 0x03, 0x00, 0x00 @ species index 289: size, y_offset, ABI pad
	.byte 0x45, 0x0E, 0x00, 0x00 @ species index 290: size, y_offset, ABI pad
	.byte 0x75, 0x11, 0x00, 0x00 @ species index 291: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 292: size, y_offset, ABI pad
	.byte 0x74, 0x10, 0x00, 0x00 @ species index 293: size, y_offset, ABI pad
	.byte 0x86, 0x0F, 0x00, 0x00 @ species index 294: size, y_offset, ABI pad
	.byte 0x65, 0x0E, 0x00, 0x00 @ species index 295: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 296: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 297: size, y_offset, ABI pad
	.byte 0x46, 0x10, 0x00, 0x00 @ species index 298: size, y_offset, ABI pad
	.byte 0x56, 0x08, 0x00, 0x00 @ species index 299: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 300: size, y_offset, ABI pad
	.byte 0x74, 0x12, 0x00, 0x00 @ species index 301: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 302: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 303: size, y_offset, ABI pad
	.byte 0x64, 0x10, 0x00, 0x00 @ species index 304: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 305: size, y_offset, ABI pad
	.byte 0x54, 0x10, 0x00, 0x00 @ species index 306: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 307: size, y_offset, ABI pad
	.byte 0x68, 0x08, 0x00, 0x00 @ species index 308: size, y_offset, ABI pad
	.byte 0x84, 0x18, 0x00, 0x00 @ species index 309: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 310: size, y_offset, ABI pad
	.byte 0x65, 0x0F, 0x00, 0x00 @ species index 311: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 312: size, y_offset, ABI pad
	.byte 0x75, 0x0F, 0x00, 0x00 @ species index 313: size, y_offset, ABI pad
	.byte 0x87, 0x0A, 0x00, 0x00 @ species index 314: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 315: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 316: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 317: size, y_offset, ABI pad
	.byte 0x55, 0x10, 0x00, 0x00 @ species index 318: size, y_offset, ABI pad
	.byte 0x78, 0x06, 0x00, 0x00 @ species index 319: size, y_offset, ABI pad
	.byte 0x56, 0x0C, 0x00, 0x00 @ species index 320: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 321: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 322: size, y_offset, ABI pad
	.byte 0x46, 0x0B, 0x00, 0x00 @ species index 323: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 324: size, y_offset, ABI pad
	.byte 0x46, 0x18, 0x00, 0x00 @ species index 325: size, y_offset, ABI pad
	.byte 0x66, 0x0C, 0x00, 0x00 @ species index 326: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 327: size, y_offset, ABI pad
	.byte 0x46, 0x0D, 0x00, 0x00 @ species index 328: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 329: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 330: size, y_offset, ABI pad
	.byte 0x78, 0x03, 0x00, 0x00 @ species index 331: size, y_offset, ABI pad
	.byte 0x54, 0x10, 0x00, 0x00 @ species index 332: size, y_offset, ABI pad
	.byte 0x86, 0x0C, 0x00, 0x00 @ species index 333: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 334: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 335: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 336: size, y_offset, ABI pad
	.byte 0x64, 0x12, 0x00, 0x00 @ species index 337: size, y_offset, ABI pad
	.byte 0x67, 0x04, 0x00, 0x00 @ species index 338: size, y_offset, ABI pad
	.byte 0x65, 0x0F, 0x00, 0x00 @ species index 339: size, y_offset, ABI pad
	.byte 0x87, 0x09, 0x00, 0x00 @ species index 340: size, y_offset, ABI pad
	.byte 0x65, 0x10, 0x00, 0x00 @ species index 341: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 342: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 343: size, y_offset, ABI pad
	.byte 0x74, 0x10, 0x00, 0x00 @ species index 344: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 345: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 346: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 347: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 348: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 349: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 350: size, y_offset, ABI pad
	.byte 0x46, 0x09, 0x00, 0x00 @ species index 351: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 352: size, y_offset, ABI pad
	.byte 0x56, 0x0E, 0x00, 0x00 @ species index 353: size, y_offset, ABI pad
	.byte 0x66, 0x0C, 0x00, 0x00 @ species index 354: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 355: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 356: size, y_offset, ABI pad
	.byte 0x68, 0x01, 0x00, 0x00 @ species index 357: size, y_offset, ABI pad
	.byte 0x76, 0x11, 0x00, 0x00 @ species index 358: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 359: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 360: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 361: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 362: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 363: size, y_offset, ABI pad
	.byte 0x74, 0x12, 0x00, 0x00 @ species index 364: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 365: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 366: size, y_offset, ABI pad
	.byte 0x55, 0x12, 0x00, 0x00 @ species index 367: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 368: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 369: size, y_offset, ABI pad
	.byte 0x55, 0x0E, 0x00, 0x00 @ species index 370: size, y_offset, ABI pad
	.byte 0x78, 0x03, 0x00, 0x00 @ species index 371: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 372: size, y_offset, ABI pad
	.byte 0x55, 0x0E, 0x00, 0x00 @ species index 373: size, y_offset, ABI pad
	.byte 0x78, 0x03, 0x00, 0x00 @ species index 374: size, y_offset, ABI pad
	.byte 0x86, 0x0B, 0x00, 0x00 @ species index 375: size, y_offset, ABI pad
	.byte 0x68, 0x00, 0x00, 0x00 @ species index 376: size, y_offset, ABI pad
	.byte 0x56, 0x0E, 0x00, 0x00 @ species index 377: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 378: size, y_offset, ABI pad
	.byte 0x77, 0x08, 0x00, 0x00 @ species index 379: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 380: size, y_offset, ABI pad
	.byte 0x77, 0x0B, 0x00, 0x00 @ species index 381: size, y_offset, ABI pad
	.byte 0x43, 0x14, 0x00, 0x00 @ species index 382: size, y_offset, ABI pad
	.byte 0x75, 0x0D, 0x00, 0x00 @ species index 383: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 384: size, y_offset, ABI pad
	.byte 0x34, 0x11, 0x00, 0x00 @ species index 385: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 386: size, y_offset, ABI pad
	.byte 0x56, 0x08, 0x00, 0x00 @ species index 387: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 388: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 389: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 390: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 391: size, y_offset, ABI pad
	.byte 0x35, 0x0F, 0x00, 0x00 @ species index 392: size, y_offset, ABI pad
	.byte 0x47, 0x06, 0x00, 0x00 @ species index 393: size, y_offset, ABI pad
	.byte 0x78, 0x01, 0x00, 0x00 @ species index 394: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 395: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 396: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 397: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 398: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 399: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 400: size, y_offset, ABI pad
	.byte 0x78, 0x04, 0x00, 0x00 @ species index 401: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 402: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 403: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 404: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 405: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 406: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 407: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 408: size, y_offset, ABI pad
	.byte 0x66, 0x0D, 0x00, 0x00 @ species index 409: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 410: size, y_offset, ABI pad
	.byte 0x37, 0x06, 0x00, 0x00 @ species index 411: size, y_offset, ABI pad
	.byte 0x33, 0x14, 0x00, 0x00 @ species index 412: size, y_offset, ABI pad
	.byte 0x34, 0x10, 0x00, 0x00 @ species index 413: size, y_offset, ABI pad
	.byte 0x44, 0x10, 0x00, 0x00 @ species index 414: size, y_offset, ABI pad
	.byte 0x44, 0x10, 0x00, 0x00 @ species index 415: size, y_offset, ABI pad
	.byte 0x44, 0x11, 0x00, 0x00 @ species index 416: size, y_offset, ABI pad
	.byte 0x44, 0x11, 0x00, 0x00 @ species index 417: size, y_offset, ABI pad
	.byte 0x35, 0x0E, 0x00, 0x00 @ species index 418: size, y_offset, ABI pad
	.byte 0x44, 0x10, 0x00, 0x00 @ species index 419: size, y_offset, ABI pad
	.byte 0x34, 0x10, 0x00, 0x00 @ species index 420: size, y_offset, ABI pad
	.byte 0x34, 0x11, 0x00, 0x00 @ species index 421: size, y_offset, ABI pad
	.byte 0x44, 0x11, 0x00, 0x00 @ species index 422: size, y_offset, ABI pad
	.byte 0x34, 0x13, 0x00, 0x00 @ species index 423: size, y_offset, ABI pad
	.byte 0x44, 0x13, 0x00, 0x00 @ species index 424: size, y_offset, ABI pad
	.byte 0x43, 0x14, 0x00, 0x00 @ species index 425: size, y_offset, ABI pad
	.byte 0x44, 0x10, 0x00, 0x00 @ species index 426: size, y_offset, ABI pad
	.byte 0x34, 0x13, 0x00, 0x00 @ species index 427: size, y_offset, ABI pad
	.byte 0x43, 0x15, 0x00, 0x00 @ species index 428: size, y_offset, ABI pad
	.byte 0x34, 0x13, 0x00, 0x00 @ species index 429: size, y_offset, ABI pad
	.byte 0x45, 0x0C, 0x00, 0x00 @ species index 430: size, y_offset, ABI pad
	.byte 0x34, 0x12, 0x00, 0x00 @ species index 431: size, y_offset, ABI pad
	.byte 0x44, 0x12, 0x00, 0x00 @ species index 432: size, y_offset, ABI pad
	.byte 0x44, 0x12, 0x00, 0x00 @ species index 433: size, y_offset, ABI pad
	.byte 0x44, 0x13, 0x00, 0x00 @ species index 434: size, y_offset, ABI pad
	.byte 0x33, 0x15, 0x00, 0x00 @ species index 435: size, y_offset, ABI pad
	.byte 0x34, 0x11, 0x00, 0x00 @ species index 436: size, y_offset, ABI pad
	.byte 0x34, 0x10, 0x00, 0x00 @ species index 437: size, y_offset, ABI pad
	.byte 0x35, 0x0F, 0x00, 0x00 @ species index 438: size, y_offset, ABI pad
	.byte 0x35, 0x0D, 0x00, 0x00 @ species index 439: size, y_offset, ABI pad

	.globl gUnknown_82D4CA8
gUnknown_82D4CA8: @ 0x082D4CA8
	.globl gMonStillFrontPicTable
gMonStillFrontPicTable:
	.4byte 0x08C00758; .2byte 0x0800, 0 @ species index 0, MON_PIC_SIZE
	.4byte 0x08C2FAAC; .2byte 0x0800, 1 @ species index 1, MON_PIC_SIZE
	.4byte 0x08C30464; .2byte 0x0800, 2 @ species index 2, MON_PIC_SIZE
	.4byte 0x08C30FD4; .2byte 0x0800, 3 @ species index 3, MON_PIC_SIZE
	.4byte 0x08C31EA0; .2byte 0x0800, 4 @ species index 4, MON_PIC_SIZE
	.4byte 0x08C32854; .2byte 0x0800, 5 @ species index 5, MON_PIC_SIZE
	.4byte 0x08C3334C; .2byte 0x0800, 6 @ species index 6, MON_PIC_SIZE
	.4byte 0x08C34128; .2byte 0x0800, 7 @ species index 7, MON_PIC_SIZE
	.4byte 0x08C34AF4; .2byte 0x0800, 8 @ species index 8, MON_PIC_SIZE
	.4byte 0x08C35614; .2byte 0x0800, 9 @ species index 9, MON_PIC_SIZE
	.4byte 0x08C363A4; .2byte 0x0800, 10 @ species index 10, MON_PIC_SIZE
	.4byte 0x08C36CFC; .2byte 0x0800, 11 @ species index 11, MON_PIC_SIZE
	.4byte 0x08C375B4; .2byte 0x0800, 12 @ species index 12, MON_PIC_SIZE
	.4byte 0x08C38194; .2byte 0x0800, 13 @ species index 13, MON_PIC_SIZE
	.4byte 0x08C38AAC; .2byte 0x0800, 14 @ species index 14, MON_PIC_SIZE
	.4byte 0x08C393E4; .2byte 0x0800, 15 @ species index 15, MON_PIC_SIZE
	.4byte 0x08C39FD8; .2byte 0x0800, 16 @ species index 16, MON_PIC_SIZE
	.4byte 0x08C3AA88; .2byte 0x0800, 17 @ species index 17, MON_PIC_SIZE
	.4byte 0x08C3B5B8; .2byte 0x0800, 18 @ species index 18, MON_PIC_SIZE
	.4byte 0x08C3C2AC; .2byte 0x0800, 19 @ species index 19, MON_PIC_SIZE
	.4byte 0x08C3CC44; .2byte 0x0800, 20 @ species index 20, MON_PIC_SIZE
	.4byte 0x08C3D76C; .2byte 0x0800, 21 @ species index 21, MON_PIC_SIZE
	.4byte 0x08C3E140; .2byte 0x0800, 22 @ species index 22, MON_PIC_SIZE
	.4byte 0x08C3ED3C; .2byte 0x0800, 23 @ species index 23, MON_PIC_SIZE
	.4byte 0x08C3F79C; .2byte 0x0800, 24 @ species index 24, MON_PIC_SIZE
	.4byte 0x08C402F8; .2byte 0x0800, 25 @ species index 25, MON_PIC_SIZE
	.4byte 0x08C40D10; .2byte 0x0800, 26 @ species index 26, MON_PIC_SIZE
	.4byte 0x08C4184C; .2byte 0x0800, 27 @ species index 27, MON_PIC_SIZE
	.4byte 0x08C422A4; .2byte 0x0800, 28 @ species index 28, MON_PIC_SIZE
	.4byte 0x08C42F1C; .2byte 0x0800, 29 @ species index 29, MON_PIC_SIZE
	.4byte 0x08C438DC; .2byte 0x0800, 30 @ species index 30, MON_PIC_SIZE
	.4byte 0x08C4440C; .2byte 0x0800, 31 @ species index 31, MON_PIC_SIZE
	.4byte 0x08C450CC; .2byte 0x0800, 32 @ species index 32, MON_PIC_SIZE
	.4byte 0x08C45B40; .2byte 0x0800, 33 @ species index 33, MON_PIC_SIZE
	.4byte 0x08C46700; .2byte 0x0800, 34 @ species index 34, MON_PIC_SIZE
	.4byte 0x08C474A4; .2byte 0x0800, 35 @ species index 35, MON_PIC_SIZE
	.4byte 0x08C47E6C; .2byte 0x0800, 36 @ species index 36, MON_PIC_SIZE
	.4byte 0x08C48950; .2byte 0x0800, 37 @ species index 37, MON_PIC_SIZE
	.4byte 0x08C493F8; .2byte 0x0800, 38 @ species index 38, MON_PIC_SIZE
	.4byte 0x08C4A014; .2byte 0x0800, 39 @ species index 39, MON_PIC_SIZE
	.4byte 0x08C4A958; .2byte 0x0800, 40 @ species index 40, MON_PIC_SIZE
	.4byte 0x08C4B3C4; .2byte 0x0800, 41 @ species index 41, MON_PIC_SIZE
	.4byte 0x08C4BDC8; .2byte 0x0800, 42 @ species index 42, MON_PIC_SIZE
	.4byte 0x08C4C890; .2byte 0x0800, 43 @ species index 43, MON_PIC_SIZE
	.4byte 0x08C4D1AC; .2byte 0x0800, 44 @ species index 44, MON_PIC_SIZE
	.4byte 0x08C4DCFC; .2byte 0x0800, 45 @ species index 45, MON_PIC_SIZE
	.4byte 0x08C4E900; .2byte 0x0800, 46 @ species index 46, MON_PIC_SIZE
	.4byte 0x08C4F27C; .2byte 0x0800, 47 @ species index 47, MON_PIC_SIZE
	.4byte 0x08C4FDAC; .2byte 0x0800, 48 @ species index 48, MON_PIC_SIZE
	.4byte 0x08C508C4; .2byte 0x0800, 49 @ species index 49, MON_PIC_SIZE
	.4byte 0x08C5159C; .2byte 0x0800, 50 @ species index 50, MON_PIC_SIZE
	.4byte 0x08C51E24; .2byte 0x0800, 51 @ species index 51, MON_PIC_SIZE
	.4byte 0x08C52864; .2byte 0x0800, 52 @ species index 52, MON_PIC_SIZE
	.4byte 0x08C532A4; .2byte 0x0800, 53 @ species index 53, MON_PIC_SIZE
	.4byte 0x08C53E2C; .2byte 0x0800, 54 @ species index 54, MON_PIC_SIZE
	.4byte 0x08C54810; .2byte 0x0800, 55 @ species index 55, MON_PIC_SIZE
	.4byte 0x08C55384; .2byte 0x0800, 56 @ species index 56, MON_PIC_SIZE
	.4byte 0x08C55E74; .2byte 0x0800, 57 @ species index 57, MON_PIC_SIZE
	.4byte 0x08C56A04; .2byte 0x0800, 58 @ species index 58, MON_PIC_SIZE
	.4byte 0x08C57508; .2byte 0x0800, 59 @ species index 59, MON_PIC_SIZE
	.4byte 0x08C5828C; .2byte 0x0800, 60 @ species index 60, MON_PIC_SIZE
	.4byte 0x08C58BF4; .2byte 0x0800, 61 @ species index 61, MON_PIC_SIZE
	.4byte 0x08C596E8; .2byte 0x0800, 62 @ species index 62, MON_PIC_SIZE
	.4byte 0x08C5A240; .2byte 0x0800, 63 @ species index 63, MON_PIC_SIZE
	.4byte 0x08C5ACA0; .2byte 0x0800, 64 @ species index 64, MON_PIC_SIZE
	.4byte 0x08C5B950; .2byte 0x0800, 65 @ species index 65, MON_PIC_SIZE
	.4byte 0x08C5C600; .2byte 0x0800, 66 @ species index 66, MON_PIC_SIZE
	.4byte 0x08C5CFF4; .2byte 0x0800, 67 @ species index 67, MON_PIC_SIZE
	.4byte 0x08C5DB64; .2byte 0x0800, 68 @ species index 68, MON_PIC_SIZE
	.4byte 0x08C5E980; .2byte 0x0800, 69 @ species index 69, MON_PIC_SIZE
	.4byte 0x08C5F30C; .2byte 0x0800, 70 @ species index 70, MON_PIC_SIZE
	.4byte 0x08C5FD9C; .2byte 0x0800, 71 @ species index 71, MON_PIC_SIZE
	.4byte 0x08C609D0; .2byte 0x0800, 72 @ species index 72, MON_PIC_SIZE
	.4byte 0x08C613AC; .2byte 0x0800, 73 @ species index 73, MON_PIC_SIZE
	.4byte 0x08C62054; .2byte 0x0800, 74 @ species index 74, MON_PIC_SIZE
	.4byte 0x08C629AC; .2byte 0x0800, 75 @ species index 75, MON_PIC_SIZE
	.4byte 0x08C63490; .2byte 0x0800, 76 @ species index 76, MON_PIC_SIZE
	.4byte 0x08C6403C; .2byte 0x0800, 77 @ species index 77, MON_PIC_SIZE
	.4byte 0x08C64B90; .2byte 0x0800, 78 @ species index 78, MON_PIC_SIZE
	.4byte 0x08C658E0; .2byte 0x0800, 79 @ species index 79, MON_PIC_SIZE
	.4byte 0x08C662C0; .2byte 0x0800, 80 @ species index 80, MON_PIC_SIZE
	.4byte 0x08C66F8C; .2byte 0x0800, 81 @ species index 81, MON_PIC_SIZE
	.4byte 0x08C677B8; .2byte 0x0800, 82 @ species index 82, MON_PIC_SIZE
	.4byte 0x08C683AC; .2byte 0x0800, 83 @ species index 83, MON_PIC_SIZE
	.4byte 0x08C68F04; .2byte 0x0800, 84 @ species index 84, MON_PIC_SIZE
	.4byte 0x08C699D8; .2byte 0x0800, 85 @ species index 85, MON_PIC_SIZE
	.4byte 0x08C6A788; .2byte 0x0800, 86 @ species index 86, MON_PIC_SIZE
	.4byte 0x08C6B1EC; .2byte 0x0800, 87 @ species index 87, MON_PIC_SIZE
	.4byte 0x08C6BCA8; .2byte 0x0800, 88 @ species index 88, MON_PIC_SIZE
	.4byte 0x08C6C710; .2byte 0x0800, 89 @ species index 89, MON_PIC_SIZE
	.4byte 0x08C6D31C; .2byte 0x0800, 90 @ species index 90, MON_PIC_SIZE
	.4byte 0x08C6DD00; .2byte 0x0800, 91 @ species index 91, MON_PIC_SIZE
	.4byte 0x08C6E9AC; .2byte 0x0800, 92 @ species index 92, MON_PIC_SIZE
	.4byte 0x08C6F4F8; .2byte 0x0800, 93 @ species index 93, MON_PIC_SIZE
	.4byte 0x08C70088; .2byte 0x0800, 94 @ species index 94, MON_PIC_SIZE
	.4byte 0x08C70B74; .2byte 0x0800, 95 @ species index 95, MON_PIC_SIZE
	.4byte 0x08C717C0; .2byte 0x0800, 96 @ species index 96, MON_PIC_SIZE
	.4byte 0x08C721FC; .2byte 0x0800, 97 @ species index 97, MON_PIC_SIZE
	.4byte 0x08C72D80; .2byte 0x0800, 98 @ species index 98, MON_PIC_SIZE
	.4byte 0x08C73834; .2byte 0x0800, 99 @ species index 99, MON_PIC_SIZE
	.4byte 0x08C74554; .2byte 0x0800, 100 @ species index 100, MON_PIC_SIZE
	.4byte 0x08C74E38; .2byte 0x0800, 101 @ species index 101, MON_PIC_SIZE
	.4byte 0x08C7577C; .2byte 0x0800, 102 @ species index 102, MON_PIC_SIZE
	.4byte 0x08C762F0; .2byte 0x0800, 103 @ species index 103, MON_PIC_SIZE
	.4byte 0x08C77100; .2byte 0x0800, 104 @ species index 104, MON_PIC_SIZE
	.4byte 0x08C77B80; .2byte 0x0800, 105 @ species index 105, MON_PIC_SIZE
	.4byte 0x08C786C0; .2byte 0x0800, 106 @ species index 106, MON_PIC_SIZE
	.4byte 0x08C791D4; .2byte 0x0800, 107 @ species index 107, MON_PIC_SIZE
	.4byte 0x08C79CC8; .2byte 0x0800, 108 @ species index 108, MON_PIC_SIZE
	.4byte 0x08C7A7B0; .2byte 0x0800, 109 @ species index 109, MON_PIC_SIZE
	.4byte 0x08C7B27C; .2byte 0x0800, 110 @ species index 110, MON_PIC_SIZE
	.4byte 0x08C7BEA4; .2byte 0x0800, 111 @ species index 111, MON_PIC_SIZE
	.4byte 0x08C7CA50; .2byte 0x0800, 112 @ species index 112, MON_PIC_SIZE
	.4byte 0x08C7D818; .2byte 0x0800, 113 @ species index 113, MON_PIC_SIZE
	.4byte 0x08C7E2A8; .2byte 0x0800, 114 @ species index 114, MON_PIC_SIZE
	.4byte 0x08C7EE90; .2byte 0x0800, 115 @ species index 115, MON_PIC_SIZE
	.4byte 0x08C7FC28; .2byte 0x0800, 116 @ species index 116, MON_PIC_SIZE
	.4byte 0x08C805F0; .2byte 0x0800, 117 @ species index 117, MON_PIC_SIZE
	.4byte 0x08C811C0; .2byte 0x0800, 118 @ species index 118, MON_PIC_SIZE
	.4byte 0x08C81D08; .2byte 0x0800, 119 @ species index 119, MON_PIC_SIZE
	.4byte 0x08C8293C; .2byte 0x0800, 120 @ species index 120, MON_PIC_SIZE
	.4byte 0x08C8331C; .2byte 0x0800, 121 @ species index 121, MON_PIC_SIZE
	.4byte 0x08C83E58; .2byte 0x0800, 122 @ species index 122, MON_PIC_SIZE
	.4byte 0x08C849AC; .2byte 0x0800, 123 @ species index 123, MON_PIC_SIZE
	.4byte 0x08C85670; .2byte 0x0800, 124 @ species index 124, MON_PIC_SIZE
	.4byte 0x08C86274; .2byte 0x0800, 125 @ species index 125, MON_PIC_SIZE
	.4byte 0x08C86E70; .2byte 0x0800, 126 @ species index 126, MON_PIC_SIZE
	.4byte 0x08C87AD0; .2byte 0x0800, 127 @ species index 127, MON_PIC_SIZE
	.4byte 0x08C886B4; .2byte 0x0800, 128 @ species index 128, MON_PIC_SIZE
	.4byte 0x08C892A8; .2byte 0x0800, 129 @ species index 129, MON_PIC_SIZE
	.4byte 0x08C89D98; .2byte 0x0800, 130 @ species index 130, MON_PIC_SIZE
	.4byte 0x08C8AC44; .2byte 0x0800, 131 @ species index 131, MON_PIC_SIZE
	.4byte 0x08C8B7B8; .2byte 0x0800, 132 @ species index 132, MON_PIC_SIZE
	.4byte 0x08C8C008; .2byte 0x0800, 133 @ species index 133, MON_PIC_SIZE
	.4byte 0x08C8CA3C; .2byte 0x0800, 134 @ species index 134, MON_PIC_SIZE
	.4byte 0x08C8D508; .2byte 0x0800, 135 @ species index 135, MON_PIC_SIZE
	.4byte 0x08C8E0A8; .2byte 0x0800, 136 @ species index 136, MON_PIC_SIZE
	.4byte 0x08C8EC24; .2byte 0x0800, 137 @ species index 137, MON_PIC_SIZE
	.4byte 0x08C8F600; .2byte 0x0800, 138 @ species index 138, MON_PIC_SIZE
	.4byte 0x08C90064; .2byte 0x0800, 139 @ species index 139, MON_PIC_SIZE
	.4byte 0x08C90BD4; .2byte 0x0800, 140 @ species index 140, MON_PIC_SIZE
	.4byte 0x08C9154C; .2byte 0x0800, 141 @ species index 141, MON_PIC_SIZE
	.4byte 0x08C92158; .2byte 0x0800, 142 @ species index 142, MON_PIC_SIZE
	.4byte 0x08C92D4C; .2byte 0x0800, 143 @ species index 143, MON_PIC_SIZE
	.4byte 0x08C9381C; .2byte 0x0800, 144 @ species index 144, MON_PIC_SIZE
	.4byte 0x08C943E0; .2byte 0x0800, 145 @ species index 145, MON_PIC_SIZE
	.4byte 0x08C95000; .2byte 0x0800, 146 @ species index 146, MON_PIC_SIZE
	.4byte 0x08C95D5C; .2byte 0x0800, 147 @ species index 147, MON_PIC_SIZE
	.4byte 0x08C9670C; .2byte 0x0800, 148 @ species index 148, MON_PIC_SIZE
	.4byte 0x08C971EC; .2byte 0x0800, 149 @ species index 149, MON_PIC_SIZE
	.4byte 0x08C97EC8; .2byte 0x0800, 150 @ species index 150, MON_PIC_SIZE
	.4byte 0x08C98B38; .2byte 0x0800, 151 @ species index 151, MON_PIC_SIZE
	.4byte 0x08C994EC; .2byte 0x0800, 152 @ species index 152, MON_PIC_SIZE
	.4byte 0x08C99E88; .2byte 0x0800, 153 @ species index 153, MON_PIC_SIZE
	.4byte 0x08C9AA5C; .2byte 0x0800, 154 @ species index 154, MON_PIC_SIZE
	.4byte 0x08C9B778; .2byte 0x0800, 155 @ species index 155, MON_PIC_SIZE
	.4byte 0x08C9C1A0; .2byte 0x0800, 156 @ species index 156, MON_PIC_SIZE
	.4byte 0x08C9CCA0; .2byte 0x0800, 157 @ species index 157, MON_PIC_SIZE
	.4byte 0x08C9D93C; .2byte 0x0800, 158 @ species index 158, MON_PIC_SIZE
	.4byte 0x08C9E330; .2byte 0x0800, 159 @ species index 159, MON_PIC_SIZE
	.4byte 0x08C9EE58; .2byte 0x0800, 160 @ species index 160, MON_PIC_SIZE
	.4byte 0x08C9FD00; .2byte 0x0800, 161 @ species index 161, MON_PIC_SIZE
	.4byte 0x08CA06F0; .2byte 0x0800, 162 @ species index 162, MON_PIC_SIZE
	.4byte 0x08CA11BC; .2byte 0x0800, 163 @ species index 163, MON_PIC_SIZE
	.4byte 0x08CA1BB8; .2byte 0x0800, 164 @ species index 164, MON_PIC_SIZE
	.4byte 0x08CA26D8; .2byte 0x0800, 165 @ species index 165, MON_PIC_SIZE
	.4byte 0x08CA316C; .2byte 0x0800, 166 @ species index 166, MON_PIC_SIZE
	.4byte 0x08CA3CBC; .2byte 0x0800, 167 @ species index 167, MON_PIC_SIZE
	.4byte 0x08CA4604; .2byte 0x0800, 168 @ species index 168, MON_PIC_SIZE
	.4byte 0x08CA51AC; .2byte 0x0800, 169 @ species index 169, MON_PIC_SIZE
	.4byte 0x08CA5CD4; .2byte 0x0800, 170 @ species index 170, MON_PIC_SIZE
	.4byte 0x08CA6714; .2byte 0x0800, 171 @ species index 171, MON_PIC_SIZE
	.4byte 0x08CA71F4; .2byte 0x0800, 172 @ species index 172, MON_PIC_SIZE
	.4byte 0x08CA7ADC; .2byte 0x0800, 173 @ species index 173, MON_PIC_SIZE
	.4byte 0x08CA8368; .2byte 0x0800, 174 @ species index 174, MON_PIC_SIZE
	.4byte 0x08CA8BFC; .2byte 0x0800, 175 @ species index 175, MON_PIC_SIZE
	.4byte 0x08CA94B4; .2byte 0x0800, 176 @ species index 176, MON_PIC_SIZE
	.4byte 0x08CA9EC4; .2byte 0x0800, 177 @ species index 177, MON_PIC_SIZE
	.4byte 0x08CAA714; .2byte 0x0800, 178 @ species index 178, MON_PIC_SIZE
	.4byte 0x08CAB1D8; .2byte 0x0800, 179 @ species index 179, MON_PIC_SIZE
	.4byte 0x08CABBF0; .2byte 0x0800, 180 @ species index 180, MON_PIC_SIZE
	.4byte 0x08CAC67C; .2byte 0x0800, 181 @ species index 181, MON_PIC_SIZE
	.4byte 0x08CAD1C0; .2byte 0x0800, 182 @ species index 182, MON_PIC_SIZE
	.4byte 0x08CADBC4; .2byte 0x0800, 183 @ species index 183, MON_PIC_SIZE
	.4byte 0x08CAE5A4; .2byte 0x0800, 184 @ species index 184, MON_PIC_SIZE
	.4byte 0x08CAEFD0; .2byte 0x0800, 185 @ species index 185, MON_PIC_SIZE
	.4byte 0x08CAFAB4; .2byte 0x0800, 186 @ species index 186, MON_PIC_SIZE
	.4byte 0x08CB051C; .2byte 0x0800, 187 @ species index 187, MON_PIC_SIZE
	.4byte 0x08CB0F20; .2byte 0x0800, 188 @ species index 188, MON_PIC_SIZE
	.4byte 0x08CB18F8; .2byte 0x0800, 189 @ species index 189, MON_PIC_SIZE
	.4byte 0x08CB24CC; .2byte 0x0800, 190 @ species index 190, MON_PIC_SIZE
	.4byte 0x08CB2F2C; .2byte 0x0800, 191 @ species index 191, MON_PIC_SIZE
	.4byte 0x08CB3898; .2byte 0x0800, 192 @ species index 192, MON_PIC_SIZE
	.4byte 0x08CB4400; .2byte 0x0800, 193 @ species index 193, MON_PIC_SIZE
	.4byte 0x08CB4FA8; .2byte 0x0800, 194 @ species index 194, MON_PIC_SIZE
	.4byte 0x08CB58E4; .2byte 0x0800, 195 @ species index 195, MON_PIC_SIZE
	.4byte 0x08CB63C4; .2byte 0x0800, 196 @ species index 196, MON_PIC_SIZE
	.4byte 0x08CB6E48; .2byte 0x0800, 197 @ species index 197, MON_PIC_SIZE
	.4byte 0x08CB78E0; .2byte 0x0800, 198 @ species index 198, MON_PIC_SIZE
	.4byte 0x08CB8348; .2byte 0x0800, 199 @ species index 199, MON_PIC_SIZE
	.4byte 0x08CB8EF8; .2byte 0x0800, 200 @ species index 200, MON_PIC_SIZE
	.4byte 0x08CB994C; .2byte 0x0800, 201 @ species index 201, MON_PIC_SIZE
	.4byte 0x08CBA180; .2byte 0x0800, 202 @ species index 202, MON_PIC_SIZE
	.4byte 0x08CBAB84; .2byte 0x0800, 203 @ species index 203, MON_PIC_SIZE
	.4byte 0x08CBB7A4; .2byte 0x0800, 204 @ species index 204, MON_PIC_SIZE
	.4byte 0x08CBC224; .2byte 0x0800, 205 @ species index 205, MON_PIC_SIZE
	.4byte 0x08CBCD70; .2byte 0x0800, 206 @ species index 206, MON_PIC_SIZE
	.4byte 0x08CBD7EC; .2byte 0x0800, 207 @ species index 207, MON_PIC_SIZE
	.4byte 0x08CBE45C; .2byte 0x0800, 208 @ species index 208, MON_PIC_SIZE
	.4byte 0x08CBF198; .2byte 0x0800, 209 @ species index 209, MON_PIC_SIZE
	.4byte 0x08CBFC04; .2byte 0x0800, 210 @ species index 210, MON_PIC_SIZE
	.4byte 0x08CC0724; .2byte 0x0800, 211 @ species index 211, MON_PIC_SIZE
	.4byte 0x08CC1134; .2byte 0x0800, 212 @ species index 212, MON_PIC_SIZE
	.4byte 0x08CC1E0C; .2byte 0x0800, 213 @ species index 213, MON_PIC_SIZE
	.4byte 0x08CC279C; .2byte 0x0800, 214 @ species index 214, MON_PIC_SIZE
	.4byte 0x08CC336C; .2byte 0x0800, 215 @ species index 215, MON_PIC_SIZE
	.4byte 0x08CC3E44; .2byte 0x0800, 216 @ species index 216, MON_PIC_SIZE
	.4byte 0x08CC4798; .2byte 0x0800, 217 @ species index 217, MON_PIC_SIZE
	.4byte 0x08CC53C8; .2byte 0x0800, 218 @ species index 218, MON_PIC_SIZE
	.4byte 0x08CC5D8C; .2byte 0x0800, 219 @ species index 219, MON_PIC_SIZE
	.4byte 0x08CC695C; .2byte 0x0800, 220 @ species index 220, MON_PIC_SIZE
	.4byte 0x08CC7204; .2byte 0x0800, 221 @ species index 221, MON_PIC_SIZE
	.4byte 0x08CC7BE8; .2byte 0x0800, 222 @ species index 222, MON_PIC_SIZE
	.4byte 0x08CC8600; .2byte 0x0800, 223 @ species index 223, MON_PIC_SIZE
	.4byte 0x08CC8FEC; .2byte 0x0800, 224 @ species index 224, MON_PIC_SIZE
	.4byte 0x08CC9A48; .2byte 0x0800, 225 @ species index 225, MON_PIC_SIZE
	.4byte 0x08CCA5E8; .2byte 0x0800, 226 @ species index 226, MON_PIC_SIZE
	.4byte 0x08CCB194; .2byte 0x0800, 227 @ species index 227, MON_PIC_SIZE
	.4byte 0x08CCBDE8; .2byte 0x0800, 228 @ species index 228, MON_PIC_SIZE
	.4byte 0x08CCC790; .2byte 0x0800, 229 @ species index 229, MON_PIC_SIZE
	.4byte 0x08CCD324; .2byte 0x0800, 230 @ species index 230, MON_PIC_SIZE
	.4byte 0x08CCDF68; .2byte 0x0800, 231 @ species index 231, MON_PIC_SIZE
	.4byte 0x08CCE8F8; .2byte 0x0800, 232 @ species index 232, MON_PIC_SIZE
	.4byte 0x08CCF4D8; .2byte 0x0800, 233 @ species index 233, MON_PIC_SIZE
	.4byte 0x08CCFEEC; .2byte 0x0800, 234 @ species index 234, MON_PIC_SIZE
	.4byte 0x08CD0ABC; .2byte 0x0800, 235 @ species index 235, MON_PIC_SIZE
	.4byte 0x08CD15E4; .2byte 0x0800, 236 @ species index 236, MON_PIC_SIZE
	.4byte 0x08CD1FFC; .2byte 0x0800, 237 @ species index 237, MON_PIC_SIZE
	.4byte 0x08CD2C20; .2byte 0x0800, 238 @ species index 238, MON_PIC_SIZE
	.4byte 0x08CD3560; .2byte 0x0800, 239 @ species index 239, MON_PIC_SIZE
	.4byte 0x08CD4030; .2byte 0x0800, 240 @ species index 240, MON_PIC_SIZE
	.4byte 0x08CD49D0; .2byte 0x0800, 241 @ species index 241, MON_PIC_SIZE
	.4byte 0x08CD558C; .2byte 0x0800, 242 @ species index 242, MON_PIC_SIZE
	.4byte 0x08CD60B0; .2byte 0x0800, 243 @ species index 243, MON_PIC_SIZE
	.4byte 0x08CD6E44; .2byte 0x0800, 244 @ species index 244, MON_PIC_SIZE
	.4byte 0x08CD7CD4; .2byte 0x0800, 245 @ species index 245, MON_PIC_SIZE
	.4byte 0x08CD8BA4; .2byte 0x0800, 246 @ species index 246, MON_PIC_SIZE
	.4byte 0x08CD951C; .2byte 0x0800, 247 @ species index 247, MON_PIC_SIZE
	.4byte 0x08CD9FB4; .2byte 0x0800, 248 @ species index 248, MON_PIC_SIZE
	.4byte 0x08CDAD4C; .2byte 0x0800, 249 @ species index 249, MON_PIC_SIZE
	.4byte 0x08CDBA54; .2byte 0x0800, 250 @ species index 250, MON_PIC_SIZE
	.4byte 0x08CDC928; .2byte 0x0800, 251 @ species index 251, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 252 @ species index 252, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 253 @ species index 253, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 254 @ species index 254, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 255 @ species index 255, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 256 @ species index 256, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 257 @ species index 257, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 258 @ species index 258, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 259 @ species index 259, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 260 @ species index 260, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 261 @ species index 261, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 262 @ species index 262, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 263 @ species index 263, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 264 @ species index 264, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 265 @ species index 265, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 266 @ species index 266, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 267 @ species index 267, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 268 @ species index 268, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 269 @ species index 269, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 270 @ species index 270, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 271 @ species index 271, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 272 @ species index 272, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 273 @ species index 273, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 274 @ species index 274, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 275 @ species index 275, MON_PIC_SIZE
	.4byte 0x08CDD3BC; .2byte 0x0800, 276 @ species index 276, MON_PIC_SIZE
	.4byte 0x08CDD6E8; .2byte 0x0800, 277 @ species index 277, MON_PIC_SIZE
	.4byte 0x08CDE160; .2byte 0x0800, 278 @ species index 278, MON_PIC_SIZE
	.4byte 0x08CDED98; .2byte 0x0800, 279 @ species index 279, MON_PIC_SIZE
	.4byte 0x08CDFB08; .2byte 0x0800, 280 @ species index 280, MON_PIC_SIZE
	.4byte 0x08CE04EC; .2byte 0x0800, 281 @ species index 281, MON_PIC_SIZE
	.4byte 0x08CE1118; .2byte 0x0800, 282 @ species index 282, MON_PIC_SIZE
	.4byte 0x08CE20B4; .2byte 0x0800, 283 @ species index 283, MON_PIC_SIZE
	.4byte 0x08CE2ABC; .2byte 0x0800, 284 @ species index 284, MON_PIC_SIZE
	.4byte 0x08CE393C; .2byte 0x0800, 285 @ species index 285, MON_PIC_SIZE
	.4byte 0x08CE46DC; .2byte 0x0800, 286 @ species index 286, MON_PIC_SIZE
	.4byte 0x08CE541C; .2byte 0x0800, 287 @ species index 287, MON_PIC_SIZE
	.4byte 0x08CE603C; .2byte 0x0800, 288 @ species index 288, MON_PIC_SIZE
	.4byte 0x08CE6BBC; .2byte 0x0800, 289 @ species index 289, MON_PIC_SIZE
	.4byte 0x08CE7670; .2byte 0x0800, 290 @ species index 290, MON_PIC_SIZE
	.4byte 0x08CE7FB4; .2byte 0x0800, 291 @ species index 291, MON_PIC_SIZE
	.4byte 0x08CE88C0; .2byte 0x0800, 292 @ species index 292, MON_PIC_SIZE
	.4byte 0x08CE9438; .2byte 0x0800, 293 @ species index 293, MON_PIC_SIZE
	.4byte 0x08CE9D24; .2byte 0x0800, 294 @ species index 294, MON_PIC_SIZE
	.4byte 0x08CEA754; .2byte 0x0800, 295 @ species index 295, MON_PIC_SIZE
	.4byte 0x08CEB10C; .2byte 0x0800, 296 @ species index 296, MON_PIC_SIZE
	.4byte 0x08CEBB90; .2byte 0x0800, 297 @ species index 297, MON_PIC_SIZE
	.4byte 0x08CEC7E0; .2byte 0x0800, 298 @ species index 298, MON_PIC_SIZE
	.4byte 0x08CED1C4; .2byte 0x0800, 299 @ species index 299, MON_PIC_SIZE
	.4byte 0x08CEDBE8; .2byte 0x0800, 300 @ species index 300, MON_PIC_SIZE
	.4byte 0x08CEE7D8; .2byte 0x0800, 301 @ species index 301, MON_PIC_SIZE
	.4byte 0x08CEF1A0; .2byte 0x0800, 302 @ species index 302, MON_PIC_SIZE
	.4byte 0x08CEFD4C; .2byte 0x0800, 303 @ species index 303, MON_PIC_SIZE
	.4byte 0x08CF087C; .2byte 0x0800, 304 @ species index 304, MON_PIC_SIZE
	.4byte 0x08CF1164; .2byte 0x0800, 305 @ species index 305, MON_PIC_SIZE
	.4byte 0x08CF1CD0; .2byte 0x0800, 306 @ species index 306, MON_PIC_SIZE
	.4byte 0x08CF2688; .2byte 0x0800, 307 @ species index 307, MON_PIC_SIZE
	.4byte 0x08CF32C0; .2byte 0x0800, 308 @ species index 308, MON_PIC_SIZE
	.4byte 0x08CF3D60; .2byte 0x0800, 309 @ species index 309, MON_PIC_SIZE
	.4byte 0x08CF475C; .2byte 0x0800, 310 @ species index 310, MON_PIC_SIZE
	.4byte 0x08CF52E4; .2byte 0x0800, 311 @ species index 311, MON_PIC_SIZE
	.4byte 0x08CF5B98; .2byte 0x0800, 312 @ species index 312, MON_PIC_SIZE
	.4byte 0x08CF66FC; .2byte 0x0800, 313 @ species index 313, MON_PIC_SIZE
	.4byte 0x08CF7030; .2byte 0x0800, 314 @ species index 314, MON_PIC_SIZE
	.4byte 0x08CF7A7C; .2byte 0x0800, 315 @ species index 315, MON_PIC_SIZE
	.4byte 0x08CF8534; .2byte 0x0800, 316 @ species index 316, MON_PIC_SIZE
	.4byte 0x08CF90CC; .2byte 0x0800, 317 @ species index 317, MON_PIC_SIZE
	.4byte 0x08CF9C94; .2byte 0x0800, 318 @ species index 318, MON_PIC_SIZE
	.4byte 0x08CFA5C0; .2byte 0x0800, 319 @ species index 319, MON_PIC_SIZE
	.4byte 0x08CFB1BC; .2byte 0x0800, 320 @ species index 320, MON_PIC_SIZE
	.4byte 0x08CFBB98; .2byte 0x0800, 321 @ species index 321, MON_PIC_SIZE
	.4byte 0x08CFC77C; .2byte 0x0800, 322 @ species index 322, MON_PIC_SIZE
	.4byte 0x08CFD1E8; .2byte 0x0800, 323 @ species index 323, MON_PIC_SIZE
	.4byte 0x08CFDB78; .2byte 0x0800, 324 @ species index 324, MON_PIC_SIZE
	.4byte 0x08CFE6AC; .2byte 0x0800, 325 @ species index 325, MON_PIC_SIZE
	.4byte 0x08CFEEA8; .2byte 0x0800, 326 @ species index 326, MON_PIC_SIZE
	.4byte 0x08CFF990; .2byte 0x0800, 327 @ species index 327, MON_PIC_SIZE
	.4byte 0x08D00674; .2byte 0x0800, 328 @ species index 328, MON_PIC_SIZE
	.4byte 0x08D010A8; .2byte 0x0800, 329 @ species index 329, MON_PIC_SIZE
	.4byte 0x08D01C9C; .2byte 0x0800, 330 @ species index 330, MON_PIC_SIZE
	.4byte 0x08D02748; .2byte 0x0800, 331 @ species index 331, MON_PIC_SIZE
	.4byte 0x08D032A0; .2byte 0x0800, 332 @ species index 332, MON_PIC_SIZE
	.4byte 0x08D03B4C; .2byte 0x0800, 333 @ species index 333, MON_PIC_SIZE
	.4byte 0x08D045A4; .2byte 0x0800, 334 @ species index 334, MON_PIC_SIZE
	.4byte 0x08D05340; .2byte 0x0800, 335 @ species index 335, MON_PIC_SIZE
	.4byte 0x08D05DB4; .2byte 0x0800, 336 @ species index 336, MON_PIC_SIZE
	.4byte 0x08D06AB4; .2byte 0x0800, 337 @ species index 337, MON_PIC_SIZE
	.4byte 0x08D07440; .2byte 0x0800, 338 @ species index 338, MON_PIC_SIZE
	.4byte 0x08D07E0C; .2byte 0x0800, 339 @ species index 339, MON_PIC_SIZE
	.4byte 0x08D08808; .2byte 0x0800, 340 @ species index 340, MON_PIC_SIZE
	.4byte 0x08D09354; .2byte 0x0800, 341 @ species index 341, MON_PIC_SIZE
	.4byte 0x08D09C34; .2byte 0x0800, 342 @ species index 342, MON_PIC_SIZE
	.4byte 0x08D0A6A0; .2byte 0x0800, 343 @ species index 343, MON_PIC_SIZE
	.4byte 0x08D0B60C; .2byte 0x0800, 344 @ species index 344, MON_PIC_SIZE
	.4byte 0x08D0C0EC; .2byte 0x0800, 345 @ species index 345, MON_PIC_SIZE
	.4byte 0x08D0CC94; .2byte 0x0800, 346 @ species index 346, MON_PIC_SIZE
	.4byte 0x08D0D6AC; .2byte 0x0800, 347 @ species index 347, MON_PIC_SIZE
	.4byte 0x08D0E294; .2byte 0x0800, 348 @ species index 348, MON_PIC_SIZE
	.4byte 0x08D0ED84; .2byte 0x0800, 349 @ species index 349, MON_PIC_SIZE
	.4byte 0x08D0FA2C; .2byte 0x0800, 350 @ species index 350, MON_PIC_SIZE
	.4byte 0x08D1047C; .2byte 0x0800, 351 @ species index 351, MON_PIC_SIZE
	.4byte 0x08D10D98; .2byte 0x0800, 352 @ species index 352, MON_PIC_SIZE
	.4byte 0x08D11924; .2byte 0x0800, 353 @ species index 353, MON_PIC_SIZE
	.4byte 0x08D122D8; .2byte 0x0800, 354 @ species index 354, MON_PIC_SIZE
	.4byte 0x08D12C78; .2byte 0x0800, 355 @ species index 355, MON_PIC_SIZE
	.4byte 0x08D138A4; .2byte 0x0800, 356 @ species index 356, MON_PIC_SIZE
	.4byte 0x08D14290; .2byte 0x0800, 357 @ species index 357, MON_PIC_SIZE
	.4byte 0x08D14D68; .2byte 0x0800, 358 @ species index 358, MON_PIC_SIZE
	.4byte 0x08D15B40; .2byte 0x0800, 359 @ species index 359, MON_PIC_SIZE
	.4byte 0x08D16704; .2byte 0x0800, 360 @ species index 360, MON_PIC_SIZE
	.4byte 0x08D1709C; .2byte 0x0800, 361 @ species index 361, MON_PIC_SIZE
	.4byte 0x08D17AAC; .2byte 0x0800, 362 @ species index 362, MON_PIC_SIZE
	.4byte 0x08D185A8; .2byte 0x0800, 363 @ species index 363, MON_PIC_SIZE
	.4byte 0x08D1914C; .2byte 0x0800, 364 @ species index 364, MON_PIC_SIZE
	.4byte 0x08D19B8C; .2byte 0x0800, 365 @ species index 365, MON_PIC_SIZE
	.4byte 0x08D1A6C0; .2byte 0x0800, 366 @ species index 366, MON_PIC_SIZE
	.4byte 0x08D1B3C8; .2byte 0x0800, 367 @ species index 367, MON_PIC_SIZE
	.4byte 0x08D1BCD4; .2byte 0x0800, 368 @ species index 368, MON_PIC_SIZE
	.4byte 0x08D1C7D0; .2byte 0x0800, 369 @ species index 369, MON_PIC_SIZE
	.4byte 0x08D1D4DC; .2byte 0x0800, 370 @ species index 370, MON_PIC_SIZE
	.4byte 0x08D1DE50; .2byte 0x0800, 371 @ species index 371, MON_PIC_SIZE
	.4byte 0x08D1EAA8; .2byte 0x0800, 372 @ species index 372, MON_PIC_SIZE
	.4byte 0x08D1F88C; .2byte 0x0800, 373 @ species index 373, MON_PIC_SIZE
	.4byte 0x08D20268; .2byte 0x0800, 374 @ species index 374, MON_PIC_SIZE
	.4byte 0x08D20DF8; .2byte 0x0800, 375 @ species index 375, MON_PIC_SIZE
	.4byte 0x08D21860; .2byte 0x0800, 376 @ species index 376, MON_PIC_SIZE
	.4byte 0x08D22460; .2byte 0x0800, 377 @ species index 377, MON_PIC_SIZE
	.4byte 0x08D22DA0; .2byte 0x0800, 378 @ species index 378, MON_PIC_SIZE
	.4byte 0x08D23740; .2byte 0x0800, 379 @ species index 379, MON_PIC_SIZE
	.4byte 0x08D2445C; .2byte 0x0800, 380 @ species index 380, MON_PIC_SIZE
	.4byte 0x08D2500C; .2byte 0x0800, 381 @ species index 381, MON_PIC_SIZE
	.4byte 0x08D25B68; .2byte 0x0800, 382 @ species index 382, MON_PIC_SIZE
	.4byte 0x08D263E8; .2byte 0x0800, 383 @ species index 383, MON_PIC_SIZE
	.4byte 0x08D26F10; .2byte 0x0800, 384 @ species index 384, MON_PIC_SIZE
	.4byte 0x08D27D24; .2byte 0x0800, 385 @ species index 385, MON_PIC_SIZE
	.4byte 0x08D29684; .2byte 0x0800, 386 @ species index 386, MON_PIC_SIZE
	.4byte 0x08D2A1E4; .2byte 0x0800, 387 @ species index 387, MON_PIC_SIZE
	.4byte 0x08D2ACE4; .2byte 0x0800, 388 @ species index 388, MON_PIC_SIZE
	.4byte 0x08D2B7DC; .2byte 0x0800, 389 @ species index 389, MON_PIC_SIZE
	.4byte 0x08D2C464; .2byte 0x0800, 390 @ species index 390, MON_PIC_SIZE
	.4byte 0x08D2CE40; .2byte 0x0800, 391 @ species index 391, MON_PIC_SIZE
	.4byte 0x08D2DC68; .2byte 0x0800, 392 @ species index 392, MON_PIC_SIZE
	.4byte 0x08D2E544; .2byte 0x0800, 393 @ species index 393, MON_PIC_SIZE
	.4byte 0x08D2F024; .2byte 0x0800, 394 @ species index 394, MON_PIC_SIZE
	.4byte 0x08D2FB44; .2byte 0x0800, 395 @ species index 395, MON_PIC_SIZE
	.4byte 0x08D30514; .2byte 0x0800, 396 @ species index 396, MON_PIC_SIZE
	.4byte 0x08D30F70; .2byte 0x0800, 397 @ species index 397, MON_PIC_SIZE
	.4byte 0x08D31B28; .2byte 0x0800, 398 @ species index 398, MON_PIC_SIZE
	.4byte 0x08D324F8; .2byte 0x0800, 399 @ species index 399, MON_PIC_SIZE
	.4byte 0x08D330E8; .2byte 0x0800, 400 @ species index 400, MON_PIC_SIZE
	.4byte 0x08D33C88; .2byte 0x0800, 401 @ species index 401, MON_PIC_SIZE
	.4byte 0x08D34A00; .2byte 0x0800, 402 @ species index 402, MON_PIC_SIZE
	.4byte 0x08D355A8; .2byte 0x0800, 403 @ species index 403, MON_PIC_SIZE
	.4byte 0x08D361D8; .2byte 0x0800, 404 @ species index 404, MON_PIC_SIZE
	.4byte 0x08D36D30; .2byte 0x0800, 405 @ species index 405, MON_PIC_SIZE
	.4byte 0x08D37B9C; .2byte 0x0800, 406 @ species index 406, MON_PIC_SIZE
	.4byte 0x08D38B30; .2byte 0x0800, 407 @ species index 407, MON_PIC_SIZE
	.4byte 0x08D396C0; .2byte 0x0800, 408 @ species index 408, MON_PIC_SIZE
	.4byte 0x08D3A2E4; .2byte 0x0800, 409 @ species index 409, MON_PIC_SIZE
	.4byte 0x08D3AE00; .2byte 0x0800, 410 @ species index 410, MON_PIC_SIZE
	.4byte 0x08D43CBC; .2byte 0x0800, 411 @ species index 411, MON_PIC_SIZE
	.4byte 0x08D445EC; .2byte 0x0800, 412 @ species index 412, MON_PIC_SIZE
	.4byte 0x08D447C0; .2byte 0x0800, 413 @ species index 413, MON_PIC_SIZE
	.4byte 0x08D44F9C; .2byte 0x0800, 414 @ species index 414, MON_PIC_SIZE
	.4byte 0x08D4585C; .2byte 0x0800, 415 @ species index 415, MON_PIC_SIZE
	.4byte 0x08D460AC; .2byte 0x0800, 416 @ species index 416, MON_PIC_SIZE
	.4byte 0x08D46864; .2byte 0x0800, 417 @ species index 417, MON_PIC_SIZE
	.4byte 0x08D47074; .2byte 0x0800, 418 @ species index 418, MON_PIC_SIZE
	.4byte 0x08D4789C; .2byte 0x0800, 419 @ species index 419, MON_PIC_SIZE
	.4byte 0x08D481A4; .2byte 0x0800, 420 @ species index 420, MON_PIC_SIZE
	.4byte 0x08D488E4; .2byte 0x0800, 421 @ species index 421, MON_PIC_SIZE
	.4byte 0x08D49090; .2byte 0x0800, 422 @ species index 422, MON_PIC_SIZE
	.4byte 0x08D49858; .2byte 0x0800, 423 @ species index 423, MON_PIC_SIZE
	.4byte 0x08D49FDC; .2byte 0x0800, 424 @ species index 424, MON_PIC_SIZE
	.4byte 0x08D4A8A8; .2byte 0x0800, 425 @ species index 425, MON_PIC_SIZE
	.4byte 0x08D4B10C; .2byte 0x0800, 426 @ species index 426, MON_PIC_SIZE
	.4byte 0x08D4BA04; .2byte 0x0800, 427 @ species index 427, MON_PIC_SIZE
	.4byte 0x08D4C168; .2byte 0x0800, 428 @ species index 428, MON_PIC_SIZE
	.4byte 0x08D4C8E8; .2byte 0x0800, 429 @ species index 429, MON_PIC_SIZE
	.4byte 0x08D4D054; .2byte 0x0800, 430 @ species index 430, MON_PIC_SIZE
	.4byte 0x08D4D890; .2byte 0x0800, 431 @ species index 431, MON_PIC_SIZE
	.4byte 0x08D4DFF4; .2byte 0x0800, 432 @ species index 432, MON_PIC_SIZE
	.4byte 0x08D4E860; .2byte 0x0800, 433 @ species index 433, MON_PIC_SIZE
	.4byte 0x08D4F074; .2byte 0x0800, 434 @ species index 434, MON_PIC_SIZE
	.4byte 0x08D4F84C; .2byte 0x0800, 435 @ species index 435, MON_PIC_SIZE
	.4byte 0x08D50000; .2byte 0x0800, 436 @ species index 436, MON_PIC_SIZE
	.4byte 0x08D507CC; .2byte 0x0800, 437 @ species index 437, MON_PIC_SIZE
	.4byte 0x08D50F58; .2byte 0x0800, 438 @ species index 438, MON_PIC_SIZE
	.4byte 0x08D516B0; .2byte 0x0800, 439 @ species index 439, MON_PIC_SIZE

	.globl gUnknown_82D5A68
gUnknown_82D5A68: @ 0x082D5A68
	.globl gMonBackPicCoords
gMonBackPicCoords:
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 0: size, y_offset, ABI pad
	.byte 0x64, 0x10, 0x00, 0x00 @ species index 1: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 2: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 3: size, y_offset, ABI pad
	.byte 0x65, 0x0E, 0x00, 0x00 @ species index 4: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 5: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 6: size, y_offset, ABI pad
	.byte 0x65, 0x0E, 0x00, 0x00 @ species index 7: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 8: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 9: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 10: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 11: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 12: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 13: size, y_offset, ABI pad
	.byte 0x46, 0x0A, 0x00, 0x00 @ species index 14: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 15: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 16: size, y_offset, ABI pad
	.byte 0x85, 0x0C, 0x00, 0x00 @ species index 17: size, y_offset, ABI pad
	.byte 0x78, 0x02, 0x00, 0x00 @ species index 18: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 19: size, y_offset, ABI pad
	.byte 0x75, 0x0D, 0x00, 0x00 @ species index 20: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 21: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 22: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 23: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 24: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 25: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 26: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 27: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 28: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 29: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 30: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 31: size, y_offset, ABI pad
	.byte 0x56, 0x08, 0x00, 0x00 @ species index 32: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 33: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 34: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 35: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 36: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 37: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 38: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 39: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 40: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 41: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 42: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 43: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 44: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 45: size, y_offset, ABI pad
	.byte 0x63, 0x14, 0x00, 0x00 @ species index 46: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 47: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 48: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 49: size, y_offset, ABI pad
	.byte 0x54, 0x10, 0x00, 0x00 @ species index 50: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 51: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 52: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 53: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 54: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 55: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 56: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 57: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 58: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 59: size, y_offset, ABI pad
	.byte 0x74, 0x10, 0x00, 0x00 @ species index 60: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 61: size, y_offset, ABI pad
	.byte 0x86, 0x0B, 0x00, 0x00 @ species index 62: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 63: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 64: size, y_offset, ABI pad
	.byte 0x67, 0x05, 0x00, 0x00 @ species index 65: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 66: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 67: size, y_offset, ABI pad
	.byte 0x67, 0x04, 0x00, 0x00 @ species index 68: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 69: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 70: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 71: size, y_offset, ABI pad
	.byte 0x56, 0x0A, 0x00, 0x00 @ species index 72: size, y_offset, ABI pad
	.byte 0x86, 0x0B, 0x00, 0x00 @ species index 73: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 74: size, y_offset, ABI pad
	.byte 0x75, 0x0C, 0x00, 0x00 @ species index 75: size, y_offset, ABI pad
	.byte 0x84, 0x10, 0x00, 0x00 @ species index 76: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 77: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 78: size, y_offset, ABI pad
	.byte 0x85, 0x0E, 0x00, 0x00 @ species index 79: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 80: size, y_offset, ABI pad
	.byte 0x43, 0x14, 0x00, 0x00 @ species index 81: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 82: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 83: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 84: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 85: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 86: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 87: size, y_offset, ABI pad
	.byte 0x75, 0x0C, 0x00, 0x00 @ species index 88: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 89: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 90: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 91: size, y_offset, ABI pad
	.byte 0x85, 0x0E, 0x00, 0x00 @ species index 92: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 93: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 94: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 95: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 96: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 97: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 98: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 99: size, y_offset, ABI pad
	.byte 0x55, 0x0E, 0x00, 0x00 @ species index 100: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 101: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 102: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 103: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 104: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 105: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 106: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 107: size, y_offset, ABI pad
	.byte 0x65, 0x0E, 0x00, 0x00 @ species index 108: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 109: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 110: size, y_offset, ABI pad
	.byte 0x85, 0x0C, 0x00, 0x00 @ species index 111: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 112: size, y_offset, ABI pad
	.byte 0x86, 0x0B, 0x00, 0x00 @ species index 113: size, y_offset, ABI pad
	.byte 0x85, 0x0E, 0x00, 0x00 @ species index 114: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 115: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 116: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 117: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 118: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 119: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 120: size, y_offset, ABI pad
	.byte 0x85, 0x0E, 0x00, 0x00 @ species index 121: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 122: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 123: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 124: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 125: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 126: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 127: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 128: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 129: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 130: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 131: size, y_offset, ABI pad
	.byte 0x54, 0x11, 0x00, 0x00 @ species index 132: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 133: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 134: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 135: size, y_offset, ABI pad
	.byte 0x67, 0x05, 0x00, 0x00 @ species index 136: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 137: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 138: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 139: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 140: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 141: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 142: size, y_offset, ABI pad
	.byte 0x86, 0x0B, 0x00, 0x00 @ species index 143: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 144: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 145: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 146: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 147: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 148: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 149: size, y_offset, ABI pad
	.byte 0x78, 0x01, 0x00, 0x00 @ species index 150: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 151: size, y_offset, ABI pad
	.byte 0x56, 0x0A, 0x00, 0x00 @ species index 152: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 153: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 154: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 155: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 156: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 157: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 158: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 159: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 160: size, y_offset, ABI pad
	.byte 0x67, 0x05, 0x00, 0x00 @ species index 161: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 162: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 163: size, y_offset, ABI pad
	.byte 0x68, 0x03, 0x00, 0x00 @ species index 164: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 165: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 166: size, y_offset, ABI pad
	.byte 0x73, 0x15, 0x00, 0x00 @ species index 167: size, y_offset, ABI pad
	.byte 0x86, 0x0B, 0x00, 0x00 @ species index 168: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 169: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 170: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 171: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 172: size, y_offset, ABI pad
	.byte 0x65, 0x0F, 0x00, 0x00 @ species index 173: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 174: size, y_offset, ABI pad
	.byte 0x54, 0x10, 0x00, 0x00 @ species index 175: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 176: size, y_offset, ABI pad
	.byte 0x54, 0x11, 0x00, 0x00 @ species index 177: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 178: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 179: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 180: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 181: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 182: size, y_offset, ABI pad
	.byte 0x75, 0x0C, 0x00, 0x00 @ species index 183: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 184: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 185: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 186: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 187: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 188: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 189: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 190: size, y_offset, ABI pad
	.byte 0x56, 0x0A, 0x00, 0x00 @ species index 191: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 192: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 193: size, y_offset, ABI pad
	.byte 0x85, 0x0F, 0x00, 0x00 @ species index 194: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 195: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 196: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 197: size, y_offset, ABI pad
	.byte 0x66, 0x09, 0x00, 0x00 @ species index 198: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 199: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 200: size, y_offset, ABI pad
	.byte 0x36, 0x08, 0x00, 0x00 @ species index 201: size, y_offset, ABI pad
	.byte 0x75, 0x0C, 0x00, 0x00 @ species index 202: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 203: size, y_offset, ABI pad
	.byte 0x65, 0x0F, 0x00, 0x00 @ species index 204: size, y_offset, ABI pad
	.byte 0x84, 0x10, 0x00, 0x00 @ species index 205: size, y_offset, ABI pad
	.byte 0x85, 0x0F, 0x00, 0x00 @ species index 206: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 207: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 208: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 209: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 210: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 211: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 212: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 213: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 214: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 215: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 216: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 217: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 218: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 219: size, y_offset, ABI pad
	.byte 0x63, 0x15, 0x00, 0x00 @ species index 220: size, y_offset, ABI pad
	.byte 0x75, 0x0D, 0x00, 0x00 @ species index 221: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 222: size, y_offset, ABI pad
	.byte 0x75, 0x0D, 0x00, 0x00 @ species index 223: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 224: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 225: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 226: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 227: size, y_offset, ABI pad
	.byte 0x55, 0x0C, 0x00, 0x00 @ species index 228: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 229: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 230: size, y_offset, ABI pad
	.byte 0x65, 0x0E, 0x00, 0x00 @ species index 231: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 232: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 233: size, y_offset, ABI pad
	.byte 0x78, 0x03, 0x00, 0x00 @ species index 234: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 235: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 236: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 237: size, y_offset, ABI pad
	.byte 0x56, 0x09, 0x00, 0x00 @ species index 238: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 239: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 240: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 241: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 242: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 243: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 244: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 245: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 246: size, y_offset, ABI pad
	.byte 0x67, 0x05, 0x00, 0x00 @ species index 247: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 248: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 249: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 250: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 251: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 252: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 253: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 254: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 255: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 256: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 257: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 258: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 259: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 260: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 261: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 262: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 263: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 264: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 265: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 266: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 267: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 268: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 269: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 270: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 271: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 272: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 273: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 274: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 275: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 276: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 277: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 278: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 279: size, y_offset, ABI pad
	.byte 0x67, 0x05, 0x00, 0x00 @ species index 280: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 281: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 282: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 283: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 284: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 285: size, y_offset, ABI pad
	.byte 0x76, 0x09, 0x00, 0x00 @ species index 286: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 287: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 288: size, y_offset, ABI pad
	.byte 0x85, 0x0F, 0x00, 0x00 @ species index 289: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 290: size, y_offset, ABI pad
	.byte 0x83, 0x15, 0x00, 0x00 @ species index 291: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 292: size, y_offset, ABI pad
	.byte 0x73, 0x14, 0x00, 0x00 @ species index 293: size, y_offset, ABI pad
	.byte 0x83, 0x14, 0x00, 0x00 @ species index 294: size, y_offset, ABI pad
	.byte 0x75, 0x0F, 0x00, 0x00 @ species index 295: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 296: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 297: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 298: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 299: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 300: size, y_offset, ABI pad
	.byte 0x83, 0x14, 0x00, 0x00 @ species index 301: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 302: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 303: size, y_offset, ABI pad
	.byte 0x64, 0x11, 0x00, 0x00 @ species index 304: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 305: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 306: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 307: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 308: size, y_offset, ABI pad
	.byte 0x85, 0x0E, 0x00, 0x00 @ species index 309: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 310: size, y_offset, ABI pad
	.byte 0x86, 0x0B, 0x00, 0x00 @ species index 311: size, y_offset, ABI pad
	.byte 0x88, 0x00, 0x00, 0x00 @ species index 312: size, y_offset, ABI pad
	.byte 0x83, 0x15, 0x00, 0x00 @ species index 313: size, y_offset, ABI pad
	.byte 0x83, 0x16, 0x00, 0x00 @ species index 314: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 315: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 316: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 317: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 318: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 319: size, y_offset, ABI pad
	.byte 0x85, 0x0C, 0x00, 0x00 @ species index 320: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 321: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 322: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 323: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 324: size, y_offset, ABI pad
	.byte 0x46, 0x0A, 0x00, 0x00 @ species index 325: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 326: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 327: size, y_offset, ABI pad
	.byte 0x67, 0x07, 0x00, 0x00 @ species index 328: size, y_offset, ABI pad
	.byte 0x68, 0x02, 0x00, 0x00 @ species index 329: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 330: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 331: size, y_offset, ABI pad
	.byte 0x75, 0x0E, 0x00, 0x00 @ species index 332: size, y_offset, ABI pad
	.byte 0x74, 0x11, 0x00, 0x00 @ species index 333: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 334: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 335: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 336: size, y_offset, ABI pad
	.byte 0x84, 0x10, 0x00, 0x00 @ species index 337: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 338: size, y_offset, ABI pad
	.byte 0x86, 0x0B, 0x00, 0x00 @ species index 339: size, y_offset, ABI pad
	.byte 0x84, 0x13, 0x00, 0x00 @ species index 340: size, y_offset, ABI pad
	.byte 0x64, 0x12, 0x00, 0x00 @ species index 341: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 342: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 343: size, y_offset, ABI pad
	.byte 0x85, 0x0F, 0x00, 0x00 @ species index 344: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 345: size, y_offset, ABI pad
	.byte 0x76, 0x0A, 0x00, 0x00 @ species index 346: size, y_offset, ABI pad
	.byte 0x85, 0x0C, 0x00, 0x00 @ species index 347: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 348: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 349: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 350: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 351: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 352: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 353: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 354: size, y_offset, ABI pad
	.byte 0x87, 0x04, 0x00, 0x00 @ species index 355: size, y_offset, ABI pad
	.byte 0x76, 0x0B, 0x00, 0x00 @ species index 356: size, y_offset, ABI pad
	.byte 0x68, 0x03, 0x00, 0x00 @ species index 357: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 358: size, y_offset, ABI pad
	.byte 0x87, 0x06, 0x00, 0x00 @ species index 359: size, y_offset, ABI pad
	.byte 0x77, 0x07, 0x00, 0x00 @ species index 360: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 361: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 362: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 363: size, y_offset, ABI pad
	.byte 0x85, 0x0F, 0x00, 0x00 @ species index 364: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 365: size, y_offset, ABI pad
	.byte 0x86, 0x08, 0x00, 0x00 @ species index 366: size, y_offset, ABI pad
	.byte 0x66, 0x0B, 0x00, 0x00 @ species index 367: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 368: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 369: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 370: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 371: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 372: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 373: size, y_offset, ABI pad
	.byte 0x68, 0x02, 0x00, 0x00 @ species index 374: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 375: size, y_offset, ABI pad
	.byte 0x78, 0x03, 0x00, 0x00 @ species index 376: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 377: size, y_offset, ABI pad
	.byte 0x65, 0x0C, 0x00, 0x00 @ species index 378: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 379: size, y_offset, ABI pad
	.byte 0x88, 0x01, 0x00, 0x00 @ species index 380: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 381: size, y_offset, ABI pad
	.byte 0x54, 0x11, 0x00, 0x00 @ species index 382: size, y_offset, ABI pad
	.byte 0x84, 0x11, 0x00, 0x00 @ species index 383: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 384: size, y_offset, ABI pad
	.byte 0x45, 0x0D, 0x00, 0x00 @ species index 385: size, y_offset, ABI pad
	.byte 0x76, 0x08, 0x00, 0x00 @ species index 386: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 387: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 388: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 389: size, y_offset, ABI pad
	.byte 0x83, 0x17, 0x00, 0x00 @ species index 390: size, y_offset, ABI pad
	.byte 0x77, 0x05, 0x00, 0x00 @ species index 391: size, y_offset, ABI pad
	.byte 0x45, 0x0D, 0x00, 0x00 @ species index 392: size, y_offset, ABI pad
	.byte 0x57, 0x06, 0x00, 0x00 @ species index 393: size, y_offset, ABI pad
	.byte 0x77, 0x04, 0x00, 0x00 @ species index 394: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 395: size, y_offset, ABI pad
	.byte 0x85, 0x0D, 0x00, 0x00 @ species index 396: size, y_offset, ABI pad
	.byte 0x77, 0x06, 0x00, 0x00 @ species index 397: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 398: size, y_offset, ABI pad
	.byte 0x84, 0x10, 0x00, 0x00 @ species index 399: size, y_offset, ABI pad
	.byte 0x83, 0x14, 0x00, 0x00 @ species index 400: size, y_offset, ABI pad
	.byte 0x86, 0x0A, 0x00, 0x00 @ species index 401: size, y_offset, ABI pad
	.byte 0x85, 0x0E, 0x00, 0x00 @ species index 402: size, y_offset, ABI pad
	.byte 0x85, 0x0E, 0x00, 0x00 @ species index 403: size, y_offset, ABI pad
	.byte 0x84, 0x13, 0x00, 0x00 @ species index 404: size, y_offset, ABI pad
	.byte 0x87, 0x07, 0x00, 0x00 @ species index 405: size, y_offset, ABI pad
	.byte 0x78, 0x00, 0x00, 0x00 @ species index 406: size, y_offset, ABI pad
	.byte 0x88, 0x02, 0x00, 0x00 @ species index 407: size, y_offset, ABI pad
	.byte 0x88, 0x03, 0x00, 0x00 @ species index 408: size, y_offset, ABI pad
	.byte 0x87, 0x05, 0x00, 0x00 @ species index 409: size, y_offset, ABI pad
	.byte 0x86, 0x09, 0x00, 0x00 @ species index 410: size, y_offset, ABI pad
	.byte 0x47, 0x07, 0x00, 0x00 @ species index 411: size, y_offset, ABI pad
	.byte 0x36, 0x0A, 0x00, 0x00 @ species index 412: size, y_offset, ABI pad
	.byte 0x56, 0x09, 0x00, 0x00 @ species index 413: size, y_offset, ABI pad
	.byte 0x67, 0x06, 0x00, 0x00 @ species index 414: size, y_offset, ABI pad
	.byte 0x56, 0x08, 0x00, 0x00 @ species index 415: size, y_offset, ABI pad
	.byte 0x56, 0x0A, 0x00, 0x00 @ species index 416: size, y_offset, ABI pad
	.byte 0x66, 0x0A, 0x00, 0x00 @ species index 417: size, y_offset, ABI pad
	.byte 0x57, 0x05, 0x00, 0x00 @ species index 418: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 419: size, y_offset, ABI pad
	.byte 0x37, 0x07, 0x00, 0x00 @ species index 420: size, y_offset, ABI pad
	.byte 0x46, 0x09, 0x00, 0x00 @ species index 421: size, y_offset, ABI pad
	.byte 0x57, 0x07, 0x00, 0x00 @ species index 422: size, y_offset, ABI pad
	.byte 0x46, 0x0A, 0x00, 0x00 @ species index 423: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 424: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 425: size, y_offset, ABI pad
	.byte 0x66, 0x08, 0x00, 0x00 @ species index 426: size, y_offset, ABI pad
	.byte 0x46, 0x0A, 0x00, 0x00 @ species index 427: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 428: size, y_offset, ABI pad
	.byte 0x45, 0x0C, 0x00, 0x00 @ species index 429: size, y_offset, ABI pad
	.byte 0x57, 0x04, 0x00, 0x00 @ species index 430: size, y_offset, ABI pad
	.byte 0x45, 0x0D, 0x00, 0x00 @ species index 431: size, y_offset, ABI pad
	.byte 0x65, 0x0D, 0x00, 0x00 @ species index 432: size, y_offset, ABI pad
	.byte 0x56, 0x0B, 0x00, 0x00 @ species index 433: size, y_offset, ABI pad
	.byte 0x55, 0x0D, 0x00, 0x00 @ species index 434: size, y_offset, ABI pad
	.byte 0x55, 0x0F, 0x00, 0x00 @ species index 435: size, y_offset, ABI pad
	.byte 0x46, 0x0A, 0x00, 0x00 @ species index 436: size, y_offset, ABI pad
	.byte 0x46, 0x0A, 0x00, 0x00 @ species index 437: size, y_offset, ABI pad
	.byte 0x37, 0x06, 0x00, 0x00 @ species index 438: size, y_offset, ABI pad
	.byte 0x47, 0x06, 0x00, 0x00 @ species index 439: size, y_offset, ABI pad

@ End of supplied data2b_partial.inc at 0x082D6148.
@ The next src/data.c object is gMonBackPicTable.
