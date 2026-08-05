	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE8C
gText_Rom_24AE8C: @ 0x0824AE8C
	.string "アピールが　おわっている　ポケモン\nみんなを　おどろかす$"
	.if (. - gText_Rom_24AE8C) != 0x1d
	.error "gText_Rom_24AE8C must retain its original byte length"
	.endif
