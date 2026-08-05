	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gText_Rom_57CB57
gText_Rom_57CB57: @ 0x0857CB57
	.string "どうくつ$"
	.if (. - gText_Rom_57CB57) > 0x5
	.error "gText_Rom_57CB57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB57) < 0x5
	.space 0x5 - (. - gText_Rom_57CB57)
	.endif
	@ Replaced baserom.gba range: offset=0x57CB5C, size=0xA
	.byte 0x21, 0x3D, 0x2E, 0x1A, 0x12, 0x44, 0x2E, 0x0C, 0x36, 0xFF

