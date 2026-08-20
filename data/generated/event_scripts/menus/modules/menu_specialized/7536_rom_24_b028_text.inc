	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24B028
gText_Rom_24B028: @ 0x0824B028
	.string "ちょうしの　いい　ポケモン\nみんなを　かなり　おどろかす{EOS}"
	.if (. - gText_Rom_24B028) != 0x1d
	.error "gText_Rom_24B028 must retain its original byte length"
	.endif
