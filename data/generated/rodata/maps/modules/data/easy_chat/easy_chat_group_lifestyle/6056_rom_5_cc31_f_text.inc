	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_5CC31F
gText_Rom_5CC31F: @ 0x085CC31F
	.string "なまえ$"
	.if (. - gText_Rom_5CC31F) > 0x4
	.error "gText_Rom_5CC31F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC31F) < 0x4
	.space 0x4 - (. - gText_Rom_5CC31F)
	.endif
