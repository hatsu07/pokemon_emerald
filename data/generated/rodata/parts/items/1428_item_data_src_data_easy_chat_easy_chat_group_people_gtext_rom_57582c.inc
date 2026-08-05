	@ src/data/easy_chat/easy_chat_group_people.h:370 easy_chat_group_people_line_370
	.globl gText_Rom_57582C
gText_Rom_57582C: @ 0x0857582C
	.string "みんな$"
	.if (. - gText_Rom_57582C) > 0x4
	.error "gText_Rom_57582C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57582C) < 0x4
	.space 0x4 - (. - gText_Rom_57582C)
	.endif
