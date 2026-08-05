	@ src/data/abilities.h:547 abilities_line_547 (+1 aliases)
	.globl gText_Rom_574B1D
gText_Rom_574B1D: @ 0x08574B1D
	.string "やるき$"
	.if (. - gText_Rom_574B1D) > 0x4
	.error "gText_Rom_574B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B1D) < 0x4
	.space 0x4 - (. - gText_Rom_574B1D)
	.endif
