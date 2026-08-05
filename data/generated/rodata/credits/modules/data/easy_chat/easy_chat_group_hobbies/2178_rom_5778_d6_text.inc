	@ src/data/easy_chat/easy_chat_group_hobbies.h:40 easy_chat_group_hobbies_line_40
	.globl gText_Rom_5778D6
gText_Rom_5778D6: @ 0x085778D6
	.string "おままごと$"
	.if (. - gText_Rom_5778D6) > 0x6
	.error "gText_Rom_5778D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778D6) < 0x6
	.space 0x6 - (. - gText_Rom_5778D6)
	.endif
