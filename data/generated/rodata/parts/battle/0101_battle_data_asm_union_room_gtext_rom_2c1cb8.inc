	@ asm/union_room.s:5523 sub_08014DFC
	.globl gText_Rom_2C1CB8
gText_Rom_2C1CB8: @ 0x082C1CB8
	.string "ジョイスポットからの\nへんじを　まっています$"
	.if (. - gText_Rom_2C1CB8) > 0x17
	.error "gText_Rom_2C1CB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1CB8) < 0x17
	.space 0x17 - (. - gText_Rom_2C1CB8)
	.endif
	@ Replaced baserom.gba range: offset=0x2C1CCF, size=0x12
	.byte 0x00, 0x1E, 0x06, 0x19, 0x00, 0x0B, 0x2E, 0x06, 0x0C, 0x34, 0x37, 0x00, 0x0F, 0x2B, 0x03, 0x1F
	.byte 0x44, 0xFE
