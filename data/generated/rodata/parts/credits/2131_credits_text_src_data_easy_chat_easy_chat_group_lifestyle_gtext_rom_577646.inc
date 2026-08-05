	@ src/data/easy_chat/easy_chat_group_lifestyle.h:160 easy_chat_group_lifestyle_line_160
	.globl gText_Rom_577646
gText_Rom_577646: @ 0x08577646
	.string "デパート$"
	.if (. - gText_Rom_577646) > 0x5
	.error "gText_Rom_577646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577646) < 0x5
	.space 0x5 - (. - gText_Rom_577646)
	.endif
