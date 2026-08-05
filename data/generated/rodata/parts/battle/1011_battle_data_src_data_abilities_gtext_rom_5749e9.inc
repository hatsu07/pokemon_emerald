	@ src/data/abilities.h:392 abilities_line_392 (+1 aliases)
	.globl gText_Rom_5749E9
gText_Rom_5749E9: @ 0x085749E9
	.string "するどいめ$"
	.if (. - gText_Rom_5749E9) > 0x6
	.error "gText_Rom_5749E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749E9) < 0x6
	.space 0x6 - (. - gText_Rom_5749E9)
	.endif
