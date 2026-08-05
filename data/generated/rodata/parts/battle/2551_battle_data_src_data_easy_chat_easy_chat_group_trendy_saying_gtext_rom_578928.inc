	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:82 easy_chat_group_trendy_saying_line_82
	.globl gText_Rom_578928
gText_Rom_578928: @ 0x08578928
	.string "ダサイ$"
	.if (. - gText_Rom_578928) > 0x4
	.error "gText_Rom_578928 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578928) < 0x4
	.space 0x4 - (. - gText_Rom_578928)
	.endif
