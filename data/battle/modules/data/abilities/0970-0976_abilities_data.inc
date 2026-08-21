	@ src/data/abilities.h:43 abilities_line_43 (+1 aliases)
	.globl gText_Rom_574972
gText_Rom_574972: @ 0x08574972
	.string "がんじょう{EOS}"
	.if (. - gText_Rom_574972) > 0x6
	.error "gText_Rom_574972 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574972) < 0x6
	.space 0x6 - (. - gText_Rom_574972)
	.endif

	@ src/data/abilities.h:167 abilities_line_167 (+1 aliases)
	.globl gText_Rom_574978
gText_Rom_574978: @ 0x08574978
	.string "きゅうばん{EOS}"
	.if (. - gText_Rom_574978) > 0x6
	.error "gText_Rom_574978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574978) < 0x6
	.space 0x6 - (. - gText_Rom_574978)
	.endif
	@ Decoded text from ROM range: offset=0x57497E, size=0x3
	.string "くさ{EOS}"

	@ src/data/abilities.h:228 abilities_line_228 (+1 aliases)
	.globl gText_Rom_574981
gText_Rom_574981: @ 0x08574981
	.string "クリアボディ{EOS}"
	.if (. - gText_Rom_574981) > 0x7
	.error "gText_Rom_574981 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574981) < 0x7
	.space 0x7 - (. - gText_Rom_574981)
	.endif

	@ src/data/abilities.h:512 abilities_line_512 (+1 aliases)
	.globl gText_Rom_574988
gText_Rom_574988: @ 0x08574988
	.string "げきりゅう{EOS}"
	.if (. - gText_Rom_574988) > 0x6
	.error "gText_Rom_574988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574988) < 0x6
	.space 0x6 - (. - gText_Rom_574988)
	.endif
