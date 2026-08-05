	@ src/data/easy_chat/easy_chat_group_adjectives.h:64 easy_chat_group_adjectives_line_64
	.globl gText_Rom_5781E8
gText_Rom_5781E8: @ 0x085781E8
	.string "さらさら$"
	.if (. - gText_Rom_5781E8) > 0x5
	.error "gText_Rom_5781E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781E8) < 0x5
	.space 0x5 - (. - gText_Rom_5781E8)
	.endif
