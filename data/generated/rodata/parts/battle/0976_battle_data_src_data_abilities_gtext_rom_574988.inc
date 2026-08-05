	@ src/data/abilities.h:512 abilities_line_512 (+1 aliases)
	.globl gText_Rom_574988
gText_Rom_574988: @ 0x08574988
	.string "げきりゅう$"
	.if (. - gText_Rom_574988) > 0x6
	.error "gText_Rom_574988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574988) < 0x6
	.space 0x6 - (. - gText_Rom_574988)
	.endif
