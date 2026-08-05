	@ src/pokemon_storage_system.c:8098 pokemon_storage_system_line_8098
	.globl gText_Rom_5CB3E9
gText_Rom_5CB3E9: @ 0x085CB3E9
	.string "ふうけい3$"
	.if (. - gText_Rom_5CB3E9) > 0x6
	.error "gText_Rom_5CB3E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3E9) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3E9)
	.endif
