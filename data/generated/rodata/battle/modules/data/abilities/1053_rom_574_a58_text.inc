	@ src/data/abilities.h:106 abilities_line_106 (+1 aliases)
	.globl gText_Rom_574A58
gText_Rom_574A58: @ 0x08574A58
	.string "ノーてんき$"
	.if (. - gText_Rom_574A58) > 0x6
	.error "gText_Rom_574A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A58) < 0x6
	.space 0x6 - (. - gText_Rom_574A58)
	.endif
