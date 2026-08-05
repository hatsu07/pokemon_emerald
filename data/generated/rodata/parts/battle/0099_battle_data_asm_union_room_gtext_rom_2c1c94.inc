	@ asm/union_room.s:1450 sub_08012BB4
	.globl gText_Rom_2C1C94
gText_Rom_2C1C94: @ 0x082C1C94
	.string "{0xFD}{0x02}に　メンバー　とうろくを\nおねがいしています！　おまちください$"
	.if (. - gText_Rom_2C1C94) > 0x22
	.error "gText_Rom_2C1C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1C94) < 0x22
	.space 0x22 - (. - gText_Rom_2C1C94)
	.endif
	.space 0x2, 0x00
