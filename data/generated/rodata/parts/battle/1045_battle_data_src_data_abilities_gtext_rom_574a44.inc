	@ src/data/abilities.h:98 abilities_line_98 (+1 aliases)
	.globl gText_Rom_574A44
gText_Rom_574A44: @ 0x08574A44
	.string "どんかん$"
	.if (. - gText_Rom_574A44) > 0x5
	.error "gText_Rom_574A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A44) < 0x5
	.space 0x5 - (. - gText_Rom_574A44)
	.endif
