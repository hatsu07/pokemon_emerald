	@ data/maps/MossdeepCity_Gym/scripts.inc:396 MossdeepCity_Gym_Text_BlakeIntro (+1 aliases)
	.globl gText_Rom_20B9CC
gText_Rom_20B9CC: @ 0x0820B9CC
	.string "ふふふ……\nねんりきで モンスターボールを\lくうちゅうに うかせて みせよう……\pうおおぉぉぉぉぉ……!\p…… …… ……\n…… …… ……\pちょうしの わるい ときも ある……$"
	.if (. - gText_Rom_20B9CC) > 0x5a
	.error "gText_Rom_20B9CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B9CC) < 0x5a
	.space 0x5a - (. - gText_Rom_20B9CC)
	.endif
