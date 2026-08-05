	@ src/pokemon_storage_system.c:1066 pokemon_storage_system_line_1066
	.globl gText_Rom_5CB298
gText_Rom_5CB298: @ 0x085CB298
	.string "ポケモンを つかんだままですよ!$"
	.if (. - gText_Rom_5CB298) > 0x11
	.error "gText_Rom_5CB298 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB298) < 0x11
	.space 0x11 - (. - gText_Rom_5CB298)
	.endif
