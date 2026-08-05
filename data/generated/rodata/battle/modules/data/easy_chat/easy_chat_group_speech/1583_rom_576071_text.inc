	@ src/data/easy_chat/easy_chat_group_speech.h:220 easy_chat_group_speech_line_220
	.globl gText_Rom_576071
gText_Rom_576071: @ 0x08576071
	.string "なんて$"
	.if (. - gText_Rom_576071) > 0x4
	.error "gText_Rom_576071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576071) < 0x4
	.space 0x4 - (. - gText_Rom_576071)
	.endif
