	@ src/data/easy_chat/easy_chat_group_people.h:142 easy_chat_group_people_line_142
	.globl gText_Rom_575793
gText_Rom_575793: @ 0x08575793
	.string "かぞく$"
	.if (. - gText_Rom_575793) > 0x4
	.error "gText_Rom_575793 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575793) < 0x4
	.space 0x4 - (. - gText_Rom_575793)
	.endif
