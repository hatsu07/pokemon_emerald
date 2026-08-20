	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:599 BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough
	.globl gText_Rom_227B52
gText_Rom_227B52: @ 0x08227B52
	.string "きみは みた?\nぜんかいの バトルトーナメント!\pゆうしょう した\n{STR_VAR_1}は ほんと つよかったんだよ\pパソコンの よこに ある モニターで\nけっかを みてみると いいよ{EOS}"
	.if (. - gText_Rom_227B52) > 0x55
	.error "gText_Rom_227B52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227B52) < 0x55
	.space 0x55 - (. - gText_Rom_227B52)
	.endif
