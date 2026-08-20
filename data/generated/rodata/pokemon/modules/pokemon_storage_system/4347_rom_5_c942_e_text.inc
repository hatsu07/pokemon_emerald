	@ src/pokemon_storage_system.c:8117 pokemon_storage_system_line_8117 (+1 aliases)
	.globl gText_Rom_5C942E
gText_Rom_5C942E: @ 0x085C942E
	.string "なにを しますか?{EOS}"
	.if (. - gText_Rom_5C942E) > 0xa
	.error "gText_Rom_5C942E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C942E) < 0xa
	.space 0xa - (. - gText_Rom_5C942E)
	.endif
