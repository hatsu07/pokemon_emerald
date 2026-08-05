	@ src/data/abilities.h:236 abilities_line_236 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5749AA
gText_Rom_5749AA: @ 0x085749AA
	.string "しぜんかいふく$"
	.if (. - gText_Rom_5749AA) != 0x8
	.error "gText_Rom_5749AA must retain its original byte length"
	.endif
