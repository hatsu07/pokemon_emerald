	@ src/data/easy_chat/easy_chat_group_greetings.h:58 easy_chat_group_greetings_line_58
	.globl gText_Rom_57548A
gText_Rom_57548A: @ 0x0857548A
	.string "おめでとう$"
	.if (. - gText_Rom_57548A) > 0x6
	.error "gText_Rom_57548A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57548A) < 0x6
	.space 0x6 - (. - gText_Rom_57548A)
	.endif
	@ Decoded text from ROM range: offset=0x575490, size=0x5
	.string "ください$"
