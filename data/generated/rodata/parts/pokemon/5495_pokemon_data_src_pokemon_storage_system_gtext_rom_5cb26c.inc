	@ src/pokemon_storage_system.c:1063 pokemon_storage_system_line_1063
	.globl gText_Rom_5CB26C
gText_Rom_5CB26C: @ 0x085CB26C
	.string "マーキングしてください$"
	.if (. - gText_Rom_5CB26C) > 0xc
	.error "gText_Rom_5CB26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB26C) < 0xc
	.space 0xc - (. - gText_Rom_5CB26C)
	.endif
