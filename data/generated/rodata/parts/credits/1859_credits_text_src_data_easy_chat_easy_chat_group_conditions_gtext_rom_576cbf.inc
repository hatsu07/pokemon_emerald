	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_576CBF
gText_Rom_576CBF: @ 0x08576CBF
	.string "いない$"
	.if (. - gText_Rom_576CBF) > 0x4
	.error "gText_Rom_576CBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CBF) < 0x4
	.space 0x4 - (. - gText_Rom_576CBF)
	.endif
	@ Decoded text from ROM range: offset=0x576CC3, size=0x6
	.string "いや$"
	.string "いる$"
