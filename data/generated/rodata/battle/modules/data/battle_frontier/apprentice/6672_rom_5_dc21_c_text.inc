	@ src/data/battle_frontier/apprentice.h:300 apprentice_line_300
	.globl gText_Rom_5DC21C
gText_Rom_5DC21C: @ 0x085DC21C
	.string "サダヒロ$"
	.if (. - gText_Rom_5DC21C) > 0x5
	.error "gText_Rom_5DC21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC21C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC21C)
	.endif
	@ Replaced baserom.gba range: offset=0x5DC221, size=0x7
	.byte 0x00, 0x00, 0x00, 0xC9, 0xBD, 0x43, 0x00
