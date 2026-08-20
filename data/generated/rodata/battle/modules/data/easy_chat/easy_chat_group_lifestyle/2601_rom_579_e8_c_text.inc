	@ src/data/easy_chat/easy_chat_group_lifestyle.h:34 easy_chat_group_lifestyle_line_34 (+1 aliases)
	.globl gText_Rom_579E8C
gText_Rom_579E8C: @ 0x08579E8C
	.string "かいわ{EOS}"
	.if (. - gText_Rom_579E8C) > 0x4
	.error "gText_Rom_579E8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E8C) < 0x4
	.space 0x4 - (. - gText_Rom_579E8C)
	.endif
