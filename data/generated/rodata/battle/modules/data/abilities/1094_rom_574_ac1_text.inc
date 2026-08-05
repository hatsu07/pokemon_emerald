	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_574AC1
gText_Rom_574AC1: @ 0x08574AC1
	.string "ほうし$"
	.if (. - gText_Rom_574AC1) > 0x4
	.error "gText_Rom_574AC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AC1) < 0x4
	.space 0x4 - (. - gText_Rom_574AC1)
	.endif
