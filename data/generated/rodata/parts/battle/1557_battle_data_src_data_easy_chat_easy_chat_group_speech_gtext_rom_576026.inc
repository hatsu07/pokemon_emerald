	@ src/data/easy_chat/easy_chat_group_speech.h:118 easy_chat_group_speech_line_118
	.globl gText_Rom_576026
gText_Rom_576026: @ 0x08576026
	.string "すこしは$"
	.if (. - gText_Rom_576026) > 0x5
	.error "gText_Rom_576026 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576026) < 0x5
	.space 0x5 - (. - gText_Rom_576026)
	.endif
