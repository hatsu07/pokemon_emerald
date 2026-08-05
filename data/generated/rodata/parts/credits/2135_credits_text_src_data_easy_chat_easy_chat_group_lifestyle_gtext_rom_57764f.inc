	@ src/data/easy_chat/easy_chat_group_lifestyle.h:172 easy_chat_group_lifestyle_line_172
	.globl gText_Rom_57764F
gText_Rom_57764F: @ 0x0857764F
	.string "でんわ$"
	.if (. - gText_Rom_57764F) > 0x4
	.error "gText_Rom_57764F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57764F) < 0x4
	.space 0x4 - (. - gText_Rom_57764F)
	.endif
