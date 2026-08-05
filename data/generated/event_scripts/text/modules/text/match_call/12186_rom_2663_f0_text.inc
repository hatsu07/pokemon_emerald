	@ data/text/match_call.inc:184 MatchCall_DifferentRouteBattleRequestText5
	.globl gText_Rom_2663F0
gText_Rom_2663F0: @ 0x082663F0
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\pおれの ポケモン\nけっこう いいかんじに そだってきたよ\pきみと もういちど\nしょうぶ してみたいなあ\p{STR_VAR_2} で まってるよ\nじゃあね$"
	.if (. - gText_Rom_2663F0) > 0x53
	.error "gText_Rom_2663F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2663F0) < 0x53
	.space 0x53 - (. - gText_Rom_2663F0)
	.endif
