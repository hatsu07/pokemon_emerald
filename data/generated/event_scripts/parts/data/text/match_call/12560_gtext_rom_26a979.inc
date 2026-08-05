	@ data/text/match_call.inc:715 MatchCall_Text_Glacia
	.globl gText_Rom_26A979
gText_Rom_26A979: @ 0x0826A979
	.string "プリム『こんにちは {PLAYER}\pあなたは その つよさに\nおぼれたり していない でしょうね\pあつい きもちを すこしだけ\nひやしたいと おもったら\lポケモン リーグに いらっしゃい……"
	.byte EOS
	.if (. - gText_Rom_26A979) > 0x5b
	.error "gText_Rom_26A979 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A979) < 0x5b
	.space 0x5b - (. - gText_Rom_26A979)
	.endif
