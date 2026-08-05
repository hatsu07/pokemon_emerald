	@ src/data/easy_chat/easy_chat_group_time.h:226 easy_chat_group_time_line_226
	.globl gText_Rom_577CE0
gText_Rom_577CE0: @ 0x08577CE0
	.string "まいにち$"
	.if (. - gText_Rom_577CE0) > 0x5
	.error "gText_Rom_577CE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CE0) < 0x5
	.space 0x5 - (. - gText_Rom_577CE0)
	.endif
