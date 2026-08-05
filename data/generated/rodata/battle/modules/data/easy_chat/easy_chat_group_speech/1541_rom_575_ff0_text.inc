	@ src/data/easy_chat/easy_chat_group_speech.h:34 easy_chat_group_speech_line_34
	.globl gText_Rom_575FF0
gText_Rom_575FF0: @ 0x08575FF0
	.string "おすすめ$"
	.if (. - gText_Rom_575FF0) > 0x5
	.error "gText_Rom_575FF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FF0) < 0x5
	.space 0x5 - (. - gText_Rom_575FF0)
	.endif
