	@ src/data/union_room.h:18 sJPText_HoldBerryCrush
	.globl gText_Rom_2C0770
gText_Rom_2C0770: @ 0x082C0770
	.string "きのみマッシャーを かいさいする$"
	.if (. - gText_Rom_2C0770) > 0x11
	.error "gText_Rom_2C0770 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0770) < 0x11
	.space 0x11 - (. - gText_Rom_2C0770)
	.endif
	.space 0x3, 0x00
