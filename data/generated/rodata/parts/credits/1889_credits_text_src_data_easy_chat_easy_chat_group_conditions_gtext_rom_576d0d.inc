	@ src/data/easy_chat/easy_chat_group_conditions.h:184 easy_chat_group_conditions_line_184
	.globl gText_Rom_576D0D
gText_Rom_576D0D: @ 0x08576D0D
	.string "さむい$"
	.if (. - gText_Rom_576D0D) > 0x4
	.error "gText_Rom_576D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D0D) < 0x4
	.space 0x4 - (. - gText_Rom_576D0D)
	.endif
