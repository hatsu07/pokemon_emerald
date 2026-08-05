	@ src/data/easy_chat/easy_chat_group_people.h:184 easy_chat_group_people_line_184
	.globl gText_Rom_5757AE
gText_Rom_5757AE: @ 0x085757AE
	.string "きみは$"
	.if (. - gText_Rom_5757AE) > 0x4
	.error "gText_Rom_5757AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757AE) < 0x4
	.space 0x4 - (. - gText_Rom_5757AE)
	.endif
