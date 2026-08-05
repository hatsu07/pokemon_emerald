	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:326 BattlePyramid_Text_FiveItemsRemaining5
	.globl gText_Rom_22E047
gText_Rom_22E047: @ 0x0822E047
	.string "ピラミッドの この だんには\nどうぐが 5つは あるそうだ……$"
	.if (. - gText_Rom_22E047) > 0x20
	.error "gText_Rom_22E047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E047) < 0x20
	.space 0x20 - (. - gText_Rom_22E047)
	.endif
