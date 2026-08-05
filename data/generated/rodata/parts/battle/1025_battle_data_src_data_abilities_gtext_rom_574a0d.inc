	@ src/data/abilities.h:469 abilities_line_469 (+1 aliases)
	.globl gText_Rom_574A0D
gText_Rom_574A0D: @ 0x08574A0D
	.string "だっぴ$"
	.if (. - gText_Rom_574A0D) > 0x4
	.error "gText_Rom_574A0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A0D) < 0x4
	.space 0x4 - (. - gText_Rom_574A0D)
	.endif
