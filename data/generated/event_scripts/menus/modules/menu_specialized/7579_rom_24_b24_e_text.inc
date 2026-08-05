	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B24E
gText_Rom_24B24E: @ 0x0824B24E
	.string "アピールが　うまくいった　ポケモン\nみんなを　かなり　おどろかす$"
	.if (. - gText_Rom_24B24E) != 0x21
	.error "gText_Rom_24B24E must retain its original byte length"
	.endif
