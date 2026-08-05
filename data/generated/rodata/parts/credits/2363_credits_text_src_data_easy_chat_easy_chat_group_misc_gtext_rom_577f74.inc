	@ src/data/easy_chat/easy_chat_group_misc.h:148 easy_chat_group_misc_line_148
	.globl gText_Rom_577F74
gText_Rom_577F74: @ 0x08577F74
	.string "それは$"
	.if (. - gText_Rom_577F74) > 0x4
	.error "gText_Rom_577F74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F74) < 0x4
	.space 0x4 - (. - gText_Rom_577F74)
	.endif
