	@ src/data/union_room.h:16 sJPText_DistMysteryEvent
	.globl gText_Rom_2C074C
gText_Rom_2C074C: @ 0x082C074C
	.string "ふしぎなできごとを かいさいする$"
	.if (. - gText_Rom_2C074C) > 0x11
	.error "gText_Rom_2C074C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C074C) < 0x11
	.space 0x11 - (. - gText_Rom_2C074C)
	.endif
	.space 0x3, 0x00
