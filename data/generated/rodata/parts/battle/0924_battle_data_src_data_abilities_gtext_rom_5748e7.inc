	@ src/data/abilities.h:14 abilities_line_14 (+1 aliases)
	.globl gText_Rom_5748E7
gText_Rom_5748E7: @ 0x085748E7
	.string "あくしゅう$"
	.if (. - gText_Rom_5748E7) > 0x6
	.error "gText_Rom_5748E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748E7) < 0x6
	.space 0x6 - (. - gText_Rom_5748E7)
	.endif
