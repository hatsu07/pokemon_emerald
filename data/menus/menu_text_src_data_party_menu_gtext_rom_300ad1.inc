	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_300ABD
gText_Rom_300ABD: @ 0x08300ABD
	.string "やめる{EOS}"
	.if (. - gText_Rom_300ABD) > 0x4
	.error "gText_Rom_300ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300ABD) < 0x4
	.space 0x4 - (. - gText_Rom_300ABD)
	.endif
	@ src/strings.c:305 gText_ChoosePokemon
	.globl gText_ChoosePokemon
gText_ChoosePokemon: @ 0x08300AC1
	.string "ポケモンを えらんで ください{EOS}"
	.if (. - gText_ChoosePokemon) > 0x10
	.error "gText_ChoosePokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_ChoosePokemon) < 0x10
	.space 0x10 - (. - gText_ChoosePokemon)
	.endif
	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_300AD1
gText_Rom_300AD1: @ 0x08300AD1
	.string "つよさをみる{EOS}"
	.if (. - gText_Rom_300AD1) > 0x7
	.error "gText_Rom_300AD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AD1) < 0x7
	.space 0x7 - (. - gText_Rom_300AD1)
	.endif
	@ Decoded text from ROM range: offset=0x300AD8, size=0x16
	.string "こうかんにだす{EOS}"
	.string "こうかん　を　やめますか？{EOS}"
