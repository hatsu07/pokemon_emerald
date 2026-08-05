	@ src/pokemon_storage_system.c:8115 pokemon_storage_system_line_8115
	.globl gText_Rom_5CB436
gText_Rom_5CB436: @ 0x085CB436
	.string "きかい$"
	.if (. - gText_Rom_5CB436) > 0x4
	.error "gText_Rom_5CB436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB436) < 0x4
	.space 0x4 - (. - gText_Rom_5CB436)
	.endif
