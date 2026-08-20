	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:338 BattlePyramid_Text_OneItemRemaining5
	.globl gText_Rom_22E0C7
gText_Rom_22E0C7: @ 0x0822E0C7
	.string "ピラミッドの この だんには\nどうぐが 1つは あるそうだ……{EOS}"
	.if (. - gText_Rom_22E0C7) > 0x20
	.error "gText_Rom_22E0C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E0C7) < 0x20
	.space 0x20 - (. - gText_Rom_22E0C7)
	.endif
