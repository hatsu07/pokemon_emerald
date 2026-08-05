	@ src/data/easy_chat/easy_chat_group_misc.h:142 easy_chat_group_misc_line_142
	.globl gText_Rom_577F70
gText_Rom_577F70: @ 0x08577F70
	.string "それだ$"
	.if (. - gText_Rom_577F70) > 0x4
	.error "gText_Rom_577F70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F70) < 0x4
	.space 0x4 - (. - gText_Rom_577F70)
	.endif
