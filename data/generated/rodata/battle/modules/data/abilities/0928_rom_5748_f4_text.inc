	@ src/data/abilities.h:342 abilities_line_342 (+1 aliases)
	.globl gText_Rom_5748F4
gText_Rom_5748F4: @ 0x085748F4
	.string "あめうけざら$"
	.if (. - gText_Rom_5748F4) > 0x7
	.error "gText_Rom_5748F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5748F4) < 0x7
	.space 0x7 - (. - gText_Rom_5748F4)
	.endif
