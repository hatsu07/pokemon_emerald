	@ src/data/abilities.h:189 abilities_line_189 (+1 aliases)
	.globl gText_Rom_57499D
gText_Rom_57499D: @ 0x0857499D
	.string "さめはだ$"
	.if (. - gText_Rom_57499D) > 0x5
	.error "gText_Rom_57499D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57499D) < 0x5
	.space 0x5 - (. - gText_Rom_57499D)
	.endif
