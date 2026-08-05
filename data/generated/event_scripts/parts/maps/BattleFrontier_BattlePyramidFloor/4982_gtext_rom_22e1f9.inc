	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:362 BattlePyramid_Text_TwoItemsRemaining6
	.globl gText_Rom_22E1F9
gText_Rom_22E1F9: @ 0x0822E1F9
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 2つは あるそうだよ"
	.byte EOS
	.if (. - gText_Rom_22E1F9) > 0x29
	.error "gText_Rom_22E1F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E1F9) < 0x29
	.space 0x29 - (. - gText_Rom_22E1F9)
	.endif
