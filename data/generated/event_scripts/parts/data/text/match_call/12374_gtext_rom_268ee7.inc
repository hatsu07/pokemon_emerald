	@ data/text/match_call.inc:460 MatchCall_BattleFrontierRecordStreakText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_268EE7
gText_Rom_268EE7: @ 0x08268EE7
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんだってね!\lすごいなあ\pおれ? おれは まあ ぼちぼちかなー\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_268EE7) != 0x48
	.error "gText_Rom_268EE7 must retain its original byte length"
	.endif
