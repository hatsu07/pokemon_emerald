	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:359 BattlePyramid_Text_ThreeItemsRemaining6
	.globl gText_Rom_22E1D0
gText_Rom_22E1D0: @ 0x0822E1D0
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 3つは あるそうだよ"
	.byte EOS
	.if (. - gText_Rom_22E1D0) > 0x29
	.error "gText_Rom_22E1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E1D0) < 0x29
	.space 0x29 - (. - gText_Rom_22E1D0)
	.endif
