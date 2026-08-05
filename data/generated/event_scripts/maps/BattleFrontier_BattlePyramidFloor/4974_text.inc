	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:350 BattlePyramid_Text_SixItemsRemaining6
	.globl gText_Rom_22E155
gText_Rom_22E155: @ 0x0822E155
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 6つは あるそうだよ"
	.byte EOS
	.if (. - gText_Rom_22E155) > 0x29
	.error "gText_Rom_22E155 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E155) < 0x29
	.space 0x29 - (. - gText_Rom_22E155)
	.endif
