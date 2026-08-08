	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_5CAACA
gText_Rom_5CAACA: @ 0x085CAACA
	.string "やめる$"
	.if (. - gText_Rom_5CAACA) > 0x4
	.error "gText_Rom_5CAACA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAACA) < 0x4
	.space 0x4 - (. - gText_Rom_5CAACA)
	.endif
	@ Decoded text from ROM range: offset=0x5CAACE, size=0xA
	.string "みました$"
	.string "これから$"
