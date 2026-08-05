	@ src/data/abilities.h:221 abilities_line_221 (+1 aliases)
	.globl gText_Rom_5749CD
gText_Rom_5749CD: @ 0x085749CD
	.string "シンクロ$"
	.if (. - gText_Rom_5749CD) > 0x5
	.error "gText_Rom_5749CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749CD) < 0x5
	.space 0x5 - (. - gText_Rom_5749CD)
	.endif
