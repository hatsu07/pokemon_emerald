	@ src/data/easy_chat/easy_chat_group_voices.h:286 easy_chat_group_voices_line_286
	.globl gText_Rom_575CA1
gText_Rom_575CA1: @ 0x08575CA1
	.string "へっへっへ$"
	.if (. - gText_Rom_575CA1) > 0x6
	.error "gText_Rom_575CA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CA1) < 0x6
	.space 0x6 - (. - gText_Rom_575CA1)
	.endif
	@ Decoded text from ROM range: offset=0x575CA7, size=0x3
	.string "へへ$"
