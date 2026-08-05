	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:356 BattlePyramid_Text_FourItemsRemaining6
	.globl gText_Rom_22E1A7
gText_Rom_22E1A7: @ 0x0822E1A7
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 4つは あるそうだよ"
	.byte EOS
	.if (. - gText_Rom_22E1A7) > 0x29
	.error "gText_Rom_22E1A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E1A7) < 0x29
	.space 0x29 - (. - gText_Rom_22E1A7)
	.endif
