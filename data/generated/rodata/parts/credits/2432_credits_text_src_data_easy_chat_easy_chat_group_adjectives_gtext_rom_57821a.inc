	@ src/data/easy_chat/easy_chat_group_adjectives.h:124 easy_chat_group_adjectives_line_124
	.globl gText_Rom_57821A
gText_Rom_57821A: @ 0x0857821A
	.string "バキバキ$"
	.if (. - gText_Rom_57821A) > 0x5
	.error "gText_Rom_57821A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57821A) < 0x5
	.space 0x5 - (. - gText_Rom_57821A)
	.endif
