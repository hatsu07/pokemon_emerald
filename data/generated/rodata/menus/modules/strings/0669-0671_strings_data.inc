	@ src/strings.c:950 gText_SafariBallStock
	.globl gText_Rom_4E8B84
gText_Rom_4E8B84: @ 0x084E8B84
	.string "サファリボール\nのこり {STR_VAR_1}コ$"
	.if (. - gText_Rom_4E8B84) > 0x10
	.error "gText_Rom_4E8B84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B84) < 0x10
	.space 0x10 - (. - gText_Rom_4E8B84)
	.endif
	.globl gUnknown_84E8B94
gUnknown_84E8B94: @ 0x084E8B94
	@ Replaced baserom.gba range: offset=0x4E8B94, size=0x8
	.byte 0x00, 0x01, 0x01, 0x08, 0x04, 0x0F, 0x08, 0x00
	.globl gUnknown_84E8B9C
gUnknown_84E8B9C: @ 0x084E8B9C

	@ src/strings.c:952 gText_BattlePyramidFloor
	.globl gText_Rom_4E8B9C
gText_Rom_4E8B9C: @ 0x084E8B9C
	.string "バトルピラミッド\n{STR_VAR_1}$"
	.if (. - gText_Rom_4E8B9C) > 0xc
	.error "gText_Rom_4E8B9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B9C) < 0xc
	.space 0xc - (. - gText_Rom_4E8B9C)
	.endif
