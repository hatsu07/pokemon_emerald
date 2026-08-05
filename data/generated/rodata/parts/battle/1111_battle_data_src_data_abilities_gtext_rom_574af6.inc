	@ src/data/abilities.h:519 abilities_line_519 (+1 aliases)
	.globl gText_Rom_574AF6
gText_Rom_574AF6: @ 0x08574AF6
	.string "むしのしらせ$"
	.if (. - gText_Rom_574AF6) > 0x7
	.error "gText_Rom_574AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AF6) < 0x7
	.space 0x7 - (. - gText_Rom_574AF6)
	.endif
