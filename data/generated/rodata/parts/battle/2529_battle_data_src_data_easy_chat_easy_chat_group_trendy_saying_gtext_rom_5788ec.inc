	@ src/data/easy_chat/easy_chat_group_trendy_saying.h:16 easy_chat_group_trendy_saying_line_16
	.globl gText_Rom_5788EC
gText_Rom_5788EC: @ 0x085788EC
	.string "アバンギャルド$"
	.if (. - gText_Rom_5788EC) > 0x8
	.error "gText_Rom_5788EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5788EC) < 0x8
	.space 0x8 - (. - gText_Rom_5788EC)
	.endif
