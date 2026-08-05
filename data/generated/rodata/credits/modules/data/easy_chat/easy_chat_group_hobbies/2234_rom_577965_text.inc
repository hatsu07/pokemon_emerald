	@ src/data/easy_chat/easy_chat_group_hobbies.h:220 easy_chat_group_hobbies_line_220 (+1 aliases)
	.globl gText_Rom_577965
gText_Rom_577965: @ 0x08577965
	.string "ぬいぐるみ$"
	.if (. - gText_Rom_577965) > 0x6
	.error "gText_Rom_577965 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577965) < 0x6
	.space 0x6 - (. - gText_Rom_577965)
	.endif
