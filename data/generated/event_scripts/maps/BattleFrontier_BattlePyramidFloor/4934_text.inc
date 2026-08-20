	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:287 BattlePyramid_Text_ZeroItemsRemaining3
	.globl gText_Rom_22DE48
gText_Rom_22DE48: @ 0x0822DE48
	.string "どうぐは たりている?\pこの だんには\nもう どうぐが ないらしいから\lきを つけてね!{EOS}"
	.if (. - gText_Rom_22DE48) > 0x2d
	.error "gText_Rom_22DE48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DE48) < 0x2d
	.space 0x2d - (. - gText_Rom_22DE48)
	.endif
