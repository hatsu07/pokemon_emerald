	@ src/data/easy_chat/easy_chat_group_conditions.h:250 easy_chat_group_conditions_line_250
	.globl gText_Rom_576D3F
gText_Rom_576D3F: @ 0x08576D3F
	.string "ちがう$"
	.if (. - gText_Rom_576D3F) > 0x4
	.error "gText_Rom_576D3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D3F) < 0x4
	.space 0x4 - (. - gText_Rom_576D3F)
	.endif
