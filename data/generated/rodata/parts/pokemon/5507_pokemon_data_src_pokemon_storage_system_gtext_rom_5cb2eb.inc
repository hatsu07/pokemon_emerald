	@ src/pokemon_storage_system.c:1071 pokemon_storage_system_line_1071
	.globl gText_Rom_5CB2EB
gText_Rom_5CB2EB: @ 0x085CB2EB
	.string "しんぱい だったのかな……$"
	.if (. - gText_Rom_5CB2EB) > 0xe
	.error "gText_Rom_5CB2EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2EB) < 0xe
	.space 0xe - (. - gText_Rom_5CB2EB)
	.endif
