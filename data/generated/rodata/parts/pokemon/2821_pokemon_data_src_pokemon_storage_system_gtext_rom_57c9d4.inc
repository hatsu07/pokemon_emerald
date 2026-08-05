	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9D4
gText_Rom_57C9D4: @ 0x0857C9D4
	.string "シティ$"
	.if (. - gText_Rom_57C9D4) > 0x4
	.error "gText_Rom_57C9D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9D4) < 0x4
	.space 0x4 - (. - gText_Rom_57C9D4)
	.endif
	@ Replaced baserom.gba range: offset=0x57C9D8, size=0x13
	.byte 0x89, 0x7A, 0x7E, 0x3D, 0x1F, 0xFF, 0x5E, 0x57, 0x54, 0x52, 0x0A, 0x03, 0x3A, 0x2E, 0xFF, 0x74
	.byte 0x6F, 0x98, 0x57
