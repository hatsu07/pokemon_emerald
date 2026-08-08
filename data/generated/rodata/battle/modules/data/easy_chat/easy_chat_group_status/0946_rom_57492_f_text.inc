	@ src/data/easy_chat/easy_chat_group_status.h:88 easy_chat_group_status_line_88 (+1 aliases)
	.globl gText_Rom_57492F
gText_Rom_57492F: @ 0x0857492F
	.string "エスパー$"
	.if (. - gText_Rom_57492F) > 0x5
	.error "gText_Rom_57492F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57492F) < 0x5
	.space 0x5 - (. - gText_Rom_57492F)
	.endif
