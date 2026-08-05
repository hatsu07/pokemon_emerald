	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B0CC
gText_Rom_24B0CC: @ 0x0824B0CC
	.string "みんなの　あとで　アピールするほど\nすごい　アピールに　みせられる$"
	.if (. - gText_Rom_24B0CC) != 0x22
	.error "gText_Rom_24B0CC must retain its original byte length"
	.endif
