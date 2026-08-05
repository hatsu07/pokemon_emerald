	@ src/data/easy_chat/easy_chat_group_speech.h:274 easy_chat_group_speech_line_274
	.globl gText_Rom_576097
gText_Rom_576097: @ 0x08576097
	.string "まさに$"
	.if (. - gText_Rom_576097) > 0x4
	.error "gText_Rom_576097 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576097) < 0x4
	.space 0x4 - (. - gText_Rom_576097)
	.endif
