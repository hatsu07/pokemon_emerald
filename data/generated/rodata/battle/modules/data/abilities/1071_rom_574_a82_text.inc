	@ src/data/abilities.h:243 abilities_line_243 (+1 aliases)
	.globl gText_Rom_574A82
gText_Rom_574A82: @ 0x08574A82
	.string "ひらいしん$"
	.if (. - gText_Rom_574A82) > 0x6
	.error "gText_Rom_574A82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A82) < 0x6
	.space 0x6 - (. - gText_Rom_574A82)
	.endif
