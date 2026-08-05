	@ src/data/easy_chat/easy_chat_group_greetings.h:196 easy_chat_group_greetings_line_196
	.globl gText_Rom_5754FA
gText_Rom_5754FA: @ 0x085754FA
	.string "バイバイ$"
	.if (. - gText_Rom_5754FA) > 0x5
	.error "gText_Rom_5754FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FA) < 0x5
	.space 0x5 - (. - gText_Rom_5754FA)
	.endif
