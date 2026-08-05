	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AEF0
gText_Rom_24AEF0: @ 0x0824AEF0
	.string "みんなの　じゃまを　しまくって\nつぎの　アピールは　さんか　しない$"
	.if (. - gText_Rom_24AEF0) != 0x22
	.error "gText_Rom_24AEF0 must retain its original byte length"
	.endif
