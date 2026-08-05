	@ src/data/union_room.h:539 sText_Chat2 (+1 aliases)
	.globl gText_Rom_2C1D40
gText_Rom_2C1D40: @ 0x082C1D40
	.string "チャット$"
	.if (. - gText_Rom_2C1D40) > 0x5
	.error "gText_Rom_2C1D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D40) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D40)
	.endif
	.space 0x3, 0x00
