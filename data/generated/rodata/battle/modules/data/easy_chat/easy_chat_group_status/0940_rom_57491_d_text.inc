	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gText_Rom_57491D
gText_Rom_57491D: @ 0x0857491D
	.string "うつくしい$"
	.if (. - gText_Rom_57491D) > 0x6
	.error "gText_Rom_57491D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57491D) < 0x6
	.space 0x6 - (. - gText_Rom_57491D)
	.endif
