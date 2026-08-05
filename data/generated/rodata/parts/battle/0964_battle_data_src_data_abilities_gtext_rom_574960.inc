	@ src/data/abilities.h:35 abilities_line_35 (+1 aliases)
	.globl gText_Rom_574960
gText_Rom_574960: @ 0x08574960
	.string "カブトアーマー$"
	.if (. - gText_Rom_574960) > 0x8
	.error "gText_Rom_574960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574960) < 0x8
	.space 0x8 - (. - gText_Rom_574960)
	.endif
