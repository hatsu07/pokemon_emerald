	@ src/data/union_room.h:20 sJPText_HoldSpinTrade
	.globl gText_Rom_2C0794
gText_Rom_2C0794: @ 0x082C0794
	.string "ぐるぐるこうかんを かいさいする$"
	.if (. - gText_Rom_2C0794) > 0x11
	.error "gText_Rom_2C0794 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0794) < 0x11
	.space 0x11 - (. - gText_Rom_2C0794)
	.endif
	.space 0x3, 0x00
