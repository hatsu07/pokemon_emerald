	@ src/field_specials.c:2535 field_specials_line_2535
	.globl gText_Rom_5CC007
gText_Rom_5CC007: @ 0x085CC007
	.string " 40てん$"
	.if (. - gText_Rom_5CC007) > 0x6
	.error "gText_Rom_5CC007 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC007) < 0x6
	.space 0x6 - (. - gText_Rom_5CC007)
	.endif
