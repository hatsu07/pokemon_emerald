	@ data/maps/MossdeepCity_Gym/scripts.inc:438 MossdeepCity_Gym_Text_SylviaPostBattle
	.globl gText_Rom_20BC71
gText_Rom_20BC71: @ 0x0820BC71
	.string "あたしに かったわね……\nなにが おきても しらないわよ……!{EOS}"
	.if (. - gText_Rom_20BC71) > 0x20
	.error "gText_Rom_20BC71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BC71) < 0x20
	.space 0x20 - (. - gText_Rom_20BC71)
	.endif
