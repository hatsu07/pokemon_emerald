	@ src/data/easy_chat/easy_chat_group_hobbies.h:292 easy_chat_group_hobbies_line_292
	.globl gText_Rom_57799C
gText_Rom_57799C: @ 0x0857799C
	.string "まんが$"
	.if (. - gText_Rom_57799C) > 0x4
	.error "gText_Rom_57799C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57799C) < 0x4
	.space 0x4 - (. - gText_Rom_57799C)
	.endif
