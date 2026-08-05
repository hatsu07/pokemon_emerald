	@ src/pokemon_storage_system.c:8106 pokemon_storage_system_line_8106
	.globl gText_Rom_5CB40F
gText_Rom_5CB40F: @ 0x085CB40F
	.string "かざん$"
	.if (. - gText_Rom_5CB40F) > 0x4
	.error "gText_Rom_5CB40F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB40F) < 0x4
	.space 0x4 - (. - gText_Rom_5CB40F)
	.endif
