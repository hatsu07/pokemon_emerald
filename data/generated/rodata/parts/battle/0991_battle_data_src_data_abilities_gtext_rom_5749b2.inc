	@ src/data/abilities.h:51 abilities_line_51 (+1 aliases)
	.globl gText_Rom_5749B2
gText_Rom_5749B2: @ 0x085749B2
	.string "しめりけ$"
	.if (. - gText_Rom_5749B2) > 0x5
	.error "gText_Rom_5749B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749B2) < 0x5
	.space 0x5 - (. - gText_Rom_5749B2)
	.endif
