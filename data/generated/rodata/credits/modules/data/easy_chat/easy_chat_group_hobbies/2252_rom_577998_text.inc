	@ src/data/easy_chat/easy_chat_group_hobbies.h:286 easy_chat_group_hobbies_line_286
	.globl gText_Rom_577998
gText_Rom_577998: @ 0x08577998
	.string "まつり$"
	.if (. - gText_Rom_577998) > 0x4
	.error "gText_Rom_577998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577998) < 0x4
	.space 0x4 - (. - gText_Rom_577998)
	.endif
