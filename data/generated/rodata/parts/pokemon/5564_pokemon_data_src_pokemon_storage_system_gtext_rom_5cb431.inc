	@ src/pokemon_storage_system.c:8114 pokemon_storage_system_line_8114
	.globl gText_Rom_5CB431
gText_Rom_5CB431: @ 0x085CB431
	.string "ポケセン$"
	.if (. - gText_Rom_5CB431) > 0x5
	.error "gText_Rom_5CB431 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB431) < 0x5
	.space 0x5 - (. - gText_Rom_5CB431)
	.endif
