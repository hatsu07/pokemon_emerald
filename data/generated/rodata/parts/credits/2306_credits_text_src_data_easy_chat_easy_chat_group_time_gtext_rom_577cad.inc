	@ src/data/easy_chat/easy_chat_group_time.h:148 easy_chat_group_time_line_148
	.globl gText_Rom_577CAD
gText_Rom_577CAD: @ 0x08577CAD
	.string "ずっと$"
	.if (. - gText_Rom_577CAD) > 0x4
	.error "gText_Rom_577CAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CAD) < 0x4
	.space 0x4 - (. - gText_Rom_577CAD)
	.endif
