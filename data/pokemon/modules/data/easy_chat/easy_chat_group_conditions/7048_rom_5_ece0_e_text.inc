	@ src/data/easy_chat/easy_chat_group_conditions.h:136 easy_chat_group_conditions_line_136 (+1 aliases)
	.globl gText_Rom_5ECE0E
gText_Rom_5ECE0E: @ 0x085ECE0E
	.string "おとなしい{EOS}"
	.if (. - gText_Rom_5ECE0E) > 0x6
	.error "gText_Rom_5ECE0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE0E) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE0E)
	.endif
