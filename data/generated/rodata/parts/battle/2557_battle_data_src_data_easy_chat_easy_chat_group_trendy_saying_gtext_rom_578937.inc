	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:100 easy_chat_group_trendy_saying_line_100
	.globl gText_Rom_578937
gText_Rom_578937: @ 0x08578937
	.string "ナウイ$"
	.if (. - gText_Rom_578937) > 0x4
	.error "gText_Rom_578937 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578937) < 0x4
	.space 0x4 - (. - gText_Rom_578937)
	.endif
