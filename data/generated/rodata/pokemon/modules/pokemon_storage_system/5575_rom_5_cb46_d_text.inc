	@ src/pokemon_storage_system.c:873 pokemon_storage_system_line_873
	.globl gText_Rom_5CB46D
gText_Rom_5CB46D: @ 0x085CB46D
	.string "どうぐせいり$"
	.if (. - gText_Rom_5CB46D) > 0x7
	.error "gText_Rom_5CB46D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB46D) < 0x7
	.space 0x7 - (. - gText_Rom_5CB46D)
	.endif
