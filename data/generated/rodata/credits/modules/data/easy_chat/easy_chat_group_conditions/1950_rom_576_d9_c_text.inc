	@ src/data/easy_chat/easy_chat_group_conditions.h:382 easy_chat_group_conditions_line_382
	.globl gText_Rom_576D9C
gText_Rom_576D9C: @ 0x08576D9C
	.string "やさしい$"
	.if (. - gText_Rom_576D9C) > 0x5
	.error "gText_Rom_576D9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D9C) < 0x5
	.space 0x5 - (. - gText_Rom_576D9C)
	.endif
	@ Decoded text from ROM range: offset=0x576DA1, size=0x3
	.string "よく$"
