	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE4F
gText_Rom_24AE4F: @ 0x0824AE4F
	.string "アピールが　おわっている　ポケモン\nみんなを　かなり　おどろかす$"
	.if (. - gText_Rom_24AE4F) != 0x21
	.error "gText_Rom_24AE4F must retain its original byte length"
	.endif
