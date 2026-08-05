	@ src/data/abilities.h:563 abilities_line_563 (+1 aliases)
	.globl gText_Rom_574B28
gText_Rom_574B28: @ 0x08574B28
	.string "ヨガパワー$"
	.if (. - gText_Rom_574B28) > 0x6
	.error "gText_Rom_574B28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B28) < 0x6
	.space 0x6 - (. - gText_Rom_574B28)
	.endif
