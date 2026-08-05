	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:166 easy_chat_group_trendy_saying_line_166
	.globl gText_Rom_578970
gText_Rom_578970: @ 0x08578970
	.string "ぶりっこ$"
	.if (. - gText_Rom_578970) > 0x5
	.error "gText_Rom_578970 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578970) < 0x5
	.space 0x5 - (. - gText_Rom_578970)
	.endif
