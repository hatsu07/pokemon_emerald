	@ src/data/easy_chat/easy_chat_group_speech.h:124 easy_chat_group_speech_line_124
	.globl gText_Rom_57602B
gText_Rom_57602B: @ 0x0857602B
	.string "ぜったい$"
	.if (. - gText_Rom_57602B) > 0x5
	.error "gText_Rom_57602B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57602B) < 0x5
	.space 0x5 - (. - gText_Rom_57602B)
	.endif
