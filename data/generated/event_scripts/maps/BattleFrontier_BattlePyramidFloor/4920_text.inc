	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:266 BattlePyramid_Text_SevenItemsRemaining3
	.globl gText_Rom_22DD29
gText_Rom_22DD29: @ 0x0822DD29
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 7つほど あるそうだよ!{EOS}"
	.if (. - gText_Rom_22DD29) > 0x29
	.error "gText_Rom_22DD29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DD29) < 0x29
	.space 0x29 - (. - gText_Rom_22DD29)
	.endif
