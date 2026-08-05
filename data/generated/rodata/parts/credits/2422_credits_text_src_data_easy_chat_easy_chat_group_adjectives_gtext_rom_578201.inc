	@ src/data/easy_chat/easy_chat_group_adjectives.h:94 easy_chat_group_adjectives_line_94
	.globl gText_Rom_578201
gText_Rom_578201: @ 0x08578201
	.string "ドキドキ$"
	.if (. - gText_Rom_578201) > 0x5
	.error "gText_Rom_578201 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578201) < 0x5
	.space 0x5 - (. - gText_Rom_578201)
	.endif
