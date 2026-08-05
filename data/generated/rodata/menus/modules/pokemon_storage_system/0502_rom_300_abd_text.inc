	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_300ABD
gText_Rom_300ABD: @ 0x08300ABD
	.string "やめる$"
	.if (. - gText_Rom_300ABD) > 0x4
	.error "gText_Rom_300ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300ABD) < 0x4
	.space 0x4 - (. - gText_Rom_300ABD)
	.endif
