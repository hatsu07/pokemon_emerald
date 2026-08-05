	@ src/data/easy_chat/easy_chat_group_status.h:232 easy_chat_group_status_line_232 (+1 aliases)
	.globl gText_Rom_5749B7
gText_Rom_5749B7: @ 0x085749B7
	.string "じめん$"
	.if (. - gText_Rom_5749B7) > 0x4
	.error "gText_Rom_5749B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5749B7) < 0x4
	.space 0x4 - (. - gText_Rom_5749B7)
	.endif
