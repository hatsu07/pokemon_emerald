	@ src/data/abilities.h:349 abilities_line_349 (+1 aliases)
	.globl gText_Rom_5749DD
gText_Rom_5749DD: @ 0x085749DD
	.string "すなおこし$"
	.if (. - gText_Rom_5749DD) > 0x6
	.error "gText_Rom_5749DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749DD) < 0x6
	.space 0x6 - (. - gText_Rom_5749DD)
	.endif
