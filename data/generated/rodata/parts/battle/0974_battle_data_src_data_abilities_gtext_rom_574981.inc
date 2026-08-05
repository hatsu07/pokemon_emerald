	@ src/data/abilities.h:228 abilities_line_228 (+1 aliases)
	.globl gText_Rom_574981
gText_Rom_574981: @ 0x08574981
	.string "クリアボディ$"
	.if (. - gText_Rom_574981) > 0x7
	.error "gText_Rom_574981 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574981) < 0x7
	.space 0x7 - (. - gText_Rom_574981)
	.endif
