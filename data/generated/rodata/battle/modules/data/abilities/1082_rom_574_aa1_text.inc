	@ src/data/abilities.h:206 abilities_line_206 (+1 aliases)
	.globl gText_Rom_574AA1
gText_Rom_574AA1: @ 0x08574AA1
	.string "ふゆう$"
	.if (. - gText_Rom_574AA1) > 0x4
	.error "gText_Rom_574AA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AA1) < 0x4
	.space 0x4 - (. - gText_Rom_574AA1)
	.endif
