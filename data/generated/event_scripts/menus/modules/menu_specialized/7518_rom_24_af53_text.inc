	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF53
gText_Rom_24AF53: @ 0x0824AF53
	.string "うつくしい　アピールを　した\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AF53) != 0x1f
	.error "gText_Rom_24AF53 must retain its original byte length"
	.endif
