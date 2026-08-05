	@ src/pokemon_storage_system.c:1059 pokemon_storage_system_line_1059
	.globl gText_Rom_5CB236
gText_Rom_5CB236: @ 0x085CB236
	.string "このボックスは いっぱいだ!$"
	.if (. - gText_Rom_5CB236) > 0xf
	.error "gText_Rom_5CB236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB236) < 0xf
	.space 0xf - (. - gText_Rom_5CB236)
	.endif
