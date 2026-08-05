	@ src/data/abilities.h:167 abilities_line_167 (+1 aliases)
	.globl gText_Rom_574978
gText_Rom_574978: @ 0x08574978
	.string "きゅうばん$"
	.if (. - gText_Rom_574978) > 0x6
	.error "gText_Rom_574978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574978) < 0x6
	.space 0x6 - (. - gText_Rom_574978)
	.endif
	@ Decoded text from ROM range: offset=0x57497E, size=0x3
	.string "くさ$"
