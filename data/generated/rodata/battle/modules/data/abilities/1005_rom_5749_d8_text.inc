	@ src/data/abilities.h:258 abilities_line_258 (+1 aliases)
	.globl gText_Rom_5749D8
gText_Rom_5749D8: @ 0x085749D8
	.string "すいすい$"
	.if (. - gText_Rom_5749D8) > 0x5
	.error "gText_Rom_5749D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749D8) < 0x5
	.space 0x5 - (. - gText_Rom_5749D8)
	.endif
