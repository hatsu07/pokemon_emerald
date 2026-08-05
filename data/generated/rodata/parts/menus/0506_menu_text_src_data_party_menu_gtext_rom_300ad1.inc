	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_300AD1
gText_Rom_300AD1: @ 0x08300AD1
	.string "つよさをみる$"
	.if (. - gText_Rom_300AD1) > 0x7
	.error "gText_Rom_300AD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AD1) < 0x7
	.space 0x7 - (. - gText_Rom_300AD1)
	.endif
	@ Decoded text from ROM range: offset=0x300AD8, size=0x16
	.string "こうかんにだす$"
	.string "こうかん　を　やめますか？$"
