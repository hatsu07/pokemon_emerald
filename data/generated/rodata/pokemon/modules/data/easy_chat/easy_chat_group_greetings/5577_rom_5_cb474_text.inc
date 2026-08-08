	@ src/data/easy_chat/easy_chat_group_greetings.h:100 easy_chat_group_greetings_line_100 (+1 aliases)
	.globl gText_Rom_5CB474
gText_Rom_5CB474: @ 0x085CB474
	.string "さようなら$"
	.if (. - gText_Rom_5CB474) > 0x6
	.error "gText_Rom_5CB474 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB474) < 0x6
	.space 0x6 - (. - gText_Rom_5CB474)
	.endif
