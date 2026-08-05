	@ src/data/easy_chat/easy_chat_group_lifestyle.h:58 easy_chat_group_lifestyle_line_58
	.globl gText_Rom_5775F3
gText_Rom_5775F3: @ 0x085775F3
	.string "グループ$"
	.if (. - gText_Rom_5775F3) > 0x5
	.error "gText_Rom_5775F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775F3) < 0x5
	.space 0x5 - (. - gText_Rom_5775F3)
	.endif
