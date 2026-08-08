	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_254BE0
gText_Rom_254BE0: @ 0x08254BE0
	.string "でした"
	.byte EOS
	.if (. - gText_Rom_254BE0) > 0x4
	.error "gText_Rom_254BE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254BE0) < 0x4
	.space 0x4 - (. - gText_Rom_254BE0)
	.endif
