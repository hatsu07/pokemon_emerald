	@ src/data/abilities.h:280 abilities_line_280 (+1 aliases)
	.globl gText_Rom_574A3F
gText_Rom_574A3F: @ 0x08574A3F
	.string "トレース$"
	.if (. - gText_Rom_574A3F) > 0x5
	.error "gText_Rom_574A3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A3F) < 0x5
	.space 0x5 - (. - gText_Rom_574A3F)
	.endif
