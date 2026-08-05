	@ src/data/abilities.h:296 abilities_line_296 (+1 aliases)
	.globl gText_Rom_574A34
gText_Rom_574A34: @ 0x08574A34
	.string "どくのトゲ$"
	.if (. - gText_Rom_574A34) > 0x6
	.error "gText_Rom_574A34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A34) < 0x6
	.space 0x6 - (. - gText_Rom_574A34)
	.endif
