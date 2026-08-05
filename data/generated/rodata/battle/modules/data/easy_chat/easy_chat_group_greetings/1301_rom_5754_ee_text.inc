	@ src/data/easy_chat/easy_chat_group_greetings.h:178 easy_chat_group_greetings_line_178
	.globl gText_Rom_5754EE
gText_Rom_5754EE: @ 0x085754EE
	.string "ノー$"
	.if (. - gText_Rom_5754EE) > 0x3
	.error "gText_Rom_5754EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754EE) < 0x3
	.space 0x3 - (. - gText_Rom_5754EE)
	.endif
