	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ACD7
gText_Rom_24ACD7: @ 0x0824ACD7
	.string "この　アピールの　あと\nびっくり　しやすく　なってしまう{EOS}"
	.if (. - gText_Rom_24ACD7) != 0x1d
	.error "gText_Rom_24ACD7 must retain its original byte length"
	.endif
