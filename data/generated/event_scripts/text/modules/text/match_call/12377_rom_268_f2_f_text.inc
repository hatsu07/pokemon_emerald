	@ data/text/match_call.inc:463 MatchCall_BattleFrontierRecordStreakText6
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_268F2F
gText_Rom_268F2F: @ 0x08268F2F
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだってね\pおれも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_268F2F) != 0x47
	.error "gText_Rom_268F2F must retain its original byte length"
	.endif
