	@ src/data/easy_chat/easy_chat_group_speech.h:214 easy_chat_group_speech_line_214
	.globl gText_Rom_57606C
gText_Rom_57606C: @ 0x0857606C
	.string "なるほど$"
	.if (. - gText_Rom_57606C) > 0x5
	.error "gText_Rom_57606C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57606C) < 0x5
	.space 0x5 - (. - gText_Rom_57606C)
	.endif
