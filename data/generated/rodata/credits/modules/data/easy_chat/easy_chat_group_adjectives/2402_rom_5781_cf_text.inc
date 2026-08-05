	@ src/data/easy_chat/easy_chat_group_adjectives.h:34 easy_chat_group_adjectives_line_34
	.globl gText_Rom_5781CF
gText_Rom_5781CF: @ 0x085781CF
	.string "クスクス$"
	.if (. - gText_Rom_5781CF) > 0x5
	.error "gText_Rom_5781CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781CF) < 0x5
	.space 0x5 - (. - gText_Rom_5781CF)
	.endif
