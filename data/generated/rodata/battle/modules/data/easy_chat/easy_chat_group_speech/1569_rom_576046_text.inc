	@ src/data/easy_chat/easy_chat_group_speech.h:166 easy_chat_group_speech_line_166
	.globl gText_Rom_576046
gText_Rom_576046: @ 0x08576046
	.string "ちょっと$"
	.if (. - gText_Rom_576046) > 0x5
	.error "gText_Rom_576046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576046) < 0x5
	.space 0x5 - (. - gText_Rom_576046)
	.endif
