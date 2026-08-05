	@ src/data/easy_chat/easy_chat_group_hobbies.h:268 easy_chat_group_hobbies_line_268
	.globl gText_Rom_57798D
gText_Rom_57798D: @ 0x0857798D
	.string "ボード$"
	.if (. - gText_Rom_57798D) > 0x4
	.error "gText_Rom_57798D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57798D) < 0x4
	.space 0x4 - (. - gText_Rom_57798D)
	.endif
