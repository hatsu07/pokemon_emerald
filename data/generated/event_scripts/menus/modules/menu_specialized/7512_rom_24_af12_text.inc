	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24AF12
gText_Rom_24AF12: @ 0x0824AF12
	.string "おなじ　タイプの　アピールを　した\nポケモンを　とくに　おどろかす{EOS}"
	.if (. - gText_Rom_24AF12) != 0x22
	.error "gText_Rom_24AF12 must retain its original byte length"
	.endif
