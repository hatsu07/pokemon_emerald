	@ src/data/easy_chat/easy_chat_group_speech.h:160 easy_chat_group_speech_line_160
	.globl gText_Rom_576042
gText_Rom_576042: @ 0x08576042
	.string "ちょー$"
	.if (. - gText_Rom_576042) > 0x4
	.error "gText_Rom_576042 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576042) < 0x4
	.space 0x4 - (. - gText_Rom_576042)
	.endif
