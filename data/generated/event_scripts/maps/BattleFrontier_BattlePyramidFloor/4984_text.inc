	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:365 BattlePyramid_Text_OneItemRemaining6
	.globl gText_Rom_22E222
gText_Rom_22E222: @ 0x0822E222
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 1つは あるそうだよ"
	.byte EOS
	.if (. - gText_Rom_22E222) > 0x29
	.error "gText_Rom_22E222 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E222) < 0x29
	.space 0x29 - (. - gText_Rom_22E222)
	.endif
