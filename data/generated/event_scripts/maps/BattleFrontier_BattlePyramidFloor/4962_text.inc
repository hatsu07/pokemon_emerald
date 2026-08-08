	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:329 BattlePyramid_Text_FourItemsRemaining5
	.globl gText_Rom_22E067
gText_Rom_22E067: @ 0x0822E067
	.string "ピラミッドの この だんには\nどうぐが 4つは あるそうだ……$"
	.if (. - gText_Rom_22E067) > 0x20
	.error "gText_Rom_22E067 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E067) < 0x20
	.space 0x20 - (. - gText_Rom_22E067)
	.endif
