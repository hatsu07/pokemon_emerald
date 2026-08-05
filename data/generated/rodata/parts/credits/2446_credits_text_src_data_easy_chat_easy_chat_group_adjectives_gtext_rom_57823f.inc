	@ src/data/easy_chat/easy_chat_group_adjectives.h:166 easy_chat_group_adjectives_line_166
	.globl gText_Rom_57823F
gText_Rom_57823F: @ 0x0857823F
	.string "べろべろ$"
	.if (. - gText_Rom_57823F) > 0x5
	.error "gText_Rom_57823F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57823F) < 0x5
	.space 0x5 - (. - gText_Rom_57823F)
	.endif
