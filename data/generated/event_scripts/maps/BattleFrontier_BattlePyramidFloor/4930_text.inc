	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:281 BattlePyramid_Text_TwoItemsRemaining3
	.globl gText_Rom_22DDF6
gText_Rom_22DDF6: @ 0x0822DDF6
	.string "どうぐは たりている?\pこの だんには\nどうぐが あと 2つほど あるそうだよ!{EOS}"
	.if (. - gText_Rom_22DDF6) > 0x29
	.error "gText_Rom_22DDF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DDF6) < 0x29
	.space 0x29 - (. - gText_Rom_22DDF6)
	.endif
