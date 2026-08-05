	@ src/data/union_room.h:9 sJPText_SingleBattle
	.globl gText_Rom_2C06DC
gText_Rom_2C06DC: @ 0x082C06DC
	.string "シングルバトルを かいさいする$"
	.if (. - gText_Rom_2C06DC) > 0x10
	.error "gText_Rom_2C06DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C06DC) < 0x10
	.space 0x10 - (. - gText_Rom_2C06DC)
	.endif
