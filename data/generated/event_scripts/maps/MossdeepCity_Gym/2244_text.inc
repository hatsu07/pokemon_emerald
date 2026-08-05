	@ data/maps/MossdeepCity_Gym/scripts.inc:453 MossdeepCity_Gym_Text_KathleenDefeat (+1 aliases)
	.globl gText_Rom_20BD0A
gText_Rom_20BD0A: @ 0x0820BD0A
	.string "いやあああーっ!$"
	.if (. - gText_Rom_20BD0A) > 0x9
	.error "gText_Rom_20BD0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD0A) < 0x9
	.space 0x9 - (. - gText_Rom_20BD0A)
	.endif
