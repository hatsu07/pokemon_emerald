	@ src/data/easy_chat/easy_chat_group_people.h:64 easy_chat_group_people_line_64
	.globl gText_Rom_575751
gText_Rom_575751: @ 0x08575751
	.string "おじさん$"
	.if (. - gText_Rom_575751) > 0x5
	.error "gText_Rom_575751 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575751) < 0x5
	.space 0x5 - (. - gText_Rom_575751)
	.endif
