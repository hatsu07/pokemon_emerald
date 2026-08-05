	@ src/data/easy_chat/easy_chat_group_conditions.h:142 easy_chat_group_conditions_line_142
	.globl gText_Rom_576CE9
gText_Rom_576CE9: @ 0x08576CE9
	.string "おもしろい$"
	.if (. - gText_Rom_576CE9) > 0x6
	.error "gText_Rom_576CE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CE9) < 0x6
	.space 0x6 - (. - gText_Rom_576CE9)
	.endif
