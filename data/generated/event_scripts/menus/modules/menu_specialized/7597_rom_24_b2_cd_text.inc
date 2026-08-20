	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B2CD
gText_Rom_24B2CD: @ 0x0824B2CD
	.string "つのでつく{EOS}"
	.if (. - gText_Rom_24B2CD) > 0x6
	.error "gText_Rom_24B2CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B2CD) < 0x6
	.space 0x6 - (. - gText_Rom_24B2CD)
	.endif
