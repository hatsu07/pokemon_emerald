	@ data/maps/MossdeepCity_Gym/scripts.inc:426 MossdeepCity_Gym_Text_MauraDefeat (+1 aliases)
	.globl gText_Rom_20BBE5
gText_Rom_20BBE5: @ 0x0820BBE5
	.string "すばらしい みちのり だわ……!$"
	.if (. - gText_Rom_20BBE5) > 0x11
	.error "gText_Rom_20BBE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BBE5) < 0x11
	.space 0x11 - (. - gText_Rom_20BBE5)
	.endif
