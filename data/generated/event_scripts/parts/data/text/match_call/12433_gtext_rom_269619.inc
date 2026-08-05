	@ data/text/match_call.inc:535 MatchCall_BattlePikeText2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269619
gText_Rom_269619: @ 0x08269619
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で{STR_VAR_3}へやも\nかちぬいたんですって?\pわたしも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269619) != 0x41
	.error "gText_Rom_269619 must retain its original byte length"
	.endif
