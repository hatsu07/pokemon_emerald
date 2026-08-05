	@ src/pokemon_storage_system.c:8107 pokemon_storage_system_line_8107
	.globl gText_Rom_5CB413
gText_Rom_5CB413: @ 0x085CB413
	.string "ゆきやま$"
	.if (. - gText_Rom_5CB413) > 0x5
	.error "gText_Rom_5CB413 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB413) < 0x5
	.space 0x5 - (. - gText_Rom_5CB413)
	.endif
