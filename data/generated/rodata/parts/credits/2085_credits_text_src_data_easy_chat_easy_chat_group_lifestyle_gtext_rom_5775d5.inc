	@ src/data/easy_chat/easy_chat_group_lifestyle.h:16 easy_chat_group_lifestyle_line_16
	.globl gText_Rom_5775D5
gText_Rom_5775D5: @ 0x085775D5
	.string "おかね$"
	.if (. - gText_Rom_5775D5) > 0x4
	.error "gText_Rom_5775D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775D5) < 0x4
	.space 0x4 - (. - gText_Rom_5775D5)
	.endif
