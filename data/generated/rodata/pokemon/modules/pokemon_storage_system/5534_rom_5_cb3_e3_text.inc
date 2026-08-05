	@ src/pokemon_storage_system.c:8097 pokemon_storage_system_line_8097
	.globl gText_Rom_5CB3E3
gText_Rom_5CB3E3: @ 0x085CB3E3
	.string "ふうけい2$"
	.if (. - gText_Rom_5CB3E3) > 0x6
	.error "gText_Rom_5CB3E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3E3) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3E3)
	.endif
