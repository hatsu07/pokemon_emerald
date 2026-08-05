	@ src/data/easy_chat/easy_chat_group_time.h:250 easy_chat_group_time_line_250 (+1 aliases)
	.globl gText_Rom_577CF1
gText_Rom_577CF1: @ 0x08577CF1
	.string "もくようび$"
	.if (. - gText_Rom_577CF1) > 0x6
	.error "gText_Rom_577CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CF1) < 0x6
	.space 0x6 - (. - gText_Rom_577CF1)
	.endif
