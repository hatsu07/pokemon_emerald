	@ src/contest.c:2078 contest_line_2078 (+1 aliases)
	.globl gText_Rom_5CC493
gText_Rom_5CC493: @ 0x085CC493
	.string "{COLOR BLUE}$"
	.if (. - gText_Rom_5CC493) > 0x4
	.error "gText_Rom_5CC493 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC493) < 0x4
	.space 0x4 - (. - gText_Rom_5CC493)
	.endif
