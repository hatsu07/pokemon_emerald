	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:332 BattlePyramid_Text_ThreeItemsRemaining5
	.globl gText_Rom_22E087
gText_Rom_22E087: @ 0x0822E087
	.string "ピラミッドの この だんには\nどうぐが 3つは あるそうだ……$"
	.if (. - gText_Rom_22E087) > 0x20
	.error "gText_Rom_22E087 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E087) < 0x20
	.space 0x20 - (. - gText_Rom_22E087)
	.endif
