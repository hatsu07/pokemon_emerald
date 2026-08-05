	@ data/text/match_call.inc:58 MatchCall_NegativeBattleText5 (+1 aliases)
	.globl gText_Rom_265779
gText_Rom_265779: @ 0x08265779
	.string "やあ {PLAYER}\n{STR_VAR_1} だよ\pちょうしは どうだい?\nおれは しょうぶ しても\lあまり かてないんだよ\pちょうし わるいなあ\nじゃあ またな$"
	.if (. - gText_Rom_265779) > 0x44
	.error "gText_Rom_265779 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265779) < 0x44
	.space 0x44 - (. - gText_Rom_265779)
	.endif
