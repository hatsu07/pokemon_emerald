	@ src/data/abilities.h:128 abilities_line_128 (+1 aliases)
	.globl gText_Rom_574AB6
gText_Rom_574AB6: @ 0x08574AB6
	.string "へんしょく$"
	.if (. - gText_Rom_574AB6) > 0x6
	.error "gText_Rom_574AB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AB6) < 0x6
	.space 0x6 - (. - gText_Rom_574AB6)
	.endif
