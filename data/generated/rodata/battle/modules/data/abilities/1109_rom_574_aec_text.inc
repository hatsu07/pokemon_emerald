	@ src/data/abilities.h:319 abilities_line_319 (+1 aliases)
	.globl gText_Rom_574AEC
gText_Rom_574AEC: @ 0x08574AEC
	.string "みずのベール$"
	.if (. - gText_Rom_574AEC) > 0x7
	.error "gText_Rom_574AEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AEC) < 0x7
	.space 0x7 - (. - gText_Rom_574AEC)
	.endif
	@ Decoded text from ROM range: offset=0x574AF3, size=0x3
	.string "むし$"
