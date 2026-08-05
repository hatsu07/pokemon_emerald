	@ data/text/match_call.inc:88 MatchCall_PositiveBattleText1
	.globl gText_Rom_265A3F
gText_Rom_265A3F: @ 0x08265A3F
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です!\pさっき しょうぶ したんだけど\nかったよ! かったよ!\pぼくの {STR_VAR_2} が\nすごく がんばったんだ! うれしいなー$"
	.if (. - gText_Rom_265A3F) > 0x4c
	.error "gText_Rom_265A3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265A3F) < 0x4c
	.space 0x4c - (. - gText_Rom_265A3F)
	.endif
