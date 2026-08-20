	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:302 BattlePyramid_Text_FourItemsRemaining4
	.globl gText_Rom_22DF19
gText_Rom_22DF19: @ 0x0822DF19
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 4つ おちているらしいわ!{EOS}"
	.if (. - gText_Rom_22DF19) > 0x29
	.error "gText_Rom_22DF19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DF19) < 0x29
	.space 0x29 - (. - gText_Rom_22DF19)
	.endif
