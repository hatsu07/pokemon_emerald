	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5760B7
gText_Rom_5760B7: @ 0x085760B7
	.string "モード$"
	.if (. - gText_Rom_5760B7) > 0x4
	.error "gText_Rom_5760B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5760B7) < 0x4
	.space 0x4 - (. - gText_Rom_5760B7)
	.endif
