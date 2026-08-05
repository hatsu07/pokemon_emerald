	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:70 easy_chat_group_trendy_saying_line_70
	.globl gText_Rom_57891C
gText_Rom_57891C: @ 0x0857891C
	.string "ぎゃふん$"
	.if (. - gText_Rom_57891C) > 0x5
	.error "gText_Rom_57891C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57891C) < 0x5
	.space 0x5 - (. - gText_Rom_57891C)
	.endif
