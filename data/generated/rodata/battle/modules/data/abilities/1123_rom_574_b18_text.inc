	@ src/data/abilities.h:143 abilities_line_143 (+1 aliases)
	.globl gText_Rom_574B18
gText_Rom_574B18: @ 0x08574B18
	.string "もらいび$"
	.if (. - gText_Rom_574B18) > 0x5
	.error "gText_Rom_574B18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B18) < 0x5
	.space 0x5 - (. - gText_Rom_574B18)
	.endif
