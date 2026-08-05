	@ src/data/easy_chat/easy_chat_group_speech.h:298 easy_chat_group_speech_line_298
	.globl gText_Rom_5760A6
gText_Rom_5760A6: @ 0x085760A6
	.string "まるで$"
	.if (. - gText_Rom_5760A6) > 0x4
	.error "gText_Rom_5760A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760A6) < 0x4
	.space 0x4 - (. - gText_Rom_5760A6)
	.endif
