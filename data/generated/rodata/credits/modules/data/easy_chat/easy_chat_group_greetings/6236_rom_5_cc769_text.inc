	@ src/data/easy_chat/easy_chat_group_greetings.h:94 easy_chat_group_greetings_line_94 (+1 aliases)
	.globl gText_Rom_5CC769
gText_Rom_5CC769: @ 0x085CC769
	.string "こんにちは$"
	.if (. - gText_Rom_5CC769) > 0x6
	.error "gText_Rom_5CC769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC769) < 0x6
	.space 0x6 - (. - gText_Rom_5CC769)
	.endif
