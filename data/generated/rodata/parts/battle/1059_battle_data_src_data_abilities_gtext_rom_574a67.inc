	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gText_Rom_574A67
gText_Rom_574A67: @ 0x08574A67
	.string "はっこう$"
	.if (. - gText_Rom_574A67) > 0x5
	.error "gText_Rom_574A67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A67) < 0x5
	.space 0x5 - (. - gText_Rom_574A67)
	.endif
