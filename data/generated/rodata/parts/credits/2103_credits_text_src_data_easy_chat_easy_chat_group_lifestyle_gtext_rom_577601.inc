	@ src/data/easy_chat/easy_chat_group_lifestyle.h:76 easy_chat_group_lifestyle_line_76
	.globl gText_Rom_577601
gText_Rom_577601: @ 0x08577601
	.string "サービス$"
	.if (. - gText_Rom_577601) > 0x5
	.error "gText_Rom_577601 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577601) < 0x5
	.space 0x5 - (. - gText_Rom_577601)
	.endif
