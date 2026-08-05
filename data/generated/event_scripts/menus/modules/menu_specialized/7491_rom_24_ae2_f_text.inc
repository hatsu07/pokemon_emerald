	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE2F
gText_Rom_24AE2F: @ 0x0824AE2F
	.string "じぶんの　まえに　アピールした\nポケモンを　かなり　おどろかす$"
	.if (. - gText_Rom_24AE2F) != 0x20
	.error "gText_Rom_24AE2F must retain its original byte length"
	.endif
