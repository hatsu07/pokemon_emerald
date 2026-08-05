	@ src/pokemon_storage_system.c:8099 pokemon_storage_system_line_8099
	.globl gText_Rom_5CB3EF
gText_Rom_5CB3EF: @ 0x085CB3EF
	.string "エトセトラ$"
	.if (. - gText_Rom_5CB3EF) > 0x6
	.error "gText_Rom_5CB3EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3EF) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3EF)
	.endif
