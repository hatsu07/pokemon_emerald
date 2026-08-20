	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:296 BattlePyramid_Text_SixItemsRemaining4
	.globl gText_Rom_22DEC7
gText_Rom_22DEC7: @ 0x0822DEC7
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 6つ おちているらしいわ!{EOS}"
	.if (. - gText_Rom_22DEC7) > 0x29
	.error "gText_Rom_22DEC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DEC7) < 0x29
	.space 0x29 - (. - gText_Rom_22DEC7)
	.endif
