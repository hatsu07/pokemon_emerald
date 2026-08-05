	@ src/data/abilities.h:182 abilities_line_182 (+1 aliases)
	.globl gText_Rom_574941
gText_Rom_574941: @ 0x08574941
	.string "かげふみ$"
	.if (. - gText_Rom_574941) > 0x5
	.error "gText_Rom_574941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574941) < 0x5
	.space 0x5 - (. - gText_Rom_574941)
	.endif
