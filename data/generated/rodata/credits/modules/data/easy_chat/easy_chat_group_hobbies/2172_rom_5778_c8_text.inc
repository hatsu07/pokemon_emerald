	@ src/data/easy_chat/easy_chat_group_hobbies.h:22 easy_chat_group_hobbies_line_22
	.globl gText_Rom_5778C8
gText_Rom_5778C8: @ 0x085778C8
	.string "えいが$"
	.if (. - gText_Rom_5778C8) > 0x4
	.error "gText_Rom_5778C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778C8) < 0x4
	.space 0x4 - (. - gText_Rom_5778C8)
	.endif
