	@ src/data/easy_chat/easy_chat_group_people.h:352 easy_chat_group_people_line_352
	.globl gText_Rom_575820
gText_Rom_575820: @ 0x08575820
	.string "ボクの$"
	.if (. - gText_Rom_575820) > 0x4
	.error "gText_Rom_575820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575820) < 0x4
	.space 0x4 - (. - gText_Rom_575820)
	.endif
