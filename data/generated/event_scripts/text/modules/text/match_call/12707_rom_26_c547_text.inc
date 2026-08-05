	@ data/text/match_call.inc:934 MatchCall_Text_MrStone6
	.globl gText_Rom_26C547
gText_Rom_26C547: @ 0x0826C547
	.string "ツワブキ『ええっ!\nきみは じぶんの おとうさんと\lポケモンしょうぶを して かったのかい?\pこりゃ びっくりだ!\nわしは すごい ひとと ともだちに\lなっちゃったんだなあ! わはは!"
	.byte EOS
	.if (. - gText_Rom_26C547) > 0x5d
	.error "gText_Rom_26C547 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C547) < 0x5d
	.space 0x5d - (. - gText_Rom_26C547)
	.endif
