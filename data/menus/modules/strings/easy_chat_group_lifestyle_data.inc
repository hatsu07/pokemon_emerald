	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gStdString_Items
gStdString_Items: @ 0x085CACD2
	.string "どうぐ{EOS}"
	.if (. - gStdString_Items) > 0x4
	.error "gStdString_Items may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Items) < 0x4
	.space 0x4 - (. - gStdString_Items)
	.endif
