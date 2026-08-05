	@ asm/union_room.s:1352 sub_08012AC4
	.globl gText_Rom_2C08F8
gText_Rom_2C08F8: @ 0x082C08F8
	.string "{0xFD}{0x03}から　れんらくあり！\nメンバーに　しますか？$"
	.if (. - gText_Rom_2C08F8) > 0x19
	.error "gText_Rom_2C08F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C08F8) < 0x19
	.space 0x19 - (. - gText_Rom_2C08F8)
	.endif
	.space 0x3, 0x00
