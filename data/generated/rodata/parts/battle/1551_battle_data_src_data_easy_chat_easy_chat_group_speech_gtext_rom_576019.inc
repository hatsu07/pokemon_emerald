	@ src/data/easy_chat/easy_chat_group_speech.h:100 easy_chat_group_speech_line_100
	.globl gText_Rom_576019
gText_Rom_576019: @ 0x08576019
	.string "さて$"
	.if (. - gText_Rom_576019) > 0x3
	.error "gText_Rom_576019 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576019) < 0x3
	.space 0x3 - (. - gText_Rom_576019)
	.endif
