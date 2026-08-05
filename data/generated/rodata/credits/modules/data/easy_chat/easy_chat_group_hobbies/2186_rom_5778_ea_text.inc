	@ src/data/easy_chat/easy_chat_group_hobbies.h:64 easy_chat_group_hobbies_line_64
	.globl gText_Rom_5778EA
gText_Rom_5778EA: @ 0x085778EA
	.string "かいもの$"
	.if (. - gText_Rom_5778EA) > 0x5
	.error "gText_Rom_5778EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778EA) < 0x5
	.space 0x5 - (. - gText_Rom_5778EA)
	.endif
