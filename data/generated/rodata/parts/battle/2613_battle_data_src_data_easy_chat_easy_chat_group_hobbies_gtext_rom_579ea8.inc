	@ src/data/easy_chat/easy_chat_group_hobbies.h:136 easy_chat_group_hobbies_line_136 (+1 aliases)
	.globl gText_Rom_579EA8
gText_Rom_579EA8: @ 0x08579EA8
	.string "しゅみ$"
	.if (. - gText_Rom_579EA8) > 0x4
	.error "gText_Rom_579EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EA8) < 0x4
	.space 0x4 - (. - gText_Rom_579EA8)
	.endif
