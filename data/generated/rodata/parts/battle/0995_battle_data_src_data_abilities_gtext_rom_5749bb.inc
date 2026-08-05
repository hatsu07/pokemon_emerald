	@ src/data/abilities.h:59 abilities_line_59 (+1 aliases)
	.globl gText_Rom_5749BB
gText_Rom_5749BB: @ 0x085749BB
	.string "じゅうなん$"
	.if (. - gText_Rom_5749BB) > 0x6
	.error "gText_Rom_5749BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749BB) < 0x6
	.space 0x6 - (. - gText_Rom_5749BB)
	.endif
