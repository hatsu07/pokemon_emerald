	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AFAE
gText_Rom_24AFAE: @ 0x0824AFAE
	.string "たくましい　アピールを　した\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AFAE) != 0x1f
	.error "gText_Rom_24AFAE must retain its original byte length"
	.endif
