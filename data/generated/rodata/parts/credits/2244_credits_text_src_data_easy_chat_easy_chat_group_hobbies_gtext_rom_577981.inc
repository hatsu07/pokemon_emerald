	@ src/data/easy_chat/easy_chat_group_hobbies.h:256 easy_chat_group_hobbies_line_256
	.globl gText_Rom_577981
gText_Rom_577981: @ 0x08577981
	.string "ファッション$"
	.if (. - gText_Rom_577981) > 0x7
	.error "gText_Rom_577981 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577981) < 0x7
	.space 0x7 - (. - gText_Rom_577981)
	.endif
