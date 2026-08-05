	@ src/data/abilities.h:483 abilities_line_483 (+1 aliases)
	.globl gText_Rom_574A8D
gText_Rom_574A8D: @ 0x08574A8D
	.string "ふしぎなうろこ$"
	.if (. - gText_Rom_574A8D) > 0x8
	.error "gText_Rom_574A8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574A8D) < 0x8
	.space 0x8 - (. - gText_Rom_574A8D)
	.endif
