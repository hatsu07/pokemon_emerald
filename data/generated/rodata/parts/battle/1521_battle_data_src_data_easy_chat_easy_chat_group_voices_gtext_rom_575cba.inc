	@ src/data/easy_chat/easy_chat_group_voices.h:322 easy_chat_group_voices_line_322
	.globl gText_Rom_575CBA
gText_Rom_575CBA: @ 0x08575CBA
	.string "むふふ$"
	.if (. - gText_Rom_575CBA) > 0x4
	.error "gText_Rom_575CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CBA) < 0x4
	.space 0x4 - (. - gText_Rom_575CBA)
	.endif
	@ Decoded text from ROM range: offset=0x575CBE, size=0x3
	.string "むむ$"
