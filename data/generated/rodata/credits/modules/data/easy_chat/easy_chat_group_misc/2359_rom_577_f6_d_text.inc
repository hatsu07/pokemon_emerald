	@ src/data/easy_chat/easy_chat_group_misc.h:136 easy_chat_group_misc_line_136
	.globl gText_Rom_577F6D
gText_Rom_577F6D: @ 0x08577F6D
	.string "それ$"
	.if (. - gText_Rom_577F6D) > 0x3
	.error "gText_Rom_577F6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F6D) < 0x3
	.space 0x3 - (. - gText_Rom_577F6D)
	.endif
