	@ src/data/easy_chat/easy_chat_group_hobbies.h:244 easy_chat_group_hobbies_line_244
	.globl gText_Rom_577978
gText_Rom_577978: @ 0x08577978
	.string "ひるね$"
	.if (. - gText_Rom_577978) > 0x4
	.error "gText_Rom_577978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577978) < 0x4
	.space 0x4 - (. - gText_Rom_577978)
	.endif
