	@ src/pokemon_storage_system.c:1064 pokemon_storage_system_line_1064
	.globl gText_Rom_5CB278
gText_Rom_5CB278: @ 0x085CB278
	.string "たたかうポケモンが いなくなります!$"
	.if (. - gText_Rom_5CB278) > 0x13
	.error "gText_Rom_5CB278 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB278) < 0x13
	.space 0x13 - (. - gText_Rom_5CB278)
	.endif
	@ Decoded text from ROM range: offset=0x5CB28B, size=0xD
	.string "てもちが　いっぱいです！$"
