	.globl gText_Rom_5CC48C

	@ src/contest.c:2071 contest_line_2071
	.globl gText_Rom_5CC48C
gText_Rom_5CC48C: @ 0x085CC48C
	.string "{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}{EOS}"
	.if (. - gText_Rom_5CC48C) > 0x7
	.error "gText_Rom_5CC48C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC48C) < 0x7
	.space 0x7 - (. - gText_Rom_5CC48C)
	.endif

	@ src/contest.c:2078 contest_line_2078 (+1 aliases)
	.globl gText_Rom_5CC493
gText_Rom_5CC493: @ 0x085CC493
	.string "{COLOR BLUE}{EOS}"
	.if (. - gText_Rom_5CC493) > 0x4
	.error "gText_Rom_5CC493 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC493) < 0x4
	.space 0x4 - (. - gText_Rom_5CC493)
	.endif

	@ asm/contest.s:6814 Contest_CopyStringWithColor
	@ Preserve exact byte length: internal label, semantic suffix text pointer, internal terminator.
	.globl gText_Rom_5CC497
gText_Rom_5CC497: @ 0x085CC497
	.string "{HIGHLIGHT}{0x00}{COLOR}{0xFF}C,{EOS}"
	.if (. - gText_Rom_5CC497) != 0x9
	.error "gText_Rom_5CC497 must retain its original byte length"
	.endif
