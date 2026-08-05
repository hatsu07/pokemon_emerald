	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:341 BattlePyramid_Text_ZeroItemsRemaining5
	.globl gText_Rom_22E0E7
gText_Rom_22E0E7: @ 0x0822E0E7
	.string "ピラミッドの この だんには\nどうぐは ないそうだ……$"
	.if (. - gText_Rom_22E0E7) > 0x1c
	.error "gText_Rom_22E0E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E0E7) < 0x1c
	.space 0x1c - (. - gText_Rom_22E0E7)
	.endif
