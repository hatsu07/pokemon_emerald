	@ src/data/easy_chat/easy_chat_group_people.h:316 easy_chat_group_people_line_316 (+1 aliases)
	.globl gText_Rom_57580A
gText_Rom_57580A: @ 0x0857580A
	.string "なかま$"
	.if (. - gText_Rom_57580A) > 0x4
	.error "gText_Rom_57580A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57580A) < 0x4
	.space 0x4 - (. - gText_Rom_57580A)
	.endif
	@ Decoded text from ROM range: offset=0x57580E, size=0x3
	.string "ひと$"
