	@ src/data/abilities.h:505 abilities_line_505 (+1 aliases)
	.globl gText_Rom_574B0A
gText_Rom_574B0A: @ 0x08574B0A
	.string "もうか$"
	.if (. - gText_Rom_574B0A) > 0x4
	.error "gText_Rom_574B0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B0A) < 0x4
	.space 0x4 - (. - gText_Rom_574B0A)
	.endif
