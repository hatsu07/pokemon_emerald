	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD72
gText_Rom_24AD72: @ 0x0824AD72
	.string "ほかの　ポケモンに　おどかされても\nすこし　くらいなら　がまんできる$"
	.if (. - gText_Rom_24AD72) != 0x23
	.error "gText_Rom_24AD72 must retain its original byte length"
	.endif
