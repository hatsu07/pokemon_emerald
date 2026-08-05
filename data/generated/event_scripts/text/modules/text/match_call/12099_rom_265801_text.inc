	@ data/text/match_call.inc:64 MatchCall_NegativeBattleText7
	.globl gText_Rom_265801
gText_Rom_265801: @ 0x08265801
	.string "{STR_VAR_1} だけどー\nさいきん どう?\pきのう しょうぶに まけてさ\nそのことで あたまが いっぱいなんだ\pたいさく かんがえないと・・・\nじゃあ また$"
	.if (. - gText_Rom_265801) > 0x4a
	.error "gText_Rom_265801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265801) < 0x4a
	.space 0x4a - (. - gText_Rom_265801)
	.endif
