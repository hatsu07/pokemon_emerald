	@ src/data/abilities.h:451 abilities_line_451 (+1 aliases)
	.globl gText_Rom_574A25
gText_Rom_574A25: @ 0x08574A25
	.string "てんきや$"
	.if (. - gText_Rom_574A25) > 0x5
	.error "gText_Rom_574A25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A25) < 0x5
	.space 0x5 - (. - gText_Rom_574A25)
	.endif
