	@ src/data/abilities.h:498 abilities_line_498 (+1 aliases)
	.globl gText_Rom_5749D2
gText_Rom_5749D2: @ 0x085749D2
	.string "しんりょく$"
	.if (. - gText_Rom_5749D2) > 0x6
	.error "gText_Rom_5749D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749D2) < 0x6
	.space 0x6 - (. - gText_Rom_5749D2)
	.endif
