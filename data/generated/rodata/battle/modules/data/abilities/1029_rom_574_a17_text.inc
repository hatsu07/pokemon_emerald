	@ src/data/abilities.h:82 abilities_line_82 (+1 aliases)
	.globl gText_Rom_574A17
gText_Rom_574A17: @ 0x08574A17
	.string "ちくでん$"
	.if (. - gText_Rom_574A17) > 0x5
	.error "gText_Rom_574A17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A17) < 0x5
	.space 0x5 - (. - gText_Rom_574A17)
	.endif
