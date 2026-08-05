	@ src/data/easy_chat/easy_chat_group_conditions.h:292 easy_chat_group_conditions_line_292
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576D5F
gText_Rom_576D5F: @ 0x08576D5F
	.string "なかった$"
	.if (. - gText_Rom_576D5F) != 0x5
	.error "gText_Rom_576D5F must retain its original byte length"
	.endif
