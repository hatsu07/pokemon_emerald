	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE12
gText_Rom_24AE12: @ 0x0824AE12
	.string "アピールが　おわっている　ポケモン\nみんなを　おどろかす{EOS}"
	.if (. - gText_Rom_24AE12) != 0x1d
	.error "gText_Rom_24AE12 must retain its original byte length"
	.endif
