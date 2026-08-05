	@ src/data/easy_chat/easy_chat_group_speech.h:238 easy_chat_group_speech_line_238
	.globl gText_Rom_57607F
gText_Rom_57607F: @ 0x0857607F
	.string "なんとなく$"
	.if (. - gText_Rom_57607F) > 0x6
	.error "gText_Rom_57607F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57607F) < 0x6
	.space 0x6 - (. - gText_Rom_57607F)
	.endif
	@ Decoded text from ROM range: offset=0x576085, size=0x6
	.string "には$"
	.string "にも$"
