	@ src/data/easy_chat/easy_chat_group_voices.h:70 easy_chat_group_voices_line_70
	.globl gText_Rom_575C15
gText_Rom_575C15: @ 0x08575C15
	.string "あはは$"
	.if (. - gText_Rom_575C15) > 0x4
	.error "gText_Rom_575C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C15) < 0x4
	.space 0x4 - (. - gText_Rom_575C15)
	.endif
	@ Decoded text from ROM range: offset=0x575C19, size=0x9
	.string "あら$"
	.string "いえ$"
	.string "うう$"
