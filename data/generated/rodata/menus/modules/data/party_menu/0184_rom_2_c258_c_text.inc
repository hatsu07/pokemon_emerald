	@ src/data/party_menu.h:811 party_menu_line_811 (+1 aliases)
	.globl gText_Rom_2C258C
gText_Rom_2C258C: @ 0x082C258C
	.string "おくる$"
	.if (. - gText_Rom_2C258C) > 0x4
	.error "gText_Rom_2C258C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C258C) < 0x4
	.space 0x4 - (. - gText_Rom_2C258C)
	.endif
