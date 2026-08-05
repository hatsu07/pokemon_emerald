	@ src/data/abilities.h:327 abilities_line_327 (+1 aliases)
	.globl gText_Rom_5749C1
gText_Rom_5749C1: @ 0x085749C1
	.string "じりょく$"
	.if (. - gText_Rom_5749C1) > 0x5
	.error "gText_Rom_5749C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749C1) < 0x5
	.space 0x5 - (. - gText_Rom_5749C1)
	.endif
