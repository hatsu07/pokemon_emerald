	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9C4
gText_Rom_57C9C4: @ 0x0857C9C4
	.string "シティ$"
	.if (. - gText_Rom_57C9C4) > 0x4
	.error "gText_Rom_57C9C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9C4) < 0x4
	.space 0x4 - (. - gText_Rom_57C9C4)
	.endif
	@ Replaced baserom.gba range: offset=0x57C9C8, size=0x4
	.byte 0x60, 0x6F, 0x71, 0x5C
