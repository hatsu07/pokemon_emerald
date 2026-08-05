	@ data/text/match_call.inc:187 MatchCall_DifferentRouteBattleRequestText6
	.globl gText_Rom_266443
gText_Rom_266443: @ 0x08266443
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\lげんきで やってるかい?\pまた きみと ポケモンしょうぶを\nしてみたいんだけど どうだい?\pしょうぶ したくなったら\n{STR_VAR_2}に きてくれよ\pじゃあ また$"
	.if (. - gText_Rom_266443) > 0x5b
	.error "gText_Rom_266443 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266443) < 0x5b
	.space 0x5b - (. - gText_Rom_266443)
	.endif
