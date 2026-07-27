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
	.incbin "baserom.gba", 0x57cb5c, 0xa

