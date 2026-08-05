	@ data/maps/MossdeepCity_Gym/scripts.inc:444 MossdeepCity_Gym_Text_NateDefeat (+1 aliases)
	.globl gText_Rom_20BCB9
gText_Rom_20BCB9: @ 0x0820BCB9
	.string "こ これは これは!\nすばらしい たたかいかた ですな$"
	.if (. - gText_Rom_20BCB9) > 0x1c
	.error "gText_Rom_20BCB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BCB9) < 0x1c
	.space 0x1c - (. - gText_Rom_20BCB9)
	.endif
