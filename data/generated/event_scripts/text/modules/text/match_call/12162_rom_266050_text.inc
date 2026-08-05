	@ data/text/match_call.inc:148 MatchCall_SameRouteBattleRequestText7
	.globl gText_Rom_266050
gText_Rom_266050: @ 0x08266050
	.string "・・・あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pへー いま {STR_VAR_2}に いるの?\nじゃあ しょうぶ しよう これから\pおれの ポケモンを みせてあげるよ\nじゃあ まってるよ$"
	.if (. - gText_Rom_266050) > 0x52
	.error "gText_Rom_266050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266050) < 0x52
	.space 0x52 - (. - gText_Rom_266050)
	.endif
