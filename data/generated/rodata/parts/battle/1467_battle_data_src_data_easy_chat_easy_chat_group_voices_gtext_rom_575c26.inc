	@ src/data/easy_chat/easy_chat_group_voices.h:100 easy_chat_group_voices_line_100
	.globl gText_Rom_575C26
gText_Rom_575C26: @ 0x08575C26
	.string "うおー!$"
	.if (. - gText_Rom_575C26) > 0x5
	.error "gText_Rom_575C26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C26) < 0x5
	.space 0x5 - (. - gText_Rom_575C26)
	.endif
