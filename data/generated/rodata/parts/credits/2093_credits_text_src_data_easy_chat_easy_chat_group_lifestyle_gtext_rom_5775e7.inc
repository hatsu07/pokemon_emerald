	@ src/data/easy_chat/easy_chat_group_lifestyle.h:40 easy_chat_group_lifestyle_line_40
	.globl gText_Rom_5775E7
gText_Rom_5775E7: @ 0x085775E7
	.string "がっこう$"
	.if (. - gText_Rom_5775E7) > 0x5
	.error "gText_Rom_5775E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775E7) < 0x5
	.space 0x5 - (. - gText_Rom_5775E7)
	.endif
