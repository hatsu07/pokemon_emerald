	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:323 BattlePyramid_Text_SixItemsRemaining5
	.globl gText_Rom_22E027
gText_Rom_22E027: @ 0x0822E027
	.string "ピラミッドの この だんには\nどうぐが 6つは あるそうだ……{EOS}"
	.if (. - gText_Rom_22E027) > 0x20
	.error "gText_Rom_22E027 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E027) < 0x20
	.space 0x20 - (. - gText_Rom_22E027)
	.endif
