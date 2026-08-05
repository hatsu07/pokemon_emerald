	@ src/data/easy_chat/easy_chat_group_hobbies.h:226 easy_chat_group_hobbies_line_226 (+1 aliases)
	.globl gText_Rom_57796B
gText_Rom_57796B: @ 0x0857796B
	.string "パソコン$"
	.if (. - gText_Rom_57796B) > 0x5
	.error "gText_Rom_57796B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57796B) < 0x5
	.space 0x5 - (. - gText_Rom_57796B)
	.endif
	@ Decoded text from ROM range: offset=0x577970, size=0x3
	.string "はな$"
