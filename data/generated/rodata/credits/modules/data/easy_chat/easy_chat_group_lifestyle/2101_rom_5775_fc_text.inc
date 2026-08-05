	@ src/data/easy_chat/easy_chat_group_lifestyle.h:70 easy_chat_group_lifestyle_line_70
	.globl gText_Rom_5775FC
gText_Rom_5775FC: @ 0x085775FC
	.string "コンビニ$"
	.if (. - gText_Rom_5775FC) > 0x5
	.error "gText_Rom_5775FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775FC) < 0x5
	.space 0x5 - (. - gText_Rom_5775FC)
	.endif
