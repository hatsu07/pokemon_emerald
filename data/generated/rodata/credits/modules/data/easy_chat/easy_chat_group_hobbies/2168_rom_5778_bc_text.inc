	@ src/data/easy_chat/easy_chat_group_hobbies.h:4 easy_chat_group_hobbies_line_4
	.globl gText_Rom_5778BC
gText_Rom_5778BC: @ 0x085778BC
	.string "アイドル$"
	.if (. - gText_Rom_5778BC) > 0x5
	.error "gText_Rom_5778BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778BC) < 0x5
	.space 0x5 - (. - gText_Rom_5778BC)
	.endif
