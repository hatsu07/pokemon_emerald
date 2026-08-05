	@ data/text/match_call.inc:370 MatchCall_PersonalizedText53
	.globl gText_Rom_268211
gText_Rom_268211: @ 0x08268211
	.string "{STR_VAR_1}だ\nポケモンと きょうりょく すれば\lしぜんの なかでも\lかいてきに くらせる ものだよ\pみんな それに きが ついて\nもっと ポケモンと\lきょうりょく できるように なれば\lいいのにな!\pきみは けっこう いいセン\nいってると おもうよ!\lじゃ またな!$"
	.if (. - gText_Rom_268211) > 0x83
	.error "gText_Rom_268211 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268211) < 0x83
	.space 0x83 - (. - gText_Rom_268211)
	.endif
