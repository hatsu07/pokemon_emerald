	@ src/data/easy_chat/easy_chat_group_greetings.h:190 easy_chat_group_greetings_line_190
	.globl gText_Rom_5754F5
gText_Rom_5754F5: @ 0x085754F5
	.string "はいはい$"
	.if (. - gText_Rom_5754F5) > 0x5
	.error "gText_Rom_5754F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F5) < 0x5
	.space 0x5 - (. - gText_Rom_5754F5)
	.endif
