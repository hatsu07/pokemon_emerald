	@ src/pokemon_storage_system.c:8109 pokemon_storage_system_line_8109
	.globl gText_Rom_5CB41D
gText_Rom_5CB41D: @ 0x085CB41D
	.string "うみべ$"
	.if (. - gText_Rom_5CB41D) > 0x4
	.error "gText_Rom_5CB41D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB41D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB41D)
	.endif
