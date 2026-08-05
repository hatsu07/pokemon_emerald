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
	@ Decoded text from ROM range: offset=0x57CAB7, size=0x50
	.string "22ばん　どうろ$"
	.string "23ばん　どうろ$"
	.string "24ばん　どうろ$"
	.string "25ばん　どうろ$"
	.string "トキワのもり$"
	.string "オツキミやま$"
	.string "サント・アンヌごう$"
	.string "ちかつうろ$"
	.string "ちかつうろ$"
	.string "ディグダのあな$"

