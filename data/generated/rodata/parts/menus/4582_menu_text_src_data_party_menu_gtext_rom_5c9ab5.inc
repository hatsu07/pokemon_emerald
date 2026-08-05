	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5C9AB5
gText_Rom_5C9AB5: @ 0x085C9AB5
	.string "つよさをみる$"
	.if (. - gText_Rom_5C9AB5) > 0x7
	.error "gText_Rom_5C9AB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AB5) < 0x7
	.space 0x7 - (. - gText_Rom_5C9AB5)
	.endif
	@ Decoded text from ROM range: offset=0x5C9ABC, size=0xD
	.string "つかえるわざ$"
	.string "さんかする$"
