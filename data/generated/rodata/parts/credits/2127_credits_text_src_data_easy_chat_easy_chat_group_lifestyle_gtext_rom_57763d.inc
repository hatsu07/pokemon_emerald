	@ src/data/easy_chat/easy_chat_group_lifestyle.h:148 easy_chat_group_lifestyle_line_148
	.globl gText_Rom_57763D
gText_Rom_57763D: @ 0x0857763D
	.string "デジタル$"
	.if (. - gText_Rom_57763D) > 0x5
	.error "gText_Rom_57763D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57763D) < 0x5
	.space 0x5 - (. - gText_Rom_57763D)
	.endif
