	@ src/data/easy_chat/easy_chat_group_adjectives.h:148 easy_chat_group_adjectives_line_148
	.globl gText_Rom_57822E
gText_Rom_57822E: @ 0x0857822E
	.string "ふにゃふにゃ$"
	.if (. - gText_Rom_57822E) > 0x7
	.error "gText_Rom_57822E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57822E) < 0x7
	.space 0x7 - (. - gText_Rom_57822E)
	.endif
