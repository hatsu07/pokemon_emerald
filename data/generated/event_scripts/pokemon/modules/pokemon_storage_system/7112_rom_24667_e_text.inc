	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_24667E
gText_Rom_24667E: @ 0x0824667E
	.string "なにを しますか?{EOS}"
	.if (. - gText_Rom_24667E) > 0xa
	.error "gText_Rom_24667E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24667E) < 0xa
	.space 0xa - (. - gText_Rom_24667E)
	.endif
