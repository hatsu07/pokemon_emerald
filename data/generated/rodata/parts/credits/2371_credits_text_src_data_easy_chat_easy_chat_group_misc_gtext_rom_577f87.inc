	@ src/data/easy_chat/easy_chat_group_misc.h:178 easy_chat_group_misc_line_178
	.globl gText_Rom_577F87
gText_Rom_577F87: @ 0x08577F87
	.string "どの$"
	.if (. - gText_Rom_577F87) > 0x3
	.error "gText_Rom_577F87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F87) < 0x3
	.space 0x3 - (. - gText_Rom_577F87)
	.endif
