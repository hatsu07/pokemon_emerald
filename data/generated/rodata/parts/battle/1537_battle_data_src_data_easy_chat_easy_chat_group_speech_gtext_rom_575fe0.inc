	@ src/data/easy_chat/easy_chat_group_speech.h:10 easy_chat_group_speech_line_10
	.globl gText_Rom_575FE0
gText_Rom_575FE0: @ 0x08575FE0
	.string "あんまり$"
	.if (. - gText_Rom_575FE0) > 0x5
	.error "gText_Rom_575FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575FE0) < 0x5
	.space 0x5 - (. - gText_Rom_575FE0)
	.endif
