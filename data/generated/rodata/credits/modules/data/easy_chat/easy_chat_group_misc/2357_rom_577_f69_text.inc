	@ src/data/easy_chat/easy_chat_group_misc.h:130 easy_chat_group_misc_line_130
	.globl gText_Rom_577F69
gText_Rom_577F69: @ 0x08577F69
	.string "そりゃ$"
	.if (. - gText_Rom_577F69) > 0x4
	.error "gText_Rom_577F69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F69) < 0x4
	.space 0x4 - (. - gText_Rom_577F69)
	.endif
