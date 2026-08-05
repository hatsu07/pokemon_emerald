	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_577653
gText_Rom_577653: @ 0x08577653
	.string "どうぐ$"
	.if (. - gText_Rom_577653) > 0x4
	.error "gText_Rom_577653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577653) < 0x4
	.space 0x4 - (. - gText_Rom_577653)
	.endif
