	@ src/data/easy_chat/easy_chat_group_lifestyle.h:100 easy_chat_group_lifestyle_line_100
	.globl gText_Rom_577615
gText_Rom_577615: @ 0x08577615
	.string "じゅぎょう$"
	.if (. - gText_Rom_577615) > 0x6
	.error "gText_Rom_577615 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577615) < 0x6
	.space 0x6 - (. - gText_Rom_577615)
	.endif
