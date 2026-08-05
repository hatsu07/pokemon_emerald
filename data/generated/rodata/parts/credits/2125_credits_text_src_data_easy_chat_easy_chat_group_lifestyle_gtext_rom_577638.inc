	@ src/data/easy_chat/easy_chat_group_lifestyle.h:142 easy_chat_group_lifestyle_line_142
	.globl gText_Rom_577638
gText_Rom_577638: @ 0x08577638
	.string "できごと$"
	.if (. - gText_Rom_577638) > 0x5
	.error "gText_Rom_577638 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577638) < 0x5
	.space 0x5 - (. - gText_Rom_577638)
	.endif
