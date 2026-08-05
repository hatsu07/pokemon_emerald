	@ src/data/abilities.h:437 abilities_line_437 (+1 aliases)
	.globl gText_Rom_574AA5
gText_Rom_574AA5: @ 0x08574AA5
	.string "プラス$"
	.if (. - gText_Rom_574AA5) > 0x4
	.error "gText_Rom_574AA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA5) < 0x4
	.space 0x4 - (. - gText_Rom_574AA5)
	.endif
