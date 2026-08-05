	@ src/data/abilities.h:311 abilities_line_311 (+1 aliases)
	.globl gText_Rom_574AE1
gText_Rom_574AE1: @ 0x08574AE1
	.string "マグマのよろい$"
	.if (. - gText_Rom_574AE1) > 0x8
	.error "gText_Rom_574AE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AE1) < 0x8
	.space 0x8 - (. - gText_Rom_574AE1)
	.endif
	@ Decoded text from ROM range: offset=0x574AE9, size=0x3
	.string "みず$"
