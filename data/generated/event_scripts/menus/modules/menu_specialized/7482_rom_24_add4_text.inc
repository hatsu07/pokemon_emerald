	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADD4
gText_Rom_24ADD4: @ 0x0824ADD4
	.string "アピールが　おわっている　ポケモン\nみんなを　ちょっと　おどろかす{EOS}"
	.if (. - gText_Rom_24ADD4) != 0x22
	.error "gText_Rom_24ADD4 must retain its original byte length"
	.endif
