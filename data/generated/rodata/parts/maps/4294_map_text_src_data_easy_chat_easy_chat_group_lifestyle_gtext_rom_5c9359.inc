	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_5C9359
gText_Rom_5C9359: @ 0x085C9359
	.string "なまえ$"
	.if (. - gText_Rom_5C9359) > 0x4
	.error "gText_Rom_5C9359 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9359) < 0x4
	.space 0x4 - (. - gText_Rom_5C9359)
	.endif
