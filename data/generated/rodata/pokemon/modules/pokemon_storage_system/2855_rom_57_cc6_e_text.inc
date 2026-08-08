	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gText_Rom_57CC6E
gText_Rom_57CC6E: @ 0x0857CC6E
	.string "どうくつ$"
	.if (. - gText_Rom_57CC6E) > 0x5
	.error "gText_Rom_57CC6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC6E) < 0x5
	.space 0x5 - (. - gText_Rom_57CC6E)
	.endif
	@ Replaced baserom.gba range: offset=0x57CC73, size=0xF
	.byte 0x7B, 0x59, 0xA0, 0x64, 0x41, 0x2E, 0x0F, 0x03, 0x0A, 0xFF, 0x64, 0x7A, 0xAE, 0x65, 0xAE
