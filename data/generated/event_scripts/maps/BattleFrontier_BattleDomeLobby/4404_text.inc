	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:517 BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney
	.globl gText_Rom_227828
gText_Rom_227828: @ 0x08227828
	.string "バトルトーナメント ゆうしょう\nおめでとう ございます!{EOS}"
	.if (. - gText_Rom_227828) > 0x1d
	.error "gText_Rom_227828 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227828) < 0x1d
	.space 0x1d - (. - gText_Rom_227828)
	.endif
