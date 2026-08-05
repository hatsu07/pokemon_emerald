	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:34 easy_chat_group_trendy_saying_line_34
	.globl gText_Rom_578900
gText_Rom_578900: @ 0x08578900
	.string "イェーイ$"
	.if (. - gText_Rom_578900) > 0x5
	.error "gText_Rom_578900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578900) < 0x5
	.space 0x5 - (. - gText_Rom_578900)
	.endif
