	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:278 BattlePyramid_Text_ThreeItemsRemaining3
	.globl gText_Rom_22DDCD
gText_Rom_22DDCD: @ 0x0822DDCD
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 3つほど あるそうだよ!$"
	.if (. - gText_Rom_22DDCD) > 0x29
	.error "gText_Rom_22DDCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DDCD) < 0x29
	.space 0x29 - (. - gText_Rom_22DDCD)
	.endif
