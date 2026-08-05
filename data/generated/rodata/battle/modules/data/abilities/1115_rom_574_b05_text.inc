	@ src/data/abilities.h:135 abilities_line_135 (+1 aliases)
	.globl gText_Rom_574B05
gText_Rom_574B05: @ 0x08574B05
	.string "めんえき$"
	.if (. - gText_Rom_574B05) > 0x5
	.error "gText_Rom_574B05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B05) < 0x5
	.space 0x5 - (. - gText_Rom_574B05)
	.endif
