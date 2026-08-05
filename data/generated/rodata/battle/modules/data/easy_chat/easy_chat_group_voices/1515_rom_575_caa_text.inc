	@ src/data/easy_chat/easy_chat_group_voices.h:298 easy_chat_group_voices_line_298
	.globl gText_Rom_575CAA
gText_Rom_575CAA: @ 0x08575CAA
	.string "ほほほ$"
	.if (. - gText_Rom_575CAA) > 0x4
	.error "gText_Rom_575CAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CAA) < 0x4
	.space 0x4 - (. - gText_Rom_575CAA)
	.endif
