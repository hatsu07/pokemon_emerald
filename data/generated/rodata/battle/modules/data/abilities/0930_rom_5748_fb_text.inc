	@ src/data/abilities.h:21 abilities_line_21 (+1 aliases)
	.globl gText_Rom_5748FB
gText_Rom_5748FB: @ 0x085748FB
	.string "あめふらし$"
	.if (. - gText_Rom_5748FB) > 0x6
	.error "gText_Rom_5748FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748FB) < 0x6
	.space 0x6 - (. - gText_Rom_5748FB)
	.endif
