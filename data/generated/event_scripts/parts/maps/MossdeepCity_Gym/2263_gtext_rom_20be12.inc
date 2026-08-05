	@ data/maps/MossdeepCity_Gym/scripts.inc:480 MossdeepCity_Gym_Text_NicholasDefeat (+1 aliases)
	.globl gText_Rom_20BE12
gText_Rom_20BE12: @ 0x0820BE12
	.string "やられたあああ!$"
	.if (. - gText_Rom_20BE12) > 0x9
	.error "gText_Rom_20BE12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BE12) < 0x9
	.space 0x9 - (. - gText_Rom_20BE12)
	.endif
