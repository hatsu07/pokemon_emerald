	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B1B6
gText_Rom_24B1B6: @ 0x0824B1B6
	.string "このつぎの　アピールを\nはじめの　ほうに　だすことが　できる$"
	.if (. - gText_Rom_24B1B6) != 0x1f
	.error "gText_Rom_24B1B6 must retain its original byte length"
	.endif
