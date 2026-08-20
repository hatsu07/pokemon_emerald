	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B178
gText_Rom_24B178: @ 0x0824B178
	.string "アピールの　ちょうしが　あがる\nきんちょうも　しにくくなる{EOS}"
	.if (. - gText_Rom_24B178) > 0x1e
	.error "gText_Rom_24B178 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B178) < 0x1e
	.space 0x1e - (. - gText_Rom_24B178)
	.endif
