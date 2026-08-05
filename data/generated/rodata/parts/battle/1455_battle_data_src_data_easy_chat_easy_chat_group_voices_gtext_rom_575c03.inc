	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_575C03
gText_Rom_575C03: @ 0x08575C03
	.string "………$"
	.if (. - gText_Rom_575C03) > 0x4
	.error "gText_Rom_575C03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C03) < 0x4
	.space 0x4 - (. - gText_Rom_575C03)
	.endif
	@ Replaced baserom.gba range: offset=0x575C07, size=0x2
	.byte 0xAE, 0xFF
