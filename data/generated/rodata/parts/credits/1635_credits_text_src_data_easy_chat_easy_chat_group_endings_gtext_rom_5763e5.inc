	@ src/data/easy_chat/easy_chat_group_endings.h:112 easy_chat_group_endings_line_112
	.globl gText_Rom_5763E5
gText_Rom_5763E5: @ 0x085763E5
	.string "だからね$"
	.if (. - gText_Rom_5763E5) > 0x5
	.error "gText_Rom_5763E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763E5) < 0x5
	.space 0x5 - (. - gText_Rom_5763E5)
	.endif
	@ Decoded text from ROM range: offset=0x5763EA, size=0x3
	.string "だぜ$"
