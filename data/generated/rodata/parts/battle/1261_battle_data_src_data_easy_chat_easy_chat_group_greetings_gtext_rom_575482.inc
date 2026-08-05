	@ src/data/easy_chat/easy_chat_group_greetings.h:46 easy_chat_group_greetings_line_46
	.globl gText_Rom_575482
gText_Rom_575482: @ 0x08575482
	.string "おーい$"
	.if (. - gText_Rom_575482) > 0x4
	.error "gText_Rom_575482 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575482) < 0x4
	.space 0x4 - (. - gText_Rom_575482)
	.endif
