	@ src/data/easy_chat/easy_chat_group_hobbies.h:136 easy_chat_group_hobbies_line_136 (+1 aliases)
	.globl gText_Rom_577926
gText_Rom_577926: @ 0x08577926
	.string "しゅみ$"
	.if (. - gText_Rom_577926) > 0x4
	.error "gText_Rom_577926 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577926) < 0x4
	.space 0x4 - (. - gText_Rom_577926)
	.endif
