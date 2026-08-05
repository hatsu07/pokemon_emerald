	@ src/data/union_room.h:10 sJPText_DoubleBattle
	.globl gText_Rom_2C06EC
gText_Rom_2C06EC: @ 0x082C06EC
	.string "ダブルバトルを かいさいする$"
	.if (. - gText_Rom_2C06EC) > 0xf
	.error "gText_Rom_2C06EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06EC) < 0xf
	.space 0xf - (. - gText_Rom_2C06EC)
	.endif
	.space 0x1, 0x00
