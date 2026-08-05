	@ src/data/abilities.h:408 abilities_line_408 (+1 aliases)
	.globl gText_Rom_574B0E
gText_Rom_574B0E: @ 0x08574B0E
	.string "ものひろい$"
	.if (. - gText_Rom_574B0E) > 0x6
	.error "gText_Rom_574B0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B0E) < 0x6
	.space 0x6 - (. - gText_Rom_574B0E)
	.endif
