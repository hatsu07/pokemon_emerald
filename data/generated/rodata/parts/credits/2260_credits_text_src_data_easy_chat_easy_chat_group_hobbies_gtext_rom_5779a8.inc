	@ src/data/easy_chat/easy_chat_group_hobbies.h:310 easy_chat_group_hobbies_line_310
	.globl gText_Rom_5779A8
gText_Rom_5779A8: @ 0x085779A8
	.string "りゅうこう$"
	.if (. - gText_Rom_5779A8) > 0x6
	.error "gText_Rom_5779A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A8) < 0x6
	.space 0x6 - (. - gText_Rom_5779A8)
	.endif
