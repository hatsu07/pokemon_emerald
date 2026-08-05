	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9A9
gText_Rom_57C9A9: @ 0x0857C9A9
	.string "シティ$"
	.if (. - gText_Rom_57C9A9) > 0x4
	.error "gText_Rom_57C9A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9A9) < 0x4
	.space 0x4 - (. - gText_Rom_57C9A9)
	.endif
	@ Replaced baserom.gba range: offset=0x57C9AD, size=0x2
	.byte 0x66, 0x97
