	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_5CB43F
gText_Rom_5CB43F: @ 0x085CB43F
	.string "なにを しますか?$"
	.if (. - gText_Rom_5CB43F) > 0xa
	.error "gText_Rom_5CB43F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB43F) < 0xa
	.space 0xa - (. - gText_Rom_5CB43F)
	.endif
