	@ src/data/abilities.h:533 abilities_line_533 (+1 aliases)
	.globl gText_Rom_574A7E
gText_Rom_574A7E: @ 0x08574A7E
	.string "ひでり$"
	.if (. - gText_Rom_574A7E) > 0x4
	.error "gText_Rom_574A7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A7E) < 0x4
	.space 0x4 - (. - gText_Rom_574A7E)
	.endif
