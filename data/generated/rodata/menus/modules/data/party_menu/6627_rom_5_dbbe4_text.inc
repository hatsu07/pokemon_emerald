	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5DBBE4
gText_Rom_5DBBE4: @ 0x085DBBE4
	.string "つよさをみる$"
	.if (. - gText_Rom_5DBBE4) > 0x7
	.error "gText_Rom_5DBBE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBE4) < 0x7
	.space 0x7 - (. - gText_Rom_5DBBE4)
	.endif
