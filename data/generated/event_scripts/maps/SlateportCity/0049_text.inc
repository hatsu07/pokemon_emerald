	@ data/maps/SlateportCity/scripts.inc:1042 SlateportCity_Text_RemindsMeOfLongLineForGames
	.globl gText_Rom_1DCE2D
gText_Rom_1DCE2D: @ 0x081DCE2D
	.string "ぎょうれつ というと\nだいにんきの ゲームを かったときを\lおもいだすなあ……$"
	.if (. - gText_Rom_1DCE2D) > 0x28
	.error "gText_Rom_1DCE2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE2D) < 0x28
	.space 0x28 - (. - gText_Rom_1DCE2D)
	.endif
