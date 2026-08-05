	@ src/data/easy_chat/easy_chat_group_time.h:94 easy_chat_group_time_line_94 (+1 aliases)
	.globl gText_Rom_577C80
gText_Rom_577C80: @ 0x08577C80
	.string "げつようび$"
	.if (. - gText_Rom_577C80) > 0x6
	.error "gText_Rom_577C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C80) < 0x6
	.space 0x6 - (. - gText_Rom_577C80)
	.endif
