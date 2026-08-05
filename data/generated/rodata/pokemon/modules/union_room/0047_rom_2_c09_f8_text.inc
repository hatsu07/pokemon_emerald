	@ asm/union_room.s:1506 sub_08012C60
	.globl gText_Rom_2C09F8
gText_Rom_2C09F8: @ 0x082C09F8
	.string "{0xFD}{0x02}から　OKとの\nへんじが　ありました！$"
	.if (. - gText_Rom_2C09F8) > 0x16
	.error "gText_Rom_2C09F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C09F8) < 0x16
	.space 0x16 - (. - gText_Rom_2C09F8)
	.endif
	.space 0x2, 0x00
