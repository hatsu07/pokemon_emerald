	@ src/data/easy_chat/easy_chat_group_endings.h:334 easy_chat_group_endings_line_334
	.globl gText_Rom_576481
gText_Rom_576481: @ 0x08576481
	.string "まーす!$"
	.if (. - gText_Rom_576481) > 0x5
	.error "gText_Rom_576481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576481) < 0x5
	.space 0x5 - (. - gText_Rom_576481)
	.endif
	@ Decoded text from ROM range: offset=0x576486, size=0x3
	.string "ます$"
