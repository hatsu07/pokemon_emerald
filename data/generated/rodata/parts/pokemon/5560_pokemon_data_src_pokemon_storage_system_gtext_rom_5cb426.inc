	@ src/pokemon_storage_system.c:8111 pokemon_storage_system_line_8111
	.globl gText_Rom_5CB426
gText_Rom_5CB426: @ 0x085CB426
	.string "かわ$"
	.if (. - gText_Rom_5CB426) > 0x3
	.error "gText_Rom_5CB426 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB426) < 0x3
	.space 0x3 - (. - gText_Rom_5CB426)
	.endif
	@ Decoded text from ROM range: offset=0x5CB429, size=0x3
	.string "そら$"
