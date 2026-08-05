	@ src/data/easy_chat/easy_chat_group_adjectives.h:88 easy_chat_group_adjectives_line_88
	.globl gText_Rom_5781FC
gText_Rom_5781FC: @ 0x085781FC
	.string "だらだら$"
	.if (. - gText_Rom_5781FC) > 0x5
	.error "gText_Rom_5781FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781FC) < 0x5
	.space 0x5 - (. - gText_Rom_5781FC)
	.endif
