	@ data/text/match_call.inc:532 MatchCall_BattlePikeText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2695D8
gText_Rom_2695D8: @ 0x082695D8
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}も へやを\nとっぱ したんだって?\pすごいなあ\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2695D8) != 0x41
	.error "gText_Rom_2695D8 must retain its original byte length"
	.endif
