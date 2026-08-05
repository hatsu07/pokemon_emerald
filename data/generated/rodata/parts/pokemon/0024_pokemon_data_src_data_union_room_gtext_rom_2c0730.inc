	@ src/data/union_room.h:14 sJPText_DistWonderCard
	.globl gText_Rom_2C0730
gText_Rom_2C0730: @ 0x082C0730
	.string "ふしぎなカードをくばる$"
	.if (. - gText_Rom_2C0730) > 0xc
	.error "gText_Rom_2C0730 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0730) < 0xc
	.space 0xc - (. - gText_Rom_2C0730)
	.endif
