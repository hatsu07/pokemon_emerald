	@ src/data/easy_chat/easy_chat_group_endings.h:28 easy_chat_group_endings_line_28
	.globl gText_Rom_5763B4
gText_Rom_5763B4: @ 0x085763B4
	.string "かしら$"
	.if (. - gText_Rom_5763B4) > 0x4
	.error "gText_Rom_5763B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763B4) < 0x4
	.space 0x4 - (. - gText_Rom_5763B4)
	.endif
	@ Decoded text from ROM range: offset=0x5763B8, size=0xA
	.string "かな？$"
	.string "かも$"
	.string "くれ$"
