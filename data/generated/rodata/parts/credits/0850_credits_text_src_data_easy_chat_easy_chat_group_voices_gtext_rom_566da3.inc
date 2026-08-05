	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DA3
gText_Rom_566DA3: @ 0x08566DA3
	.string "………$"
	.if (. - gText_Rom_566DA3) > 0x4
	.error "gText_Rom_566DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DA3) < 0x4
	.space 0x4 - (. - gText_Rom_566DA3)
	.endif
