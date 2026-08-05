	@ src/data/easy_chat/easy_chat_group_hobbies.h:82 easy_chat_group_hobbies_line_82
	.globl gText_Rom_5778F9
gText_Rom_5778F9: @ 0x085778F9
	.string "かんせん$"
	.if (. - gText_Rom_5778F9) > 0x5
	.error "gText_Rom_5778F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778F9) < 0x5
	.space 0x5 - (. - gText_Rom_5778F9)
	.endif
