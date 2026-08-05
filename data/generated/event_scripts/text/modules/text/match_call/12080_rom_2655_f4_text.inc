	@ data/text/match_call.inc:40 MatchCall_WildBattleText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2655F4
gText_Rom_2655F4: @ 0x082655F4
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pさっき {STR_VAR_2}ちゃんを\nつかまえようと したんだけど\pにげられちゃったのよ ざんねん!\nじゃあ またね$"
	.if (. - gText_Rom_2655F4) != 0x46
	.error "gText_Rom_2655F4 must retain its original byte length"
	.endif
