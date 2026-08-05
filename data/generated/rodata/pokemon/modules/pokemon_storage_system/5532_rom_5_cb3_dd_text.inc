	@ src/pokemon_storage_system.c:8096 pokemon_storage_system_line_8096
	.globl gText_Rom_5CB3DD
gText_Rom_5CB3DD: @ 0x085CB3DD
	.string "ふうけい1$"
	.if (. - gText_Rom_5CB3DD) > 0x6
	.error "gText_Rom_5CB3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3DD) < 0x6
	.space 0x6 - (. - gText_Rom_5CB3DD)
	.endif
