	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:272 BattlePyramid_Text_FiveItemsRemaining3
	.globl gText_Rom_22DD7B
gText_Rom_22DD7B: @ 0x0822DD7B
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 5つほど あるそうだよ!$"
	.if (. - gText_Rom_22DD7B) > 0x29
	.error "gText_Rom_22DD7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DD7B) < 0x29
	.space 0x29 - (. - gText_Rom_22DD7B)
	.endif
