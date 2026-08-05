	@ data/text/match_call.inc:58 MatchCall_NegativeBattleText5 (+1 aliases)
	.globl gText_Rom_2657BD
gText_Rom_2657BD: @ 0x082657BD
	.string "やあ {PLAYER}\n{STR_VAR_1} だよ\pちょうしは どうだい?\nおれは しょうぶ しても\lあまり かてないんだよ\pちょうし わるいなあ\nじゃあ またな$"
	.if (. - gText_Rom_2657BD) > 0x44
	.error "gText_Rom_2657BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2657BD) < 0x44
	.space 0x44 - (. - gText_Rom_2657BD)
	.endif
