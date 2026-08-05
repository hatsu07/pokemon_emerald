	@ src/data/easy_chat/easy_chat_group_greetings.h:70 easy_chat_group_greetings_line_70
	.globl gText_Rom_575495
gText_Rom_575495: @ 0x08575495
	.string "ゴメン$"
	.if (. - gText_Rom_575495) > 0x4
	.error "gText_Rom_575495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575495) < 0x4
	.space 0x4 - (. - gText_Rom_575495)
	.endif
