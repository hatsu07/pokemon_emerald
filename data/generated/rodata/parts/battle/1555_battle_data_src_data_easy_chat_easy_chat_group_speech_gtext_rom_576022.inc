	@ src/data/easy_chat/easy_chat_group_speech.h:112 easy_chat_group_speech_line_112
	.globl gText_Rom_576022
gText_Rom_576022: @ 0x08576022
	.string "すごく$"
	.if (. - gText_Rom_576022) > 0x4
	.error "gText_Rom_576022 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576022) < 0x4
	.space 0x4 - (. - gText_Rom_576022)
	.endif
