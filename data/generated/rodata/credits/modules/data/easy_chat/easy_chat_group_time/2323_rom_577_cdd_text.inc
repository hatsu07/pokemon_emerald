	@ src/data/easy_chat/easy_chat_group_time.h:220 easy_chat_group_time_line_220
	.globl gText_Rom_577CDD
gText_Rom_577CDD: @ 0x08577CDD
	.string "ふゆ$"
	.if (. - gText_Rom_577CDD) > 0x3
	.error "gText_Rom_577CDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CDD) < 0x3
	.space 0x3 - (. - gText_Rom_577CDD)
	.endif
