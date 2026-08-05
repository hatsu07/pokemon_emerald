	@ src/data/abilities.h:356 abilities_line_356 (+1 aliases)
	.globl gText_Rom_574AA9
gText_Rom_574AA9: @ 0x08574AA9
	.string "プレッシャー$"
	.if (. - gText_Rom_574AA9) > 0x7
	.error "gText_Rom_574AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA9) < 0x7
	.space 0x7 - (. - gText_Rom_574AA9)
	.endif
