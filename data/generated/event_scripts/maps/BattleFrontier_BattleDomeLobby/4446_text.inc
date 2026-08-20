	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:630 BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound
	.globl gText_Rom_227C4A
gText_Rom_227C4A: @ 0x08227C4A
	.string "1かいせんで いきなり\nゆうしょうこうほと あたっちゃって\lもう ボコボコに やられたよ……{EOS}"
	.if (. - gText_Rom_227C4A) > 0x2f
	.error "gText_Rom_227C4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227C4A) < 0x2f
	.space 0x2f - (. - gText_Rom_227C4A)
	.endif
