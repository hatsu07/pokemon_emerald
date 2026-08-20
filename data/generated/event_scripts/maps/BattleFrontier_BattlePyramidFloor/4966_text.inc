	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:335 BattlePyramid_Text_TwoItemsRemaining5
	.globl gText_Rom_22E0A7
gText_Rom_22E0A7: @ 0x0822E0A7
	.string "ピラミッドの この だんには\nどうぐが 2つは あるそうだ……{EOS}"
	.if (. - gText_Rom_22E0A7) > 0x20
	.error "gText_Rom_22E0A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E0A7) < 0x20
	.space 0x20 - (. - gText_Rom_22E0A7)
	.endif
