	@ src/data/easy_chat/easy_chat_group_people.h:232 easy_chat_group_people_line_232
	.globl gText_Rom_5757CD
gText_Rom_5757CD: @ 0x085757CD
	.string "じぶんが$"
	.if (. - gText_Rom_5757CD) > 0x5
	.error "gText_Rom_5757CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757CD) < 0x5
	.space 0x5 - (. - gText_Rom_5757CD)
	.endif
