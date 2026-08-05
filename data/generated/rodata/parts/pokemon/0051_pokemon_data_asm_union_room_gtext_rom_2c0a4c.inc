	@ asm/union_room.s:2354 sub_08012FEC
	.globl gText_Rom_2C0A4C
gText_Rom_2C0A4C: @ 0x082C0A4C
	.string "{0xFD}{0x02}！\nほかの　メンバーを　まっています！$"
	.if (. - gText_Rom_2C0A4C) > 0x16
	.error "gText_Rom_2C0A4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0A4C) < 0x16
	.space 0x16 - (. - gText_Rom_2C0A4C)
	.endif
	.space 0x2, 0x00
