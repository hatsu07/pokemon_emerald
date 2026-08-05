	@ src/data/easy_chat/easy_chat_group_conditions.h:262 easy_chat_group_conditions_line_262
	.globl gText_Rom_576D47
gText_Rom_576D47: @ 0x08576D47
	.string "とくい$"
	.if (. - gText_Rom_576D47) > 0x4
	.error "gText_Rom_576D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D47) < 0x4
	.space 0x4 - (. - gText_Rom_576D47)
	.endif
