	@ src/data/easy_chat/easy_chat_group_speech.h:184 easy_chat_group_speech_line_184
	.globl gText_Rom_576052
gText_Rom_576052: @ 0x08576052
	.string "っていうか$"
	.if (. - gText_Rom_576052) > 0x6
	.error "gText_Rom_576052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576052) < 0x6
	.space 0x6 - (. - gText_Rom_576052)
	.endif
	@ Decoded text from ROM range: offset=0x576058, size=0x3
	.string "でも$"
