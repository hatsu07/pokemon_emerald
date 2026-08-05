	@ src/data/easy_chat/easy_chat_group_endings.h:208 easy_chat_group_endings_line_208
	.globl gText_Rom_576429
gText_Rom_576429: @ 0x08576429
	.string "でしょー!$"
	.if (. - gText_Rom_576429) > 0x6
	.error "gText_Rom_576429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576429) < 0x6
	.space 0x6 - (. - gText_Rom_576429)
	.endif
	@ Decoded text from ROM range: offset=0x57642F, size=0x8
	.string "です$"
	.string "ですか？$"
