	@ src/data/abilities.h:491 abilities_line_491 (+1 aliases)
	.globl gText_Rom_574AB0
gText_Rom_574AB0: @ 0x08574AB0
	.string "ヘドロえき$"
	.if (. - gText_Rom_574AB0) > 0x6
	.error "gText_Rom_574AB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AB0) < 0x6
	.space 0x6 - (. - gText_Rom_574AB0)
	.endif
