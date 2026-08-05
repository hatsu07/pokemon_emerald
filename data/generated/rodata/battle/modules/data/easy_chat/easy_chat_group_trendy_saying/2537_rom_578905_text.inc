	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:40 easy_chat_group_trendy_saying_line_40
	.globl gText_Rom_578905
gText_Rom_578905: @ 0x08578905
	.string "イカス$"
	.if (. - gText_Rom_578905) > 0x4
	.error "gText_Rom_578905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578905) < 0x4
	.space 0x4 - (. - gText_Rom_578905)
	.endif
