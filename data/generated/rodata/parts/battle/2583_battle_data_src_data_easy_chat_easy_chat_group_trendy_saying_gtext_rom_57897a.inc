	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:178 easy_chat_group_trendy_saying_line_178
	.globl gText_Rom_57897A
gText_Rom_57897A: @ 0x0857897A
	.string "むねキュン$"
	.if (. - gText_Rom_57897A) > 0x6
	.error "gText_Rom_57897A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57897A) < 0x6
	.space 0x6 - (. - gText_Rom_57897A)
	.endif
