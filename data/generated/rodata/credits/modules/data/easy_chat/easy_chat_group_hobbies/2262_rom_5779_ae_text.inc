	@ src/data/easy_chat/easy_chat_group_hobbies.h:316 easy_chat_group_hobbies_line_316
	.globl gText_Rom_5779AE
gText_Rom_5779AE: @ 0x085779AE
	.string "りょこう$"
	.if (. - gText_Rom_5779AE) > 0x5
	.error "gText_Rom_5779AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779AE) < 0x5
	.space 0x5 - (. - gText_Rom_5779AE)
	.endif
