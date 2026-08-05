	@ src/data/easy_chat/easy_chat_group_voices.h:232 easy_chat_group_voices_line_232
	.globl gText_Rom_575C7C
gText_Rom_575C7C: @ 0x08575C7C
	.string "はぁー$"
	.if (. - gText_Rom_575C7C) > 0x4
	.error "gText_Rom_575C7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C7C) < 0x4
	.space 0x4 - (. - gText_Rom_575C7C)
	.endif
	@ Decoded text from ROM range: offset=0x575C80, size=0x3
	.string "はい$"
