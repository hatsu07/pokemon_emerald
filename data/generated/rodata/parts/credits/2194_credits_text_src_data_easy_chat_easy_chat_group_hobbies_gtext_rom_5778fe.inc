	@ src/data/easy_chat/easy_chat_group_hobbies.h:88 easy_chat_group_hobbies_line_88
	.globl gText_Rom_5778FE
gText_Rom_5778FE: @ 0x085778FE
	.string "グルメ$"
	.if (. - gText_Rom_5778FE) > 0x4
	.error "gText_Rom_5778FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778FE) < 0x4
	.space 0x4 - (. - gText_Rom_5778FE)
	.endif
