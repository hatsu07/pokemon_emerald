	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AE70
gText_Rom_24AE70: @ 0x0824AE70
	.string "じぶんの　まえに　アピールした\nポケモンを　おどろかす{EOS}"
	.if (. - gText_Rom_24AE70) != 0x1c
	.error "gText_Rom_24AE70 must retain its original byte length"
	.endif
