	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:284 BattlePyramid_Text_OneItemRemaining3
	.globl gText_Rom_22DE1F
gText_Rom_22DE1F: @ 0x0822DE1F
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 1つだけ あるそうだよ!{EOS}"
	.if (. - gText_Rom_22DE1F) > 0x29
	.error "gText_Rom_22DE1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DE1F) < 0x29
	.space 0x29 - (. - gText_Rom_22DE1F)
	.endif
