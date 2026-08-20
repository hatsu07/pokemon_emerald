	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2DA
gText_Rom_24B2DA: @ 0x0824B2DA
	.string "テクスチャー{EOS}"
	.if (. - gText_Rom_24B2DA) > 0x7
	.error "gText_Rom_24B2DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2DA) < 0x7
	.space 0x7 - (. - gText_Rom_24B2DA)
	.endif
