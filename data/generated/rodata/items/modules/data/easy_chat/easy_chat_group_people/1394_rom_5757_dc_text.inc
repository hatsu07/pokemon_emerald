	@ src/data/easy_chat/easy_chat_group_people.h:250 easy_chat_group_people_line_250
	.globl gText_Rom_5757DC
gText_Rom_5757DC: @ 0x085757DC
	.string "じぶんは$"
	.if (. - gText_Rom_5757DC) > 0x5
	.error "gText_Rom_5757DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757DC) < 0x5
	.space 0x5 - (. - gText_Rom_5757DC)
	.endif
