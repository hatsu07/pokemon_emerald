	@ src/data/easy_chat/easy_chat_group_speech.h:328 easy_chat_group_speech_line_328
	.globl gText_Rom_5760BB
gText_Rom_5760BB: @ 0x085760BB
	.string "もっと$"
	.if (. - gText_Rom_5760BB) > 0x4
	.error "gText_Rom_5760BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760BB) < 0x4
	.space 0x4 - (. - gText_Rom_5760BB)
	.endif
