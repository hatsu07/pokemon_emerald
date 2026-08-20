	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24ADB3
gText_Rom_24ADB3: @ 0x0824ADB3
	.string "じぶんの　まえに　アピールした\nポケモンを　ちょっと　おどろかす{EOS}"
	.if (. - gText_Rom_24ADB3) != 0x21
	.error "gText_Rom_24ADB3 must retain its original byte length"
	.endif
