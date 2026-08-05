	@ data/text/match_call.inc:208 MatchCall_DifferentRouteBattleRequestText13
	.globl gText_Rom_26671B
gText_Rom_26671B: @ 0x0826671B
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pポケモンは げんきに しとるかね?\nわしの ポケモンも\lまけない ぐらい げんきに しておるよ\pまた しょうぶ してみたいので\n{STR_VAR_2}の ちかくに きたら\pあいに きてくれんかのう\nでは またの$"
	.if (. - gText_Rom_26671B) > 0x6f
	.error "gText_Rom_26671B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26671B) < 0x6f
	.space 0x6f - (. - gText_Rom_26671B)
	.endif
