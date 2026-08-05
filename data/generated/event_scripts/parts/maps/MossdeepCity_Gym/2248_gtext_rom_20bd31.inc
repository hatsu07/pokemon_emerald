	@ data/maps/MossdeepCity_Gym/scripts.inc:459 MossdeepCity_Gym_Text_CliffordIntro (+1 aliases)
	.globl gText_Rom_20BD31
gText_Rom_20BD31: @ 0x0820BD31
	.string "としより だからと いって\nあまく みて もらっては こまりますよ$"
	.if (. - gText_Rom_20BD31) > 0x22
	.error "gText_Rom_20BD31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD31) < 0x22
	.space 0x22 - (. - gText_Rom_20BD31)
	.endif
