	@ src/pokemon_storage_system.c:8103 pokemon_storage_system_line_8103
	.globl gText_Rom_5CB401
gText_Rom_5CB401: @ 0x085CB401
	.string "さばく$"
	.if (. - gText_Rom_5CB401) > 0x4
	.error "gText_Rom_5CB401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB401) < 0x4
	.space 0x4 - (. - gText_Rom_5CB401)
	.endif
