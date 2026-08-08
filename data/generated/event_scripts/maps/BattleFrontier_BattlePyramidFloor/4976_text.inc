	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:353 BattlePyramid_Text_FiveItemsRemaining6
	.globl gText_Rom_22E17E
gText_Rom_22E17E: @ 0x0822E17E
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 5つは あるそうだよ"
	.byte EOS
	.if (. - gText_Rom_22E17E) > 0x29
	.error "gText_Rom_22E17E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E17E) < 0x29
	.space 0x29 - (. - gText_Rom_22E17E)
	.endif
