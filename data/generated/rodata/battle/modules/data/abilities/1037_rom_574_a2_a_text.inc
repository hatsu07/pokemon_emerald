	@ src/data/abilities.h:251 abilities_line_251 (+1 aliases)
	.globl gText_Rom_574A2A
gText_Rom_574A2A: @ 0x08574A2A
	.string "てんのめぐみ$"
	.if (. - gText_Rom_574A2A) > 0x7
	.error "gText_Rom_574A2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A2A) < 0x7
	.space 0x7 - (. - gText_Rom_574A2A)
	.endif
	@ Decoded text from ROM range: offset=0x574A31, size=0x3
	.string "どく$"
