	@ src/data/easy_chat/easy_chat_group_conditions.h:106 easy_chat_group_conditions_line_106
	.globl gText_Rom_576CCD
gText_Rom_576CCD: @ 0x08576CCD
	.string "うまく$"
	.if (. - gText_Rom_576CCD) > 0x4
	.error "gText_Rom_576CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CCD) < 0x4
	.space 0x4 - (. - gText_Rom_576CCD)
	.endif
