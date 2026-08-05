	@ src/contest.c:2071 contest_line_2071
	.globl gText_Rom_5CC48C
gText_Rom_5CC48C: @ 0x085CC48C
	.string "{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}$"
	.if (. - gText_Rom_5CC48C) > 0x7
	.error "gText_Rom_5CC48C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC48C) < 0x7
	.space 0x7 - (. - gText_Rom_5CC48C)
	.endif
