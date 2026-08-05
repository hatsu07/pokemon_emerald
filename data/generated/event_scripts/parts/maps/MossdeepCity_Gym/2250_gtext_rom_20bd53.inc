	@ data/maps/MossdeepCity_Gym/scripts.inc:462 MossdeepCity_Gym_Text_CliffordDefeat (+1 aliases)
	.globl gText_Rom_20BD53
gText_Rom_20BD53: @ 0x0820BD53
	.string "あふれる わかさを かんじる!$"
	.if (. - gText_Rom_20BD53) > 0x10
	.error "gText_Rom_20BD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD53) < 0x10
	.space 0x10 - (. - gText_Rom_20BD53)
	.endif
