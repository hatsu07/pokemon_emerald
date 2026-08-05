	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_577674
gText_Rom_577674: @ 0x08577674
	.string "メール$"
	.if (. - gText_Rom_577674) > 0x4
	.error "gText_Rom_577674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577674) < 0x4
	.space 0x4 - (. - gText_Rom_577674)
	.endif
