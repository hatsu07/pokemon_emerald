	@ src/data/party_menu.h:801 party_menu_line_801
	.globl gText_Rom_5CB3C3
gText_Rom_5CB3C3: @ 0x085CB3C3
	.string "あずかる$"
	.if (. - gText_Rom_5CB3C3) > 0x5
	.error "gText_Rom_5CB3C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3C3) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3C3)
	.endif
