	@ src/pokemon_storage_system.c:8104 pokemon_storage_system_line_8104
	.globl gText_Rom_5CB405
gText_Rom_5CB405: @ 0x085CB405
	.string "サバンナ$"
	.if (. - gText_Rom_5CB405) > 0x5
	.error "gText_Rom_5CB405 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB405) < 0x5
	.space 0x5 - (. - gText_Rom_5CB405)
	.endif
