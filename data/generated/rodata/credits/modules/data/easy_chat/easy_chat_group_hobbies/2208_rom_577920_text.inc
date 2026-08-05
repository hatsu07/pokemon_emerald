	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_577920
gText_Rom_577920: @ 0x08577920
	.string "じてんしゃ$"
	.if (. - gText_Rom_577920) > 0x6
	.error "gText_Rom_577920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577920) < 0x6
	.space 0x6 - (. - gText_Rom_577920)
	.endif
