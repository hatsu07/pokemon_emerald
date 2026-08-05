	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AECD
gText_Rom_24AECD: @ 0x0824AECD
	.string "しんさいんに　ちゅうもく　されている\nポケモンを　とくに　おどろかす$"
	.if (. - gText_Rom_24AECD) != 0x23
	.error "gText_Rom_24AECD must retain its original byte length"
	.endif
