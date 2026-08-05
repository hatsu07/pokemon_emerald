	@ src/data/easy_chat/easy_chat_group_speech.h:268 easy_chat_group_speech_line_268
	.globl gText_Rom_576093
gText_Rom_576093: @ 0x08576093
	.string "ほんと$"
	.if (. - gText_Rom_576093) > 0x4
	.error "gText_Rom_576093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576093) < 0x4
	.space 0x4 - (. - gText_Rom_576093)
	.endif
