	@ src/data/party_menu.h:802 party_menu_line_802
	.globl gText_Rom_57CA9F
gText_Rom_57CA9F: @ 0x0857CA9F
	.string "いどう$"
	.if (. - gText_Rom_57CA9F) > 0x4
	.error "gText_Rom_57CA9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CA9F) < 0x4
	.space 0x4 - (. - gText_Rom_57CA9F)
	.endif
	@ Replaced baserom.gba range: offset=0x57CAA3, size=0x6
	.byte 0xA3, 0xA1, 0x46, 0x2E, 0x00, 0x0D
