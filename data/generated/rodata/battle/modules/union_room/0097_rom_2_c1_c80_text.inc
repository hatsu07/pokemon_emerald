	@ asm/union_room.s:1443 sub_08012BB4
	.globl gText_Rom_2C1C80
gText_Rom_2C1C80: @ 0x082C1C80
	.string "{0xFD}{0x02}からの\nへんじを　まっています$"
	.if (. - gText_Rom_2C1C80) > 0x12
	.error "gText_Rom_2C1C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1C80) < 0x12
	.space 0x12 - (. - gText_Rom_2C1C80)
	.endif
	.space 0x2, 0x00
