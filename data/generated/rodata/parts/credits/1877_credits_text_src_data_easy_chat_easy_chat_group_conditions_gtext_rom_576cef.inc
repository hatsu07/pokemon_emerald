	@ src/data/easy_chat/easy_chat_group_conditions.h:148 easy_chat_group_conditions_line_148
	.globl gText_Rom_576CEF
gText_Rom_576CEF: @ 0x08576CEF
	.string "おもしろく$"
	.if (. - gText_Rom_576CEF) > 0x6
	.error "gText_Rom_576CEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CEF) < 0x6
	.space 0x6 - (. - gText_Rom_576CEF)
	.endif
