	@ src/pokemon_storage_system.c:8116 pokemon_storage_system_line_8116
	.globl gText_Rom_5CB43A
gText_Rom_5CB43A: @ 0x085CB43A
	.string "シンプル$"
	.if (. - gText_Rom_5CB43A) > 0x5
	.error "gText_Rom_5CB43A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB43A) < 0x5
	.space 0x5 - (. - gText_Rom_5CB43A)
	.endif
