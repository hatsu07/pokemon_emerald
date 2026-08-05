	@ src/data/easy_chat/easy_chat_group_speech.h:106 easy_chat_group_speech_line_106
	.globl gText_Rom_57601C
gText_Rom_57601C: @ 0x0857601C
	.string "じゅうぶん$"
	.if (. - gText_Rom_57601C) > 0x6
	.error "gText_Rom_57601C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57601C) < 0x6
	.space 0x6 - (. - gText_Rom_57601C)
	.endif
