	@ src/data/abilities.h:120 abilities_line_120 (+1 aliases)
	.globl gText_Rom_574A9D
gText_Rom_574A9D: @ 0x08574A9D
	.string "ふみん$"
	.if (. - gText_Rom_574A9D) > 0x4
	.error "gText_Rom_574A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A9D) < 0x4
	.space 0x4 - (. - gText_Rom_574A9D)
	.endif
