	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:88 easy_chat_group_trendy_saying_line_88
	.globl gText_Rom_57892C
gText_Rom_57892C: @ 0x0857892C
	.string "トホホ$"
	.if (. - gText_Rom_57892C) > 0x4
	.error "gText_Rom_57892C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57892C) < 0x4
	.space 0x4 - (. - gText_Rom_57892C)
	.endif
