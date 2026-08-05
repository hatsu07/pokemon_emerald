	@ src/data/easy_chat/easy_chat_group_actions.h:88 easy_chat_group_actions_line_88
	.globl gText_Rom_577125
gText_Rom_577125: @ 0x08577125
	.string "おこる$"
	.if (. - gText_Rom_577125) > 0x4
	.error "gText_Rom_577125 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577125) < 0x4
	.space 0x4 - (. - gText_Rom_577125)
	.endif
