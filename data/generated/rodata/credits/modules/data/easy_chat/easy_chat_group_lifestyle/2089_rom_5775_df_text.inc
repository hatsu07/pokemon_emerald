	@ src/data/easy_chat/easy_chat_group_lifestyle.h:28 easy_chat_group_lifestyle_line_28
	.globl gText_Rom_5775DF
gText_Rom_5775DF: @ 0x085775DF
	.string "おふろ$"
	.if (. - gText_Rom_5775DF) > 0x4
	.error "gText_Rom_5775DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775DF) < 0x4
	.space 0x4 - (. - gText_Rom_5775DF)
	.endif
