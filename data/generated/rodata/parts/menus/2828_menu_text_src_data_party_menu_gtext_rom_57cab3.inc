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

