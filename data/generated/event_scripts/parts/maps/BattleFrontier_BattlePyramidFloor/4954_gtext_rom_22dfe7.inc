	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:317 BattlePyramid_Text_EightItemsRemaining5
	.globl gText_Rom_22DFE7
gText_Rom_22DFE7: @ 0x0822DFE7
	.string "ピラミッドの この だんには\nどうぐが 8つは あるそうだ……$"
	.if (. - gText_Rom_22DFE7) > 0x20
	.error "gText_Rom_22DFE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DFE7) < 0x20
	.space 0x20 - (. - gText_Rom_22DFE7)
	.endif
