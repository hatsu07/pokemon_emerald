	@ src/data/easy_chat/easy_chat_group_speech.h:196 easy_chat_group_speech_line_196
	.globl gText_Rom_57605B
gText_Rom_57605B: @ 0x0857605B
	.string "どうしても$"
	.if (. - gText_Rom_57605B) > 0x6
	.error "gText_Rom_57605B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57605B) < 0x6
	.space 0x6 - (. - gText_Rom_57605B)
	.endif
