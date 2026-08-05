	@ src/data/abilities.h:570 abilities_line_570 (+1 aliases)
	.globl gText_Rom_5749A2
gText_Rom_5749A2: @ 0x085749A2
	.string "シェルアーマー$"
	.if (. - gText_Rom_5749A2) > 0x8
	.error "gText_Rom_5749A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749A2) < 0x8
	.space 0x8 - (. - gText_Rom_5749A2)
	.endif
