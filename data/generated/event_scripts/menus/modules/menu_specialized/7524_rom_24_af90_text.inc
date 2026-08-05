	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF90
gText_Rom_24AF90: @ 0x0824AF90
	.string "かしこい　アピールを　した\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AF90) != 0x1e
	.error "gText_Rom_24AF90 must retain its original byte length"
	.endif
