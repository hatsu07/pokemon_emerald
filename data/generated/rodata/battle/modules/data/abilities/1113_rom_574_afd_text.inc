	@ src/data/abilities.h:430 abilities_line_430 (+1 aliases)
	.globl gText_Rom_574AFD
gText_Rom_574AFD: @ 0x08574AFD
	.string "メロメロボディ$"
	.if (. - gText_Rom_574AFD) > 0x8
	.error "gText_Rom_574AFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AFD) < 0x8
	.space 0x8 - (. - gText_Rom_574AFD)
	.endif
