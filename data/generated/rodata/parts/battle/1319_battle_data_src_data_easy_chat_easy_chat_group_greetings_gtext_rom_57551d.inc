	@ src/data/easy_chat/easy_chat_group_greetings.h:244 easy_chat_group_greetings_line_244
	.globl gText_Rom_57551D
gText_Rom_57551D: @ 0x0857551D
	.string "ようこそ$"
	.if (. - gText_Rom_57551D) > 0x5
	.error "gText_Rom_57551D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57551D) < 0x5
	.space 0x5 - (. - gText_Rom_57551D)
	.endif
