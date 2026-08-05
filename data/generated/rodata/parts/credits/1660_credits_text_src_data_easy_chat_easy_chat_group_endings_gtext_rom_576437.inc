	@ src/data/easy_chat/easy_chat_group_endings.h:226 easy_chat_group_endings_line_226
	.globl gText_Rom_576437
gText_Rom_576437: @ 0x08576437
	.string "ですよ$"
	.if (. - gText_Rom_576437) > 0x4
	.error "gText_Rom_576437 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576437) < 0x4
	.space 0x4 - (. - gText_Rom_576437)
	.endif
