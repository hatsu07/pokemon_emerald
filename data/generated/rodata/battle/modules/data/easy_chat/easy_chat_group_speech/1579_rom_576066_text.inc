	@ src/data/easy_chat/easy_chat_group_speech.h:208 easy_chat_group_speech_line_208
	.globl gText_Rom_576066
gText_Rom_576066: @ 0x08576066
	.string "とりあえず$"
	.if (. - gText_Rom_576066) > 0x6
	.error "gText_Rom_576066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576066) < 0x6
	.space 0x6 - (. - gText_Rom_576066)
	.endif
