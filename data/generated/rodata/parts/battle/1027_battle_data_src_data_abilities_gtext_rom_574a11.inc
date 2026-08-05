	@ src/data/abilities.h:289 abilities_line_289 (+1 aliases)
	.globl gText_Rom_574A11
gText_Rom_574A11: @ 0x08574A11
	.string "ちからもち$"
	.if (. - gText_Rom_574A11) > 0x6
	.error "gText_Rom_574A11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A11) < 0x6
	.space 0x6 - (. - gText_Rom_574A11)
	.endif
