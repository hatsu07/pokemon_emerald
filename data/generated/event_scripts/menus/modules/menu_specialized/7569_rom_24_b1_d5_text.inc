	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B1D5
gText_Rom_24B1D5: @ 0x0824B1D5
	.string "このつぎの　アピールを\nおわりの　ほうに　だすことが　できる$"
	.if (. - gText_Rom_24B1D5) != 0x1f
	.error "gText_Rom_24B1D5 must retain its original byte length"
	.endif
