	@ src/pokemon_storage_system.c:872 pokemon_storage_system_line_872
	.globl gText_Rom_5CB4CA
gText_Rom_5CB4CA: @ 0x085CB4CA
	.string "ボックスに あずけている ポケモンや \nてもちの ポケモンを せいり できます$"
	.if (. - gText_Rom_5CB4CA) > 0x28
	.error "gText_Rom_5CB4CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB4CA) < 0x28
	.space 0x28 - (. - gText_Rom_5CB4CA)
	.endif
