	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gText_Rom_574A67
gText_Rom_574A67: @ 0x08574A67
	.string "はっこう$"
	.if (. - gText_Rom_574A67) > 0x5
	.error "gText_Rom_574A67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A67) < 0x5
	.space 0x5 - (. - gText_Rom_574A67)
	.endif

	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gText_Rom_574A6C
gText_Rom_574A6C: @ 0x08574A6C
	.string "はやおき$"
	.if (. - gText_Rom_574A6C) > 0x5
	.error "gText_Rom_574A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A6C) < 0x5
	.space 0x5 - (. - gText_Rom_574A6C)
	.endif

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
