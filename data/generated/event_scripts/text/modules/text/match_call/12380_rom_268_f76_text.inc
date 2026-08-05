	@ data/text/match_call.inc:424 MatchCall_BattleFrontierStreakText7 (+1 aliases)
	.globl gText_Rom_268F76
gText_Rom_268F76: @ 0x08268F76
	.string "えーと あ {PLAYER}{KUN}?\n{STR_VAR_1} だ・・・\pそういえば {STR_VAR_2} で\n{STR_VAR_3}れんしょう したんだってね\pあ! いま めずらしい ポケモンを\nみつけたから じゃあ また!"
	.byte EOS
	.if (. - gText_Rom_268F76) > 0x50
	.error "gText_Rom_268F76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268F76) < 0x50
	.space 0x50 - (. - gText_Rom_268F76)
	.endif
