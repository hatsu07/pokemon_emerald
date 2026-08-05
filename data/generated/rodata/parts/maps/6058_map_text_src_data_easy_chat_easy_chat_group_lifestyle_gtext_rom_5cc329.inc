	@ src/data/easy_chat/easy_chat_group_lifestyle.h:22 easy_chat_group_lifestyle_line_22 (+1 aliases)
	.globl gText_Rom_5CC329
gText_Rom_5CC329: @ 0x085CC329
	.string "おこづかい$"
	.if (. - gText_Rom_5CC329) > 0x6
	.error "gText_Rom_5CC329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC329) < 0x6
	.space 0x6 - (. - gText_Rom_5CC329)
	.endif
