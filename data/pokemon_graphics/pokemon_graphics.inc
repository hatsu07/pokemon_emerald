@ Pokemon battle graphics metadata decoded from 0312-0314_items_data.inc.
@ ROM range: 0x082D965C-0x082DDA1B.
@ Contains enemy elevation and front-picture animation metadata.

	.globl gUnknown_82D965C
gUnknown_82D965C: @ 0x082D965C
	.globl gEnemyMonElevation
gEnemyMonElevation:
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x08
	.byte 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.4byte _start @ ROM pointer 0x08000000
	.byte 0x08, 0x00, 0x00, 0x00
	.4byte _start @ ROM pointer 0x08000000
	.space 0x18, 0
	.byte 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x0C, 0x00, 0x00, 0x00, 0x00
	.4byte _start @ ROM pointer 0x08000000
	.byte 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.space 0x10, 0
	.byte 0x07, 0x00, 0x06, 0x08, 0x05, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x0C, 0x09
	.4byte _start @ ROM pointer 0x08000000
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00
	.space 0x27, 0
	.byte 0x06, 0x06, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.space 0x1B, 0
	.byte 0x08, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x10, 0x08, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0A, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0D, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x0C, 0x08, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x06, 0x06, 0x06, 0x0C, 0x08, 0x0C

sFrontAnimCmd_Species000_1: @ 0x082D97F8
	@ First referenced by species index 0, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species001_1: @ 0x082D9808
	@ First referenced by species index 1, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species002_1: @ 0x082D9818
	@ First referenced by species index 2, animation slot 1.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0024 @ frame=1, duration=36
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species003_1: @ 0x082D9828
	@ First referenced by species index 3, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species004_1: @ 0x082D9838
	@ First referenced by species index 4, animation slot 1.
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x002E @ frame=1, duration=46
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species005_1: @ 0x082D9848
	@ First referenced by species index 5, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species006_1: @ 0x082D9858
	@ First referenced by species index 6, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species007_1: @ 0x082D9864
	@ First referenced by species index 7, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species008_1: @ 0x082D9874
	@ First referenced by species index 8, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species009_1: @ 0x082D9884
	@ First referenced by species index 9, animation slot 1.
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species010_1: @ 0x082D989C
	@ First referenced by species index 10, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species011_1: @ 0x082D98C0
	@ First referenced by species index 11, animation slot 1.
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species012_1: @ 0x082D98CC
	@ First referenced by species index 12, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species013_1: @ 0x082D9904
	@ First referenced by species index 13, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species014_1: @ 0x082D9924
	@ First referenced by species index 14, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species015_1: @ 0x082D9954
	@ First referenced by species index 15, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x001C @ frame=0, duration=28
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species016_1: @ 0x082D996C
	@ First referenced by species index 16, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species017_1: @ 0x082D99A0
	@ First referenced by species index 17, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species018_1: @ 0x082D99B8
	@ First referenced by species index 18, animation slot 1.
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species019_1: @ 0x082D99CC
	@ First referenced by species index 19, animation slot 1.
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x001C @ frame=1, duration=28
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species020_1: @ 0x082D99E0
	@ First referenced by species index 20, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species021_1: @ 0x082D9A14
	@ First referenced by species index 21, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species022_1: @ 0x082D9A58
	@ First referenced by species index 22, animation slot 1.
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species023_1: @ 0x082D9A7C
	@ First referenced by species index 23, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species024_1: @ 0x082D9A98
	@ First referenced by species index 24, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species025_1: @ 0x082D9AA8
	@ First referenced by species index 25, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species025_2: @ 0x082D9AC0
	@ First referenced by species index 25, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species026_1: @ 0x082D9AD4
	@ First referenced by species index 26, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species026_2: @ 0x082D9AEC
	@ First referenced by species index 26, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species027_1: @ 0x082D9B00
	@ First referenced by species index 27, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species027_2: @ 0x082D9B18
	@ First referenced by species index 27, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species028_1: @ 0x082D9B2C
	@ First referenced by species index 28, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species028_2: @ 0x082D9B44
	@ First referenced by species index 28, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species029_1: @ 0x082D9B58
	@ First referenced by species index 29, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species030_1: @ 0x082D9B80
	@ First referenced by species index 30, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species031_1: @ 0x082D9B8C
	@ First referenced by species index 31, animation slot 1.
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species032_1: @ 0x082D9B98
	@ First referenced by species index 32, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species033_1: @ 0x082D9BA8
	@ First referenced by species index 33, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species034_1: @ 0x082D9BB8
	@ First referenced by species index 34, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species035_1: @ 0x082D9BCC
	@ First referenced by species index 35, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species036_1: @ 0x082D9BDC
	@ First referenced by species index 36, animation slot 1.
	.2byte 0x0001, 0x001B @ frame=1, duration=27
	.2byte 0x0000, 0x001B @ frame=0, duration=27
	.2byte 0x0001, 0x0018 @ frame=1, duration=24
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x001B @ frame=1, duration=27
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species037_1: @ 0x082D9BF8
	@ First referenced by species index 37, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species037_2: @ 0x082D9C10
	@ First referenced by species index 37, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species038_1: @ 0x082D9C24
	@ First referenced by species index 38, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species038_2: @ 0x082D9C3C
	@ First referenced by species index 38, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species039_1: @ 0x082D9C50
	@ First referenced by species index 39, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species039_2: @ 0x082D9C68
	@ First referenced by species index 39, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species040_1: @ 0x082D9C7C
	@ First referenced by species index 40, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species040_2: @ 0x082D9C94
	@ First referenced by species index 40, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species041_1: @ 0x082D9CA8
	@ First referenced by species index 41, animation slot 1.
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species042_1: @ 0x082D9CE0
	@ First referenced by species index 42, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species043_1: @ 0x082D9D30
	@ First referenced by species index 43, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species044_1: @ 0x082D9D50
	@ First referenced by species index 44, animation slot 1.
	.2byte 0x0000, 0x0015 @ frame=0, duration=21
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species045_1: @ 0x082D9D64
	@ First referenced by species index 45, animation slot 1.
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0015 @ frame=1, duration=21
	.2byte 0x0000, 0x000D @ frame=0, duration=13
	.2byte 0x0001, 0x0015 @ frame=1, duration=21
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species046_1: @ 0x082D9D7C
	@ First referenced by species index 46, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species047_1: @ 0x082D9DC0
	@ First referenced by species index 47, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species048_1: @ 0x082D9DDC
	@ First referenced by species index 48, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0023 @ frame=0, duration=35
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species049_1: @ 0x082D9DF8
	@ First referenced by species index 49, animation slot 1.
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species050_1: @ 0x082D9E54
	@ First referenced by species index 50, animation slot 1.
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species051_1: @ 0x082D9E64
	@ First referenced by species index 51, animation slot 1.
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species052_1: @ 0x082D9E90
	@ First referenced by species index 52, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0011 @ frame=0, duration=17
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species053_1: @ 0x082D9EAC
	@ First referenced by species index 53, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species054_1: @ 0x082D9EB8
	@ First referenced by species index 54, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species054_2: @ 0x082D9ED0
	@ First referenced by species index 54, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species055_1: @ 0x082D9EE4
	@ First referenced by species index 55, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species055_2: @ 0x082D9EFC
	@ First referenced by species index 55, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species056_1: @ 0x082D9F10
	@ First referenced by species index 56, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x001C @ frame=0, duration=28
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species057_1: @ 0x082D9F2C
	@ First referenced by species index 57, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species058_1: @ 0x082D9F48
	@ First referenced by species index 58, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species059_1: @ 0x082D9F64
	@ First referenced by species index 59, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species060_1: @ 0x082D9F80
	@ First referenced by species index 60, animation slot 1.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species061_1: @ 0x082D9F90
	@ First referenced by species index 61, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species062_1: @ 0x082D9FA8
	@ First referenced by species index 62, animation slot 1.
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species063_1: @ 0x082D9FB4
	@ First referenced by species index 63, animation slot 1.
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0015 @ frame=1, duration=21
	.2byte 0x0000, 0x000D @ frame=0, duration=13
	.2byte 0x0001, 0x0015 @ frame=1, duration=21
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species064_1: @ 0x082D9FCC
	@ First referenced by species index 64, animation slot 1.
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species065_1: @ 0x082D9FDC
	@ First referenced by species index 65, animation slot 1.
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0036 @ frame=1, duration=54
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species066_1: @ 0x082D9FEC
	@ First referenced by species index 66, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species067_1: @ 0x082DA00C
	@ First referenced by species index 67, animation slot 1.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species068_1: @ 0x082DA01C
	@ First referenced by species index 68, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species069_1: @ 0x082DA03C
	@ First referenced by species index 69, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species070_1: @ 0x082DA04C
	@ First referenced by species index 70, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species071_1: @ 0x082DA06C
	@ First referenced by species index 71, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species072_1: @ 0x082DA08C
	@ First referenced by species index 72, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species073_1: @ 0x082DA0A4
	@ First referenced by species index 73, animation slot 1.
	.2byte 0x0000, 0x0013 @ frame=0, duration=19
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0013 @ frame=0, duration=19
	.2byte 0x0001, 0x0013 @ frame=1, duration=19
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species074_1: @ 0x082DA0BC
	@ First referenced by species index 74, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0024 @ frame=1, duration=36
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species075_1: @ 0x082DA0CC
	@ First referenced by species index 75, animation slot 1.
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species076_1: @ 0x082DA0E4
	@ First referenced by species index 76, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x001F @ frame=1, duration=31
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species077_1: @ 0x082DA0FC
	@ First referenced by species index 77, animation slot 1.
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species078_1: @ 0x082DA108
	@ First referenced by species index 78, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species079_1: @ 0x082DA118
	@ First referenced by species index 79, animation slot 1.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species080_1: @ 0x082DA128
	@ First referenced by species index 80, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species081_1: @ 0x082DA138
	@ First referenced by species index 81, animation slot 1.
	.2byte 0x0000, 0x001C @ frame=0, duration=28
	.2byte 0x0001, 0x001C @ frame=1, duration=28
	.2byte 0x0000, 0x001C @ frame=0, duration=28
	.2byte 0x0001, 0x001C @ frame=1, duration=28
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species082_1: @ 0x082DA150
	@ First referenced by species index 82, animation slot 1.
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species083_1: @ 0x082DA170
	@ First referenced by species index 83, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species084_1: @ 0x082DA1A4
	@ First referenced by species index 84, animation slot 1.
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species085_1: @ 0x082DA1BC
	@ First referenced by species index 85, animation slot 1.
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species086_1: @ 0x082DA1E4
	@ First referenced by species index 86, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species087_1: @ 0x082DA208
	@ First referenced by species index 87, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species088_1: @ 0x082DA218
	@ First referenced by species index 88, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species088_2: @ 0x082DA230
	@ First referenced by species index 88, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species089_1: @ 0x082DA244
	@ First referenced by species index 89, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species089_2: @ 0x082DA25C
	@ First referenced by species index 89, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species090_1: @ 0x082DA270
	@ First referenced by species index 90, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species091_1: @ 0x082DA284
	@ First referenced by species index 91, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species092_1: @ 0x082DA2C8
	@ First referenced by species index 92, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species093_1: @ 0x082DA2D8
	@ First referenced by species index 93, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species094_1: @ 0x082DA2F0
	@ First referenced by species index 94, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species095_1: @ 0x082DA300
	@ First referenced by species index 95, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species096_1: @ 0x082DA310
	@ First referenced by species index 96, animation slot 1.
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species097_1: @ 0x082DA32C
	@ First referenced by species index 97, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species098_1: @ 0x082DA34C
	@ First referenced by species index 98, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species099_1: @ 0x082DA368
	@ First referenced by species index 99, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species100_1: @ 0x082DA390
	@ First referenced by species index 100, animation slot 1.
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species101_1: @ 0x082DA3A8
	@ First referenced by species index 101, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species102_1: @ 0x082DA3C0
	@ First referenced by species index 102, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species103_1: @ 0x082DA3E8
	@ First referenced by species index 103, animation slot 1.
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species104_1: @ 0x082DA3F4
	@ First referenced by species index 104, animation slot 1.
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species105_1: @ 0x082DA410
	@ First referenced by species index 105, animation slot 1.
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species106_1: @ 0x082DA42C
	@ First referenced by species index 106, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species107_1: @ 0x082DA438
	@ First referenced by species index 107, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species108_1: @ 0x082DA45C
	@ First referenced by species index 108, animation slot 1.
	.2byte 0x0000, 0x001C @ frame=0, duration=28
	.2byte 0x0001, 0x0020 @ frame=1, duration=32
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species109_1: @ 0x082DA46C
	@ First referenced by species index 109, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species109_2: @ 0x082DA484
	@ First referenced by species index 109, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species110_1: @ 0x082DA498
	@ First referenced by species index 110, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species110_2: @ 0x082DA4B0
	@ First referenced by species index 110, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species111_1: @ 0x082DA4C4
	@ First referenced by species index 111, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species111_2: @ 0x082DA4DC
	@ First referenced by species index 111, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species112_1: @ 0x082DA4F0
	@ First referenced by species index 112, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0030 @ frame=1, duration=48
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species112_2: @ 0x082DA508
	@ First referenced by species index 112, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species113_1: @ 0x082DA51C
	@ First referenced by species index 113, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species114_1: @ 0x082DA52C
	@ First referenced by species index 114, animation slot 1.
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species115_1: @ 0x082DA558
	@ First referenced by species index 115, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species116_1: @ 0x082DA56C
	@ First referenced by species index 116, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species116_2: @ 0x082DA584
	@ First referenced by species index 116, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species117_1: @ 0x082DA598
	@ First referenced by species index 117, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species117_2: @ 0x082DA5B0
	@ First referenced by species index 117, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species118_1: @ 0x082DA5C4
	@ First referenced by species index 118, animation slot 1.
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species119_1: @ 0x082DA5EC
	@ First referenced by species index 119, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species120_1: @ 0x082DA604
	@ First referenced by species index 120, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species120_2: @ 0x082DA61C
	@ First referenced by species index 120, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species121_1: @ 0x082DA630
	@ First referenced by species index 121, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species121_2: @ 0x082DA648
	@ First referenced by species index 121, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species122_1: @ 0x082DA65C
	@ First referenced by species index 122, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species123_1: @ 0x082DA678
	@ First referenced by species index 123, animation slot 1.
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species124_1: @ 0x082DA69C
	@ First referenced by species index 124, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species125_1: @ 0x082DA6B4
	@ First referenced by species index 125, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species126_1: @ 0x082DA6C8
	@ First referenced by species index 126, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species127_1: @ 0x082DA6D4
	@ First referenced by species index 127, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species127_2: @ 0x082DA6EC
	@ First referenced by species index 127, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species128_1: @ 0x082DA700
	@ First referenced by species index 128, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species129_1: @ 0x082DA714
	@ First referenced by species index 129, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species130_1: @ 0x082DA73C
	@ First referenced by species index 130, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0020 @ frame=1, duration=32
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species131_1: @ 0x082DA74C
	@ First referenced by species index 131, animation slot 1.
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species132_1: @ 0x082DA758
	@ First referenced by species index 132, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species133_1: @ 0x082DA76C
	@ First referenced by species index 133, animation slot 1.
	.2byte 0x0001, 0x0021 @ frame=1, duration=33
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species134_1: @ 0x082DA778
	@ First referenced by species index 134, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species135_1: @ 0x082DA784
	@ First referenced by species index 135, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species136_1: @ 0x082DA790
	@ First referenced by species index 136, animation slot 1.
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species137_1: @ 0x082DA79C
	@ First referenced by species index 137, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species138_1: @ 0x082DA7B0
	@ First referenced by species index 138, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species139_1: @ 0x082DA7D4
	@ First referenced by species index 139, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species140_1: @ 0x082DA7E8
	@ First referenced by species index 140, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species141_1: @ 0x082DA80C
	@ First referenced by species index 141, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species142_1: @ 0x082DA820
	@ First referenced by species index 142, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species143_1: @ 0x082DA834
	@ First referenced by species index 143, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species144_1: @ 0x082DA844
	@ First referenced by species index 144, animation slot 1.
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species145_1: @ 0x082DA858
	@ First referenced by species index 145, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species146_1: @ 0x082DA86C
	@ First referenced by species index 146, animation slot 1.
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species147_1: @ 0x082DA8F0
	@ First referenced by species index 147, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species148_1: @ 0x082DA900
	@ First referenced by species index 148, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species149_1: @ 0x082DA914
	@ First referenced by species index 149, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species150_1: @ 0x082DA924
	@ First referenced by species index 150, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species151_1: @ 0x082DA930
	@ First referenced by species index 151, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species152_1: @ 0x082DA940
	@ First referenced by species index 152, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species153_1: @ 0x082DA950
	@ First referenced by species index 153, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species154_1: @ 0x082DA95C
	@ First referenced by species index 154, animation slot 1.
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species155_1: @ 0x082DA968
	@ First referenced by species index 155, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species156_1: @ 0x082DA97C
	@ First referenced by species index 156, animation slot 1.
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species157_1: @ 0x082DA988
	@ First referenced by species index 157, animation slot 1.
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species158_1: @ 0x082DA994
	@ First referenced by species index 158, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species159_1: @ 0x082DA9B0
	@ First referenced by species index 159, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species160_1: @ 0x082DA9BC
	@ First referenced by species index 160, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0028 @ frame=0, duration=40
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species161_1: @ 0x082DA9D0
	@ First referenced by species index 161, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species162_1: @ 0x082DA9E4
	@ First referenced by species index 162, animation slot 1.
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species163_1: @ 0x082DA9F0
	@ First referenced by species index 163, animation slot 1.
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species164_1: @ 0x082DAA24
	@ First referenced by species index 164, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species165_1: @ 0x082DAA30
	@ First referenced by species index 165, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species166_1: @ 0x082DAA44
	@ First referenced by species index 166, animation slot 1.
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species167_1: @ 0x082DAAB0
	@ First referenced by species index 167, animation slot 1.
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species168_1: @ 0x082DAAD4
	@ First referenced by species index 168, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species169_1: @ 0x082DAAE8
	@ First referenced by species index 169, animation slot 1.
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species170_1: @ 0x082DAB30
	@ First referenced by species index 170, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species170_2: @ 0x082DAB48
	@ First referenced by species index 170, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species171_1: @ 0x082DAB5C
	@ First referenced by species index 171, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species171_2: @ 0x082DAB74
	@ First referenced by species index 171, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species172_1: @ 0x082DAB88
	@ First referenced by species index 172, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species172_2: @ 0x082DABA0
	@ First referenced by species index 172, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species173_1: @ 0x082DABB4
	@ First referenced by species index 173, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species174_1: @ 0x082DABC8
	@ First referenced by species index 174, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species174_2: @ 0x082DABE0
	@ First referenced by species index 174, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species175_1: @ 0x082DABF4
	@ First referenced by species index 175, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species176_1: @ 0x082DAC04
	@ First referenced by species index 176, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species177_1: @ 0x082DAC14
	@ First referenced by species index 177, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species177_2: @ 0x082DAC2C
	@ First referenced by species index 177, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species178_1: @ 0x082DAC40
	@ First referenced by species index 178, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x002D @ frame=1, duration=45
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species178_2: @ 0x082DAC60
	@ First referenced by species index 178, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species179_1: @ 0x082DAC74
	@ First referenced by species index 179, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species180_1: @ 0x082DAC90
	@ First referenced by species index 180, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species181_1: @ 0x082DACA4
	@ First referenced by species index 181, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species182_1: @ 0x082DACB4
	@ First referenced by species index 182, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species183_1: @ 0x082DACD4
	@ First referenced by species index 183, animation slot 1.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species184_1: @ 0x082DACEC
	@ First referenced by species index 184, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species185_1: @ 0x082DAD04
	@ First referenced by species index 185, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species186_1: @ 0x082DAD20
	@ First referenced by species index 186, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species187_1: @ 0x082DAD3C
	@ First referenced by species index 187, animation slot 1.
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species188_1: @ 0x082DAD50
	@ First referenced by species index 188, animation slot 1.
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species189_1: @ 0x082DAD74
	@ First referenced by species index 189, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0019 @ frame=0, duration=25
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species190_1: @ 0x082DAD90
	@ First referenced by species index 190, animation slot 1.
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species191_1: @ 0x082DAD9C
	@ First referenced by species index 191, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species192_1: @ 0x082DADB0
	@ First referenced by species index 192, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species193_1: @ 0x082DADC0
	@ First referenced by species index 193, animation slot 1.
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species194_1: @ 0x082DAE1C
	@ First referenced by species index 194, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species195_1: @ 0x082DAE2C
	@ First referenced by species index 195, animation slot 1.
	.2byte 0x0001, 0x0020 @ frame=1, duration=32
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species196_1: @ 0x082DAE38
	@ First referenced by species index 196, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species197_1: @ 0x082DAE48
	@ First referenced by species index 197, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species198_1: @ 0x082DAE54
	@ First referenced by species index 198, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species199_1: @ 0x082DAE60
	@ First referenced by species index 199, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species200_1: @ 0x082DAE70
	@ First referenced by species index 200, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species201_1: @ 0x082DAE9C
	@ First referenced by species index 201, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species202_1: @ 0x082DAEAC
	@ First referenced by species index 202, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species202_2: @ 0x082DAEC4
	@ First referenced by species index 202, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species203_1: @ 0x082DAED8
	@ First referenced by species index 203, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species203_2: @ 0x082DAEF8
	@ First referenced by species index 203, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species204_1: @ 0x082DAF0C
	@ First referenced by species index 204, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species205_1: @ 0x082DAF30
	@ First referenced by species index 205, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species206_1: @ 0x082DAF44
	@ First referenced by species index 206, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species207_1: @ 0x082DAF58
	@ First referenced by species index 207, animation slot 1.
	.2byte 0x0001, 0x0011 @ frame=1, duration=17
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species208_1: @ 0x082DAF64
	@ First referenced by species index 208, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species209_1: @ 0x082DAF80
	@ First referenced by species index 209, animation slot 1.
	.2byte 0x0001, 0x0020 @ frame=1, duration=32
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species210_1: @ 0x082DAF8C
	@ First referenced by species index 210, animation slot 1.
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species211_1: @ 0x082DAF98
	@ First referenced by species index 211, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species212_1: @ 0x082DAFB8
	@ First referenced by species index 212, animation slot 1.
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species213_1: @ 0x082DAFC4
	@ First referenced by species index 213, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species214_1: @ 0x082DAFD4
	@ First referenced by species index 214, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species214_2: @ 0x082DAFEC
	@ First referenced by species index 214, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species215_1: @ 0x082DB000
	@ First referenced by species index 215, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species216_1: @ 0x082DB00C
	@ First referenced by species index 216, animation slot 1.
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species217_1: @ 0x082DB018
	@ First referenced by species index 217, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species218_1: @ 0x082DB024
	@ First referenced by species index 218, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species218_2: @ 0x082DB03C
	@ First referenced by species index 218, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species219_1: @ 0x082DB050
	@ First referenced by species index 219, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species219_2: @ 0x082DB068
	@ First referenced by species index 219, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species220_1: @ 0x082DB07C
	@ First referenced by species index 220, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species221_1: @ 0x082DB090
	@ First referenced by species index 221, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species222_1: @ 0x082DB0A4
	@ First referenced by species index 222, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species222_2: @ 0x082DB0BC
	@ First referenced by species index 222, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species223_1: @ 0x082DB0D0
	@ First referenced by species index 223, animation slot 1.
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species224_1: @ 0x082DB0E4
	@ First referenced by species index 224, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species225_1: @ 0x082DB0F8
	@ First referenced by species index 225, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species226_1: @ 0x082DB10C
	@ First referenced by species index 226, animation slot 1.
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0028 @ frame=0, duration=40
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species227_1: @ 0x082DB120
	@ First referenced by species index 227, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species227_2: @ 0x082DB138
	@ First referenced by species index 227, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species228_1: @ 0x082DB14C
	@ First referenced by species index 228, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species229_1: @ 0x082DB160
	@ First referenced by species index 229, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species230_1: @ 0x082DB16C
	@ First referenced by species index 230, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species230_2: @ 0x082DB184
	@ First referenced by species index 230, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species231_1: @ 0x082DB198
	@ First referenced by species index 231, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species231_2: @ 0x082DB1B8
	@ First referenced by species index 231, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species232_1: @ 0x082DB1CC
	@ First referenced by species index 232, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species232_2: @ 0x082DB1EC
	@ First referenced by species index 232, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species233_1: @ 0x082DB200
	@ First referenced by species index 233, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species234_1: @ 0x082DB218
	@ First referenced by species index 234, animation slot 1.
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species235_1: @ 0x082DB224
	@ First referenced by species index 235, animation slot 1.
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species236_1: @ 0x082DB238
	@ First referenced by species index 236, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species237_1: @ 0x082DB244
	@ First referenced by species index 237, animation slot 1.
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species238_1: @ 0x082DB274
	@ First referenced by species index 238, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species239_1: @ 0x082DB290
	@ First referenced by species index 239, animation slot 1.
	.2byte 0x0001, 0x0032 @ frame=1, duration=50
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species240_1: @ 0x082DB2A0
	@ First referenced by species index 240, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species241_1: @ 0x082DB2C0
	@ First referenced by species index 241, animation slot 1.
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species242_1: @ 0x082DB2CC
	@ First referenced by species index 242, animation slot 1.
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species243_1: @ 0x082DB2D8
	@ First referenced by species index 243, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species244_1: @ 0x082DB2EC
	@ First referenced by species index 244, animation slot 1.
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species245_1: @ 0x082DB2F8
	@ First referenced by species index 245, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species246_1: @ 0x082DB304
	@ First referenced by species index 246, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species247_1: @ 0x082DB318
	@ First referenced by species index 247, animation slot 1.
	.2byte 0x0001, 0x0028 @ frame=1, duration=40
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species248_1: @ 0x082DB324
	@ First referenced by species index 248, animation slot 1.
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species249_1: @ 0x082DB338
	@ First referenced by species index 249, animation slot 1.
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species250_1: @ 0x082DB344
	@ First referenced by species index 250, animation slot 1.
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species251_1: @ 0x082DB350
	@ First referenced by species index 251, animation slot 1.
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species252_1: @ 0x082DB364
	@ First referenced by species index 252, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species277_1: @ 0x082DB374
	@ First referenced by species index 277, animation slot 1.
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species278_1: @ 0x082DB38C
	@ First referenced by species index 278, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species279_1: @ 0x082DB3A4
	@ First referenced by species index 279, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x001A @ frame=1, duration=26
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species280_1: @ 0x082DB3B4
	@ First referenced by species index 280, animation slot 1.
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species281_1: @ 0x082DB3D4
	@ First referenced by species index 281, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species282_1: @ 0x082DB3E4
	@ First referenced by species index 282, animation slot 1.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species282_2: @ 0x082DB3FC
	@ First referenced by species index 282, animation slot 2.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0002, 0x0008 @ frame=2, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species282_3: @ 0x082DB40C
	@ First referenced by species index 282, animation slot 3.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0002, 0x000A @ frame=2, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species282_4: @ 0x082DB418
	@ First referenced by species index 282, animation slot 4.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species283_1: @ 0x082DB420
	@ First referenced by species index 283, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000D @ frame=1, duration=13
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species284_1: @ 0x082DB438
	@ First referenced by species index 284, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species285_1: @ 0x082DB460
	@ First referenced by species index 285, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species286_1: @ 0x082DB478
	@ First referenced by species index 286, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species287_1: @ 0x082DB488
	@ First referenced by species index 287, animation slot 1.
	.2byte 0x0000, 0x001B @ frame=0, duration=27
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species288_1: @ 0x082DB4A0
	@ First referenced by species index 288, animation slot 1.
	.2byte 0x0000, 0x001B @ frame=0, duration=27
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species289_1: @ 0x082DB4B8
	@ First referenced by species index 289, animation slot 1.
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species290_1: @ 0x082DB4D0
	@ First referenced by species index 290, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species291_1: @ 0x082DB4E0
	@ First referenced by species index 291, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species291_2: @ 0x082DB4F0
	@ First referenced by species index 291, animation slot 2.
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species292_1: @ 0x082DB4F8
	@ First referenced by species index 292, animation slot 1.
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species292_2: @ 0x082DB520
	@ First referenced by species index 292, animation slot 2.
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species293_1: @ 0x082DB528
	@ First referenced by species index 293, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species293_2: @ 0x082DB540
	@ First referenced by species index 293, animation slot 2.
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species294_1: @ 0x082DB548
	@ First referenced by species index 294, animation slot 1.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0x0001, 0x0004 @ frame=1, duration=4
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species294_2: @ 0x082DB588
	@ First referenced by species index 294, animation slot 2.
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species295_1: @ 0x082DB590
	@ First referenced by species index 295, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0037 @ frame=1, duration=55
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species296_1: @ 0x082DB5A0
	@ First referenced by species index 296, animation slot 1.
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species297_1: @ 0x082DB5B8
	@ First referenced by species index 297, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species298_1: @ 0x082DB5D8
	@ First referenced by species index 298, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species299_1: @ 0x082DB600
	@ First referenced by species index 299, animation slot 1.
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species300_1: @ 0x082DB628
	@ First referenced by species index 300, animation slot 1.
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species301_1: @ 0x082DB638
	@ First referenced by species index 301, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x0021 @ frame=1, duration=33
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species302_1: @ 0x082DB650
	@ First referenced by species index 302, animation slot 1.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0021 @ frame=0, duration=33
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species303_1: @ 0x082DB69C
	@ First referenced by species index 303, animation slot 1.
	.2byte 0x0000, 0x0021 @ frame=0, duration=33
	.2byte 0x0001, 0x0021 @ frame=1, duration=33
	.2byte 0x0000, 0x0021 @ frame=0, duration=33
	.2byte 0x0001, 0x0021 @ frame=1, duration=33
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species304_1: @ 0x082DB6B4
	@ First referenced by species index 304, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species305_1: @ 0x082DB6DC
	@ First referenced by species index 305, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species306_1: @ 0x082DB6EC
	@ First referenced by species index 306, animation slot 1.
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species307_1: @ 0x082DB71C
	@ First referenced by species index 307, animation slot 1.
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species309_1: @ 0x082DB734
	@ First referenced by species index 309, animation slot 1.
	.2byte 0x0000, 0x0011 @ frame=0, duration=17
	.2byte 0x0001, 0x0017 @ frame=1, duration=23
	.2byte 0x0000, 0x000D @ frame=0, duration=13
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species310_1: @ 0x082DB744
	@ First referenced by species index 310, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x0005 @ frame=1, duration=5
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species311_1: @ 0x082DB76C
	@ First referenced by species index 311, animation slot 1.
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species311_2: @ 0x082DB784
	@ First referenced by species index 311, animation slot 2.
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species312_1: @ 0x082DB78C
	@ First referenced by species index 312, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species312_2: @ 0x082DB7B4
	@ First referenced by species index 312, animation slot 2.
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species313_1: @ 0x082DB7BC
	@ First referenced by species index 313, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species314_1: @ 0x082DB7DC
	@ First referenced by species index 314, animation slot 1.
	.2byte 0x0000, 0x001A @ frame=0, duration=26
	.2byte 0x0001, 0x0030 @ frame=1, duration=48
	.2byte 0x0000, 0x0021 @ frame=0, duration=33
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species315_1: @ 0x082DB7EC
	@ First referenced by species index 315, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0023 @ frame=1, duration=35
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species316_1: @ 0x082DB7FC
	@ First referenced by species index 316, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x002E @ frame=1, duration=46
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species317_1: @ 0x082DB80C
	@ First referenced by species index 317, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species318_1: @ 0x082DB824
	@ First referenced by species index 318, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species319_1: @ 0x082DB844
	@ First referenced by species index 319, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species320_1: @ 0x082DB864
	@ First referenced by species index 320, animation slot 1.
	.2byte 0x0000, 0x001B @ frame=0, duration=27
	.2byte 0x0001, 0x001B @ frame=1, duration=27
	.2byte 0x0000, 0x001B @ frame=0, duration=27
	.2byte 0x0001, 0x001B @ frame=1, duration=27
	.2byte 0x0000, 0x001B @ frame=0, duration=27
	.2byte 0x0001, 0x001B @ frame=1, duration=27
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species321_1: @ 0x082DB884
	@ First referenced by species index 321, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species322_1: @ 0x082DB89C
	@ First referenced by species index 322, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species323_1: @ 0x082DB8B4
	@ First referenced by species index 323, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species324_1: @ 0x082DB8EC
	@ First referenced by species index 324, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species325_1: @ 0x082DB924
	@ First referenced by species index 325, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species326_1: @ 0x082DB93C
	@ First referenced by species index 326, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species327_1: @ 0x082DB95C
	@ First referenced by species index 327, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species328_1: @ 0x082DB974
	@ First referenced by species index 328, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species329_1: @ 0x082DB994
	@ First referenced by species index 329, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species330_1: @ 0x082DB9B4
	@ First referenced by species index 330, animation slot 1.
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species331_1: @ 0x082DB9DC
	@ First referenced by species index 331, animation slot 1.
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species332_1: @ 0x082DBA04
	@ First referenced by species index 332, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species333_1: @ 0x082DBA1C
	@ First referenced by species index 333, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species334_1: @ 0x082DBA3C
	@ First referenced by species index 334, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species335_1: @ 0x082DBA5C
	@ First referenced by species index 335, animation slot 1.
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0007 @ frame=0, duration=7
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species336_1: @ 0x082DBA84
	@ First referenced by species index 336, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species337_1: @ 0x082DBA98
	@ First referenced by species index 337, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0011 @ frame=0, duration=17
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species338_1: @ 0x082DBAB0
	@ First referenced by species index 338, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0021 @ frame=1, duration=33
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species339_1: @ 0x082DBAC8
	@ First referenced by species index 339, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0028 @ frame=0, duration=40
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species340_1: @ 0x082DBAE0
	@ First referenced by species index 340, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species341_1: @ 0x082DBB00
	@ First referenced by species index 341, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x002B @ frame=1, duration=43
	.2byte 0x0001, 0x003C @ frame=1, duration=60
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species342_1: @ 0x082DBB24
	@ First referenced by species index 342, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species343_1: @ 0x082DBB3C
	@ First referenced by species index 343, animation slot 1.
	.2byte 0x0000, 0x0002 @ frame=0, duration=2
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species344_1: @ 0x082DBB54
	@ First referenced by species index 344, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species345_1: @ 0x082DBB84
	@ First referenced by species index 345, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species346_1: @ 0x082DBB9C
	@ First referenced by species index 346, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species347_1: @ 0x082DBBB4
	@ First referenced by species index 347, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species348_1: @ 0x082DBBCC
	@ First referenced by species index 348, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species348_2: @ 0x082DBBE4
	@ First referenced by species index 348, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species349_1: @ 0x082DBBF8
	@ First referenced by species index 349, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species349_2: @ 0x082DBC10
	@ First referenced by species index 349, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species350_1: @ 0x082DBC24
	@ First referenced by species index 350, animation slot 1.
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x000C @ frame=1, duration=12
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species351_1: @ 0x082DBC44
	@ First referenced by species index 351, animation slot 1.
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species352_1: @ 0x082DBC74
	@ First referenced by species index 352, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species353_1: @ 0x082DBC8C
	@ First referenced by species index 353, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species354_1: @ 0x082DBCA4
	@ First referenced by species index 354, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species355_1: @ 0x082DBCBC
	@ First referenced by species index 355, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species356_1: @ 0x082DBCDC
	@ First referenced by species index 356, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0002 @ frame=1, duration=2
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species357_1: @ 0x082DBCEC
	@ First referenced by species index 357, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species358_1: @ 0x082DBD0C
	@ First referenced by species index 358, animation slot 1.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species358_2: @ 0x082DBD2C
	@ First referenced by species index 358, animation slot 2.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0002, 0x0008 @ frame=2, duration=8
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0002, 0x0008 @ frame=2, duration=8
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0002, 0x0008 @ frame=2, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species359_1: @ 0x082DBD48
	@ First referenced by species index 359, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species359_2: @ 0x082DBD60
	@ First referenced by species index 359, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species360_1: @ 0x082DBD74
	@ First referenced by species index 360, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species361_1: @ 0x082DBD8C
	@ First referenced by species index 361, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species362_1: @ 0x082DBDA4
	@ First referenced by species index 362, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species363_1: @ 0x082DBDBC
	@ First referenced by species index 363, animation slot 1.
	.2byte 0x0000, 0x0012 @ frame=0, duration=18
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species364_1: @ 0x082DBDCC
	@ First referenced by species index 364, animation slot 1.
	.2byte 0x0000, 0x000D @ frame=0, duration=13
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species365_1: @ 0x082DBDE8
	@ First referenced by species index 365, animation slot 1.
	.2byte 0x0000, 0x000D @ frame=0, duration=13
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x000D @ frame=0, duration=13
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x000D @ frame=0, duration=13
	.2byte 0x0001, 0x0007 @ frame=1, duration=7
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species366_1: @ 0x082DBE08
	@ First referenced by species index 366, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species367_1: @ 0x082DBE28
	@ First referenced by species index 367, animation slot 1.
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x000E @ frame=0, duration=14
	.2byte 0x0001, 0x000E @ frame=1, duration=14
	.2byte 0x0000, 0x0004 @ frame=0, duration=4
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species368_1: @ 0x082DBE40
	@ First referenced by species index 368, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species369_1: @ 0x082DBE54
	@ First referenced by species index 369, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species370_1: @ 0x082DBE6C
	@ First referenced by species index 370, animation slot 1.
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0021 @ frame=0, duration=33
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species371_1: @ 0x082DBE98
	@ First referenced by species index 371, animation slot 1.
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x0009 @ frame=1, duration=9
	.2byte 0x0000, 0x0021 @ frame=0, duration=33
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species372_1: @ 0x082DBEB0
	@ First referenced by species index 372, animation slot 1.
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x0009 @ frame=0, duration=9
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species373_1: @ 0x082DBEC0
	@ First referenced by species index 373, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species374_1: @ 0x082DBED8
	@ First referenced by species index 374, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species375_1: @ 0x082DBEF0
	@ First referenced by species index 375, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species376_1: @ 0x082DBF08
	@ First referenced by species index 376, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species377_1: @ 0x082DBF20
	@ First referenced by species index 377, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species378_1: @ 0x082DBF40
	@ First referenced by species index 378, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species379_1: @ 0x082DBF60
	@ First referenced by species index 379, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species380_1: @ 0x082DBF80
	@ First referenced by species index 380, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x0032 @ frame=0, duration=50
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species381_1: @ 0x082DBFA0
	@ First referenced by species index 381, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species382_1: @ 0x082DBFB8
	@ First referenced by species index 382, animation slot 1.
	.2byte 0x0000, 0x0021 @ frame=0, duration=33
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x0021 @ frame=0, duration=33
	.2byte 0x0001, 0x0021 @ frame=1, duration=33
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species383_1: @ 0x082DBFD0
	@ First referenced by species index 383, animation slot 1.
	.2byte 0x0000, 0x000C @ frame=0, duration=12
	.2byte 0x0001, 0x001D @ frame=1, duration=29
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x001D @ frame=1, duration=29
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species384_1: @ 0x082DBFE8
	@ First referenced by species index 384, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x002C @ frame=1, duration=44
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species385_1: @ 0x082DBFF8
	@ First referenced by species index 385, animation slot 1.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species385_2: @ 0x082DC000
	@ First referenced by species index 385, animation slot 2.
	.2byte 0x0001, 0x0001 @ frame=1, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species385_3: @ 0x082DC008
	@ First referenced by species index 385, animation slot 3.
	.2byte 0x0002, 0x0001 @ frame=2, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species385_4: @ 0x082DC010
	@ First referenced by species index 385, animation slot 4.
	.2byte 0x0003, 0x0001 @ frame=3, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species386_1: @ 0x082DC018
	@ First referenced by species index 386, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000B @ frame=1, duration=11
	.2byte 0x0000, 0x0005 @ frame=0, duration=5
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species387_1: @ 0x082DC038
	@ First referenced by species index 387, animation slot 1.
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0016 @ frame=1, duration=22
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species388_1: @ 0x082DC050
	@ First referenced by species index 388, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species389_1: @ 0x082DC068
	@ First referenced by species index 389, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species390_1: @ 0x082DC088
	@ First referenced by species index 390, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species391_1: @ 0x082DC0A8
	@ First referenced by species index 391, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species392_1: @ 0x082DC0C0
	@ First referenced by species index 392, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0019 @ frame=1, duration=25
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species393_1: @ 0x082DC0D0
	@ First referenced by species index 393, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0027 @ frame=1, duration=39
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species394_1: @ 0x082DC0E0
	@ First referenced by species index 394, animation slot 1.
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0003 @ frame=0, duration=3
	.2byte 0x0001, 0x0003 @ frame=1, duration=3
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species395_1: @ 0x082DC118
	@ First referenced by species index 395, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species396_1: @ 0x082DC130
	@ First referenced by species index 396, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species397_1: @ 0x082DC148
	@ First referenced by species index 397, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species398_1: @ 0x082DC160
	@ First referenced by species index 398, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species399_1: @ 0x082DC178
	@ First referenced by species index 399, animation slot 1.
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0008 @ frame=0, duration=8
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species400_1: @ 0x082DC190
	@ First referenced by species index 400, animation slot 1.
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species401_1: @ 0x082DC1A8
	@ First referenced by species index 401, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species401_2: @ 0x082DC1C0
	@ First referenced by species index 401, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species402_1: @ 0x082DC1D4
	@ First referenced by species index 402, animation slot 1.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0012 @ frame=1, duration=18
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species403_1: @ 0x082DC1EC
	@ First referenced by species index 403, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species403_2: @ 0x082DC204
	@ First referenced by species index 403, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species404_1: @ 0x082DC218
	@ First referenced by species index 404, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species404_2: @ 0x082DC230
	@ First referenced by species index 404, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species405_1: @ 0x082DC244
	@ First referenced by species index 405, animation slot 1.
	.2byte 0x0000, 0x000B @ frame=0, duration=11
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x0014 @ frame=1, duration=20
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species405_2: @ 0x082DC25C
	@ First referenced by species index 405, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species406_1: @ 0x082DC270
	@ First referenced by species index 406, animation slot 1.
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0x0001, 0x0008 @ frame=1, duration=8
	.2byte 0x0000, 0x0016 @ frame=0, duration=22
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species406_2: @ 0x082DC288
	@ First referenced by species index 406, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species407_1: @ 0x082DC29C
	@ First referenced by species index 407, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species407_2: @ 0x082DC2B4
	@ First referenced by species index 407, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species408_1: @ 0x082DC2C8
	@ First referenced by species index 408, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species408_2: @ 0x082DC2E0
	@ First referenced by species index 408, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species409_1: @ 0x082DC2F4
	@ First referenced by species index 409, animation slot 1.
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0x0001, 0x000A @ frame=1, duration=10
	.2byte 0x0000, 0x000A @ frame=0, duration=10
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species409_2: @ 0x082DC320
	@ First referenced by species index 409, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species410_1: @ 0x082DC334
	@ First referenced by species index 410, animation slot 1.
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x001A @ frame=0, duration=26
	.2byte 0x0001, 0x0010 @ frame=1, duration=16
	.2byte 0x0000, 0x0010 @ frame=0, duration=16
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species410_2: @ 0x082DC34C
	@ First referenced by species index 410, animation slot 2.
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0x0000, 0x0014 @ frame=0, duration=20
	.2byte 0x0002, 0x0014 @ frame=2, duration=20
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species411_1: @ 0x082DC360
	@ First referenced by species index 411, animation slot 1.
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0x0001, 0x000F @ frame=1, duration=15
	.2byte 0x0000, 0x000F @ frame=0, duration=15
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species412_1: @ 0x082DC388
	@ First referenced by species index 412, animation slot 1.
	.2byte 0x0000, 0x0006 @ frame=0, duration=6
	.2byte 0x0001, 0x0006 @ frame=1, duration=6
	.2byte 0x0002, 0x0006 @ frame=2, duration=6
	.2byte 0x0003, 0x0006 @ frame=3, duration=6
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species413_1: @ 0x082DC39C
	@ First referenced by species index 413, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species414_1: @ 0x082DC3AC
	@ First referenced by species index 414, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species415_1: @ 0x082DC3BC
	@ First referenced by species index 415, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species416_1: @ 0x082DC3CC
	@ First referenced by species index 416, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species417_1: @ 0x082DC3DC
	@ First referenced by species index 417, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species418_1: @ 0x082DC3EC
	@ First referenced by species index 418, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species419_1: @ 0x082DC3FC
	@ First referenced by species index 419, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species420_1: @ 0x082DC40C
	@ First referenced by species index 420, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species421_1: @ 0x082DC41C
	@ First referenced by species index 421, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species422_1: @ 0x082DC42C
	@ First referenced by species index 422, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species423_1: @ 0x082DC43C
	@ First referenced by species index 423, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species424_1: @ 0x082DC44C
	@ First referenced by species index 424, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species425_1: @ 0x082DC45C
	@ First referenced by species index 425, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species426_1: @ 0x082DC46C
	@ First referenced by species index 426, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species427_1: @ 0x082DC47C
	@ First referenced by species index 427, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species428_1: @ 0x082DC48C
	@ First referenced by species index 428, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species429_1: @ 0x082DC49C
	@ First referenced by species index 429, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species430_1: @ 0x082DC4AC
	@ First referenced by species index 430, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species431_1: @ 0x082DC4BC
	@ First referenced by species index 431, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species432_1: @ 0x082DC4CC
	@ First referenced by species index 432, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species433_1: @ 0x082DC4DC
	@ First referenced by species index 433, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species434_1: @ 0x082DC4EC
	@ First referenced by species index 434, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species435_1: @ 0x082DC4FC
	@ First referenced by species index 435, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species436_1: @ 0x082DC50C
	@ First referenced by species index 436, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species437_1: @ 0x082DC51C
	@ First referenced by species index 437, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species438_1: @ 0x082DC52C
	@ First referenced by species index 438, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnimCmd_Species439_1: @ 0x082DC53C
	@ First referenced by species index 439, animation slot 1.
	.2byte 0x0000, 0x001E @ frame=0, duration=30
	.2byte 0x0001, 0x001E @ frame=1, duration=30
	.2byte 0x0000, 0x0001 @ frame=0, duration=1
	.2byte 0xFFFF, ANIM_V_SQUISH_AND_BOUNCE @ ANIMCMD_END

sFrontAnims_Species000: @ 0x082DC54C
	@ First referenced by species index 0.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species000_1

sFrontAnims_Species001: @ 0x082DC554
	@ First referenced by species index 1.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species001_1

sFrontAnims_Species002: @ 0x082DC55C
	@ First referenced by species index 2.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species002_1

sFrontAnims_Species003: @ 0x082DC564
	@ First referenced by species index 3.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species003_1

sFrontAnims_Species004: @ 0x082DC56C
	@ First referenced by species index 4.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species004_1

sFrontAnims_Species005: @ 0x082DC574
	@ First referenced by species index 5.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species005_1

sFrontAnims_Species006: @ 0x082DC57C
	@ First referenced by species index 6.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species006_1

sFrontAnims_Species007: @ 0x082DC584
	@ First referenced by species index 7.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species007_1

sFrontAnims_Species008: @ 0x082DC58C
	@ First referenced by species index 8.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species008_1

sFrontAnims_Species009: @ 0x082DC594
	@ First referenced by species index 9.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species009_1

sFrontAnims_Species010: @ 0x082DC59C
	@ First referenced by species index 10.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species010_1

sFrontAnims_Species011: @ 0x082DC5A4
	@ First referenced by species index 11.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species011_1

sFrontAnims_Species012: @ 0x082DC5AC
	@ First referenced by species index 12.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species012_1

sFrontAnims_Species013: @ 0x082DC5B4
	@ First referenced by species index 13.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species013_1

sFrontAnims_Species014: @ 0x082DC5BC
	@ First referenced by species index 14.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species014_1

sFrontAnims_Species015: @ 0x082DC5C4
	@ First referenced by species index 15.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species015_1

sFrontAnims_Species016: @ 0x082DC5CC
	@ First referenced by species index 16.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species016_1

sFrontAnims_Species017: @ 0x082DC5D4
	@ First referenced by species index 17.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species017_1

sFrontAnims_Species018: @ 0x082DC5DC
	@ First referenced by species index 18.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species018_1

sFrontAnims_Species019: @ 0x082DC5E4
	@ First referenced by species index 19.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species019_1

sFrontAnims_Species020: @ 0x082DC5EC
	@ First referenced by species index 20.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species020_1

sFrontAnims_Species021: @ 0x082DC5F4
	@ First referenced by species index 21.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species021_1

sFrontAnims_Species022: @ 0x082DC5FC
	@ First referenced by species index 22.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species022_1

sFrontAnims_Species023: @ 0x082DC604
	@ First referenced by species index 23.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species023_1

sFrontAnims_Species024: @ 0x082DC60C
	@ First referenced by species index 24.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species024_1

sFrontAnims_Species025: @ 0x082DC614
	@ First referenced by species index 25.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species025_1
	.4byte sFrontAnimCmd_Species025_2

sFrontAnims_Species026: @ 0x082DC620
	@ First referenced by species index 26.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species026_1
	.4byte sFrontAnimCmd_Species026_2

sFrontAnims_Species027: @ 0x082DC62C
	@ First referenced by species index 27.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species027_1
	.4byte sFrontAnimCmd_Species027_2

sFrontAnims_Species028: @ 0x082DC638
	@ First referenced by species index 28.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species028_1
	.4byte sFrontAnimCmd_Species028_2

sFrontAnims_Species029: @ 0x082DC644
	@ First referenced by species index 29.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species029_1

sFrontAnims_Species030: @ 0x082DC64C
	@ First referenced by species index 30.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species030_1

sFrontAnims_Species031: @ 0x082DC654
	@ First referenced by species index 31.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species031_1

sFrontAnims_Species032: @ 0x082DC65C
	@ First referenced by species index 32.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species032_1

sFrontAnims_Species033: @ 0x082DC664
	@ First referenced by species index 33.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species033_1

sFrontAnims_Species034: @ 0x082DC66C
	@ First referenced by species index 34.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species034_1

sFrontAnims_Species035: @ 0x082DC674
	@ First referenced by species index 35.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species035_1

sFrontAnims_Species036: @ 0x082DC67C
	@ First referenced by species index 36.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species036_1

sFrontAnims_Species037: @ 0x082DC684
	@ First referenced by species index 37.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species037_1
	.4byte sFrontAnimCmd_Species037_2

sFrontAnims_Species038: @ 0x082DC690
	@ First referenced by species index 38.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species038_1
	.4byte sFrontAnimCmd_Species038_2

sFrontAnims_Species039: @ 0x082DC69C
	@ First referenced by species index 39.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species039_1
	.4byte sFrontAnimCmd_Species039_2

sFrontAnims_Species040: @ 0x082DC6A8
	@ First referenced by species index 40.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species040_1
	.4byte sFrontAnimCmd_Species040_2

sFrontAnims_Species041: @ 0x082DC6B4
	@ First referenced by species index 41.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species041_1

sFrontAnims_Species042: @ 0x082DC6BC
	@ First referenced by species index 42.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species042_1

sFrontAnims_Species043: @ 0x082DC6C4
	@ First referenced by species index 43.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species043_1

sFrontAnims_Species044: @ 0x082DC6CC
	@ First referenced by species index 44.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species044_1

sFrontAnims_Species045: @ 0x082DC6D4
	@ First referenced by species index 45.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species045_1

sFrontAnims_Species046: @ 0x082DC6DC
	@ First referenced by species index 46.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species046_1

sFrontAnims_Species047: @ 0x082DC6E4
	@ First referenced by species index 47.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species047_1

sFrontAnims_Species048: @ 0x082DC6EC
	@ First referenced by species index 48.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species048_1

sFrontAnims_Species049: @ 0x082DC6F4
	@ First referenced by species index 49.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species049_1

sFrontAnims_Species050: @ 0x082DC6FC
	@ First referenced by species index 50.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species050_1

sFrontAnims_Species051: @ 0x082DC704
	@ First referenced by species index 51.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species051_1

sFrontAnims_Species052: @ 0x082DC70C
	@ First referenced by species index 52.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species052_1

sFrontAnims_Species053: @ 0x082DC714
	@ First referenced by species index 53.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species053_1

sFrontAnims_Species054: @ 0x082DC71C
	@ First referenced by species index 54.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species054_1
	.4byte sFrontAnimCmd_Species054_2

sFrontAnims_Species055: @ 0x082DC728
	@ First referenced by species index 55.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species055_1
	.4byte sFrontAnimCmd_Species055_2

sFrontAnims_Species056: @ 0x082DC734
	@ First referenced by species index 56.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species056_1

sFrontAnims_Species057: @ 0x082DC73C
	@ First referenced by species index 57.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species057_1

sFrontAnims_Species058: @ 0x082DC744
	@ First referenced by species index 58.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species058_1

sFrontAnims_Species059: @ 0x082DC74C
	@ First referenced by species index 59.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species059_1

sFrontAnims_Species060: @ 0x082DC754
	@ First referenced by species index 60.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species060_1

sFrontAnims_Species061: @ 0x082DC75C
	@ First referenced by species index 61.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species061_1

sFrontAnims_Species062: @ 0x082DC764
	@ First referenced by species index 62.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species062_1

sFrontAnims_Species063: @ 0x082DC76C
	@ First referenced by species index 63.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species063_1

sFrontAnims_Species064: @ 0x082DC774
	@ First referenced by species index 64.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species064_1

sFrontAnims_Species065: @ 0x082DC77C
	@ First referenced by species index 65.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species065_1

sFrontAnims_Species066: @ 0x082DC784
	@ First referenced by species index 66.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species066_1

sFrontAnims_Species067: @ 0x082DC78C
	@ First referenced by species index 67.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species067_1

sFrontAnims_Species068: @ 0x082DC794
	@ First referenced by species index 68.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species068_1

sFrontAnims_Species069: @ 0x082DC79C
	@ First referenced by species index 69.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species069_1

sFrontAnims_Species070: @ 0x082DC7A4
	@ First referenced by species index 70.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species070_1

sFrontAnims_Species071: @ 0x082DC7AC
	@ First referenced by species index 71.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species071_1

sFrontAnims_Species072: @ 0x082DC7B4
	@ First referenced by species index 72.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species072_1

sFrontAnims_Species073: @ 0x082DC7BC
	@ First referenced by species index 73.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species073_1

sFrontAnims_Species074: @ 0x082DC7C4
	@ First referenced by species index 74.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species074_1

sFrontAnims_Species075: @ 0x082DC7CC
	@ First referenced by species index 75.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species075_1

sFrontAnims_Species076: @ 0x082DC7D4
	@ First referenced by species index 76.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species076_1

sFrontAnims_Species077: @ 0x082DC7DC
	@ First referenced by species index 77.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species077_1

sFrontAnims_Species078: @ 0x082DC7E4
	@ First referenced by species index 78.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species078_1

sFrontAnims_Species079: @ 0x082DC7EC
	@ First referenced by species index 79.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species079_1

sFrontAnims_Species080: @ 0x082DC7F4
	@ First referenced by species index 80.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species080_1

sFrontAnims_Species081: @ 0x082DC7FC
	@ First referenced by species index 81.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species081_1

sFrontAnims_Species082: @ 0x082DC804
	@ First referenced by species index 82.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species082_1

sFrontAnims_Species083: @ 0x082DC80C
	@ First referenced by species index 83.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species083_1

sFrontAnims_Species084: @ 0x082DC814
	@ First referenced by species index 84.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species084_1

sFrontAnims_Species085: @ 0x082DC81C
	@ First referenced by species index 85.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species085_1

sFrontAnims_Species086: @ 0x082DC824
	@ First referenced by species index 86.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species086_1

sFrontAnims_Species087: @ 0x082DC82C
	@ First referenced by species index 87.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species087_1

sFrontAnims_Species088: @ 0x082DC834
	@ First referenced by species index 88.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species088_1
	.4byte sFrontAnimCmd_Species088_2

sFrontAnims_Species089: @ 0x082DC840
	@ First referenced by species index 89.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species089_1
	.4byte sFrontAnimCmd_Species089_2

sFrontAnims_Species090: @ 0x082DC84C
	@ First referenced by species index 90.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species090_1

sFrontAnims_Species091: @ 0x082DC854
	@ First referenced by species index 91.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species091_1

sFrontAnims_Species092: @ 0x082DC85C
	@ First referenced by species index 92.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species092_1

sFrontAnims_Species093: @ 0x082DC864
	@ First referenced by species index 93.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species093_1

sFrontAnims_Species094: @ 0x082DC86C
	@ First referenced by species index 94.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species094_1

sFrontAnims_Species095: @ 0x082DC874
	@ First referenced by species index 95.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species095_1

sFrontAnims_Species096: @ 0x082DC87C
	@ First referenced by species index 96.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species096_1

sFrontAnims_Species097: @ 0x082DC884
	@ First referenced by species index 97.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species097_1

sFrontAnims_Species098: @ 0x082DC88C
	@ First referenced by species index 98.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species098_1

sFrontAnims_Species099: @ 0x082DC894
	@ First referenced by species index 99.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species099_1

sFrontAnims_Species100: @ 0x082DC89C
	@ First referenced by species index 100.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species100_1

sFrontAnims_Species101: @ 0x082DC8A4
	@ First referenced by species index 101.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species101_1

sFrontAnims_Species102: @ 0x082DC8AC
	@ First referenced by species index 102.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species102_1

sFrontAnims_Species103: @ 0x082DC8B4
	@ First referenced by species index 103.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species103_1

sFrontAnims_Species104: @ 0x082DC8BC
	@ First referenced by species index 104.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species104_1

sFrontAnims_Species105: @ 0x082DC8C4
	@ First referenced by species index 105.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species105_1

sFrontAnims_Species106: @ 0x082DC8CC
	@ First referenced by species index 106.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species106_1

sFrontAnims_Species107: @ 0x082DC8D4
	@ First referenced by species index 107.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species107_1

sFrontAnims_Species108: @ 0x082DC8DC
	@ First referenced by species index 108.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species108_1

sFrontAnims_Species109: @ 0x082DC8E4
	@ First referenced by species index 109.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species109_1
	.4byte sFrontAnimCmd_Species109_2

sFrontAnims_Species110: @ 0x082DC8F0
	@ First referenced by species index 110.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species110_1
	.4byte sFrontAnimCmd_Species110_2

sFrontAnims_Species111: @ 0x082DC8FC
	@ First referenced by species index 111.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species111_1
	.4byte sFrontAnimCmd_Species111_2

sFrontAnims_Species112: @ 0x082DC908
	@ First referenced by species index 112.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species112_1
	.4byte sFrontAnimCmd_Species112_2

sFrontAnims_Species113: @ 0x082DC914
	@ First referenced by species index 113.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species113_1

sFrontAnims_Species114: @ 0x082DC91C
	@ First referenced by species index 114.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species114_1

sFrontAnims_Species115: @ 0x082DC924
	@ First referenced by species index 115.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species115_1

sFrontAnims_Species116: @ 0x082DC92C
	@ First referenced by species index 116.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species116_1
	.4byte sFrontAnimCmd_Species116_2

sFrontAnims_Species117: @ 0x082DC938
	@ First referenced by species index 117.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species117_1
	.4byte sFrontAnimCmd_Species117_2

sFrontAnims_Species118: @ 0x082DC944
	@ First referenced by species index 118.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species118_1

sFrontAnims_Species119: @ 0x082DC94C
	@ First referenced by species index 119.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species119_1

sFrontAnims_Species120: @ 0x082DC954
	@ First referenced by species index 120.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species120_1
	.4byte sFrontAnimCmd_Species120_2

sFrontAnims_Species121: @ 0x082DC960
	@ First referenced by species index 121.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species121_1
	.4byte sFrontAnimCmd_Species121_2

sFrontAnims_Species122: @ 0x082DC96C
	@ First referenced by species index 122.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species122_1

sFrontAnims_Species123: @ 0x082DC974
	@ First referenced by species index 123.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species123_1

sFrontAnims_Species124: @ 0x082DC97C
	@ First referenced by species index 124.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species124_1

sFrontAnims_Species125: @ 0x082DC984
	@ First referenced by species index 125.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species125_1

sFrontAnims_Species126: @ 0x082DC98C
	@ First referenced by species index 126.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species126_1

sFrontAnims_Species127: @ 0x082DC994
	@ First referenced by species index 127.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species127_1
	.4byte sFrontAnimCmd_Species127_2

sFrontAnims_Species128: @ 0x082DC9A0
	@ First referenced by species index 128.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species128_1

sFrontAnims_Species129: @ 0x082DC9A8
	@ First referenced by species index 129.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species129_1

sFrontAnims_Species130: @ 0x082DC9B0
	@ First referenced by species index 130.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species130_1

sFrontAnims_Species131: @ 0x082DC9B8
	@ First referenced by species index 131.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species131_1

sFrontAnims_Species132: @ 0x082DC9C0
	@ First referenced by species index 132.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species132_1

sFrontAnims_Species133: @ 0x082DC9C8
	@ First referenced by species index 133.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species133_1

sFrontAnims_Species134: @ 0x082DC9D0
	@ First referenced by species index 134.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species134_1

sFrontAnims_Species135: @ 0x082DC9D8
	@ First referenced by species index 135.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species135_1

sFrontAnims_Species136: @ 0x082DC9E0
	@ First referenced by species index 136.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species136_1

sFrontAnims_Species137: @ 0x082DC9E8
	@ First referenced by species index 137.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species137_1

sFrontAnims_Species138: @ 0x082DC9F0
	@ First referenced by species index 138.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species138_1

sFrontAnims_Species139: @ 0x082DC9F8
	@ First referenced by species index 139.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species139_1

sFrontAnims_Species140: @ 0x082DCA00
	@ First referenced by species index 140.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species140_1

sFrontAnims_Species141: @ 0x082DCA08
	@ First referenced by species index 141.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species141_1

sFrontAnims_Species142: @ 0x082DCA10
	@ First referenced by species index 142.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species142_1

sFrontAnims_Species143: @ 0x082DCA18
	@ First referenced by species index 143.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species143_1

sFrontAnims_Species144: @ 0x082DCA20
	@ First referenced by species index 144.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species144_1

sFrontAnims_Species145: @ 0x082DCA28
	@ First referenced by species index 145.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species145_1

sFrontAnims_Species146: @ 0x082DCA30
	@ First referenced by species index 146.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species146_1

sFrontAnims_Species147: @ 0x082DCA38
	@ First referenced by species index 147.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species147_1

sFrontAnims_Species148: @ 0x082DCA40
	@ First referenced by species index 148.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species148_1

sFrontAnims_Species149: @ 0x082DCA48
	@ First referenced by species index 149.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species149_1

sFrontAnims_Species150: @ 0x082DCA50
	@ First referenced by species index 150.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species150_1

sFrontAnims_Species151: @ 0x082DCA58
	@ First referenced by species index 151.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species151_1

sFrontAnims_Species152: @ 0x082DCA60
	@ First referenced by species index 152.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species152_1

sFrontAnims_Species153: @ 0x082DCA68
	@ First referenced by species index 153.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species153_1

sFrontAnims_Species154: @ 0x082DCA70
	@ First referenced by species index 154.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species154_1

sFrontAnims_Species155: @ 0x082DCA78
	@ First referenced by species index 155.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species155_1

sFrontAnims_Species156: @ 0x082DCA80
	@ First referenced by species index 156.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species156_1

sFrontAnims_Species157: @ 0x082DCA88
	@ First referenced by species index 157.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species157_1

sFrontAnims_Species158: @ 0x082DCA90
	@ First referenced by species index 158.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species158_1

sFrontAnims_Species159: @ 0x082DCA98
	@ First referenced by species index 159.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species159_1

sFrontAnims_Species160: @ 0x082DCAA0
	@ First referenced by species index 160.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species160_1

sFrontAnims_Species161: @ 0x082DCAA8
	@ First referenced by species index 161.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species161_1

sFrontAnims_Species162: @ 0x082DCAB0
	@ First referenced by species index 162.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species162_1

sFrontAnims_Species163: @ 0x082DCAB8
	@ First referenced by species index 163.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species163_1

sFrontAnims_Species164: @ 0x082DCAC0
	@ First referenced by species index 164.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species164_1

sFrontAnims_Species165: @ 0x082DCAC8
	@ First referenced by species index 165.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species165_1

sFrontAnims_Species166: @ 0x082DCAD0
	@ First referenced by species index 166.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species166_1

sFrontAnims_Species167: @ 0x082DCAD8
	@ First referenced by species index 167.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species167_1

sFrontAnims_Species168: @ 0x082DCAE0
	@ First referenced by species index 168.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species168_1

sFrontAnims_Species169: @ 0x082DCAE8
	@ First referenced by species index 169.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species169_1

sFrontAnims_Species170: @ 0x082DCAF0
	@ First referenced by species index 170.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species170_1
	.4byte sFrontAnimCmd_Species170_2

sFrontAnims_Species171: @ 0x082DCAFC
	@ First referenced by species index 171.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species171_1
	.4byte sFrontAnimCmd_Species171_2

sFrontAnims_Species172: @ 0x082DCB08
	@ First referenced by species index 172.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species172_1
	.4byte sFrontAnimCmd_Species172_2

sFrontAnims_Species173: @ 0x082DCB14
	@ First referenced by species index 173.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species173_1

sFrontAnims_Species174: @ 0x082DCB1C
	@ First referenced by species index 174.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species174_1
	.4byte sFrontAnimCmd_Species174_2

sFrontAnims_Species175: @ 0x082DCB28
	@ First referenced by species index 175.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species175_1

sFrontAnims_Species176: @ 0x082DCB30
	@ First referenced by species index 176.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species176_1

sFrontAnims_Species177: @ 0x082DCB38
	@ First referenced by species index 177.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species177_1
	.4byte sFrontAnimCmd_Species177_2

sFrontAnims_Species178: @ 0x082DCB44
	@ First referenced by species index 178.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species178_1
	.4byte sFrontAnimCmd_Species178_2

sFrontAnims_Species179: @ 0x082DCB50
	@ First referenced by species index 179.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species179_1

sFrontAnims_Species180: @ 0x082DCB58
	@ First referenced by species index 180.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species180_1

sFrontAnims_Species181: @ 0x082DCB60
	@ First referenced by species index 181.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species181_1

sFrontAnims_Species182: @ 0x082DCB68
	@ First referenced by species index 182.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species182_1

sFrontAnims_Species183: @ 0x082DCB70
	@ First referenced by species index 183.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species183_1

sFrontAnims_Species184: @ 0x082DCB78
	@ First referenced by species index 184.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species184_1

sFrontAnims_Species185: @ 0x082DCB80
	@ First referenced by species index 185.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species185_1

sFrontAnims_Species186: @ 0x082DCB88
	@ First referenced by species index 186.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species186_1

sFrontAnims_Species187: @ 0x082DCB90
	@ First referenced by species index 187.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species187_1

sFrontAnims_Species188: @ 0x082DCB98
	@ First referenced by species index 188.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species188_1

sFrontAnims_Species189: @ 0x082DCBA0
	@ First referenced by species index 189.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species189_1

sFrontAnims_Species190: @ 0x082DCBA8
	@ First referenced by species index 190.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species190_1

sFrontAnims_Species191: @ 0x082DCBB0
	@ First referenced by species index 191.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species191_1

sFrontAnims_Species192: @ 0x082DCBB8
	@ First referenced by species index 192.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species192_1

sFrontAnims_Species193: @ 0x082DCBC0
	@ First referenced by species index 193.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species193_1

sFrontAnims_Species194: @ 0x082DCBC8
	@ First referenced by species index 194.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species194_1

sFrontAnims_Species195: @ 0x082DCBD0
	@ First referenced by species index 195.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species195_1

sFrontAnims_Species196: @ 0x082DCBD8
	@ First referenced by species index 196.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species196_1

sFrontAnims_Species197: @ 0x082DCBE0
	@ First referenced by species index 197.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species197_1

sFrontAnims_Species198: @ 0x082DCBE8
	@ First referenced by species index 198.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species198_1

sFrontAnims_Species199: @ 0x082DCBF0
	@ First referenced by species index 199.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species199_1

sFrontAnims_Species200: @ 0x082DCBF8
	@ First referenced by species index 200.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species200_1

sFrontAnims_Species201: @ 0x082DCC00
	@ First referenced by species index 201.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species201_1

sFrontAnims_Species202: @ 0x082DCC08
	@ First referenced by species index 202.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species202_1
	.4byte sFrontAnimCmd_Species202_2

sFrontAnims_Species203: @ 0x082DCC14
	@ First referenced by species index 203.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species203_1
	.4byte sFrontAnimCmd_Species203_2

sFrontAnims_Species204: @ 0x082DCC20
	@ First referenced by species index 204.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species204_1

sFrontAnims_Species205: @ 0x082DCC28
	@ First referenced by species index 205.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species205_1

sFrontAnims_Species206: @ 0x082DCC30
	@ First referenced by species index 206.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species206_1

sFrontAnims_Species207: @ 0x082DCC38
	@ First referenced by species index 207.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species207_1

sFrontAnims_Species208: @ 0x082DCC40
	@ First referenced by species index 208.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species208_1

sFrontAnims_Species209: @ 0x082DCC48
	@ First referenced by species index 209.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species209_1

sFrontAnims_Species210: @ 0x082DCC50
	@ First referenced by species index 210.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species210_1

sFrontAnims_Species211: @ 0x082DCC58
	@ First referenced by species index 211.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species211_1

sFrontAnims_Species212: @ 0x082DCC60
	@ First referenced by species index 212.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species212_1

sFrontAnims_Species213: @ 0x082DCC68
	@ First referenced by species index 213.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species213_1

sFrontAnims_Species214: @ 0x082DCC70
	@ First referenced by species index 214.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species214_1
	.4byte sFrontAnimCmd_Species214_2

sFrontAnims_Species215: @ 0x082DCC7C
	@ First referenced by species index 215.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species215_1

sFrontAnims_Species216: @ 0x082DCC84
	@ First referenced by species index 216.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species216_1

sFrontAnims_Species217: @ 0x082DCC8C
	@ First referenced by species index 217.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species217_1

sFrontAnims_Species218: @ 0x082DCC94
	@ First referenced by species index 218.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species218_1
	.4byte sFrontAnimCmd_Species218_2

sFrontAnims_Species219: @ 0x082DCCA0
	@ First referenced by species index 219.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species219_1
	.4byte sFrontAnimCmd_Species219_2

sFrontAnims_Species220: @ 0x082DCCAC
	@ First referenced by species index 220.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species220_1

sFrontAnims_Species221: @ 0x082DCCB4
	@ First referenced by species index 221.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species221_1

sFrontAnims_Species222: @ 0x082DCCBC
	@ First referenced by species index 222.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species222_1
	.4byte sFrontAnimCmd_Species222_2

sFrontAnims_Species223: @ 0x082DCCC8
	@ First referenced by species index 223.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species223_1

sFrontAnims_Species224: @ 0x082DCCD0
	@ First referenced by species index 224.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species224_1

sFrontAnims_Species225: @ 0x082DCCD8
	@ First referenced by species index 225.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species225_1

sFrontAnims_Species226: @ 0x082DCCE0
	@ First referenced by species index 226.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species226_1

sFrontAnims_Species227: @ 0x082DCCE8
	@ First referenced by species index 227.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species227_1
	.4byte sFrontAnimCmd_Species227_2

sFrontAnims_Species228: @ 0x082DCCF4
	@ First referenced by species index 228.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species228_1

sFrontAnims_Species229: @ 0x082DCCFC
	@ First referenced by species index 229.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species229_1

sFrontAnims_Species230: @ 0x082DCD04
	@ First referenced by species index 230.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species230_1
	.4byte sFrontAnimCmd_Species230_2

sFrontAnims_Species231: @ 0x082DCD10
	@ First referenced by species index 231.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species231_1
	.4byte sFrontAnimCmd_Species231_2

sFrontAnims_Species232: @ 0x082DCD1C
	@ First referenced by species index 232.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species232_1
	.4byte sFrontAnimCmd_Species232_2

sFrontAnims_Species233: @ 0x082DCD28
	@ First referenced by species index 233.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species233_1

sFrontAnims_Species234: @ 0x082DCD30
	@ First referenced by species index 234.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species234_1

sFrontAnims_Species235: @ 0x082DCD38
	@ First referenced by species index 235.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species235_1

sFrontAnims_Species236: @ 0x082DCD40
	@ First referenced by species index 236.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species236_1

sFrontAnims_Species237: @ 0x082DCD48
	@ First referenced by species index 237.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species237_1

sFrontAnims_Species238: @ 0x082DCD50
	@ First referenced by species index 238.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species238_1

sFrontAnims_Species239: @ 0x082DCD58
	@ First referenced by species index 239.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species239_1

sFrontAnims_Species240: @ 0x082DCD60
	@ First referenced by species index 240.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species240_1

sFrontAnims_Species241: @ 0x082DCD68
	@ First referenced by species index 241.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species241_1

sFrontAnims_Species242: @ 0x082DCD70
	@ First referenced by species index 242.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species242_1

sFrontAnims_Species243: @ 0x082DCD78
	@ First referenced by species index 243.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species243_1

sFrontAnims_Species244: @ 0x082DCD80
	@ First referenced by species index 244.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species244_1

sFrontAnims_Species245: @ 0x082DCD88
	@ First referenced by species index 245.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species245_1

sFrontAnims_Species246: @ 0x082DCD90
	@ First referenced by species index 246.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species246_1

sFrontAnims_Species247: @ 0x082DCD98
	@ First referenced by species index 247.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species247_1

sFrontAnims_Species248: @ 0x082DCDA0
	@ First referenced by species index 248.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species248_1

sFrontAnims_Species249: @ 0x082DCDA8
	@ First referenced by species index 249.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species249_1

sFrontAnims_Species250: @ 0x082DCDB0
	@ First referenced by species index 250.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species250_1

sFrontAnims_Species251: @ 0x082DCDB8
	@ First referenced by species index 251.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species251_1

sFrontAnims_Species252: @ 0x082DCDC0
	@ First referenced by species index 252.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species252_1

sFrontAnims_Species277: @ 0x082DCDC8
	@ First referenced by species index 277.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species277_1

sFrontAnims_Species278: @ 0x082DCDD0
	@ First referenced by species index 278.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species278_1

sFrontAnims_Species279: @ 0x082DCDD8
	@ First referenced by species index 279.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species279_1

sFrontAnims_Species280: @ 0x082DCDE0
	@ First referenced by species index 280.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species280_1

sFrontAnims_Species281: @ 0x082DCDE8
	@ First referenced by species index 281.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species281_1

sFrontAnims_Species282: @ 0x082DCDF0
	@ First referenced by species index 282.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species282_1
	.4byte sFrontAnimCmd_Species282_2
	.4byte sFrontAnimCmd_Species282_3
	.4byte sFrontAnimCmd_Species282_4

sFrontAnims_Species283: @ 0x082DCE04
	@ First referenced by species index 283.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species283_1

sFrontAnims_Species284: @ 0x082DCE0C
	@ First referenced by species index 284.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species284_1

sFrontAnims_Species285: @ 0x082DCE14
	@ First referenced by species index 285.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species285_1

sFrontAnims_Species286: @ 0x082DCE1C
	@ First referenced by species index 286.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species286_1

sFrontAnims_Species287: @ 0x082DCE24
	@ First referenced by species index 287.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species287_1

sFrontAnims_Species288: @ 0x082DCE2C
	@ First referenced by species index 288.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species288_1

sFrontAnims_Species289: @ 0x082DCE34
	@ First referenced by species index 289.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species289_1

sFrontAnims_Species290: @ 0x082DCE3C
	@ First referenced by species index 290.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species290_1

sFrontAnims_Species291: @ 0x082DCE44
	@ First referenced by species index 291.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species291_1
	.4byte sFrontAnimCmd_Species291_2

sFrontAnims_Species292: @ 0x082DCE50
	@ First referenced by species index 292.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species292_1
	.4byte sFrontAnimCmd_Species292_2

sFrontAnims_Species293: @ 0x082DCE5C
	@ First referenced by species index 293.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species293_1
	.4byte sFrontAnimCmd_Species293_2

sFrontAnims_Species294: @ 0x082DCE68
	@ First referenced by species index 294.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species294_1
	.4byte sFrontAnimCmd_Species294_2

sFrontAnims_Species295: @ 0x082DCE74
	@ First referenced by species index 295.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species295_1

sFrontAnims_Species296: @ 0x082DCE7C
	@ First referenced by species index 296.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species296_1

sFrontAnims_Species297: @ 0x082DCE84
	@ First referenced by species index 297.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species297_1

sFrontAnims_Species298: @ 0x082DCE8C
	@ First referenced by species index 298.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species298_1

sFrontAnims_Species299: @ 0x082DCE94
	@ First referenced by species index 299.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species299_1

sFrontAnims_Species300: @ 0x082DCE9C
	@ First referenced by species index 300.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species300_1

sFrontAnims_Species301: @ 0x082DCEA4
	@ First referenced by species index 301.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species301_1

sFrontAnims_Species302: @ 0x082DCEAC
	@ First referenced by species index 302.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species302_1

sFrontAnims_Species303: @ 0x082DCEB4
	@ First referenced by species index 303.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species303_1

sFrontAnims_Species304: @ 0x082DCEBC
	@ First referenced by species index 304.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species304_1

sFrontAnims_Species305: @ 0x082DCEC4
	@ First referenced by species index 305.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species305_1

sFrontAnims_Species306: @ 0x082DCECC
	@ First referenced by species index 306.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species306_1

sFrontAnims_Species307: @ 0x082DCED4
	@ First referenced by species index 307.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species307_1

sFrontAnims_Species308: @ 0x082DCEDC
	@ First referenced by species index 308.
	.4byte sAnim_GeneralFrame0

sFrontAnims_Species309: @ 0x082DCEE0
	@ First referenced by species index 309.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species309_1

sFrontAnims_Species310: @ 0x082DCEE8
	@ First referenced by species index 310.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species310_1

sFrontAnims_Species311: @ 0x082DCEF0
	@ First referenced by species index 311.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species311_1
	.4byte sFrontAnimCmd_Species311_2

sFrontAnims_Species312: @ 0x082DCEFC
	@ First referenced by species index 312.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species312_1
	.4byte sFrontAnimCmd_Species312_2

sFrontAnims_Species313: @ 0x082DCF08
	@ First referenced by species index 313.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species313_1

sFrontAnims_Species314: @ 0x082DCF10
	@ First referenced by species index 314.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species314_1

sFrontAnims_Species315: @ 0x082DCF18
	@ First referenced by species index 315.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species315_1

sFrontAnims_Species316: @ 0x082DCF20
	@ First referenced by species index 316.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species316_1

sFrontAnims_Species317: @ 0x082DCF28
	@ First referenced by species index 317.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species317_1

sFrontAnims_Species318: @ 0x082DCF30
	@ First referenced by species index 318.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species318_1

sFrontAnims_Species319: @ 0x082DCF38
	@ First referenced by species index 319.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species319_1

sFrontAnims_Species320: @ 0x082DCF40
	@ First referenced by species index 320.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species320_1

sFrontAnims_Species321: @ 0x082DCF48
	@ First referenced by species index 321.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species321_1

sFrontAnims_Species322: @ 0x082DCF50
	@ First referenced by species index 322.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species322_1

sFrontAnims_Species323: @ 0x082DCF58
	@ First referenced by species index 323.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species323_1

sFrontAnims_Species324: @ 0x082DCF60
	@ First referenced by species index 324.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species324_1

sFrontAnims_Species325: @ 0x082DCF68
	@ First referenced by species index 325.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species325_1

sFrontAnims_Species326: @ 0x082DCF70
	@ First referenced by species index 326.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species326_1

sFrontAnims_Species327: @ 0x082DCF78
	@ First referenced by species index 327.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species327_1

sFrontAnims_Species328: @ 0x082DCF80
	@ First referenced by species index 328.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species328_1

sFrontAnims_Species329: @ 0x082DCF88
	@ First referenced by species index 329.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species329_1

sFrontAnims_Species330: @ 0x082DCF90
	@ First referenced by species index 330.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species330_1

sFrontAnims_Species331: @ 0x082DCF98
	@ First referenced by species index 331.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species331_1

sFrontAnims_Species332: @ 0x082DCFA0
	@ First referenced by species index 332.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species332_1

sFrontAnims_Species333: @ 0x082DCFA8
	@ First referenced by species index 333.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species333_1

sFrontAnims_Species334: @ 0x082DCFB0
	@ First referenced by species index 334.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species334_1

sFrontAnims_Species335: @ 0x082DCFB8
	@ First referenced by species index 335.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species335_1

sFrontAnims_Species336: @ 0x082DCFC0
	@ First referenced by species index 336.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species336_1

sFrontAnims_Species337: @ 0x082DCFC8
	@ First referenced by species index 337.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species337_1

sFrontAnims_Species338: @ 0x082DCFD0
	@ First referenced by species index 338.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species338_1

sFrontAnims_Species339: @ 0x082DCFD8
	@ First referenced by species index 339.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species339_1

sFrontAnims_Species340: @ 0x082DCFE0
	@ First referenced by species index 340.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species340_1

sFrontAnims_Species341: @ 0x082DCFE8
	@ First referenced by species index 341.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species341_1

sFrontAnims_Species342: @ 0x082DCFF0
	@ First referenced by species index 342.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species342_1

sFrontAnims_Species343: @ 0x082DCFF8
	@ First referenced by species index 343.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species343_1

sFrontAnims_Species344: @ 0x082DD000
	@ First referenced by species index 344.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species344_1

sFrontAnims_Species345: @ 0x082DD008
	@ First referenced by species index 345.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species345_1

sFrontAnims_Species346: @ 0x082DD010
	@ First referenced by species index 346.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species346_1

sFrontAnims_Species347: @ 0x082DD018
	@ First referenced by species index 347.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species347_1

sFrontAnims_Species348: @ 0x082DD020
	@ First referenced by species index 348.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species348_1
	.4byte sFrontAnimCmd_Species348_2

sFrontAnims_Species349: @ 0x082DD02C
	@ First referenced by species index 349.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species349_1
	.4byte sFrontAnimCmd_Species349_2

sFrontAnims_Species350: @ 0x082DD038
	@ First referenced by species index 350.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species350_1

sFrontAnims_Species351: @ 0x082DD040
	@ First referenced by species index 351.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species351_1

sFrontAnims_Species352: @ 0x082DD048
	@ First referenced by species index 352.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species352_1

sFrontAnims_Species353: @ 0x082DD050
	@ First referenced by species index 353.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species353_1

sFrontAnims_Species354: @ 0x082DD058
	@ First referenced by species index 354.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species354_1

sFrontAnims_Species355: @ 0x082DD060
	@ First referenced by species index 355.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species355_1

sFrontAnims_Species356: @ 0x082DD068
	@ First referenced by species index 356.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species356_1

sFrontAnims_Species357: @ 0x082DD070
	@ First referenced by species index 357.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species357_1

sFrontAnims_Species358: @ 0x082DD078
	@ First referenced by species index 358.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species358_1
	.4byte sFrontAnimCmd_Species358_2

sFrontAnims_Species359: @ 0x082DD084
	@ First referenced by species index 359.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species359_1
	.4byte sFrontAnimCmd_Species359_2

sFrontAnims_Species360: @ 0x082DD090
	@ First referenced by species index 360.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species360_1

sFrontAnims_Species361: @ 0x082DD098
	@ First referenced by species index 361.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species361_1

sFrontAnims_Species362: @ 0x082DD0A0
	@ First referenced by species index 362.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species362_1

sFrontAnims_Species363: @ 0x082DD0A8
	@ First referenced by species index 363.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species363_1

sFrontAnims_Species364: @ 0x082DD0B0
	@ First referenced by species index 364.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species364_1

sFrontAnims_Species365: @ 0x082DD0B8
	@ First referenced by species index 365.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species365_1

sFrontAnims_Species366: @ 0x082DD0C0
	@ First referenced by species index 366.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species366_1

sFrontAnims_Species367: @ 0x082DD0C8
	@ First referenced by species index 367.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species367_1

sFrontAnims_Species368: @ 0x082DD0D0
	@ First referenced by species index 368.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species368_1

sFrontAnims_Species369: @ 0x082DD0D8
	@ First referenced by species index 369.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species369_1

sFrontAnims_Species370: @ 0x082DD0E0
	@ First referenced by species index 370.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species370_1

sFrontAnims_Species371: @ 0x082DD0E8
	@ First referenced by species index 371.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species371_1

sFrontAnims_Species372: @ 0x082DD0F0
	@ First referenced by species index 372.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species372_1

sFrontAnims_Species373: @ 0x082DD0F8
	@ First referenced by species index 373.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species373_1

sFrontAnims_Species374: @ 0x082DD100
	@ First referenced by species index 374.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species374_1

sFrontAnims_Species375: @ 0x082DD108
	@ First referenced by species index 375.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species375_1

sFrontAnims_Species376: @ 0x082DD110
	@ First referenced by species index 376.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species376_1

sFrontAnims_Species377: @ 0x082DD118
	@ First referenced by species index 377.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species377_1

sFrontAnims_Species378: @ 0x082DD120
	@ First referenced by species index 378.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species378_1

sFrontAnims_Species379: @ 0x082DD128
	@ First referenced by species index 379.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species379_1

sFrontAnims_Species380: @ 0x082DD130
	@ First referenced by species index 380.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species380_1

sFrontAnims_Species381: @ 0x082DD138
	@ First referenced by species index 381.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species381_1

sFrontAnims_Species382: @ 0x082DD140
	@ First referenced by species index 382.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species382_1

sFrontAnims_Species383: @ 0x082DD148
	@ First referenced by species index 383.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species383_1

sFrontAnims_Species384: @ 0x082DD150
	@ First referenced by species index 384.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species384_1

sFrontAnims_Species385: @ 0x082DD158
	@ First referenced by species index 385.
	.4byte sFrontAnimCmd_Species385_1
	.4byte sFrontAnimCmd_Species385_2
	.4byte sFrontAnimCmd_Species385_3
	.4byte sFrontAnimCmd_Species385_4

sFrontAnims_Species386: @ 0x082DD168
	@ First referenced by species index 386.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species386_1

sFrontAnims_Species387: @ 0x082DD170
	@ First referenced by species index 387.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species387_1

sFrontAnims_Species388: @ 0x082DD178
	@ First referenced by species index 388.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species388_1

sFrontAnims_Species389: @ 0x082DD180
	@ First referenced by species index 389.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species389_1

sFrontAnims_Species390: @ 0x082DD188
	@ First referenced by species index 390.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species390_1

sFrontAnims_Species391: @ 0x082DD190
	@ First referenced by species index 391.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species391_1

sFrontAnims_Species392: @ 0x082DD198
	@ First referenced by species index 392.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species392_1

sFrontAnims_Species393: @ 0x082DD1A0
	@ First referenced by species index 393.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species393_1

sFrontAnims_Species394: @ 0x082DD1A8
	@ First referenced by species index 394.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species394_1

sFrontAnims_Species395: @ 0x082DD1B0
	@ First referenced by species index 395.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species395_1

sFrontAnims_Species396: @ 0x082DD1B8
	@ First referenced by species index 396.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species396_1

sFrontAnims_Species397: @ 0x082DD1C0
	@ First referenced by species index 397.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species397_1

sFrontAnims_Species398: @ 0x082DD1C8
	@ First referenced by species index 398.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species398_1

sFrontAnims_Species399: @ 0x082DD1D0
	@ First referenced by species index 399.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species399_1

sFrontAnims_Species400: @ 0x082DD1D8
	@ First referenced by species index 400.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species400_1

sFrontAnims_Species401: @ 0x082DD1E0
	@ First referenced by species index 401.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species401_1
	.4byte sFrontAnimCmd_Species401_2

sFrontAnims_Species402: @ 0x082DD1EC
	@ First referenced by species index 402.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species402_1

sFrontAnims_Species403: @ 0x082DD1F4
	@ First referenced by species index 403.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species403_1
	.4byte sFrontAnimCmd_Species403_2

sFrontAnims_Species404: @ 0x082DD200
	@ First referenced by species index 404.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species404_1
	.4byte sFrontAnimCmd_Species404_2

sFrontAnims_Species405: @ 0x082DD20C
	@ First referenced by species index 405.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species405_1
	.4byte sFrontAnimCmd_Species405_2

sFrontAnims_Species406: @ 0x082DD218
	@ First referenced by species index 406.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species406_1
	.4byte sFrontAnimCmd_Species406_2

sFrontAnims_Species407: @ 0x082DD224
	@ First referenced by species index 407.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species407_1
	.4byte sFrontAnimCmd_Species407_2

sFrontAnims_Species408: @ 0x082DD230
	@ First referenced by species index 408.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species408_1
	.4byte sFrontAnimCmd_Species408_2

sFrontAnims_Species409: @ 0x082DD23C
	@ First referenced by species index 409.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species409_1
	.4byte sFrontAnimCmd_Species409_2

sFrontAnims_Species410: @ 0x082DD248
	@ First referenced by species index 410.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species410_1
	.4byte sFrontAnimCmd_Species410_2

sFrontAnims_Species411: @ 0x082DD254
	@ First referenced by species index 411.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species411_1

sFrontAnims_Species412: @ 0x082DD25C
	@ First referenced by species index 412.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species412_1

sFrontAnims_Species413: @ 0x082DD264
	@ First referenced by species index 413.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species413_1

sFrontAnims_Species414: @ 0x082DD26C
	@ First referenced by species index 414.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species414_1

sFrontAnims_Species415: @ 0x082DD274
	@ First referenced by species index 415.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species415_1

sFrontAnims_Species416: @ 0x082DD27C
	@ First referenced by species index 416.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species416_1

sFrontAnims_Species417: @ 0x082DD284
	@ First referenced by species index 417.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species417_1

sFrontAnims_Species418: @ 0x082DD28C
	@ First referenced by species index 418.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species418_1

sFrontAnims_Species419: @ 0x082DD294
	@ First referenced by species index 419.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species419_1

sFrontAnims_Species420: @ 0x082DD29C
	@ First referenced by species index 420.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species420_1

sFrontAnims_Species421: @ 0x082DD2A4
	@ First referenced by species index 421.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species421_1

sFrontAnims_Species422: @ 0x082DD2AC
	@ First referenced by species index 422.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species422_1

sFrontAnims_Species423: @ 0x082DD2B4
	@ First referenced by species index 423.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species423_1

sFrontAnims_Species424: @ 0x082DD2BC
	@ First referenced by species index 424.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species424_1

sFrontAnims_Species425: @ 0x082DD2C4
	@ First referenced by species index 425.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species425_1

sFrontAnims_Species426: @ 0x082DD2CC
	@ First referenced by species index 426.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species426_1

sFrontAnims_Species427: @ 0x082DD2D4
	@ First referenced by species index 427.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species427_1

sFrontAnims_Species428: @ 0x082DD2DC
	@ First referenced by species index 428.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species428_1

sFrontAnims_Species429: @ 0x082DD2E4
	@ First referenced by species index 429.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species429_1

sFrontAnims_Species430: @ 0x082DD2EC
	@ First referenced by species index 430.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species430_1

sFrontAnims_Species431: @ 0x082DD2F4
	@ First referenced by species index 431.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species431_1

sFrontAnims_Species432: @ 0x082DD2FC
	@ First referenced by species index 432.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species432_1

sFrontAnims_Species433: @ 0x082DD304
	@ First referenced by species index 433.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species433_1

sFrontAnims_Species434: @ 0x082DD30C
	@ First referenced by species index 434.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species434_1

sFrontAnims_Species435: @ 0x082DD314
	@ First referenced by species index 435.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species435_1

sFrontAnims_Species436: @ 0x082DD31C
	@ First referenced by species index 436.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species436_1

sFrontAnims_Species437: @ 0x082DD324
	@ First referenced by species index 437.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species437_1

sFrontAnims_Species438: @ 0x082DD32C
	@ First referenced by species index 438.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species438_1

sFrontAnims_Species439: @ 0x082DD334
	@ First referenced by species index 439.
	.4byte sAnim_GeneralFrame0
	.4byte sFrontAnimCmd_Species439_1

	.globl gUnknown_82DD33C
gUnknown_82DD33C: @ 0x082DD33C
	.globl gMonFrontPicAnimTable
gMonFrontPicAnimTable:
	.4byte sFrontAnims_Species000 @ species index 0
	.4byte sFrontAnims_Species001 @ species index 1
	.4byte sFrontAnims_Species002 @ species index 2
	.4byte sFrontAnims_Species003 @ species index 3
	.4byte sFrontAnims_Species004 @ species index 4
	.4byte sFrontAnims_Species005 @ species index 5
	.4byte sFrontAnims_Species006 @ species index 6
	.4byte sFrontAnims_Species007 @ species index 7
	.4byte sFrontAnims_Species008 @ species index 8
	.4byte sFrontAnims_Species009 @ species index 9
	.4byte sFrontAnims_Species010 @ species index 10
	.4byte sFrontAnims_Species011 @ species index 11
	.4byte sFrontAnims_Species012 @ species index 12
	.4byte sFrontAnims_Species013 @ species index 13
	.4byte sFrontAnims_Species014 @ species index 14
	.4byte sFrontAnims_Species015 @ species index 15
	.4byte sFrontAnims_Species016 @ species index 16
	.4byte sFrontAnims_Species017 @ species index 17
	.4byte sFrontAnims_Species018 @ species index 18
	.4byte sFrontAnims_Species019 @ species index 19
	.4byte sFrontAnims_Species020 @ species index 20
	.4byte sFrontAnims_Species021 @ species index 21
	.4byte sFrontAnims_Species022 @ species index 22
	.4byte sFrontAnims_Species023 @ species index 23
	.4byte sFrontAnims_Species024 @ species index 24
	.4byte sFrontAnims_Species025 @ species index 25
	.4byte sFrontAnims_Species026 @ species index 26
	.4byte sFrontAnims_Species027 @ species index 27
	.4byte sFrontAnims_Species028 @ species index 28
	.4byte sFrontAnims_Species029 @ species index 29
	.4byte sFrontAnims_Species030 @ species index 30
	.4byte sFrontAnims_Species031 @ species index 31
	.4byte sFrontAnims_Species032 @ species index 32
	.4byte sFrontAnims_Species033 @ species index 33
	.4byte sFrontAnims_Species034 @ species index 34
	.4byte sFrontAnims_Species035 @ species index 35
	.4byte sFrontAnims_Species036 @ species index 36
	.4byte sFrontAnims_Species037 @ species index 37
	.4byte sFrontAnims_Species038 @ species index 38
	.4byte sFrontAnims_Species039 @ species index 39
	.4byte sFrontAnims_Species040 @ species index 40
	.4byte sFrontAnims_Species041 @ species index 41
	.4byte sFrontAnims_Species042 @ species index 42
	.4byte sFrontAnims_Species043 @ species index 43
	.4byte sFrontAnims_Species044 @ species index 44
	.4byte sFrontAnims_Species045 @ species index 45
	.4byte sFrontAnims_Species046 @ species index 46
	.4byte sFrontAnims_Species047 @ species index 47
	.4byte sFrontAnims_Species048 @ species index 48
	.4byte sFrontAnims_Species049 @ species index 49
	.4byte sFrontAnims_Species050 @ species index 50
	.4byte sFrontAnims_Species051 @ species index 51
	.4byte sFrontAnims_Species052 @ species index 52
	.4byte sFrontAnims_Species053 @ species index 53
	.4byte sFrontAnims_Species054 @ species index 54
	.4byte sFrontAnims_Species055 @ species index 55
	.4byte sFrontAnims_Species056 @ species index 56
	.4byte sFrontAnims_Species057 @ species index 57
	.4byte sFrontAnims_Species058 @ species index 58
	.4byte sFrontAnims_Species059 @ species index 59
	.4byte sFrontAnims_Species060 @ species index 60
	.4byte sFrontAnims_Species061 @ species index 61
	.4byte sFrontAnims_Species062 @ species index 62
	.4byte sFrontAnims_Species063 @ species index 63
	.4byte sFrontAnims_Species064 @ species index 64
	.4byte sFrontAnims_Species065 @ species index 65
	.4byte sFrontAnims_Species066 @ species index 66
	.4byte sFrontAnims_Species067 @ species index 67
	.4byte sFrontAnims_Species068 @ species index 68
	.4byte sFrontAnims_Species069 @ species index 69
	.4byte sFrontAnims_Species070 @ species index 70
	.4byte sFrontAnims_Species071 @ species index 71
	.4byte sFrontAnims_Species072 @ species index 72
	.4byte sFrontAnims_Species073 @ species index 73
	.4byte sFrontAnims_Species074 @ species index 74
	.4byte sFrontAnims_Species075 @ species index 75
	.4byte sFrontAnims_Species076 @ species index 76
	.4byte sFrontAnims_Species077 @ species index 77
	.4byte sFrontAnims_Species078 @ species index 78
	.4byte sFrontAnims_Species079 @ species index 79
	.4byte sFrontAnims_Species080 @ species index 80
	.4byte sFrontAnims_Species081 @ species index 81
	.4byte sFrontAnims_Species082 @ species index 82
	.4byte sFrontAnims_Species083 @ species index 83
	.4byte sFrontAnims_Species084 @ species index 84
	.4byte sFrontAnims_Species085 @ species index 85
	.4byte sFrontAnims_Species086 @ species index 86
	.4byte sFrontAnims_Species087 @ species index 87
	.4byte sFrontAnims_Species088 @ species index 88
	.4byte sFrontAnims_Species089 @ species index 89
	.4byte sFrontAnims_Species090 @ species index 90
	.4byte sFrontAnims_Species091 @ species index 91
	.4byte sFrontAnims_Species092 @ species index 92
	.4byte sFrontAnims_Species093 @ species index 93
	.4byte sFrontAnims_Species094 @ species index 94
	.4byte sFrontAnims_Species095 @ species index 95
	.4byte sFrontAnims_Species096 @ species index 96
	.4byte sFrontAnims_Species097 @ species index 97
	.4byte sFrontAnims_Species098 @ species index 98
	.4byte sFrontAnims_Species099 @ species index 99
	.4byte sFrontAnims_Species100 @ species index 100
	.4byte sFrontAnims_Species101 @ species index 101
	.4byte sFrontAnims_Species102 @ species index 102
	.4byte sFrontAnims_Species103 @ species index 103
	.4byte sFrontAnims_Species104 @ species index 104
	.4byte sFrontAnims_Species105 @ species index 105
	.4byte sFrontAnims_Species106 @ species index 106
	.4byte sFrontAnims_Species107 @ species index 107
	.4byte sFrontAnims_Species108 @ species index 108
	.4byte sFrontAnims_Species109 @ species index 109
	.4byte sFrontAnims_Species110 @ species index 110
	.4byte sFrontAnims_Species111 @ species index 111
	.4byte sFrontAnims_Species112 @ species index 112
	.4byte sFrontAnims_Species113 @ species index 113
	.4byte sFrontAnims_Species114 @ species index 114
	.4byte sFrontAnims_Species115 @ species index 115
	.4byte sFrontAnims_Species116 @ species index 116
	.4byte sFrontAnims_Species117 @ species index 117
	.4byte sFrontAnims_Species118 @ species index 118
	.4byte sFrontAnims_Species119 @ species index 119
	.4byte sFrontAnims_Species120 @ species index 120
	.4byte sFrontAnims_Species121 @ species index 121
	.4byte sFrontAnims_Species122 @ species index 122
	.4byte sFrontAnims_Species123 @ species index 123
	.4byte sFrontAnims_Species124 @ species index 124
	.4byte sFrontAnims_Species125 @ species index 125
	.4byte sFrontAnims_Species126 @ species index 126
	.4byte sFrontAnims_Species127 @ species index 127
	.4byte sFrontAnims_Species128 @ species index 128
	.4byte sFrontAnims_Species129 @ species index 129
	.4byte sFrontAnims_Species130 @ species index 130
	.4byte sFrontAnims_Species131 @ species index 131
	.4byte sFrontAnims_Species132 @ species index 132
	.4byte sFrontAnims_Species133 @ species index 133
	.4byte sFrontAnims_Species134 @ species index 134
	.4byte sFrontAnims_Species135 @ species index 135
	.4byte sFrontAnims_Species136 @ species index 136
	.4byte sFrontAnims_Species137 @ species index 137
	.4byte sFrontAnims_Species138 @ species index 138
	.4byte sFrontAnims_Species139 @ species index 139
	.4byte sFrontAnims_Species140 @ species index 140
	.4byte sFrontAnims_Species141 @ species index 141
	.4byte sFrontAnims_Species142 @ species index 142
	.4byte sFrontAnims_Species143 @ species index 143
	.4byte sFrontAnims_Species144 @ species index 144
	.4byte sFrontAnims_Species145 @ species index 145
	.4byte sFrontAnims_Species146 @ species index 146
	.4byte sFrontAnims_Species147 @ species index 147
	.4byte sFrontAnims_Species148 @ species index 148
	.4byte sFrontAnims_Species149 @ species index 149
	.4byte sFrontAnims_Species150 @ species index 150
	.4byte sFrontAnims_Species151 @ species index 151
	.4byte sFrontAnims_Species152 @ species index 152
	.4byte sFrontAnims_Species153 @ species index 153
	.4byte sFrontAnims_Species154 @ species index 154
	.4byte sFrontAnims_Species155 @ species index 155
	.4byte sFrontAnims_Species156 @ species index 156
	.4byte sFrontAnims_Species157 @ species index 157
	.4byte sFrontAnims_Species158 @ species index 158
	.4byte sFrontAnims_Species159 @ species index 159
	.4byte sFrontAnims_Species160 @ species index 160
	.4byte sFrontAnims_Species161 @ species index 161
	.4byte sFrontAnims_Species162 @ species index 162
	.4byte sFrontAnims_Species163 @ species index 163
	.4byte sFrontAnims_Species164 @ species index 164
	.4byte sFrontAnims_Species165 @ species index 165
	.4byte sFrontAnims_Species166 @ species index 166
	.4byte sFrontAnims_Species167 @ species index 167
	.4byte sFrontAnims_Species168 @ species index 168
	.4byte sFrontAnims_Species169 @ species index 169
	.4byte sFrontAnims_Species170 @ species index 170
	.4byte sFrontAnims_Species171 @ species index 171
	.4byte sFrontAnims_Species172 @ species index 172
	.4byte sFrontAnims_Species173 @ species index 173
	.4byte sFrontAnims_Species174 @ species index 174
	.4byte sFrontAnims_Species175 @ species index 175
	.4byte sFrontAnims_Species176 @ species index 176
	.4byte sFrontAnims_Species177 @ species index 177
	.4byte sFrontAnims_Species178 @ species index 178
	.4byte sFrontAnims_Species179 @ species index 179
	.4byte sFrontAnims_Species180 @ species index 180
	.4byte sFrontAnims_Species181 @ species index 181
	.4byte sFrontAnims_Species182 @ species index 182
	.4byte sFrontAnims_Species183 @ species index 183
	.4byte sFrontAnims_Species184 @ species index 184
	.4byte sFrontAnims_Species185 @ species index 185
	.4byte sFrontAnims_Species186 @ species index 186
	.4byte sFrontAnims_Species187 @ species index 187
	.4byte sFrontAnims_Species188 @ species index 188
	.4byte sFrontAnims_Species189 @ species index 189
	.4byte sFrontAnims_Species190 @ species index 190
	.4byte sFrontAnims_Species191 @ species index 191
	.4byte sFrontAnims_Species192 @ species index 192
	.4byte sFrontAnims_Species193 @ species index 193
	.4byte sFrontAnims_Species194 @ species index 194
	.4byte sFrontAnims_Species195 @ species index 195
	.4byte sFrontAnims_Species196 @ species index 196
	.4byte sFrontAnims_Species197 @ species index 197
	.4byte sFrontAnims_Species198 @ species index 198
	.4byte sFrontAnims_Species199 @ species index 199
	.4byte sFrontAnims_Species200 @ species index 200
	.4byte sFrontAnims_Species201 @ species index 201
	.4byte sFrontAnims_Species202 @ species index 202
	.4byte sFrontAnims_Species203 @ species index 203
	.4byte sFrontAnims_Species204 @ species index 204
	.4byte sFrontAnims_Species205 @ species index 205
	.4byte sFrontAnims_Species206 @ species index 206
	.4byte sFrontAnims_Species207 @ species index 207
	.4byte sFrontAnims_Species208 @ species index 208
	.4byte sFrontAnims_Species209 @ species index 209
	.4byte sFrontAnims_Species210 @ species index 210
	.4byte sFrontAnims_Species211 @ species index 211
	.4byte sFrontAnims_Species212 @ species index 212
	.4byte sFrontAnims_Species213 @ species index 213
	.4byte sFrontAnims_Species214 @ species index 214
	.4byte sFrontAnims_Species215 @ species index 215
	.4byte sFrontAnims_Species216 @ species index 216
	.4byte sFrontAnims_Species217 @ species index 217
	.4byte sFrontAnims_Species218 @ species index 218
	.4byte sFrontAnims_Species219 @ species index 219
	.4byte sFrontAnims_Species220 @ species index 220
	.4byte sFrontAnims_Species221 @ species index 221
	.4byte sFrontAnims_Species222 @ species index 222
	.4byte sFrontAnims_Species223 @ species index 223
	.4byte sFrontAnims_Species224 @ species index 224
	.4byte sFrontAnims_Species225 @ species index 225
	.4byte sFrontAnims_Species226 @ species index 226
	.4byte sFrontAnims_Species227 @ species index 227
	.4byte sFrontAnims_Species228 @ species index 228
	.4byte sFrontAnims_Species229 @ species index 229
	.4byte sFrontAnims_Species230 @ species index 230
	.4byte sFrontAnims_Species231 @ species index 231
	.4byte sFrontAnims_Species232 @ species index 232
	.4byte sFrontAnims_Species233 @ species index 233
	.4byte sFrontAnims_Species234 @ species index 234
	.4byte sFrontAnims_Species235 @ species index 235
	.4byte sFrontAnims_Species236 @ species index 236
	.4byte sFrontAnims_Species237 @ species index 237
	.4byte sFrontAnims_Species238 @ species index 238
	.4byte sFrontAnims_Species239 @ species index 239
	.4byte sFrontAnims_Species240 @ species index 240
	.4byte sFrontAnims_Species241 @ species index 241
	.4byte sFrontAnims_Species242 @ species index 242
	.4byte sFrontAnims_Species243 @ species index 243
	.4byte sFrontAnims_Species244 @ species index 244
	.4byte sFrontAnims_Species245 @ species index 245
	.4byte sFrontAnims_Species246 @ species index 246
	.4byte sFrontAnims_Species247 @ species index 247
	.4byte sFrontAnims_Species248 @ species index 248
	.4byte sFrontAnims_Species249 @ species index 249
	.4byte sFrontAnims_Species250 @ species index 250
	.4byte sFrontAnims_Species251 @ species index 251
	.4byte sFrontAnims_Species252 @ species index 252
	.4byte sFrontAnims_Species252 @ species index 253
	.4byte sFrontAnims_Species252 @ species index 254
	.4byte sFrontAnims_Species252 @ species index 255
	.4byte sFrontAnims_Species252 @ species index 256
	.4byte sFrontAnims_Species252 @ species index 257
	.4byte sFrontAnims_Species252 @ species index 258
	.4byte sFrontAnims_Species252 @ species index 259
	.4byte sFrontAnims_Species252 @ species index 260
	.4byte sFrontAnims_Species252 @ species index 261
	.4byte sFrontAnims_Species252 @ species index 262
	.4byte sFrontAnims_Species252 @ species index 263
	.4byte sFrontAnims_Species252 @ species index 264
	.4byte sFrontAnims_Species252 @ species index 265
	.4byte sFrontAnims_Species252 @ species index 266
	.4byte sFrontAnims_Species252 @ species index 267
	.4byte sFrontAnims_Species252 @ species index 268
	.4byte sFrontAnims_Species252 @ species index 269
	.4byte sFrontAnims_Species252 @ species index 270
	.4byte sFrontAnims_Species252 @ species index 271
	.4byte sFrontAnims_Species252 @ species index 272
	.4byte sFrontAnims_Species252 @ species index 273
	.4byte sFrontAnims_Species252 @ species index 274
	.4byte sFrontAnims_Species252 @ species index 275
	.4byte sFrontAnims_Species252 @ species index 276
	.4byte sFrontAnims_Species277 @ species index 277
	.4byte sFrontAnims_Species278 @ species index 278
	.4byte sFrontAnims_Species279 @ species index 279
	.4byte sFrontAnims_Species280 @ species index 280
	.4byte sFrontAnims_Species281 @ species index 281
	.4byte sFrontAnims_Species282 @ species index 282
	.4byte sFrontAnims_Species283 @ species index 283
	.4byte sFrontAnims_Species284 @ species index 284
	.4byte sFrontAnims_Species285 @ species index 285
	.4byte sFrontAnims_Species286 @ species index 286
	.4byte sFrontAnims_Species287 @ species index 287
	.4byte sFrontAnims_Species288 @ species index 288
	.4byte sFrontAnims_Species289 @ species index 289
	.4byte sFrontAnims_Species290 @ species index 290
	.4byte sFrontAnims_Species291 @ species index 291
	.4byte sFrontAnims_Species292 @ species index 292
	.4byte sFrontAnims_Species293 @ species index 293
	.4byte sFrontAnims_Species294 @ species index 294
	.4byte sFrontAnims_Species295 @ species index 295
	.4byte sFrontAnims_Species296 @ species index 296
	.4byte sFrontAnims_Species297 @ species index 297
	.4byte sFrontAnims_Species298 @ species index 298
	.4byte sFrontAnims_Species299 @ species index 299
	.4byte sFrontAnims_Species300 @ species index 300
	.4byte sFrontAnims_Species301 @ species index 301
	.4byte sFrontAnims_Species302 @ species index 302
	.4byte sFrontAnims_Species303 @ species index 303
	.4byte sFrontAnims_Species304 @ species index 304
	.4byte sFrontAnims_Species305 @ species index 305
	.4byte sFrontAnims_Species306 @ species index 306
	.4byte sFrontAnims_Species307 @ species index 307
	.4byte sFrontAnims_Species308 @ species index 308
	.4byte sFrontAnims_Species309 @ species index 309
	.4byte sFrontAnims_Species310 @ species index 310
	.4byte sFrontAnims_Species311 @ species index 311
	.4byte sFrontAnims_Species312 @ species index 312
	.4byte sFrontAnims_Species313 @ species index 313
	.4byte sFrontAnims_Species314 @ species index 314
	.4byte sFrontAnims_Species315 @ species index 315
	.4byte sFrontAnims_Species316 @ species index 316
	.4byte sFrontAnims_Species317 @ species index 317
	.4byte sFrontAnims_Species318 @ species index 318
	.4byte sFrontAnims_Species319 @ species index 319
	.4byte sFrontAnims_Species320 @ species index 320
	.4byte sFrontAnims_Species321 @ species index 321
	.4byte sFrontAnims_Species322 @ species index 322
	.4byte sFrontAnims_Species323 @ species index 323
	.4byte sFrontAnims_Species324 @ species index 324
	.4byte sFrontAnims_Species325 @ species index 325
	.4byte sFrontAnims_Species326 @ species index 326
	.4byte sFrontAnims_Species327 @ species index 327
	.4byte sFrontAnims_Species328 @ species index 328
	.4byte sFrontAnims_Species329 @ species index 329
	.4byte sFrontAnims_Species330 @ species index 330
	.4byte sFrontAnims_Species331 @ species index 331
	.4byte sFrontAnims_Species332 @ species index 332
	.4byte sFrontAnims_Species333 @ species index 333
	.4byte sFrontAnims_Species334 @ species index 334
	.4byte sFrontAnims_Species335 @ species index 335
	.4byte sFrontAnims_Species336 @ species index 336
	.4byte sFrontAnims_Species337 @ species index 337
	.4byte sFrontAnims_Species338 @ species index 338
	.4byte sFrontAnims_Species339 @ species index 339
	.4byte sFrontAnims_Species340 @ species index 340
	.4byte sFrontAnims_Species341 @ species index 341
	.4byte sFrontAnims_Species342 @ species index 342
	.4byte sFrontAnims_Species343 @ species index 343
	.4byte sFrontAnims_Species344 @ species index 344
	.4byte sFrontAnims_Species345 @ species index 345
	.4byte sFrontAnims_Species346 @ species index 346
	.4byte sFrontAnims_Species347 @ species index 347
	.4byte sFrontAnims_Species348 @ species index 348
	.4byte sFrontAnims_Species349 @ species index 349
	.4byte sFrontAnims_Species350 @ species index 350
	.4byte sFrontAnims_Species351 @ species index 351
	.4byte sFrontAnims_Species352 @ species index 352
	.4byte sFrontAnims_Species353 @ species index 353
	.4byte sFrontAnims_Species354 @ species index 354
	.4byte sFrontAnims_Species355 @ species index 355
	.4byte sFrontAnims_Species356 @ species index 356
	.4byte sFrontAnims_Species357 @ species index 357
	.4byte sFrontAnims_Species358 @ species index 358
	.4byte sFrontAnims_Species359 @ species index 359
	.4byte sFrontAnims_Species360 @ species index 360
	.4byte sFrontAnims_Species361 @ species index 361
	.4byte sFrontAnims_Species362 @ species index 362
	.4byte sFrontAnims_Species363 @ species index 363
	.4byte sFrontAnims_Species364 @ species index 364
	.4byte sFrontAnims_Species365 @ species index 365
	.4byte sFrontAnims_Species366 @ species index 366
	.4byte sFrontAnims_Species367 @ species index 367
	.4byte sFrontAnims_Species368 @ species index 368
	.4byte sFrontAnims_Species369 @ species index 369
	.4byte sFrontAnims_Species370 @ species index 370
	.4byte sFrontAnims_Species371 @ species index 371
	.4byte sFrontAnims_Species372 @ species index 372
	.4byte sFrontAnims_Species373 @ species index 373
	.4byte sFrontAnims_Species374 @ species index 374
	.4byte sFrontAnims_Species375 @ species index 375
	.4byte sFrontAnims_Species376 @ species index 376
	.4byte sFrontAnims_Species377 @ species index 377
	.4byte sFrontAnims_Species378 @ species index 378
	.4byte sFrontAnims_Species379 @ species index 379
	.4byte sFrontAnims_Species380 @ species index 380
	.4byte sFrontAnims_Species381 @ species index 381
	.4byte sFrontAnims_Species382 @ species index 382
	.4byte sFrontAnims_Species383 @ species index 383
	.4byte sFrontAnims_Species384 @ species index 384
	.4byte sFrontAnims_Species385 @ species index 385
	.4byte sFrontAnims_Species386 @ species index 386
	.4byte sFrontAnims_Species387 @ species index 387
	.4byte sFrontAnims_Species388 @ species index 388
	.4byte sFrontAnims_Species389 @ species index 389
	.4byte sFrontAnims_Species390 @ species index 390
	.4byte sFrontAnims_Species391 @ species index 391
	.4byte sFrontAnims_Species392 @ species index 392
	.4byte sFrontAnims_Species393 @ species index 393
	.4byte sFrontAnims_Species394 @ species index 394
	.4byte sFrontAnims_Species395 @ species index 395
	.4byte sFrontAnims_Species396 @ species index 396
	.4byte sFrontAnims_Species397 @ species index 397
	.4byte sFrontAnims_Species398 @ species index 398
	.4byte sFrontAnims_Species399 @ species index 399
	.4byte sFrontAnims_Species400 @ species index 400
	.4byte sFrontAnims_Species401 @ species index 401
	.4byte sFrontAnims_Species402 @ species index 402
	.4byte sFrontAnims_Species403 @ species index 403
	.4byte sFrontAnims_Species404 @ species index 404
	.4byte sFrontAnims_Species405 @ species index 405
	.4byte sFrontAnims_Species406 @ species index 406
	.4byte sFrontAnims_Species407 @ species index 407
	.4byte sFrontAnims_Species408 @ species index 408
	.4byte sFrontAnims_Species409 @ species index 409
	.4byte sFrontAnims_Species410 @ species index 410
	.4byte sFrontAnims_Species411 @ species index 411
	.4byte sFrontAnims_Species412 @ species index 412
	.4byte sFrontAnims_Species413 @ species index 413
	.4byte sFrontAnims_Species414 @ species index 414
	.4byte sFrontAnims_Species415 @ species index 415
	.4byte sFrontAnims_Species416 @ species index 416
	.4byte sFrontAnims_Species417 @ species index 417
	.4byte sFrontAnims_Species418 @ species index 418
	.4byte sFrontAnims_Species419 @ species index 419
	.4byte sFrontAnims_Species420 @ species index 420
	.4byte sFrontAnims_Species421 @ species index 421
	.4byte sFrontAnims_Species422 @ species index 422
	.4byte sFrontAnims_Species423 @ species index 423
	.4byte sFrontAnims_Species424 @ species index 424
	.4byte sFrontAnims_Species425 @ species index 425
	.4byte sFrontAnims_Species426 @ species index 426
	.4byte sFrontAnims_Species427 @ species index 427
	.4byte sFrontAnims_Species428 @ species index 428
	.4byte sFrontAnims_Species429 @ species index 429
	.4byte sFrontAnims_Species430 @ species index 430
	.4byte sFrontAnims_Species431 @ species index 431
	.4byte sFrontAnims_Species432 @ species index 432
	.4byte sFrontAnims_Species433 @ species index 433
	.4byte sFrontAnims_Species434 @ species index 434
	.4byte sFrontAnims_Species435 @ species index 435
	.4byte sFrontAnims_Species436 @ species index 436
	.4byte sFrontAnims_Species437 @ species index 437
	.4byte sFrontAnims_Species438 @ species index 438
	.4byte sFrontAnims_Species439 @ species index 439

@ Next object at 0x082DDA1C is gMonFrontPicTable.
