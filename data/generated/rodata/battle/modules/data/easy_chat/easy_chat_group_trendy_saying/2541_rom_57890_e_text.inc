	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:52 easy_chat_group_trendy_saying_line_52
	.globl gText_Rom_57890E
gText_Rom_57890E: @ 0x0857890E
	.string "いのち$"
	.if (. - gText_Rom_57890E) > 0x4
	.error "gText_Rom_57890E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57890E) < 0x4
	.space 0x4 - (. - gText_Rom_57890E)
	.endif
