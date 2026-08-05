	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:314 BattlePyramid_Text_ZeroItemsRemaining4
	.globl gText_Rom_22DFBD
gText_Rom_22DFBD: @ 0x0822DFBD
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nもう 1つも おちてないらしいわ!$"
	.if (. - gText_Rom_22DFBD) > 0x2a
	.error "gText_Rom_22DFBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DFBD) < 0x2a
	.space 0x2a - (. - gText_Rom_22DFBD)
	.endif
