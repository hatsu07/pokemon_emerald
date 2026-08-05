	@ src/pokemon_storage_system.c:8113 pokemon_storage_system_line_8113
	.globl gText_Rom_5CB42C
gText_Rom_5CB42C: @ 0x085CB42C
	.string "みずたま$"
	.if (. - gText_Rom_5CB42C) > 0x5
	.error "gText_Rom_5CB42C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB42C) < 0x5
	.space 0x5 - (. - gText_Rom_5CB42C)
	.endif
