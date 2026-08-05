	@ src/data/union_room.h:15 sJPText_DistWonderNews
	.globl gText_Rom_2C073C
gText_Rom_2C073C: @ 0x082C073C
	.string "ふしぎなニュースをくばる$"
	.if (. - gText_Rom_2C073C) > 0xd
	.error "gText_Rom_2C073C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C073C) < 0xd
	.space 0xd - (. - gText_Rom_2C073C)
	.endif
	.space 0x3, 0x00
