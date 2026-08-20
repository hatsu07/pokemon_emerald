	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF34
gText_Rom_24AF34: @ 0x0824AF34
	.string "かっこいい　アピールを　した\nポケモンを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24AF34) != 0x1f
	.error "gText_Rom_24AF34 must retain its original byte length"
	.endif
