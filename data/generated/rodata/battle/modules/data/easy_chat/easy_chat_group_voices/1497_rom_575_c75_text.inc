	@ src/data/easy_chat/easy_chat_group_voices.h:220 easy_chat_group_voices_line_220
	.globl gText_Rom_575C75
gText_Rom_575C75: @ 0x08575C75
	.string "ちぇっ$"
	.if (. - gText_Rom_575C75) > 0x4
	.error "gText_Rom_575C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C75) < 0x4
	.space 0x4 - (. - gText_Rom_575C75)
	.endif
	@ Decoded text from ROM range: offset=0x575C79, size=0x3
	.string "てへ$"
