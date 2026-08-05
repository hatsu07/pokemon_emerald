	@ src/data/easy_chat/easy_chat_group_hobbies.h:160 easy_chat_group_hobbies_line_160
	.globl gText_Rom_577937
gText_Rom_577937: @ 0x08577937
	.string "ダイエット$"
	.if (. - gText_Rom_577937) > 0x6
	.error "gText_Rom_577937 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577937) < 0x6
	.space 0x6 - (. - gText_Rom_577937)
	.endif
