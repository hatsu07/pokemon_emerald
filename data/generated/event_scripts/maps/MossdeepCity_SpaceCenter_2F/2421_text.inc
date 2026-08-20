	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:345 MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel
	.globl gText_Rom_20DB12
gText_Rom_20DB12: @ 0x0820DB12
	.string "ロケットの ねんりょうなんか うばって\nマグマだんは なにする つもりだ！?{EOS}"
	.if (. - gText_Rom_20DB12) > 0x27
	.error "gText_Rom_20DB12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DB12) < 0x27
	.space 0x27 - (. - gText_Rom_20DB12)
	.endif
