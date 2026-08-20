	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:344 BattlePyramid_Text_EightItemsRemaining6
	.globl gText_Rom_22E103
gText_Rom_22E103: @ 0x0822E103
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 8つは あるそうだよ{EOS}"
	.if (. - gText_Rom_22E103) > 0x29
	.error "gText_Rom_22E103 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E103) < 0x29
	.space 0x29 - (. - gText_Rom_22E103)
	.endif

	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:347 BattlePyramid_Text_SevenItemsRemaining6
	.globl gText_Rom_22E12C
gText_Rom_22E12C: @ 0x0822E12C
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 7つは あるそうだよ"
	.byte EOS
	.if (. - gText_Rom_22E12C) > 0x29
	.error "gText_Rom_22E12C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E12C) < 0x29
	.space 0x29 - (. - gText_Rom_22E12C)
	.endif
