	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_57C9AF
gText_Rom_57C9AF: @ 0x0857C9AF
	.string "シティ$"
	.if (. - gText_Rom_57C9AF) > 0x4
	.error "gText_Rom_57C9AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C9AF) < 0x4
	.space 0x4 - (. - gText_Rom_57C9AF)
	.endif
	@ Replaced baserom.gba range: offset=0x57C9B3, size=0x3
	.byte 0x6A, 0x65, 0x91
