	@ src/data/easy_chat/easy_chat_group_conditions.h:280 easy_chat_group_conditions_line_280
	.globl gText_Rom_576D55
gText_Rom_576D55: @ 0x08576D55
	.string "とんでもない$"
	.if (. - gText_Rom_576D55) > 0x7
	.error "gText_Rom_576D55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D55) < 0x7
	.space 0x7 - (. - gText_Rom_576D55)
	.endif
	@ Decoded text from ROM range: offset=0x576D5C, size=0x3
	.string "ない$"
