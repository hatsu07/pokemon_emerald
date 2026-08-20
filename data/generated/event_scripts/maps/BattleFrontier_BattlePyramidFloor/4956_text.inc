	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:320 BattlePyramid_Text_SevenItemsRemaining5
	.globl gText_Rom_22E007
gText_Rom_22E007: @ 0x0822E007
	.string "ピラミッドの この だんには\nどうぐが 7つは あるそうだ……{EOS}"
	.if (. - gText_Rom_22E007) > 0x20
	.error "gText_Rom_22E007 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E007) < 0x20
	.space 0x20 - (. - gText_Rom_22E007)
	.endif
