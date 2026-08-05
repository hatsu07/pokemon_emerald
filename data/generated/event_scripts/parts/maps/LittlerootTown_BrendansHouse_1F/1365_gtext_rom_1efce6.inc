	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:362 PlayersHouse_1F_Text_Vigoroth1
	.globl gText_Rom_1EFCE6
gText_Rom_1EFCE6: @ 0x081EFCE6
	.string "ふぎーっ$"
	.if (. - gText_Rom_1EFCE6) > 0x5
	.error "gText_Rom_1EFCE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFCE6) < 0x5
	.space 0x5 - (. - gText_Rom_1EFCE6)
	.endif
