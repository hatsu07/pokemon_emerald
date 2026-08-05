	@ src/data/abilities.h:334 abilities_line_334 (+1 aliases)
	.globl gText_Rom_574ABC
gText_Rom_574ABC: @ 0x08574ABC
	.string "ぼうおん$"
	.if (. - gText_Rom_574ABC) > 0x5
	.error "gText_Rom_574ABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ABC) < 0x5
	.space 0x5 - (. - gText_Rom_574ABC)
	.endif
