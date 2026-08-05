	@ src/data/party_menu.h:802 party_menu_line_802
	.globl gText_Rom_57CAA9
gText_Rom_57CAA9: @ 0x0857CAA9
	.string "いどう$"
	.if (. - gText_Rom_57CAA9) > 0x4
	.error "gText_Rom_57CAA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CAA9) < 0x4
	.space 0x4 - (. - gText_Rom_57CAA9)
	.endif
	@ Replaced baserom.gba range: offset=0x57CAAD, size=0x6
	.byte 0xA3, 0xA2, 0x46, 0x2E, 0x00, 0x0D
