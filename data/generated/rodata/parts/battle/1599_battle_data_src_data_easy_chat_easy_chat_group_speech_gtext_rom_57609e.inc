	@ src/data/easy_chat/easy_chat_group_speech.h:286 easy_chat_group_speech_line_286
	.globl gText_Rom_57609E
gText_Rom_57609E: @ 0x0857609E
	.string "まったく$"
	.if (. - gText_Rom_57609E) > 0x5
	.error "gText_Rom_57609E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57609E) < 0x5
	.space 0x5 - (. - gText_Rom_57609E)
	.endif
	@ Decoded text from ROM range: offset=0x5760A3, size=0x3
	.string "まで$"
