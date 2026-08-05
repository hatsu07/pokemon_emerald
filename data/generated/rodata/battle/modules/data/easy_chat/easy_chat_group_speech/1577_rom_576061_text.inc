	@ src/data/easy_chat/easy_chat_group_speech.h:202 easy_chat_group_speech_line_202
	.globl gText_Rom_576061
gText_Rom_576061: @ 0x08576061
	.string "とうぜん$"
	.if (. - gText_Rom_576061) > 0x5
	.error "gText_Rom_576061 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576061) < 0x5
	.space 0x5 - (. - gText_Rom_576061)
	.endif
