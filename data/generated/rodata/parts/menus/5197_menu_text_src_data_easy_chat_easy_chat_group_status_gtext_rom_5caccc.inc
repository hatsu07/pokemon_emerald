	@ src/data/easy_chat/easy_chat_group_status.h:310 easy_chat_group_status_line_310
	.globl gText_Rom_5CACCC
gText_Rom_5CACCC: @ 0x085CACCC
	.string "たくましい$"
	.if (. - gText_Rom_5CACCC) > 0x6
	.error "gText_Rom_5CACCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACCC) < 0x6
	.space 0x6 - (. - gText_Rom_5CACCC)
	.endif
