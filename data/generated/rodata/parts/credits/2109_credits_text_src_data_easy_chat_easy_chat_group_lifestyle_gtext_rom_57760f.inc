	@ src/data/easy_chat/easy_chat_group_lifestyle.h:94 easy_chat_group_lifestyle_line_94
	.globl gText_Rom_57760F
gText_Rom_57760F: @ 0x0857760F
	.string "しゅぎょう$"
	.if (. - gText_Rom_57760F) > 0x6
	.error "gText_Rom_57760F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57760F) < 0x6
	.space 0x6 - (. - gText_Rom_57760F)
	.endif
