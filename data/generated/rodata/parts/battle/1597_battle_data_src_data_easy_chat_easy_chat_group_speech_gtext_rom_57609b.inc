	@ src/data/easy_chat/easy_chat_group_speech.h:280 easy_chat_group_speech_line_280
	.globl gText_Rom_57609B
gText_Rom_57609B: @ 0x0857609B
	.string "マジ$"
	.if (. - gText_Rom_57609B) > 0x3
	.error "gText_Rom_57609B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57609B) < 0x3
	.space 0x3 - (. - gText_Rom_57609B)
	.endif
