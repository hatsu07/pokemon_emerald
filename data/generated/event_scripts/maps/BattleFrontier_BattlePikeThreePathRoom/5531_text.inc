	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:317 BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack
	.globl gText_Rom_2341E4
gText_Rom_2341E4: @ 0x082341E4
	.string "みちが とざされている!\nひきかえすことは できない……"
	.byte EOS
	.if (. - gText_Rom_2341E4) > 0x1d
	.error "gText_Rom_2341E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2341E4) < 0x1d
	.space 0x1d - (. - gText_Rom_2341E4)
	.endif
