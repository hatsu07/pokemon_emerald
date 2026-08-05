	@ src/data/easy_chat/easy_chat_group_voices.h:352 easy_chat_group_voices_line_352
	.globl gText_Rom_575CCD
gText_Rom_575CCD: @ 0x08575CCD
	.string "わーい$"
	.if (. - gText_Rom_575CCD) > 0x4
	.error "gText_Rom_575CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CCD) < 0x4
	.space 0x4 - (. - gText_Rom_575CCD)
	.endif
