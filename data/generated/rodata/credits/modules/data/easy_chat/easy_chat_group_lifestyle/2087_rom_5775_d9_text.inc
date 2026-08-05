	@ src/data/easy_chat/easy_chat_group_lifestyle.h:22 easy_chat_group_lifestyle_line_22 (+1 aliases)
	.globl gText_Rom_5775D9
gText_Rom_5775D9: @ 0x085775D9
	.string "おこづかい$"
	.if (. - gText_Rom_5775D9) > 0x6
	.error "gText_Rom_5775D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775D9) < 0x6
	.space 0x6 - (. - gText_Rom_5775D9)
	.endif
