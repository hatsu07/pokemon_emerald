	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2B0
gText_Rom_24B2B0: @ 0x0824B2B0
	.string "あまごい{EOS}"
	.if (. - gText_Rom_24B2B0) > 0x5
	.error "gText_Rom_24B2B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2B0) < 0x5
	.space 0x5 - (. - gText_Rom_24B2B0)
	.endif
