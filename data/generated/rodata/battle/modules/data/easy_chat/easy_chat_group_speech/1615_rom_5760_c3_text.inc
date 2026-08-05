	@ src/data/easy_chat/easy_chat_group_speech.h:340 easy_chat_group_speech_line_340
	.globl gText_Rom_5760C3
gText_Rom_5760C3: @ 0x085760C3
	.string "やっと$"
	.if (. - gText_Rom_5760C3) > 0x4
	.error "gText_Rom_5760C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760C3) < 0x4
	.space 0x4 - (. - gText_Rom_5760C3)
	.endif
