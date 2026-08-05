	@ src/data/abilities.h:423 abilities_line_423 (+1 aliases)
	.globl gText_Rom_574A71
gText_Rom_574A71: @ 0x08574A71
	.string "はりきり$"
	.if (. - gText_Rom_574A71) > 0x5
	.error "gText_Rom_574A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A71) < 0x5
	.space 0x5 - (. - gText_Rom_574A71)
	.endif
