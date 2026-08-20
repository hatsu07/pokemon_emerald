	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF72
gText_Rom_24AF72: @ 0x0824AF72
	.string "かわいい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AF72) != 0x1e
	.error "gText_Rom_24AF72 must retain its original byte length"
	.endif
