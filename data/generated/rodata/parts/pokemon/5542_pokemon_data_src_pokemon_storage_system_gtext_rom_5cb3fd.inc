	@ src/pokemon_storage_system.c:8102 pokemon_storage_system_line_8102
	.globl gText_Rom_5CB3FD
gText_Rom_5CB3FD: @ 0x085CB3FD
	.string "シティ$"
	.if (. - gText_Rom_5CB3FD) > 0x4
	.error "gText_Rom_5CB3FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3FD) < 0x4
	.space 0x4 - (. - gText_Rom_5CB3FD)
	.endif
