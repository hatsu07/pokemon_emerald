	@ src/data/easy_chat/easy_chat_group_actions.h:382 easy_chat_group_actions_line_382
	.globl gText_Rom_5771EB
gText_Rom_5771EB: @ 0x085771EB
	.string "ふり$"
	.if (. - gText_Rom_5771EB) > 0x3
	.error "gText_Rom_5771EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771EB) < 0x3
	.space 0x3 - (. - gText_Rom_5771EB)
	.endif
	@ Decoded text from ROM range: offset=0x5771EE, size=0x3
	.string "ほめ$"
