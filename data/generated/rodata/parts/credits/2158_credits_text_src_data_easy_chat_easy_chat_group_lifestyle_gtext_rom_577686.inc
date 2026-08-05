	@ src/data/easy_chat/easy_chat_group_lifestyle.h:244 easy_chat_group_lifestyle_line_244
	.globl gText_Rom_577686
gText_Rom_577686: @ 0x08577686
	.string "ようちえん$"
	.if (. - gText_Rom_577686) > 0x6
	.error "gText_Rom_577686 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577686) < 0x6
	.space 0x6 - (. - gText_Rom_577686)
	.endif
