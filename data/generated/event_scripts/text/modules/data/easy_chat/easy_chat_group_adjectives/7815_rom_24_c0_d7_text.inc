	@ src/data/easy_chat/easy_chat_group_adjectives.h:94 easy_chat_group_adjectives_line_94
	.globl gText_Rom_24C0D7
gText_Rom_24C0D7: @ 0x0824C0D7
	.string "ドキドキ{EOS}"
	.if (. - gText_Rom_24C0D7) > 0x5
	.error "gText_Rom_24C0D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0D7) < 0x5
	.space 0x5 - (. - gText_Rom_24C0D7)
	.endif
