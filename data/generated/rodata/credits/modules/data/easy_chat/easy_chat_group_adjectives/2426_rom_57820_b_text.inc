	@ src/data/easy_chat/easy_chat_group_adjectives.h:106 easy_chat_group_adjectives_line_106
	.globl gText_Rom_57820B
gText_Rom_57820B: @ 0x0857820B
	.string "なでなで$"
	.if (. - gText_Rom_57820B) > 0x5
	.error "gText_Rom_57820B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57820B) < 0x5
	.space 0x5 - (. - gText_Rom_57820B)
	.endif
