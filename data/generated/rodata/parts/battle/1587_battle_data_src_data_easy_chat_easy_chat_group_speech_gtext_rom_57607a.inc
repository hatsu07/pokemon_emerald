	@ src/data/easy_chat/easy_chat_group_speech.h:232 easy_chat_group_speech_line_232
	.globl gText_Rom_57607A
gText_Rom_57607A: @ 0x0857607A
	.string "なんとか$"
	.if (. - gText_Rom_57607A) > 0x5
	.error "gText_Rom_57607A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57607A) < 0x5
	.space 0x5 - (. - gText_Rom_57607A)
	.endif
