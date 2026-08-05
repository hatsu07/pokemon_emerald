	@ src/data/easy_chat/easy_chat_group_hobbies.h:166 easy_chat_group_hobbies_line_166
	.globl gText_Rom_57793D
gText_Rom_57793D: @ 0x0857793D
	.string "たからもの$"
	.if (. - gText_Rom_57793D) > 0x6
	.error "gText_Rom_57793D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57793D) < 0x6
	.space 0x6 - (. - gText_Rom_57793D)
	.endif
	@ Decoded text from ROM range: offset=0x577943, size=0x3
	.string "たび$"
