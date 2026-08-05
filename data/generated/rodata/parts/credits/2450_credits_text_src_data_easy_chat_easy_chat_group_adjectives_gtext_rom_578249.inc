	@ src/data/easy_chat/easy_chat_group_adjectives.h:178 easy_chat_group_adjectives_line_178
	.globl gText_Rom_578249
gText_Rom_578249: @ 0x08578249
	.string "ますます$"
	.if (. - gText_Rom_578249) > 0x5
	.error "gText_Rom_578249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578249) < 0x5
	.space 0x5 - (. - gText_Rom_578249)
	.endif
