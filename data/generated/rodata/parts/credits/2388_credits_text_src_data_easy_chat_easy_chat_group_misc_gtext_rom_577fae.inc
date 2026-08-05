	@ src/data/easy_chat/easy_chat_group_misc.h:238 easy_chat_group_misc_line_238
	.globl gText_Rom_577FAE
gText_Rom_577FAE: @ 0x08577FAE
	.string "なんの$"
	.if (. - gText_Rom_577FAE) > 0x4
	.error "gText_Rom_577FAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FAE) < 0x4
	.space 0x4 - (. - gText_Rom_577FAE)
	.endif
