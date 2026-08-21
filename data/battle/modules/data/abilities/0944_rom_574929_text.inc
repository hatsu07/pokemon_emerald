	@ src/data/abilities.h:578 abilities_line_578 (+1 aliases)
	.globl gText_Rom_574929
gText_Rom_574929: @ 0x08574929
	.string "エアロック{EOS}"
	.if (. - gText_Rom_574929) > 0x6
	.error "gText_Rom_574929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574929) < 0x6
	.space 0x6 - (. - gText_Rom_574929)
	.endif
