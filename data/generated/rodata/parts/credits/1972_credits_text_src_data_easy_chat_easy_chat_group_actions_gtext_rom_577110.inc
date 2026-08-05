	@ src/data/easy_chat/easy_chat_group_actions.h:52 easy_chat_group_actions_line_52
	.globl gText_Rom_577110
gText_Rom_577110: @ 0x08577110
	.string "あるく$"
	.if (. - gText_Rom_577110) > 0x4
	.error "gText_Rom_577110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577110) < 0x4
	.space 0x4 - (. - gText_Rom_577110)
	.endif
	@ Decoded text from ROM range: offset=0x577114, size=0x6
	.string "いう$"
	.string "いく$"
