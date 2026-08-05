	@ src/data/easy_chat/easy_chat_group_adjectives.h:160 easy_chat_group_adjectives_line_160
	.globl gText_Rom_57823A
gText_Rom_57823A: @ 0x0857823A
	.string "ブルブル$"
	.if (. - gText_Rom_57823A) > 0x5
	.error "gText_Rom_57823A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57823A) < 0x5
	.space 0x5 - (. - gText_Rom_57823A)
	.endif
