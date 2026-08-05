	@ src/data/easy_chat/easy_chat_group_people.h:412 easy_chat_group_people_line_412
	.globl gText_Rom_57584C
gText_Rom_57584C: @ 0x0857584C
	.string "わたくし$"
	.if (. - gText_Rom_57584C) > 0x5
	.error "gText_Rom_57584C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57584C) < 0x5
	.space 0x5 - (. - gText_Rom_57584C)
	.endif
