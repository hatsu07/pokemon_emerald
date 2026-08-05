	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:136 easy_chat_group_trendy_saying_line_136
	.globl gText_Rom_578953
gText_Rom_578953: @ 0x08578953
	.string "バカウケ$"
	.if (. - gText_Rom_578953) > 0x5
	.error "gText_Rom_578953 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578953) < 0x5
	.space 0x5 - (. - gText_Rom_578953)
	.endif
