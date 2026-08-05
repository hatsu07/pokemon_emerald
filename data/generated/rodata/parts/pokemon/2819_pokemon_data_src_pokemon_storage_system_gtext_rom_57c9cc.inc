	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9CC
gText_Rom_57C9CC: @ 0x0857C9CC
	.string "シティ$"
	.if (. - gText_Rom_57C9CC) > 0x4
	.error "gText_Rom_57C9CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9CC) < 0x4
	.space 0x4 - (. - gText_Rom_57C9CC)
	.endif
	@ Replaced baserom.gba range: offset=0x57C9D0, size=0x4
	.byte 0x5E, 0x57, 0x61, 0x58
