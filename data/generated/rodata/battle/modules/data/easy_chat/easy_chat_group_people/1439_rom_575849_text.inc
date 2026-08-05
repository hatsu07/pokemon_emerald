	@ src/data/easy_chat/easy_chat_group_people.h:406 easy_chat_group_people_line_406
	.globl gText_Rom_575849
gText_Rom_575849: @ 0x08575849
	.string "わし$"
	.if (. - gText_Rom_575849) > 0x3
	.error "gText_Rom_575849 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575849) < 0x3
	.space 0x3 - (. - gText_Rom_575849)
	.endif
