	@ src/data/easy_chat/easy_chat_group_lifestyle.h:202 easy_chat_group_lifestyle_line_202
	.globl gText_Rom_577664
gText_Rom_577664: @ 0x08577664
	.string "パーティー$"
	.if (. - gText_Rom_577664) > 0x6
	.error "gText_Rom_577664 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577664) < 0x6
	.space 0x6 - (. - gText_Rom_577664)
	.endif
