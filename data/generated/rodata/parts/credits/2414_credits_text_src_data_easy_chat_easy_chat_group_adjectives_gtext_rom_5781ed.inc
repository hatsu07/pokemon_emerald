	@ src/data/easy_chat/easy_chat_group_adjectives.h:70 easy_chat_group_adjectives_line_70
	.globl gText_Rom_5781ED
gText_Rom_5781ED: @ 0x085781ED
	.string "しくしく$"
	.if (. - gText_Rom_5781ED) > 0x5
	.error "gText_Rom_5781ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781ED) < 0x5
	.space 0x5 - (. - gText_Rom_5781ED)
	.endif
