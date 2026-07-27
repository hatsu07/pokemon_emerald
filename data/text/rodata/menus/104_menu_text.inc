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
	.incbin "baserom.gba", 0x57caa3, 0x6

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
	.incbin "baserom.gba", 0x57caad, 0x6

	@ src/data/party_menu.h:802 party_menu_line_802
	.globl gText_Rom_57CAB3
gText_Rom_57CAB3: @ 0x0857CAB3
	.string "いどう$"
	.if (. - gText_Rom_57CAB3) > 0x4
	.error "gText_Rom_57CAB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CAB3) < 0x4
	.space 0x4 - (. - gText_Rom_57CAB3)
	.endif
	.incbin "baserom.gba", 0x57cab7, 0x50

