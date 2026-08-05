	@ src/data/easy_chat/easy_chat_group_greetings.h:220 easy_chat_group_greetings_line_220
	.globl gText_Rom_57550D
gText_Rom_57550D: @ 0x0857550D
	.string "もしもし$"
	.if (. - gText_Rom_57550D) > 0x5
	.error "gText_Rom_57550D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57550D) < 0x5
	.space 0x5 - (. - gText_Rom_57550D)
	.endif
