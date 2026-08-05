	@ src/data/easy_chat/easy_chat_group_lifestyle.h:154 easy_chat_group_lifestyle_line_154
	.globl gText_Rom_577642
gText_Rom_577642: @ 0x08577642
	.string "テスト$"
	.if (. - gText_Rom_577642) > 0x4
	.error "gText_Rom_577642 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577642) < 0x4
	.space 0x4 - (. - gText_Rom_577642)
	.endif
