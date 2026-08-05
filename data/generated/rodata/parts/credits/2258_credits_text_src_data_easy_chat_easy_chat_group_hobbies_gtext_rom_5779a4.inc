	@ src/data/easy_chat/easy_chat_group_hobbies.h:304 easy_chat_group_hobbies_line_304
	.globl gText_Rom_5779A4
gText_Rom_5779A4: @ 0x085779A4
	.string "よてい$"
	.if (. - gText_Rom_5779A4) > 0x4
	.error "gText_Rom_5779A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A4) < 0x4
	.space 0x4 - (. - gText_Rom_5779A4)
	.endif
