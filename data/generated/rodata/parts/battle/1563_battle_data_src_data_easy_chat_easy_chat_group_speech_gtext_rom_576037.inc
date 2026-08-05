	@ src/data/easy_chat/easy_chat_group_speech.h:142 easy_chat_group_speech_line_142
	.globl gText_Rom_576037
gText_Rom_576037: @ 0x08576037
	.string "だって$"
	.if (. - gText_Rom_576037) > 0x4
	.error "gText_Rom_576037 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576037) < 0x4
	.space 0x4 - (. - gText_Rom_576037)
	.endif
