	@ src/data/easy_chat/easy_chat_group_hobbies.h:118 easy_chat_group_hobbies_line_118
	.globl gText_Rom_577918
gText_Rom_577918: @ 0x08577918
	.string "ざっし$"
	.if (. - gText_Rom_577918) > 0x4
	.error "gText_Rom_577918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577918) < 0x4
	.space 0x4 - (. - gText_Rom_577918)
	.endif
