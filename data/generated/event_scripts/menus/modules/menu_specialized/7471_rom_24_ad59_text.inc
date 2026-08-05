	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AD59
gText_Rom_24AD59: @ 0x0824AD59
	.string "ほかの　ポケモンに　おどかされても\nがまんできる$"
	.if (. - gText_Rom_24AD59) != 0x19
	.error "gText_Rom_24AD59 must retain its original byte length"
	.endif
