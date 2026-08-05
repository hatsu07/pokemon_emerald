	@ src/data/easy_chat/easy_chat_group_endings.h:238 easy_chat_group_endings_line_238
	.globl gText_Rom_57643F
gText_Rom_57643F: @ 0x0857643F
	.string "どうなの?$"
	.if (. - gText_Rom_57643F) > 0x6
	.error "gText_Rom_57643F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643F) < 0x6
	.space 0x6 - (. - gText_Rom_57643F)
	.endif
