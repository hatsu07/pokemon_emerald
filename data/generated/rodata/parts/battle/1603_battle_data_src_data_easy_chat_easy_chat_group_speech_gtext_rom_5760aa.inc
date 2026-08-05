	@ src/data/easy_chat/easy_chat_group_speech.h:304 easy_chat_group_speech_line_304
	.globl gText_Rom_5760AA
gText_Rom_5760AA: @ 0x085760AA
	.string "ムード$"
	.if (. - gText_Rom_5760AA) > 0x4
	.error "gText_Rom_5760AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760AA) < 0x4
	.space 0x4 - (. - gText_Rom_5760AA)
	.endif
