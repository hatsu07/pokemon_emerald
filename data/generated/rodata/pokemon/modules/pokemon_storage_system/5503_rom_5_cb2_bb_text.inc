	@ src/pokemon_storage_system.c:1068 pokemon_storage_system_line_1068
	.globl gText_Rom_5CB2BB
gText_Rom_5CB2BB: @ 0x085CB2BB
	.string "タマゴを にがすことは できません!$"
	.if (. - gText_Rom_5CB2BB) > 0x13
	.error "gText_Rom_5CB2BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB2BB) < 0x13
	.space 0x13 - (. - gText_Rom_5CB2BB)
	.endif
