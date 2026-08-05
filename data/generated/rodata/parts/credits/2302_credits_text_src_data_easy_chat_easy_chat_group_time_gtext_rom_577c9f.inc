	@ src/data/easy_chat/easy_chat_group_time.h:130 easy_chat_group_time_line_130 (+1 aliases)
	.globl gText_Rom_577C9F
gText_Rom_577C9F: @ 0x08577C9F
	.string "すいようび$"
	.if (. - gText_Rom_577C9F) > 0x6
	.error "gText_Rom_577C9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C9F) < 0x6
	.space 0x6 - (. - gText_Rom_577C9F)
	.endif
	@ Decoded text from ROM range: offset=0x577CA5, size=0x3
	.string "すぐ$"
