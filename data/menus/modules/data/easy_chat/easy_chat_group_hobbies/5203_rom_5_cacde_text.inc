	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_5CACDE
gText_Rom_5CACDE: @ 0x085CACDE
	.string "ボール{EOS}"
	.if (. - gText_Rom_5CACDE) > 0x4
	.error "gText_Rom_5CACDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACDE) < 0x4
	.space 0x4 - (. - gText_Rom_5CACDE)
	.endif
