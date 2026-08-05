	@ src/data/easy_chat/easy_chat_group_time.h:196 easy_chat_group_time_line_196 (+1 aliases)
	.globl gText_Rom_577CCD
gText_Rom_577CCD: @ 0x08577CCD
	.string "にちようび$"
	.if (. - gText_Rom_577CCD) > 0x6
	.error "gText_Rom_577CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CCD) < 0x6
	.space 0x6 - (. - gText_Rom_577CCD)
	.endif
