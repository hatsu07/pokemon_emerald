	@ src/data/easy_chat/easy_chat_group_conditions.h:64 easy_chat_group_conditions_line_64
	.globl gText_Rom_576CAE
gText_Rom_576CAE: @ 0x08576CAE
	.string "いそがしい$"
	.if (. - gText_Rom_576CAE) > 0x6
	.error "gText_Rom_576CAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CAE) < 0x6
	.space 0x6 - (. - gText_Rom_576CAE)
	.endif
