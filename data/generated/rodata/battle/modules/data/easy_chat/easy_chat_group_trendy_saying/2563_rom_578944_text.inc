	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:118 easy_chat_group_trendy_saying_line_118
	.globl gText_Rom_578944
gText_Rom_578944: @ 0x08578944
	.string "ノリノリ$"
	.if (. - gText_Rom_578944) > 0x5
	.error "gText_Rom_578944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578944) < 0x5
	.space 0x5 - (. - gText_Rom_578944)
	.endif
