	@ src/data/abilities.h:400 abilities_line_400 (+1 aliases)
	.globl gText_Rom_574934
gText_Rom_574934: @ 0x08574934
	.string "かいりきバサミ$"
	.if (. - gText_Rom_574934) > 0x8
	.error "gText_Rom_574934 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574934) < 0x8
	.space 0x8 - (. - gText_Rom_574934)
	.endif
