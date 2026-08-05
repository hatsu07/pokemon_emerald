	@ src/data/easy_chat/easy_chat_group_greetings.h:148 easy_chat_group_greetings_line_148
	.globl gText_Rom_5754DB
gText_Rom_5754DB: @ 0x085754DB
	.string "どうぞ$"
	.if (. - gText_Rom_5754DB) > 0x4
	.error "gText_Rom_5754DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DB) < 0x4
	.space 0x4 - (. - gText_Rom_5754DB)
	.endif
