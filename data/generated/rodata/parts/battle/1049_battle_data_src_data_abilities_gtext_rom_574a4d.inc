	@ src/data/abilities.h:385 abilities_line_385 (+1 aliases)
	.globl gText_Rom_574A4D
gText_Rom_574A4D: @ 0x08574A4D
	.string "にげあし$"
	.if (. - gText_Rom_574A4D) > 0x5
	.error "gText_Rom_574A4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A4D) < 0x5
	.space 0x5 - (. - gText_Rom_574A4D)
	.endif
