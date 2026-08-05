	@ src/data/abilities.h:526 abilities_line_526 (+1 aliases)
	.globl gText_Rom_57490B
gText_Rom_57490B: @ 0x0857490B
	.string "いしあたま$"
	.if (. - gText_Rom_57490B) > 0x6
	.error "gText_Rom_57490B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57490B) < 0x6
	.space 0x6 - (. - gText_Rom_57490B)
	.endif
	@ Decoded text from ROM range: offset=0x574911, size=0x3
	.string "いろ$"
