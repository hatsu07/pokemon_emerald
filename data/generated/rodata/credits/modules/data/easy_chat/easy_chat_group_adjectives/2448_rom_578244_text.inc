	@ src/data/easy_chat/easy_chat_group_adjectives.h:172 easy_chat_group_adjectives_line_172
	.globl gText_Rom_578244
gText_Rom_578244: @ 0x08578244
	.string "ボロボロ$"
	.if (. - gText_Rom_578244) > 0x5
	.error "gText_Rom_578244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578244) < 0x5
	.space 0x5 - (. - gText_Rom_578244)
	.endif
