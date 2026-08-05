	@ src/data/abilities.h:90 abilities_line_90 (+1 aliases)
	.globl gText_Rom_574A1C
gText_Rom_574A1C: @ 0x08574A1C
	.string "ちょすい$"
	.if (. - gText_Rom_574A1C) > 0x5
	.error "gText_Rom_574A1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A1C) < 0x5
	.space 0x5 - (. - gText_Rom_574A1C)
	.endif
