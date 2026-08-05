	@ src/data/easy_chat/easy_chat_group_lifestyle.h:88 easy_chat_group_lifestyle_line_88
	.globl gText_Rom_57760A
gText_Rom_57760A: @ 0x0857760A
	.string "システム$"
	.if (. - gText_Rom_57760A) > 0x5
	.error "gText_Rom_57760A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57760A) < 0x5
	.space 0x5 - (. - gText_Rom_57760A)
	.endif
