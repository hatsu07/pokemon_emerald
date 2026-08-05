	@ data/text/match_call.inc:97 MatchCall_PositiveBattleText4
	.globl gText_Rom_265B1F
gText_Rom_265B1F: @ 0x08265B1F
	.string "やあ {PLAYER}\n{STR_VAR_1} だ\pさっき しょうぶ したんだけど\nなんとか かつ ことが できたよ\pぼくの {STR_VAR_2}が\nすごく がんばったんだ$"
	.if (. - gText_Rom_265B1F) > 0x40
	.error "gText_Rom_265B1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265B1F) < 0x40
	.space 0x40 - (. - gText_Rom_265B1F)
	.endif
