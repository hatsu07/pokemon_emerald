	@ src/data/abilities.h:555 abilities_line_555 (+1 aliases)
	.globl gText_Rom_5749C6
gText_Rom_5749C6: @ 0x085749C6
	.string "しろいけむり$"
	.if (. - gText_Rom_5749C6) > 0x7
	.error "gText_Rom_5749C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749C6) < 0x7
	.space 0x7 - (. - gText_Rom_5749C6)
	.endif
