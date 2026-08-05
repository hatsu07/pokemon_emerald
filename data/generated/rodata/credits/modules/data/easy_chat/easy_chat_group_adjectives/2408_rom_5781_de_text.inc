	@ src/data/easy_chat/easy_chat_group_adjectives.h:52 easy_chat_group_adjectives_line_52
	.globl gText_Rom_5781DE
gText_Rom_5781DE: @ 0x085781DE
	.string "ごくごく$"
	.if (. - gText_Rom_5781DE) > 0x5
	.error "gText_Rom_5781DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781DE) < 0x5
	.space 0x5 - (. - gText_Rom_5781DE)
	.endif
