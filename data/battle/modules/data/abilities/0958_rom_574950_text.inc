	@ src/data/abilities.h:28 abilities_line_28 (+1 aliases)
	.globl gText_Rom_574950
gText_Rom_574950: @ 0x08574950
	.string "かそく{EOS}"
	.if (. - gText_Rom_574950) > 0x4
	.error "gText_Rom_574950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574950) < 0x4
	.space 0x4 - (. - gText_Rom_574950)
	.endif
