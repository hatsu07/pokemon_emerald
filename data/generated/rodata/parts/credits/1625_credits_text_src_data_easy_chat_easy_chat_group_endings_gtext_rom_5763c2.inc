	@ src/data/easy_chat/easy_chat_group_endings.h:52 easy_chat_group_endings_line_52
	.globl gText_Rom_5763C2
gText_Rom_5763C2: @ 0x085763C2
	.string "ございます$"
	.if (. - gText_Rom_5763C2) > 0x6
	.error "gText_Rom_5763C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763C2) < 0x6
	.space 0x6 - (. - gText_Rom_5763C2)
	.endif
