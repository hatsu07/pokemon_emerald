	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gText_Rom_5CB418
gText_Rom_5CB418: @ 0x085CB418
	.string "どうくつ$"
	.if (. - gText_Rom_5CB418) > 0x5
	.error "gText_Rom_5CB418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB418) < 0x5
	.space 0x5 - (. - gText_Rom_5CB418)
	.endif
