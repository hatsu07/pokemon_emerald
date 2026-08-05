	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:124 easy_chat_group_trendy_saying_line_124
	.globl gText_Rom_578949
gText_Rom_578949: @ 0x08578949
	.string "ハイカラ$"
	.if (. - gText_Rom_578949) > 0x5
	.error "gText_Rom_578949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578949) < 0x5
	.space 0x5 - (. - gText_Rom_578949)
	.endif
