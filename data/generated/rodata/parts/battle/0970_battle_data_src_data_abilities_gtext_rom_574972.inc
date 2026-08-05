	@ src/data/abilities.h:43 abilities_line_43 (+1 aliases)
	.globl gText_Rom_574972
gText_Rom_574972: @ 0x08574972
	.string "がんじょう$"
	.if (. - gText_Rom_574972) > 0x6
	.error "gText_Rom_574972 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574972) < 0x6
	.space 0x6 - (. - gText_Rom_574972)
	.endif
