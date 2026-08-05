	@ src/data/abilities.h:159 abilities_line_159 (+1 aliases)
	.globl gText_Rom_574ADB
gText_Rom_574ADB: @ 0x08574ADB
	.string "マイペース$"
	.if (. - gText_Rom_574ADB) > 0x6
	.error "gText_Rom_574ADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ADB) < 0x6
	.space 0x6 - (. - gText_Rom_574ADB)
	.endif
