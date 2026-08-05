	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B22F
gText_Rom_24B22F: @ 0x0824B22F
	.string "どの　コンテストで　みせても\nかならず　もりあがる　アピール$"
	.if (. - gText_Rom_24B22F) != 0x1f
	.error "gText_Rom_24B22F must retain its original byte length"
	.endif
