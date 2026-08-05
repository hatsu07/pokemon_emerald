	@ src/data/easy_chat/easy_chat_group_speech.h:256 easy_chat_group_speech_line_256
	.globl gText_Rom_57608B
gText_Rom_57608B: @ 0x0857608B
	.string "バッチリ$"
	.if (. - gText_Rom_57608B) > 0x5
	.error "gText_Rom_57608B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57608B) < 0x5
	.space 0x5 - (. - gText_Rom_57608B)
	.endif
	@ Decoded text from ROM range: offset=0x576090, size=0x3
	.string "ほど$"
