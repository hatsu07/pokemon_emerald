	@ src/data/easy_chat/easy_chat_group_endings.h:82 easy_chat_group_endings_line_82
	.globl gText_Rom_5763D7
gText_Rom_5763D7: @ 0x085763D7
	.string "しよう$"
	.if (. - gText_Rom_5763D7) > 0x4
	.error "gText_Rom_5763D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763D7) < 0x4
	.space 0x4 - (. - gText_Rom_5763D7)
	.endif
	@ Replaced baserom.gba range: offset=0x5763DB, size=0xA
	.byte 0x3F, 0xAB, 0xFF, 0x40, 0xAB, 0xFF, 0x10, 0xFF, 0x41, 0xFF
