	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:269 BattlePyramid_Text_SixItemsRemaining3
	.globl gText_Rom_22DD52
gText_Rom_22DD52: @ 0x0822DD52
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 6つほど あるそうだよ!$"
	.if (. - gText_Rom_22DD52) > 0x29
	.error "gText_Rom_22DD52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DD52) < 0x29
	.space 0x29 - (. - gText_Rom_22DD52)
	.endif
