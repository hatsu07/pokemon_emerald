	@ data/text/match_call.inc:190 MatchCall_DifferentRouteBattleRequestText7
	.globl gText_Rom_26649E
gText_Rom_26649E: @ 0x0826649E
	.string "あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pどう? ポケモン そだってる?\nぼくの ポケモンも つよくなったから\lきみに みせたいなあ\p{STR_VAR_2}で まってるから\nしょうぶ しに きてくれよ\pじゃあ また$"
	.if (. - gText_Rom_26649E) > 0x60
	.error "gText_Rom_26649E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26649E) < 0x60
	.space 0x60 - (. - gText_Rom_26649E)
	.endif
