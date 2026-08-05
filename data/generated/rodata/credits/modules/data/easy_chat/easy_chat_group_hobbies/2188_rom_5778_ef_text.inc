	@ src/data/easy_chat/easy_chat_group_hobbies.h:70 easy_chat_group_hobbies_line_70
	.globl gText_Rom_5778EF
gText_Rom_5778EF: @ 0x085778EF
	.string "カメラ$"
	.if (. - gText_Rom_5778EF) > 0x4
	.error "gText_Rom_5778EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778EF) < 0x4
	.space 0x4 - (. - gText_Rom_5778EF)
	.endif
