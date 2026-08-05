	@ src/data/easy_chat/easy_chat_group_speech.h:226 easy_chat_group_speech_line_226
	.globl gText_Rom_576075
gText_Rom_576075: @ 0x08576075
	.string "なんでも$"
	.if (. - gText_Rom_576075) > 0x5
	.error "gText_Rom_576075 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576075) < 0x5
	.space 0x5 - (. - gText_Rom_576075)
	.endif
