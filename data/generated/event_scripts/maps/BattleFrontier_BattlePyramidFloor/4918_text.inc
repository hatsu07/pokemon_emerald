	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:263 BattlePyramid_Text_EightItemsRemaining3
	.globl gText_Rom_22DD00
gText_Rom_22DD00: @ 0x0822DD00
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 8つほど あるそうだよ!{EOS}"
	.if (. - gText_Rom_22DD00) > 0x29
	.error "gText_Rom_22DD00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DD00) < 0x29
	.space 0x29 - (. - gText_Rom_22DD00)
	.endif
