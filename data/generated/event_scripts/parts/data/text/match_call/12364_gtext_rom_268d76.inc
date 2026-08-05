	@ data/text/match_call.inc:445 MatchCall_BattleFrontierStreakText14 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_268D76
gText_Rom_268D76: @ 0x08268D76
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね$"
	.if (. - gText_Rom_268D76) != 0x4b
	.error "gText_Rom_268D76 must retain its original byte length"
	.endif
