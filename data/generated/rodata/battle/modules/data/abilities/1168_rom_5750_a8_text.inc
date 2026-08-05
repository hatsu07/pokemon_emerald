	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_5750A8
gText_Rom_5750A8: @ 0x085750A8
	.string "こんじょう$"
	.if (. - gText_Rom_5750A8) > 0x6
	.error "gText_Rom_5750A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750A8) < 0x6
	.space 0x6 - (. - gText_Rom_5750A8)
	.endif
