	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD38
gText_Rom_24AD38: @ 0x0824AD38
	.string "ほかの　ポケモンに　おどかされても\n1ど　くらいは　がまんできる$"
	.if (. - gText_Rom_24AD38) != 0x21
	.error "gText_Rom_24AD38 must retain its original byte length"
	.endif
