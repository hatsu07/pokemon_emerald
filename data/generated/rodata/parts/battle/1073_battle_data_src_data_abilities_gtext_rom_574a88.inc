	@ src/data/abilities.h:113 abilities_line_113 (+1 aliases)
	.globl gText_Rom_574A88
gText_Rom_574A88: @ 0x08574A88
	.string "ふくがん$"
	.if (. - gText_Rom_574A88) > 0x5
	.error "gText_Rom_574A88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A88) < 0x5
	.space 0x5 - (. - gText_Rom_574A88)
	.endif
