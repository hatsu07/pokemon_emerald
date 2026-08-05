	@ src/data/easy_chat/easy_chat_group_hobbies.h:202 easy_chat_group_hobbies_line_202
	.globl gText_Rom_577957
gText_Rom_577957: @ 0x08577957
	.string "デート$"
	.if (. - gText_Rom_577957) > 0x4
	.error "gText_Rom_577957 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577957) < 0x4
	.space 0x4 - (. - gText_Rom_577957)
	.endif
