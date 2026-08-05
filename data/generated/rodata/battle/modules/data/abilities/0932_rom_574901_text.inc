	@ src/data/abilities.h:540 abilities_line_540 (+1 aliases)
	.globl gText_Rom_574901
gText_Rom_574901: @ 0x08574901
	.string "ありじごく$"
	.if (. - gText_Rom_574901) > 0x6
	.error "gText_Rom_574901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574901) < 0x6
	.space 0x6 - (. - gText_Rom_574901)
	.endif
