	@ src/data/easy_chat/easy_chat_group_hobbies.h:76 easy_chat_group_hobbies_line_76
	.globl gText_Rom_5778F3
gText_Rom_5778F3: @ 0x085778F3
	.string "かんしょう$"
	.if (. - gText_Rom_5778F3) > 0x6
	.error "gText_Rom_5778F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778F3) < 0x6
	.space 0x6 - (. - gText_Rom_5778F3)
	.endif
