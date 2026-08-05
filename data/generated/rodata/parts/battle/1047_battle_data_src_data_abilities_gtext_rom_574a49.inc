	@ src/data/abilities.h:415 abilities_line_415 (+1 aliases)
	.globl gText_Rom_574A49
gText_Rom_574A49: @ 0x08574A49
	.string "なまけ$"
	.if (. - gText_Rom_574A49) > 0x4
	.error "gText_Rom_574A49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A49) < 0x4
	.space 0x4 - (. - gText_Rom_574A49)
	.endif
