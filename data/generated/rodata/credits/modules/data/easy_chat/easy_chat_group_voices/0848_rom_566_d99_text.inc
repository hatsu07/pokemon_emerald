	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566D99
gText_Rom_566D99: @ 0x08566D99
	.string "………$"
	.if (. - gText_Rom_566D99) > 0x4
	.error "gText_Rom_566D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566D99) < 0x4
	.space 0x4 - (. - gText_Rom_566D99)
	.endif
