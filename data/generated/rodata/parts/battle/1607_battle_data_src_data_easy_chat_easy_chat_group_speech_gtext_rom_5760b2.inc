	@ src/data/easy_chat/easy_chat_group_speech.h:316 easy_chat_group_speech_line_316
	.globl gText_Rom_5760B2
gText_Rom_5760B2: @ 0x085760B2
	.string "めっぽう$"
	.if (. - gText_Rom_5760B2) > 0x5
	.error "gText_Rom_5760B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760B2) < 0x5
	.space 0x5 - (. - gText_Rom_5760B2)
	.endif
