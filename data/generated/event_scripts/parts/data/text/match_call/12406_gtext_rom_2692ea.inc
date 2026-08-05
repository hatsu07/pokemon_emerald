	@ data/text/match_call.inc:502 MatchCall_BattleDomeText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2692EA
gText_Rom_2692EA: @ 0x082692EA
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2}で\n{STR_VAR_3}かいも ゆうしょう したんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2692EA) != 0x42
	.error "gText_Rom_2692EA must retain its original byte length"
	.endif
