	@ src/data/abilities.h:265 abilities_line_265 (+1 aliases)
	.globl gText_Rom_574B21
gText_Rom_574B21: @ 0x08574B21
	.string "ようりょくそ$"
	.if (. - gText_Rom_574B21) > 0x7
	.error "gText_Rom_574B21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B21) < 0x7
	.space 0x7 - (. - gText_Rom_574B21)
	.endif
