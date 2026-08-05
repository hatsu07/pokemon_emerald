	@ src/data/easy_chat/easy_chat_group_greetings.h:232 easy_chat_group_greetings_line_232
	.globl gText_Rom_575515
gText_Rom_575515: @ 0x08575515
	.string "やっほー$"
	.if (. - gText_Rom_575515) > 0x5
	.error "gText_Rom_575515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575515) < 0x5
	.space 0x5 - (. - gText_Rom_575515)
	.endif
	@ Decoded text from ROM range: offset=0x57551A, size=0x3
	.string "よう$"
