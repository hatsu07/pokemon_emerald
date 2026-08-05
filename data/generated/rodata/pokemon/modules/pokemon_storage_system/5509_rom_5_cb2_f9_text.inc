	@ src/pokemon_storage_system.c:1072 pokemon_storage_system_line_1072
	.globl gText_Rom_5CB2F9
gText_Rom_5CB2F9: @ 0x085CB2F9
	.string "……………!$"
	.if (. - gText_Rom_5CB2F9) > 0x7
	.error "gText_Rom_5CB2F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2F9) < 0x7
	.space 0x7 - (. - gText_Rom_5CB2F9)
	.endif
