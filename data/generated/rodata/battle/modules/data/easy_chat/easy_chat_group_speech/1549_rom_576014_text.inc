	@ src/data/easy_chat/easy_chat_group_speech.h:94 easy_chat_group_speech_line_94
	.globl gText_Rom_576014
gText_Rom_576014: @ 0x08576014
	.string "さっぱり$"
	.if (. - gText_Rom_576014) > 0x5
	.error "gText_Rom_576014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576014) < 0x5
	.space 0x5 - (. - gText_Rom_576014)
	.endif
