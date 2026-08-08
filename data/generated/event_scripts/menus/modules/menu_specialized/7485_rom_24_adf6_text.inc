	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADF6
gText_Rom_24ADF6: @ 0x0824ADF6
	.string "じぶんの　まえに　アピールした\nポケモンを　おどろかす$"
	.if (. - gText_Rom_24ADF6) != 0x1c
	.error "gText_Rom_24ADF6 must retain its original byte length"
	.endif
