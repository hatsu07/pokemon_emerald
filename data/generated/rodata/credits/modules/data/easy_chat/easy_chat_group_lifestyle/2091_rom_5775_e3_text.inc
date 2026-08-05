	@ src/data/easy_chat/easy_chat_group_lifestyle.h:34 easy_chat_group_lifestyle_line_34 (+1 aliases)
	.globl gText_Rom_5775E3
gText_Rom_5775E3: @ 0x085775E3
	.string "かいわ$"
	.if (. - gText_Rom_5775E3) > 0x4
	.error "gText_Rom_5775E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775E3) < 0x4
	.space 0x4 - (. - gText_Rom_5775E3)
	.endif
