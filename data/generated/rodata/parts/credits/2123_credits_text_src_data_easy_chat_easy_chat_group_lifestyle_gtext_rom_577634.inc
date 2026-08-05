	@ src/data/easy_chat/easy_chat_group_lifestyle.h:136 easy_chat_group_lifestyle_line_136
	.globl gText_Rom_577634
gText_Rom_577634: @ 0x08577634
	.string "てがみ$"
	.if (. - gText_Rom_577634) > 0x4
	.error "gText_Rom_577634 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577634) < 0x4
	.space 0x4 - (. - gText_Rom_577634)
	.endif
