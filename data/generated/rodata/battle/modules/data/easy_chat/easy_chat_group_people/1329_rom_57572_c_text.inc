	@ src/data/easy_chat/easy_chat_group_people.h:22 easy_chat_group_people_line_22
	.globl gText_Rom_57572C
gText_Rom_57572C: @ 0x0857572C
	.string "あなたが$"
	.if (. - gText_Rom_57572C) > 0x5
	.error "gText_Rom_57572C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57572C) < 0x5
	.space 0x5 - (. - gText_Rom_57572C)
	.endif
