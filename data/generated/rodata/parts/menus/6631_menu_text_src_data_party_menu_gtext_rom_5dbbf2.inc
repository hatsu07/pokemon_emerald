	@ src/data/party_menu.h:810 party_menu_line_810 (+1 aliases)
	.globl gText_Rom_5DBBF2
gText_Rom_5DBBF2: @ 0x085DBBF2
	.string "はずす$"
	.if (. - gText_Rom_5DBBF2) > 0x4
	.error "gText_Rom_5DBBF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBBF2) < 0x4
	.space 0x4 - (. - gText_Rom_5DBBF2)
	.endif
