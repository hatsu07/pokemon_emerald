	@ src/data/easy_chat/easy_chat_group_lifestyle.h:112 easy_chat_group_lifestyle_line_112
	.globl gText_Rom_57761F
gText_Rom_57761F: @ 0x0857761F
	.string "じょうほう$"
	.if (. - gText_Rom_57761F) > 0x6
	.error "gText_Rom_57761F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57761F) < 0x6
	.space 0x6 - (. - gText_Rom_57761F)
	.endif
