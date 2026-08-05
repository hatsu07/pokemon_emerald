	@ src/data/easy_chat/easy_chat_group_people.h:346 easy_chat_group_people_line_346
	.globl gText_Rom_57581C
gText_Rom_57581C: @ 0x0857581C
	.string "ボクに$"
	.if (. - gText_Rom_57581C) > 0x4
	.error "gText_Rom_57581C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57581C) < 0x4
	.space 0x4 - (. - gText_Rom_57581C)
	.endif
