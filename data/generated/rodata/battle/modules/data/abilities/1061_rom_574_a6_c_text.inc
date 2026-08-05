	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gText_Rom_574A6C
gText_Rom_574A6C: @ 0x08574A6C
	.string "はやおき$"
	.if (. - gText_Rom_574A6C) > 0x5
	.error "gText_Rom_574A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A6C) < 0x5
	.space 0x5 - (. - gText_Rom_574A6C)
	.endif
