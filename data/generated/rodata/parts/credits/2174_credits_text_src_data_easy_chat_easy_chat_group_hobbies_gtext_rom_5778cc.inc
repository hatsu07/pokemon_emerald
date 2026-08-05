	@ src/data/easy_chat/easy_chat_group_hobbies.h:28 easy_chat_group_hobbies_line_28
	.globl gText_Rom_5778CC
gText_Rom_5778CC: @ 0x085778CC
	.string "おかし$"
	.if (. - gText_Rom_5778CC) > 0x4
	.error "gText_Rom_5778CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778CC) < 0x4
	.space 0x4 - (. - gText_Rom_5778CC)
	.endif
