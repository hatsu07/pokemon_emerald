	@ src/data/easy_chat/easy_chat_group_time.h:70 easy_chat_group_time_line_70 (+1 aliases)
	.globl gText_Rom_577C6D
gText_Rom_577C6D: @ 0x08577C6D
	.string "かようび$"
	.if (. - gText_Rom_577C6D) > 0x5
	.error "gText_Rom_577C6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C6D) < 0x5
	.space 0x5 - (. - gText_Rom_577C6D)
	.endif
