	@ src/data/easy_chat/easy_chat_group_greetings.h:100 easy_chat_group_greetings_line_100 (+1 aliases)
	.globl gText_Rom_5754AF
gText_Rom_5754AF: @ 0x085754AF
	.string "さようなら$"
	.if (. - gText_Rom_5754AF) > 0x6
	.error "gText_Rom_5754AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754AF) < 0x6
	.space 0x6 - (. - gText_Rom_5754AF)
	.endif
