	@ src/data/easy_chat/easy_chat_group_people.h:310 easy_chat_group_people_line_310 (+2 aliases)
	.globl gText_Rom_575805
gText_Rom_575805: @ 0x08575805
	.string "ともだち$"
	.if (. - gText_Rom_575805) > 0x5
	.error "gText_Rom_575805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575805) < 0x5
	.space 0x5 - (. - gText_Rom_575805)
	.endif
