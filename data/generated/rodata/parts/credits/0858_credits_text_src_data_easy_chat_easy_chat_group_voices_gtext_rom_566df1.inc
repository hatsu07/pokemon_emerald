	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DF1
gText_Rom_566DF1: @ 0x08566DF1
	.string "………$"
	.if (. - gText_Rom_566DF1) > 0x4
	.error "gText_Rom_566DF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DF1) < 0x4
	.space 0x4 - (. - gText_Rom_566DF1)
	.endif
