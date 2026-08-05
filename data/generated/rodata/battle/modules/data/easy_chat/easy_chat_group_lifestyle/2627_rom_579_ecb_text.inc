	@ src/data/easy_chat/easy_chat_group_lifestyle.h:64 easy_chat_group_lifestyle_line_64
	.globl gText_Rom_579ECB
gText_Rom_579ECB: @ 0x08579ECB
	.string "ことば$"
	.if (. - gText_Rom_579ECB) > 0x4
	.error "gText_Rom_579ECB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579ECB) < 0x4
	.space 0x4 - (. - gText_Rom_579ECB)
	.endif
