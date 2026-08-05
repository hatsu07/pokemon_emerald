	@ src/data/easy_chat/easy_chat_group_conditions.h:232 easy_chat_group_conditions_line_232
	.globl gText_Rom_576D32
gText_Rom_576D32: @ 0x08576D32
	.string "ただしい$"
	.if (. - gText_Rom_576D32) > 0x5
	.error "gText_Rom_576D32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D32) < 0x5
	.space 0x5 - (. - gText_Rom_576D32)
	.endif
	@ Decoded text from ROM range: offset=0x576D37, size=0x3
	.string "だめ$"
