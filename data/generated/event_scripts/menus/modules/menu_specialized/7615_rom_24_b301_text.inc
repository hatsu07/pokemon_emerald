	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B301
gText_Rom_24B301: @ 0x0824B301
	.string "うつくしい{EOS}"
	.if (. - gText_Rom_24B301) > 0x6
	.error "gText_Rom_24B301 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B301) < 0x6
	.space 0x6 - (. - gText_Rom_24B301)
	.endif
