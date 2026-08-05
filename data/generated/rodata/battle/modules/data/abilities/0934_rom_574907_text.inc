	@ src/data/abilities.h:175 abilities_line_175 (+1 aliases)
	.globl gText_Rom_574907
gText_Rom_574907: @ 0x08574907
	.string "いかく$"
	.if (. - gText_Rom_574907) > 0x4
	.error "gText_Rom_574907 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574907) < 0x4
	.space 0x4 - (. - gText_Rom_574907)
	.endif
