	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:64 easy_chat_group_trendy_saying_line_64
	.globl gText_Rom_578917
gText_Rom_578917: @ 0x08578917
	.string "おニュー$"
	.if (. - gText_Rom_578917) > 0x5
	.error "gText_Rom_578917 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578917) < 0x5
	.space 0x5 - (. - gText_Rom_578917)
	.endif
