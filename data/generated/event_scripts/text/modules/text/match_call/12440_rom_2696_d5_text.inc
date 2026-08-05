	@ data/text/match_call.inc:544 MatchCall_BattlePikeText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2696D5
gText_Rom_2696D5: @ 0x082696D5
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2}で\n{STR_VAR_3}へやも とっぱ したんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2696D5) != 0x40
	.error "gText_Rom_2696D5 must retain its original byte length"
	.endif
