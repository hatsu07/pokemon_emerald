	@ src/data/easy_chat/easy_chat_group_time.h:214 easy_chat_group_time_line_214 (+3 aliases)
	.globl gText_Rom_577CDA
gText_Rom_577CDA: @ 0x08577CDA
	.string "ひる$"
	.if (. - gText_Rom_577CDA) > 0x3
	.error "gText_Rom_577CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CDA) < 0x3
	.space 0x3 - (. - gText_Rom_577CDA)
	.endif
