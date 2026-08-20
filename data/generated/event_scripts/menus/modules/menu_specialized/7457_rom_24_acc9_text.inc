	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ACC9
gText_Rom_24ACC9: @ 0x0824ACC9
	.string "たくさん　アピール　できる{EOS}"
	.if (. - gText_Rom_24ACC9) != 0xe
	.error "gText_Rom_24ACC9 must retain its original byte length"
	.endif
