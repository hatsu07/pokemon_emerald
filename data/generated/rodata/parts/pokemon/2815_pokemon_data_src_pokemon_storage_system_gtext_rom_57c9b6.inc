	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9B6
gText_Rom_57C9B6: @ 0x0857C9B6
	.string "シティ$"
	.if (. - gText_Rom_57C9B6) > 0x4
	.error "gText_Rom_57C9B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9B6) < 0x4
	.space 0x4 - (. - gText_Rom_57C9B6)
	.endif
	@ Replaced baserom.gba range: offset=0x57C9BA, size=0xA
	.byte 0x5C, 0x55, 0x7E, 0x60, 0x53, 0x7E, 0xFF, 0x58, 0x61, 0x96
