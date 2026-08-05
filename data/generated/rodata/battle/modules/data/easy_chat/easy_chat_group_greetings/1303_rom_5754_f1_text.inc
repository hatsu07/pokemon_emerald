	@ src/data/easy_chat/easy_chat_group_greetings.h:184 easy_chat_group_greetings_line_184
	.globl gText_Rom_5754F1
gText_Rom_5754F1: @ 0x085754F1
	.string "ハーイ$"
	.if (. - gText_Rom_5754F1) > 0x4
	.error "gText_Rom_5754F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F1) < 0x4
	.space 0x4 - (. - gText_Rom_5754F1)
	.endif
