	@ src/data/easy_chat/easy_chat_group_adjectives.h:130 easy_chat_group_adjectives_line_130
	.globl gText_Rom_57821F
gText_Rom_57821F: @ 0x0857821F
	.string "ぱくぱく$"
	.if (. - gText_Rom_57821F) > 0x5
	.error "gText_Rom_57821F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57821F) < 0x5
	.space 0x5 - (. - gText_Rom_57821F)
	.endif
