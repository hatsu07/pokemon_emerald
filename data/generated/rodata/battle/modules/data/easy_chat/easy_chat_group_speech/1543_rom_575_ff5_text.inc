	@ src/data/easy_chat/easy_chat_group_speech.h:40 easy_chat_group_speech_line_40
	.globl gText_Rom_575FF5
gText_Rom_575FF5: @ 0x08575FF5
	.string "おばかさん$"
	.if (. - gText_Rom_575FF5) > 0x6
	.error "gText_Rom_575FF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FF5) < 0x6
	.space 0x6 - (. - gText_Rom_575FF5)
	.endif
