	@ data/text/match_call.inc:85 MatchCall_NegativeBattleText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265A0A
gText_Rom_265A0A: @ 0x08265A0A
	.string "あら {PLAYER}{KUN}\n{STR_VAR_1} よ\pちょうしは どうなの?\nたまには いえに かえらないと だめよ\lじゃあ またね$"
	.if (. - gText_Rom_265A0A) != 0x35
	.error "gText_Rom_265A0A must retain its original byte length"
	.endif
