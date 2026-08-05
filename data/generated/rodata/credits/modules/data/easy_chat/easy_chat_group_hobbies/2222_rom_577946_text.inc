	@ src/data/easy_chat/easy_chat_group_hobbies.h:178 easy_chat_group_hobbies_line_178
	.globl gText_Rom_577946
gText_Rom_577946: @ 0x08577946
	.string "ダンス$"
	.if (. - gText_Rom_577946) > 0x4
	.error "gText_Rom_577946 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577946) < 0x4
	.space 0x4 - (. - gText_Rom_577946)
	.endif
