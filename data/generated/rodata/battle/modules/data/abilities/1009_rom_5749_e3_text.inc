	@ src/data/abilities.h:67 abilities_line_67 (+1 aliases)
	.globl gText_Rom_5749E3
gText_Rom_5749E3: @ 0x085749E3
	.string "すながくれ$"
	.if (. - gText_Rom_5749E3) > 0x6
	.error "gText_Rom_5749E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749E3) < 0x6
	.space 0x6 - (. - gText_Rom_5749E3)
	.endif
