	@ src/data/easy_chat/easy_chat_group_hobbies.h:238 easy_chat_group_hobbies_line_238
	.globl gText_Rom_577973
gText_Rom_577973: @ 0x08577973
	.string "ヒーロー$"
	.if (. - gText_Rom_577973) > 0x5
	.error "gText_Rom_577973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577973) < 0x5
	.space 0x5 - (. - gText_Rom_577973)
	.endif
