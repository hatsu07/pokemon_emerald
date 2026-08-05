	@ src/data/abilities.h:461 abilities_line_461 (+1 aliases)
	.globl gText_Rom_574A52
gText_Rom_574A52: @ 0x08574A52
	.string "ねんちゃく$"
	.if (. - gText_Rom_574A52) > 0x6
	.error "gText_Rom_574A52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A52) < 0x6
	.space 0x6 - (. - gText_Rom_574A52)
	.endif
