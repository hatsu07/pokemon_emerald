	@ src/data/easy_chat/easy_chat_group_conditions.h:136 easy_chat_group_conditions_line_136 (+1 aliases)
	.globl gText_Rom_576CE3
gText_Rom_576CE3: @ 0x08576CE3
	.string "おとなしい$"
	.if (. - gText_Rom_576CE3) > 0x6
	.error "gText_Rom_576CE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CE3) < 0x6
	.space 0x6 - (. - gText_Rom_576CE3)
	.endif
