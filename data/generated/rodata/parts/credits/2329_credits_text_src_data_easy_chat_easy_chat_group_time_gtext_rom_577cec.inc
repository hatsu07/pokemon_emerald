	@ src/data/easy_chat/easy_chat_group_time.h:244 easy_chat_group_time_line_244
	.globl gText_Rom_577CEC
gText_Rom_577CEC: @ 0x08577CEC
	.string "もうすぐ$"
	.if (. - gText_Rom_577CEC) > 0x5
	.error "gText_Rom_577CEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CEC) < 0x5
	.space 0x5 - (. - gText_Rom_577CEC)
	.endif
