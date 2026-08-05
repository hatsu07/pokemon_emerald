	@ src/data/easy_chat/easy_chat_group_adjectives.h:196 easy_chat_group_adjectives_line_196
	.globl gText_Rom_57825A
gText_Rom_57825A: @ 0x0857825A
	.string "メラメラ$"
	.if (. - gText_Rom_57825A) > 0x5
	.error "gText_Rom_57825A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57825A) < 0x5
	.space 0x5 - (. - gText_Rom_57825A)
	.endif
