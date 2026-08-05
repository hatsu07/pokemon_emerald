	@ src/pokemon_storage_system.c:8110 pokemon_storage_system_line_8110 (+1 aliases)
	.globl gText_Rom_5CB421
gText_Rom_5CB421: @ 0x085CB421
	.string "かいてい$"
	.if (. - gText_Rom_5CB421) > 0x5
	.error "gText_Rom_5CB421 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB421) < 0x5
	.space 0x5 - (. - gText_Rom_5CB421)
	.endif
