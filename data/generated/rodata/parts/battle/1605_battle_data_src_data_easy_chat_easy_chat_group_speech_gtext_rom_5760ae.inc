	@ src/data/easy_chat/easy_chat_group_speech.h:310 easy_chat_group_speech_line_310
	.globl gText_Rom_5760AE
gText_Rom_5760AE: @ 0x085760AE
	.string "むしろ$"
	.if (. - gText_Rom_5760AE) > 0x4
	.error "gText_Rom_5760AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760AE) < 0x4
	.space 0x4 - (. - gText_Rom_5760AE)
	.endif
