	@ src/data/easy_chat/easy_chat_group_hobbies.h:208 easy_chat_group_hobbies_line_208
	.globl gText_Rom_57795B
gText_Rom_57795B: @ 0x0857795B
	.string "デザイン$"
	.if (. - gText_Rom_57795B) > 0x5
	.error "gText_Rom_57795B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57795B) < 0x5
	.space 0x5 - (. - gText_Rom_57795B)
	.endif
