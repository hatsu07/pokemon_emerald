	@ src/data/easy_chat/easy_chat_group_time.h:88 easy_chat_group_time_line_88 (+1 aliases)
	.globl gText_Rom_577C7A
gText_Rom_577C7A: @ 0x08577C7A
	.string "きんようび$"
	.if (. - gText_Rom_577C7A) > 0x6
	.error "gText_Rom_577C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C7A) < 0x6
	.space 0x6 - (. - gText_Rom_577C7A)
	.endif
